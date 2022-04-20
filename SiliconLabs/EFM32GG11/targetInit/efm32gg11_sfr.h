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

struct MSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRFAULTEN:1;
      uint64_t CLKDISFAULTEN:1;
      uint64_t PWRUPONDEMAND:1;
      uint64_t IFCREADCLEAR:1;
      uint64_t TIMEOUTFAULTEN:1;
      uint64_t RAMECCERRFAULTEN:1;
      uint64_t EBIFAULTEN:1;
      uint64_t reservedSpace0:5;
      uint64_t WAITMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t IFCDIS:1;
      uint64_t AIDIS:1;
      uint64_t ICCDIS:1;
      uint64_t EBICDIS:1;
      uint64_t reservedSpace1:1;
      uint64_t PREFETCH:1;
      uint64_t USEHPROT:1;
      uint64_t QSPICDIS:1;
      uint64_t reservedSpace2:13;
      uint64_t MODE:2;
      uint64_t reservedSpace3:2;
      uint64_t SCBTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) READCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WREN:1;
      uint64_t IRQERASEABORT:1;
      uint64_t reservedSpace0:3;
      uint64_t RWWEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRITECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LADDRIM:1;
      uint64_t ERASEPAGE:1;
      uint64_t WRITEEND:1;
      uint64_t WRITEONCE:1;
      uint64_t WRITETRIG:1;
      uint64_t ERASEABORT:1;
      uint64_t reservedSpace0:2;
      uint64_t ERASEMAIN0:1;
      uint64_t ERASEMAIN1:1;
      uint64_t reservedSpace1:2;
      uint64_t CLEARWDATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRITECMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRB;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t LOCKED:1;
      uint64_t INVADDR:1;
      uint64_t WDATAREADY:1;
      uint64_t WORDTIMEOUT:1;
      uint64_t ERASEABORTED:1;
      uint64_t PCRUNNING:1;
      uint64_t BANKSWITCHED:1;
      uint64_t reservedSpace0:16;
      uint64_t WDATAVALID:4;
      uint64_t PWRUPCKBDFAILCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE:1;
      uint64_t WRITE:1;
      uint64_t CHOF:1;
      uint64_t CMOF:1;
      uint64_t PWRUPF:1;
      uint64_t ICACHERR:1;
      uint64_t WDATAOV:1;
      uint64_t reservedSpace0:1;
      uint64_t LVEWRITE:1;
      uint64_t reservedSpace1:7;
      uint64_t RAMERR1B:1;
      uint64_t RAMERR2B:1;
      uint64_t RAM1ERR1B:1;
      uint64_t RAM1ERR2B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE:1;
      uint64_t WRITE:1;
      uint64_t CHOF:1;
      uint64_t CMOF:1;
      uint64_t PWRUPF:1;
      uint64_t ICACHERR:1;
      uint64_t WDATAOV:1;
      uint64_t reservedSpace0:1;
      uint64_t LVEWRITE:1;
      uint64_t reservedSpace1:7;
      uint64_t RAMERR1B:1;
      uint64_t RAMERR2B:1;
      uint64_t RAM1ERR1B:1;
      uint64_t RAM1ERR2B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE:1;
      uint64_t WRITE:1;
      uint64_t CHOF:1;
      uint64_t CMOF:1;
      uint64_t PWRUPF:1;
      uint64_t ICACHERR:1;
      uint64_t WDATAOV:1;
      uint64_t reservedSpace0:1;
      uint64_t LVEWRITE:1;
      uint64_t reservedSpace1:7;
      uint64_t RAMERR1B:1;
      uint64_t RAMERR2B:1;
      uint64_t RAM1ERR1B:1;
      uint64_t RAM1ERR2B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE:1;
      uint64_t WRITE:1;
      uint64_t CHOF:1;
      uint64_t CMOF:1;
      uint64_t PWRUPF:1;
      uint64_t ICACHERR:1;
      uint64_t WDATAOV:1;
      uint64_t reservedSpace0:1;
      uint64_t LVEWRITE:1;
      uint64_t reservedSpace1:7;
      uint64_t RAMERR1B:1;
      uint64_t RAMERR2B:1;
      uint64_t RAM1ERR1B:1;
      uint64_t RAM1ERR2B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVCACHE:1;
      uint64_t STARTPC:1;
      uint64_t STOPPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHECMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHEHITS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHEHITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHEMISSES:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHEMISSES;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASSLOCK;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STDLY0:10;
      uint64_t reservedSpace0:2;
      uint64_t STDLY1:10;
      uint64_t reservedSpace1:2;
      uint64_t ASTWAIT:1;
      uint64_t STWSEN:1;
      uint64_t STWSAEN:1;
      uint64_t reservedSpace2:1;
      uint64_t STWS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTUP;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKSWITCHLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BANKSWITCHLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRUP:1;
      uint64_t SWITCHINGBANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLRDIS:1;
      uint64_t BLWDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTLOADERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCKAAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AAPUNLOCKCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHELPLEVEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHECONFIG0;

  uint8_t res6[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMCACHEEN:1;
      uint64_t RAMWSEN:1;
      uint64_t RAMPREFETCHEN:1;
      uint64_t reservedSpace0:5;
      uint64_t RAM1CACHEEN:1;
      uint64_t RAM1WSEN:1;
      uint64_t RAM1PREFETCHEN:1;
      uint64_t reservedSpace1:5;
      uint64_t RAM2CACHEEN:1;
      uint64_t RAM2WSEN:1;
      uint64_t RAM2PREFETCHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMECCEWEN:1;
      uint64_t RAMECCCHKEN:1;
      uint64_t RAM1ECCEWEN:1;
      uint64_t RAM1ECCCHKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMECCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMECCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM1ECCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1ECCADDR;

};

#define MSC (*(volatile struct MSC_tag *) 0x40000000)

struct EMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EM2BLOCK:1;
      uint64_t EM2BODDIS:1;
      uint64_t EM01LD:1;
      uint64_t EM23VSCALEAUTOWSEN:1;
      uint64_t reservedSpace1:3;
      uint64_t EM23VSCALE:2;
      uint64_t reservedSpace2:6;
      uint64_t EM4HVSCALE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMONRDY:1;
      uint64_t VMONAVDD:1;
      uint64_t VMONALTAVDD:1;
      uint64_t VMONDVDD:1;
      uint64_t VMONIO0:1;
      uint64_t VMONIO1:1;
      uint64_t reservedSpace0:1;
      uint64_t VMONBUVDD:1;
      uint64_t reservedSpace1:4;
      uint64_t BURDY:1;
      uint64_t reservedSpace2:3;
      uint64_t VSCALE:2;
      uint64_t VSCALEBUSY:1;
      uint64_t reservedSpace3:1;
      uint64_t EM4IORET:1;
      uint64_t reservedSpace4:5;
      uint64_t TEMPACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPOWERDOWN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM4UNLATCH:1;
      uint64_t reservedSpace0:3;
      uint64_t EM01VSCALE0:1;
      uint64_t reservedSpace1:1;
      uint64_t EM01VSCALE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM4STATE:1;
      uint64_t RETAINLFRCO:1;
      uint64_t RETAINLFXO:1;
      uint64_t RETAINULFRCO:1;
      uint64_t EM4IORETMODE:2;
      uint64_t reservedSpace0:10;
      uint64_t EM4ENTRY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMPLOW:8;
      uint64_t TEMPHIGH:8;
      uint64_t EM4WUEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPLIMITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMONAVDDFALL:1;
      uint64_t VMONAVDDRISE:1;
      uint64_t VMONALTAVDDFALL:1;
      uint64_t VMONALTAVDDRISE:1;
      uint64_t VMONDVDDFALL:1;
      uint64_t VMONDVDDRISE:1;
      uint64_t VMONIO0FALL:1;
      uint64_t VMONIO0RISE:1;
      uint64_t VMONIO1FALL:1;
      uint64_t VMONIO1RISE:1;
      uint64_t R5VREADY:1;
      uint64_t reservedSpace0:1;
      uint64_t VMONBUVDDFALL:1;
      uint64_t VMONBUVDDRISE:1;
      uint64_t reservedSpace1:2;
      uint64_t PFETOVERCURRENTLIMIT:1;
      uint64_t NFETOVERCURRENTLIMIT:1;
      uint64_t DCDCLPRUNNING:1;
      uint64_t DCDCLNRUNNING:1;
      uint64_t DCDCINBYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t BURDY:1;
      uint64_t R5VVSINT:1;
      uint64_t EM23WAKEUP:1;
      uint64_t VSCALEDONE:1;
      uint64_t reservedSpace3:3;
      uint64_t TEMP:1;
      uint64_t TEMPLOW:1;
      uint64_t TEMPHIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMONAVDDFALL:1;
      uint64_t VMONAVDDRISE:1;
      uint64_t VMONALTAVDDFALL:1;
      uint64_t VMONALTAVDDRISE:1;
      uint64_t VMONDVDDFALL:1;
      uint64_t VMONDVDDRISE:1;
      uint64_t VMONIO0FALL:1;
      uint64_t VMONIO0RISE:1;
      uint64_t VMONIO1FALL:1;
      uint64_t VMONIO1RISE:1;
      uint64_t R5VREADY:1;
      uint64_t reservedSpace0:1;
      uint64_t VMONBUVDDFALL:1;
      uint64_t VMONBUVDDRISE:1;
      uint64_t reservedSpace1:2;
      uint64_t PFETOVERCURRENTLIMIT:1;
      uint64_t NFETOVERCURRENTLIMIT:1;
      uint64_t DCDCLPRUNNING:1;
      uint64_t DCDCLNRUNNING:1;
      uint64_t DCDCINBYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t BURDY:1;
      uint64_t R5VVSINT:1;
      uint64_t EM23WAKEUP:1;
      uint64_t VSCALEDONE:1;
      uint64_t reservedSpace3:3;
      uint64_t TEMP:1;
      uint64_t TEMPLOW:1;
      uint64_t TEMPHIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMONAVDDFALL:1;
      uint64_t VMONAVDDRISE:1;
      uint64_t VMONALTAVDDFALL:1;
      uint64_t VMONALTAVDDRISE:1;
      uint64_t VMONDVDDFALL:1;
      uint64_t VMONDVDDRISE:1;
      uint64_t VMONIO0FALL:1;
      uint64_t VMONIO0RISE:1;
      uint64_t VMONIO1FALL:1;
      uint64_t VMONIO1RISE:1;
      uint64_t R5VREADY:1;
      uint64_t reservedSpace0:1;
      uint64_t VMONBUVDDFALL:1;
      uint64_t VMONBUVDDRISE:1;
      uint64_t reservedSpace1:2;
      uint64_t PFETOVERCURRENTLIMIT:1;
      uint64_t NFETOVERCURRENTLIMIT:1;
      uint64_t DCDCLPRUNNING:1;
      uint64_t DCDCLNRUNNING:1;
      uint64_t DCDCINBYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t BURDY:1;
      uint64_t R5VVSINT:1;
      uint64_t EM23WAKEUP:1;
      uint64_t VSCALEDONE:1;
      uint64_t reservedSpace3:3;
      uint64_t TEMP:1;
      uint64_t TEMPLOW:1;
      uint64_t TEMPHIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMONAVDDFALL:1;
      uint64_t VMONAVDDRISE:1;
      uint64_t VMONALTAVDDFALL:1;
      uint64_t VMONALTAVDDRISE:1;
      uint64_t VMONDVDDFALL:1;
      uint64_t VMONDVDDRISE:1;
      uint64_t VMONIO0FALL:1;
      uint64_t VMONIO0RISE:1;
      uint64_t VMONIO1FALL:1;
      uint64_t VMONIO1RISE:1;
      uint64_t R5VREADY:1;
      uint64_t reservedSpace0:1;
      uint64_t VMONBUVDDFALL:1;
      uint64_t VMONBUVDDRISE:1;
      uint64_t reservedSpace1:2;
      uint64_t PFETOVERCURRENTLIMIT:1;
      uint64_t NFETOVERCURRENTLIMIT:1;
      uint64_t DCDCLPRUNNING:1;
      uint64_t DCDCLNRUNNING:1;
      uint64_t DCDCINBYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t BURDY:1;
      uint64_t R5VVSINT:1;
      uint64_t EM23WAKEUP:1;
      uint64_t VSCALEDONE:1;
      uint64_t reservedSpace3:3;
      uint64_t TEMP:1;
      uint64_t TEMPLOW:1;
      uint64_t TEMPHIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRLOCK;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t ANASW:1;
      uint64_t reservedSpace1:4;
      uint64_t REGPWRSEL:1;
      uint64_t reservedSpace2:2;
      uint64_t IMMEDIATEPWRSWITCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDCMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t DCDCMODEEM23:1;
      uint64_t DCDCMODEEM4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCCTRL;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNFORCECCM:1;
      uint64_t LPCMPHYSDIS:1;
      uint64_t LPCMPHYSHI:1;
      uint64_t reservedSpace0:2;
      uint64_t LNFORCECCMIMM:1;
      uint64_t reservedSpace1:2;
      uint64_t PFETCNT:4;
      uint64_t NFETCNT:4;
      uint64_t BYPLIMSEL:4;
      uint64_t LPCLIMILIMSEL:3;
      uint64_t reservedSpace2:1;
      uint64_t LNCLIMILIMSEL:3;
      uint64_t reservedSpace3:1;
      uint64_t LPCMPBIASEM234H:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCMISCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ZDETILIMSEL:3;
      uint64_t reservedSpace1:1;
      uint64_t ZDETBLANKDLY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCZDETCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t CLIMBLANKDLY:2;
      uint64_t reservedSpace1:3;
      uint64_t BYPLIMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCCLIMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPENR1:3;
      uint64_t reservedSpace0:1;
      uint64_t COMPENR2:5;
      uint64_t reservedSpace1:3;
      uint64_t COMPENR3:4;
      uint64_t reservedSpace2:4;
      uint64_t COMPENC1:2;
      uint64_t reservedSpace3:2;
      uint64_t COMPENC2:3;
      uint64_t reservedSpace4:1;
      uint64_t COMPENC3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLNCOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LNATT:1;
      uint64_t reservedSpace1:6;
      uint64_t LNVREF:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLNVCTRL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPATT:1;
      uint64_t LPVREF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLPVCTRL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t LPCMPHYSSELEM234H:4;
      uint64_t reservedSpace1:8;
      uint64_t LPVREFDUTYEN:1;
      uint64_t LPBLANK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOBAND:3;
      uint64_t reservedSpace0:21;
      uint64_t RCOTRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLNFREQCTRL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDCCTRLBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCSYNC;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t reservedSpace1:4;
      uint64_t FALLTHRESFINE:4;
      uint64_t FALLTHRESCOARSE:4;
      uint64_t RISETHRESFINE:4;
      uint64_t RISETHRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONAVDDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t reservedSpace1:4;
      uint64_t THRESFINE:4;
      uint64_t THRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONALTAVDDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t reservedSpace1:4;
      uint64_t THRESFINE:4;
      uint64_t THRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONDVDDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t RETDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t THRESFINE:4;
      uint64_t THRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONIO0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t RETDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t THRESFINE:4;
      uint64_t THRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONIO1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RISEWU:1;
      uint64_t FALLWU:1;
      uint64_t reservedSpace1:4;
      uint64_t THRESFINE:4;
      uint64_t THRESCOARSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VMONBUVDDCTRL;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPOWERDOWN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPOWERDOWN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t STATEN:1;
      uint64_t BUVINPROBEEN:1;
      uint64_t reservedSpace0:5;
      uint64_t VOUTRES:2;
      uint64_t reservedSpace1:2;
      uint64_t PWRRES:2;
      uint64_t reservedSpace2:2;
      uint64_t BUACTPWRCON:2;
      uint64_t reservedSpace3:2;
      uint64_t BUINACTPWRCON:2;
      uint64_t reservedSpace4:9;
      uint64_t DISMAXCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUCTRL;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t EM4WUEN:1;
      uint64_t IMONEN:1;
      uint64_t reservedSpace0:5;
      uint64_t INPUTMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAMUX:1;
      uint64_t reservedSpace0:11;
      uint64_t AMUXSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VADCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VOUTLEVEL;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREGIDETDIS:1;
      uint64_t VBUSDETDIS:1;
      uint64_t VREGODETDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VDETCTRL;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LPCMPBIASEM01:2;
      uint64_t reservedSpace1:2;
      uint64_t LPCMPHYSSELEM01:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCLPEM01CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREGIDET:1;
      uint64_t VBUSDET:1;
      uint64_t VREGODET:1;
      uint64_t VBUSGTVREGI:1;
      uint64_t LDODROPOUTDET:1;
      uint64_t COLDSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VSTATUS;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLEVELBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) R5VSYNC;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMP0UNLOCK:1;
      uint64_t ACMP1UNLOCK:1;
      uint64_t PCNT0UNLOCK:1;
      uint64_t PCNT1UNLOCK:1;
      uint64_t PCNT2UNLOCK:1;
      uint64_t I2C0UNLOCK:1;
      uint64_t I2C1UNLOCK:1;
      uint64_t DAC0UNLOCK:1;
      uint64_t IDAC0UNLOCK:1;
      uint64_t ADC0UNLOCK:1;
      uint64_t LETIMER0UNLOCK:1;
      uint64_t WDOG0UNLOCK:1;
      uint64_t WDOG1UNLOCK:1;
      uint64_t LESENSE0UNLOCK:1;
      uint64_t CSENUNLOCK:1;
      uint64_t LEUART0UNLOCK:1;
      uint64_t LEUART1UNLOCK:1;
      uint64_t LCDUNLOCK:1;
      uint64_t LETIMER1UNLOCK:1;
      uint64_t I2C2UNLOCK:1;
      uint64_t ADC1UNLOCK:1;
      uint64_t ACMP2UNLOCK:1;
      uint64_t ACMP3UNLOCK:1;
      uint64_t RTCUNLOCK:1;
      uint64_t USBUNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM23PERNORETAINCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMP0LOCKED:1;
      uint64_t ACMP1LOCKED:1;
      uint64_t PCNT0LOCKED:1;
      uint64_t PCNT1LOCKED:1;
      uint64_t PCNT2LOCKED:1;
      uint64_t I2C0LOCKED:1;
      uint64_t I2C1LOCKED:1;
      uint64_t DAC0LOCKED:1;
      uint64_t IDAC0LOCKED:1;
      uint64_t ADC0LOCKED:1;
      uint64_t LETIMER0LOCKED:1;
      uint64_t WDOG0LOCKED:1;
      uint64_t WDOG1LOCKED:1;
      uint64_t LESENSE0LOCKED:1;
      uint64_t CSENLOCKED:1;
      uint64_t LEUART0LOCKED:1;
      uint64_t LEUART1LOCKED:1;
      uint64_t LCDLOCKED:1;
      uint64_t LETIMER1LOCKED:1;
      uint64_t I2C2LOCKED:1;
      uint64_t ADC1LOCKED:1;
      uint64_t ACMP2LOCKED:1;
      uint64_t ACMP3LOCKED:1;
      uint64_t RTCLOCKED:1;
      uint64_t USBLOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM23PERNORETAINSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMP0DIS:1;
      uint64_t ACMP1DIS:1;
      uint64_t PCNT0DIS:1;
      uint64_t PCNT1DIS:1;
      uint64_t PCNT2DIS:1;
      uint64_t I2C0DIS:1;
      uint64_t I2C1DIS:1;
      uint64_t DAC0DIS:1;
      uint64_t IDAC0DIS:1;
      uint64_t ADC0DIS:1;
      uint64_t LETIMER0DIS:1;
      uint64_t WDOG0DIS:1;
      uint64_t WDOG1DIS:1;
      uint64_t LESENSE0DIS:1;
      uint64_t CSENDIS:1;
      uint64_t LEUART0DIS:1;
      uint64_t LEUART1DIS:1;
      uint64_t LCDDIS:1;
      uint64_t LETIMER1DIS:1;
      uint64_t I2C2DIS:1;
      uint64_t ADC1DIS:1;
      uint64_t ACMP2DIS:1;
      uint64_t ACMP3DIS:1;
      uint64_t RTCDIS:1;
      uint64_t USBDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM23PERNORETAINCTRL;

};

#define EMU (*(volatile struct EMU_tag *) 0x400e3000)

struct RMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDOGRMODE:3;
      uint64_t reservedSpace0:1;
      uint64_t LOCKUPRMODE:3;
      uint64_t reservedSpace1:1;
      uint64_t SYSRMODE:3;
      uint64_t reservedSpace2:1;
      uint64_t PINRMODE:3;
      uint64_t reservedSpace3:9;
      uint64_t RESETSTATE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORST:1;
      uint64_t reservedSpace0:1;
      uint64_t AVDDBOD:1;
      uint64_t DVDDBOD:1;
      uint64_t DECBOD:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTRST:1;
      uint64_t LOCKUPRST:1;
      uint64_t SYSREQRST:1;
      uint64_t WDOGRST:1;
      uint64_t BUMODERST:1;
      uint64_t reservedSpace2:3;
      uint64_t EM4RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTCAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint32_t RST;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define RMU (*(volatile struct RMU_tag *) 0x400e5000)

struct CMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUTSEL0:5;
      uint64_t CLKOUTSEL1:5;
      uint64_t CLKOUTSEL2:5;
      uint64_t reservedSpace0:1;
      uint64_t WSHFLE:1;
      uint64_t reservedSpace1:3;
      uint64_t HFPERCLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING:7;
      uint64_t reservedSpace0:1;
      uint64_t FINETUNING:6;
      uint64_t reservedSpace1:2;
      uint64_t FREQRANGE:5;
      uint64_t CMPBIAS:3;
      uint64_t LDOHP:1;
      uint64_t CLKDIV:2;
      uint64_t FINETUNINGEN:1;
      uint64_t VREFTC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USHFRCOCTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING:7;
      uint64_t reservedSpace0:1;
      uint64_t FINETUNING:6;
      uint64_t reservedSpace1:2;
      uint64_t FREQRANGE:5;
      uint64_t CMPBIAS:3;
      uint64_t LDOHP:1;
      uint64_t CLKDIV:2;
      uint64_t FINETUNINGEN:1;
      uint64_t VREFTC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFRCOCTRL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING:7;
      uint64_t reservedSpace0:1;
      uint64_t FINETUNING:6;
      uint64_t reservedSpace1:2;
      uint64_t FREQRANGE:5;
      uint64_t CMPBIAS:3;
      uint64_t LDOHP:1;
      uint64_t CLKDIV:2;
      uint64_t FINETUNINGEN:1;
      uint64_t VREFTC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXHFRCOCTRL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING:9;
      uint64_t reservedSpace0:7;
      uint64_t ENVREF:1;
      uint64_t ENCHOP:1;
      uint64_t ENDEM:1;
      uint64_t reservedSpace1:1;
      uint64_t VREFUPDATE:2;
      uint64_t reservedSpace2:2;
      uint64_t TIMEOUT:2;
      uint64_t reservedSpace3:2;
      uint64_t GMCCURTUNE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFRCOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t HFXOX2EN:1;
      uint64_t PEAKDETMODE:2;
      uint64_t reservedSpace1:18;
      uint64_t LFTIMEOUT:3;
      uint64_t reservedSpace2:1;
      uint64_t AUTOSTARTEM0EM1:1;
      uint64_t AUTOSTARTSELEM0EM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFXOCTRL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBTRIMXOCORE:11;
      uint64_t CTUNE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFXOSTARTUPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBTRIMXOCORE:11;
      uint64_t CTUNE:9;
      uint64_t reservedSpace0:6;
      uint64_t PEAKDETEN:1;
      uint64_t PEAKMONEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFXOSTEADYSTATECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTUPTIMEOUT:4;
      uint64_t STEADYTIMEOUT:4;
      uint64_t reservedSpace0:4;
      uint64_t PEAKDETTIMEOUT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFXOTIMEOUTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNING:7;
      uint64_t reservedSpace0:1;
      uint64_t MODE:2;
      uint64_t reservedSpace1:1;
      uint64_t GAIN:2;
      uint64_t reservedSpace2:1;
      uint64_t HIGHAMPL:1;
      uint64_t AGC:1;
      uint64_t CUR:2;
      uint64_t reservedSpace3:2;
      uint64_t BUFCUR:1;
      uint64_t reservedSpace4:3;
      uint64_t TIMEOUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFXOCTRL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t EDGESEL:1;
      uint64_t AUTORECOVER:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t DITHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPLLCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:12;
      uint64_t reservedSpace0:4;
      uint64_t N:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPLLCTRL1;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t DOWNSEL:4;
      uint64_t CONT:1;
      uint64_t reservedSpace1:7;
      uint64_t PRSUPSEL:5;
      uint64_t reservedSpace2:3;
      uint64_t PRSDOWNSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALCNT:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALCNT;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCOEN:1;
      uint64_t HFRCODIS:1;
      uint64_t HFXOEN:1;
      uint64_t HFXODIS:1;
      uint64_t AUXHFRCOEN:1;
      uint64_t AUXHFRCODIS:1;
      uint64_t LFRCOEN:1;
      uint64_t LFRCODIS:1;
      uint64_t LFXOEN:1;
      uint64_t LFXODIS:1;
      uint64_t USHFRCOEN:1;
      uint64_t USHFRCODIS:1;
      uint64_t DPLLEN:1;
      uint64_t DPLLDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCENCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALSTART:1;
      uint64_t CALSTOP:1;
      uint64_t reservedSpace0:2;
      uint64_t HFXOPEAKDETSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFCLKSEL;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFACLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFBCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFECLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFCCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCOENS:1;
      uint64_t HFRCORDY:1;
      uint64_t HFXOENS:1;
      uint64_t HFXORDY:1;
      uint64_t AUXHFRCOENS:1;
      uint64_t AUXHFRCORDY:1;
      uint64_t LFRCOENS:1;
      uint64_t LFRCORDY:1;
      uint64_t LFXOENS:1;
      uint64_t LFXORDY:1;
      uint64_t USHFRCOENS:1;
      uint64_t USHFRCORDY:1;
      uint64_t DPLLENS:1;
      uint64_t DPLLRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t CALRDY:1;
      uint64_t SDIOCLKENS:1;
      uint64_t QSPI0CLKENS:1;
      uint64_t reservedSpace1:3;
      uint64_t HFXOPEAKDETRDY:1;
      uint64_t reservedSpace2:2;
      uint64_t HFXOAMPLOW:1;
      uint64_t reservedSpace3:1;
      uint64_t LFXOPHASE:1;
      uint64_t LFRCOPHASE:1;
      uint64_t ULFRCOPHASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELECTED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFCLKSTATUS;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBTRIMXOCORE:11;
      uint64_t reservedSpace0:5;
      uint64_t IBTRIMXOCOREMON:11;
      uint64_t reservedSpace1:3;
      uint64_t VALID:1;
      uint64_t MONVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFXOTRIMSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCORDY:1;
      uint64_t HFXORDY:1;
      uint64_t LFRCORDY:1;
      uint64_t LFXORDY:1;
      uint64_t AUXHFRCORDY:1;
      uint64_t CALRDY:1;
      uint64_t CALOF:1;
      uint64_t USHFRCORDY:1;
      uint64_t HFXODISERR:1;
      uint64_t HFXOAUTOSW:1;
      uint64_t reservedSpace0:1;
      uint64_t HFXOPEAKDETRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t HFRCODIS:1;
      uint64_t LFTIMEOUTERR:1;
      uint64_t DPLLRDY:1;
      uint64_t DPLLLOCKFAILLOW:1;
      uint64_t DPLLLOCKFAILHIGH:1;
      uint64_t reservedSpace2:9;
      uint64_t LFXOEDGE:1;
      uint64_t LFRCOEDGE:1;
      uint64_t ULFRCOEDGE:1;
      uint64_t reservedSpace3:1;
      uint64_t CMUERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCORDY:1;
      uint64_t HFXORDY:1;
      uint64_t LFRCORDY:1;
      uint64_t LFXORDY:1;
      uint64_t AUXHFRCORDY:1;
      uint64_t CALRDY:1;
      uint64_t CALOF:1;
      uint64_t USHFRCORDY:1;
      uint64_t HFXODISERR:1;
      uint64_t HFXOAUTOSW:1;
      uint64_t reservedSpace0:1;
      uint64_t HFXOPEAKDETRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t HFRCODIS:1;
      uint64_t LFTIMEOUTERR:1;
      uint64_t DPLLRDY:1;
      uint64_t DPLLLOCKFAILLOW:1;
      uint64_t DPLLLOCKFAILHIGH:1;
      uint64_t reservedSpace2:9;
      uint64_t LFXOEDGE:1;
      uint64_t LFRCOEDGE:1;
      uint64_t ULFRCOEDGE:1;
      uint64_t reservedSpace3:1;
      uint64_t CMUERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCORDY:1;
      uint64_t HFXORDY:1;
      uint64_t LFRCORDY:1;
      uint64_t LFXORDY:1;
      uint64_t AUXHFRCORDY:1;
      uint64_t CALRDY:1;
      uint64_t CALOF:1;
      uint64_t USHFRCORDY:1;
      uint64_t HFXODISERR:1;
      uint64_t HFXOAUTOSW:1;
      uint64_t reservedSpace0:1;
      uint64_t HFXOPEAKDETRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t HFRCODIS:1;
      uint64_t LFTIMEOUTERR:1;
      uint64_t DPLLRDY:1;
      uint64_t DPLLLOCKFAILLOW:1;
      uint64_t DPLLLOCKFAILHIGH:1;
      uint64_t reservedSpace2:9;
      uint64_t LFXOEDGE:1;
      uint64_t LFRCOEDGE:1;
      uint64_t ULFRCOEDGE:1;
      uint64_t reservedSpace3:1;
      uint64_t CMUERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFRCORDY:1;
      uint64_t HFXORDY:1;
      uint64_t LFRCORDY:1;
      uint64_t LFXORDY:1;
      uint64_t AUXHFRCORDY:1;
      uint64_t CALRDY:1;
      uint64_t CALOF:1;
      uint64_t USHFRCORDY:1;
      uint64_t HFXODISERR:1;
      uint64_t HFXOAUTOSW:1;
      uint64_t reservedSpace0:1;
      uint64_t HFXOPEAKDETRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t HFRCODIS:1;
      uint64_t LFTIMEOUTERR:1;
      uint64_t DPLLRDY:1;
      uint64_t DPLLLOCKFAILLOW:1;
      uint64_t DPLLLOCKFAILHIGH:1;
      uint64_t reservedSpace2:9;
      uint64_t LFXOEDGE:1;
      uint64_t LFRCOEDGE:1;
      uint64_t ULFRCOEDGE:1;
      uint64_t reservedSpace3:1;
      uint64_t CMUERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LE:1;
      uint64_t CRYPTO0_bitfield:1;
      uint64_t EBI_bitfield:1;
      uint64_t ETH_bitfield:1;
      uint64_t SDIO_bitfield:1;
      uint64_t GPIO_bitfield:1;
      uint64_t PRS_bitfield:1;
      uint64_t LDMA_bitfield:1;
      uint64_t GPCRC_bitfield:1;
      uint64_t QSPI0_bitfield:1;
      uint64_t USB_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFBUSCLKEN0;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0_bitfield:1;
      uint64_t TIMER1_bitfield:1;
      uint64_t TIMER2_bitfield:1;
      uint64_t TIMER3_bitfield:1;
      uint64_t TIMER4_bitfield:1;
      uint64_t TIMER5_bitfield:1;
      uint64_t TIMER6_bitfield:1;
      uint64_t USART0_bitfield:1;
      uint64_t USART1_bitfield:1;
      uint64_t USART2_bitfield:1;
      uint64_t USART3_bitfield:1;
      uint64_t USART4_bitfield:1;
      uint64_t USART5_bitfield:1;
      uint64_t ACMP0_bitfield:1;
      uint64_t ACMP1_bitfield:1;
      uint64_t ACMP2_bitfield:1;
      uint64_t ACMP3_bitfield:1;
      uint64_t I2C0_bitfield:1;
      uint64_t I2C1_bitfield:1;
      uint64_t I2C2_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t ADC1_bitfield:1;
      uint64_t CRYOTIMER_bitfield:1;
      uint64_t IDAC0_bitfield:1;
      uint64_t TRNG0_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPERCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTIMER0_bitfield:1;
      uint64_t WTIMER1_bitfield:1;
      uint64_t WTIMER2_bitfield:1;
      uint64_t WTIMER3_bitfield:1;
      uint64_t UART0_bitfield:1;
      uint64_t UART1_bitfield:1;
      uint64_t CAN0_bitfield:1;
      uint64_t CAN1_bitfield:1;
      uint64_t VDAC0_bitfield:1;
      uint64_t CSEN_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPERCLKEN1;

  uint8_t res12[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LETIMER0_bitfield:1;
      uint64_t LETIMER1_bitfield:1;
      uint64_t LESENSE_bitfield:1;
      uint64_t LCD_bitfield:1;
      uint64_t RTC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFACLKEN0;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEUART0_bitfield:1;
      uint64_t LEUART1_bitfield:1;
      uint64_t SYSTICK:1;
      uint64_t CSEN_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFBCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFCCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCC_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFECLKEN0;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:5;
      uint64_t reservedSpace1:11;
      uint64_t HFCLKLEPRESC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPRESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFBUSPRESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFCOREPRESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPERPRESC;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFEXPPRESC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPERPRESCB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PRESC:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFPERPRESCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LETIMER0_bitfield:4;
      uint64_t LETIMER1_bitfield:4;
      uint64_t LESENSE_bitfield:2;
      uint64_t reservedSpace0:2;
      uint64_t LCD_bitfield:3;
      uint64_t reservedSpace1:1;
      uint64_t RTC_bitfield:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFAPRESC0;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEUART0_bitfield:2;
      uint64_t reservedSpace0:2;
      uint64_t LEUART1_bitfield:2;
      uint64_t reservedSpace1:2;
      uint64_t SYSTICK:4;
      uint64_t CSEN_bitfield:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFBPRESC0;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCC_bitfield:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFEPRESC0;

  uint8_t res18[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFACLKEN0:1;
      uint64_t reservedSpace0:1;
      uint64_t LFAPRESC0:1;
      uint64_t reservedSpace1:1;
      uint64_t LFBCLKEN0:1;
      uint64_t reservedSpace2:1;
      uint64_t LFBPRESC0:1;
      uint64_t reservedSpace3:1;
      uint64_t LFCCLKEN0:1;
      uint64_t reservedSpace4:7;
      uint64_t LFECLKEN0:1;
      uint64_t reservedSpace5:1;
      uint64_t LFEPRESC0:1;
      uint64_t reservedSpace6:5;
      uint64_t HFRCOBSY:1;
      uint64_t AUXHFRCOBSY:1;
      uint64_t LFRCOBSY:1;
      uint64_t LFRCOVREFBSY:1;
      uint64_t HFXOBSY:1;
      uint64_t LFXOBSY:1;
      uint64_t USHFRCOBSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  uint8_t res19[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCNT0CLKEN:1;
      uint64_t PCNT0CLKSEL:1;
      uint64_t PCNT1CLKEN:1;
      uint64_t PCNT1CLKSEL:1;
      uint64_t PCNT2CLKEN:1;
      uint64_t PCNT2CLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNTCTRL;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC0CLKDIV:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC0CLKSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t ADC0CLKINV:1;
      uint64_t reservedSpace2:7;
      uint64_t ADC1CLKDIV:2;
      uint64_t reservedSpace3:2;
      uint64_t ADC1CLKSEL:2;
      uint64_t reservedSpace4:2;
      uint64_t ADC1CLKINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDIOCLKSEL:2;
      uint64_t reservedSpace0:5;
      uint64_t SDIOCLKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDIOCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPI0CLKSEL:2;
      uint64_t reservedSpace0:5;
      uint64_t QSPI0CLKDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPICTRL;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUT0PEN:1;
      uint64_t CLKOUT1PEN:1;
      uint64_t CLKOUT2PEN:1;
      uint64_t reservedSpace0:25;
      uint64_t CLKIN0PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKOUT0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKOUT1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CLKOUT2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKIN0LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSAMP:3;
      uint64_t reservedSpace0:5;
      uint64_t SSINV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFRCOSS;

  uint8_t res23[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCLKSEL:3;
      uint64_t reservedSpace0:4;
      uint64_t USBCLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCREN:1;
      uint64_t USBLSCRMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USBCRCTRL;

};

#define CMU (*(volatile struct CMU_tag *) 0x400e4000)

struct CRYPTO0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES:1;
      uint64_t KEYBUFDIS:1;
      uint64_t SHA:1;
      uint64_t reservedSpace0:7;
      uint64_t NOBUSYSTALL:1;
      uint64_t reservedSpace1:3;
      uint64_t INCWIDTH:2;
      uint64_t DMA0MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t DMA0RSEL:2;
      uint64_t reservedSpace3:2;
      uint64_t DMA1MODE:2;
      uint64_t reservedSpace4:2;
      uint64_t DMA1RSEL:2;
      uint64_t reservedSpace5:1;
      uint64_t COMBDMA0WEREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODULUS:4;
      uint64_t MODOP:1;
      uint64_t reservedSpace0:3;
      uint64_t MULWIDTH:2;
      uint64_t RESULTWIDTH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR:8;
      uint64_t reservedSpace0:1;
      uint64_t SEQSTART:1;
      uint64_t SEQSTOP:1;
      uint64_t SEQSTEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQRUNNING:1;
      uint64_t INSTRRUNNING:1;
      uint64_t DMAACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0ZERO:4;
      uint64_t reservedSpace0:4;
      uint64_t DDATA0LSBS:4;
      uint64_t reservedSpace1:4;
      uint64_t DDATA0MSBS:4;
      uint64_t DDATA1MSB:1;
      uint64_t reservedSpace2:3;
      uint64_t CARRY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V0:3;
      uint64_t reservedSpace0:5;
      uint64_t V1:3;
      uint64_t reservedSpace1:5;
      uint64_t SEQPART:1;
      uint64_t SEQSKIP:1;
      uint64_t reservedSpace2:2;
      uint64_t SEQIP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTATUS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYBUF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYBUF;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTHA:14;
      uint64_t reservedSpace0:6;
      uint64_t BLOCKSIZE:2;
      uint64_t reservedSpace1:2;
      uint64_t DMA0SKIP:2;
      uint64_t DMA1SKIP:2;
      uint64_t DMA0PRESA:1;
      uint64_t DMA1PRESA:1;
      uint64_t reservedSpace2:1;
      uint64_t HALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTHB:14;
      uint64_t reservedSpace0:14;
      uint64_t DMA0PRESB:1;
      uint64_t DMA1PRESB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQCTRLB;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRDONE:1;
      uint64_t SEQDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRDONE:1;
      uint64_t SEQDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRDONE:1;
      uint64_t SEQDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTRDONE:1;
      uint64_t SEQDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR0:8;
      uint64_t INSTR1:8;
      uint64_t INSTR2:8;
      uint64_t INSTR3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR4:8;
      uint64_t INSTR5:8;
      uint64_t INSTR6:8;
      uint64_t INSTR7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR8:8;
      uint64_t INSTR9:8;
      uint64_t INSTR10:8;
      uint64_t INSTR11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR12:8;
      uint64_t INSTR13:8;
      uint64_t INSTR14:8;
      uint64_t INSTR15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INSTR16:8;
      uint64_t INSTR17:8;
      uint64_t INSTR18:8;
      uint64_t INSTR19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ4;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0XOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0XOR;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0BYTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1BYTE;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0XORBYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0XORBYTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0BYTE12:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0BYTE12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0BYTE13:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0BYTE13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0BYTE14:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0BYTE14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0BYTE15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0BYTE15;

  uint8_t res8[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA4;

  uint8_t res9[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA0BIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA0BIG;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA0BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA0BYTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA1BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA1BYTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDATA0BYTE32:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDATA0BYTE32;

  uint8_t res11[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QDATA0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QDATA1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDATA1;

  uint8_t res12[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QDATA1BIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDATA1BIG;

  uint8_t res13[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QDATA0BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDATA0BYTE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QDATA1BYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QDATA1BYTE;

};

#define CRYPTO0 (*(volatile struct CRYPTO0_tag *) 0x400f0000)

struct LESENSE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANMODE:2;
      uint64_t PRSSEL:5;
      uint64_t SCANCONF:2;
      uint64_t reservedSpace0:2;
      uint64_t ALTEXMAP:1;
      uint64_t reservedSpace1:1;
      uint64_t DUALSAMPLE:1;
      uint64_t reservedSpace2:2;
      uint64_t BUFOW:1;
      uint64_t STRSCANRES:1;
      uint64_t reservedSpace3:1;
      uint64_t BUFIDL:1;
      uint64_t DMAWU:2;
      uint64_t DEBUGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXPRESC:2;
      uint64_t reservedSpace0:2;
      uint64_t LFPRESC:3;
      uint64_t reservedSpace1:1;
      uint64_t PCPRESC:3;
      uint64_t reservedSpace2:1;
      uint64_t PCTOP:8;
      uint64_t reservedSpace3:2;
      uint64_t STARTDLY:2;
      uint64_t reservedSpace4:4;
      uint64_t AUXSTARTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACCH0EN:1;
      uint64_t DACCH1EN:1;
      uint64_t DACCH0DATA:1;
      uint64_t DACCH1DATA:1;
      uint64_t reservedSpace0:2;
      uint64_t DACSTARTUP:1;
      uint64_t reservedSpace1:1;
      uint64_t DACCONVTRIG:1;
      uint64_t reservedSpace2:11;
      uint64_t ACMP0MODE:2;
      uint64_t ACMP1MODE:2;
      uint64_t ACMP0INV:1;
      uint64_t ACMP1INV:1;
      uint64_t ACMP0HYSTEN:1;
      uint64_t ACMP1HYSTEN:1;
      uint64_t WARMUPMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE:1;
      uint64_t ERRCHK:1;
      uint64_t INTMAP:1;
      uint64_t HYSTPRS0:1;
      uint64_t HYSTPRS1:1;
      uint64_t HYSTPRS2:1;
      uint64_t HYSTIRQ:1;
      uint64_t PRSCNT:1;
      uint64_t INPUT:1;
      uint64_t reservedSpace0:1;
      uint64_t PRSSEL0:5;
      uint64_t PRSSEL1:5;
      uint64_t PRSSEL2:5;
      uint64_t PRSSEL3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DECCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIASMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIASCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINSIZE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVALCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DECCMPVAL:5;
      uint64_t reservedSpace0:3;
      uint64_t DECCMPMASK:5;
      uint64_t reservedSpace1:3;
      uint64_t DECCMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t DECODE:1;
      uint64_t CLEARBUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANRES:16;
      uint64_t STEPDIR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANRES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFDATAV:1;
      uint64_t BUFHALFFULL:1;
      uint64_t BUFFULL:1;
      uint64_t RUNNING:1;
      uint64_t SCANACTIVE:1;
      uint64_t DACACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:4;
      uint64_t WR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFDATA:16;
      uint64_t BUFDATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUFDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURCH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DECSTATE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DECSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SENSORSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SENSORSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:2;
      uint64_t CH1:2;
      uint64_t CH2:2;
      uint64_t CH3:2;
      uint64_t CH4:2;
      uint64_t CH5:2;
      uint64_t CH6:2;
      uint64_t CH7:2;
      uint64_t CH8:2;
      uint64_t CH9:2;
      uint64_t CH10:2;
      uint64_t CH11:2;
      uint64_t CH12:2;
      uint64_t CH13:2;
      uint64_t CH14:2;
      uint64_t CH15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDLECONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDLECONF0:2;
      uint64_t IDLECONF1:2;
      uint64_t IDLECONF2:2;
      uint64_t IDLECONF3:2;
      uint64_t IDLECONF4:2;
      uint64_t IDLECONF5:2;
      uint64_t IDLECONF6:2;
      uint64_t IDLECONF7:2;
      uint64_t AEX0:1;
      uint64_t AEX1:1;
      uint64_t AEX2:1;
      uint64_t AEX3:1;
      uint64_t AEX4:1;
      uint64_t AEX5:1;
      uint64_t AEX6:1;
      uint64_t AEX7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTEXCONF;

  uint8_t res0[8];

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t SCANCOMPLETE:1;
      uint64_t DEC:1;
      uint64_t DECERR:1;
      uint64_t BUFDATAV:1;
      uint64_t BUFLEVEL:1;
      uint64_t BUFOF:1;
      uint64_t CNTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t SCANCOMPLETE:1;
      uint64_t DEC:1;
      uint64_t DECERR:1;
      uint64_t BUFDATAV:1;
      uint64_t BUFLEVEL:1;
      uint64_t BUFOF:1;
      uint64_t CNTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t SCANCOMPLETE:1;
      uint64_t DEC:1;
      uint64_t DECERR:1;
      uint64_t BUFDATAV:1;
      uint64_t BUFLEVEL:1;
      uint64_t BUFOF:1;
      uint64_t CNTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

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
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
      uint64_t SCANCOMPLETE:1;
      uint64_t DEC:1;
      uint64_t DECERR:1;
      uint64_t BUFDATAV:1;
      uint64_t BUFLEVEL:1;
      uint64_t BUFOF:1;
      uint64_t CNTOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0PEN:1;
      uint64_t CH1PEN:1;
      uint64_t CH2PEN:1;
      uint64_t CH3PEN:1;
      uint64_t CH4PEN:1;
      uint64_t CH5PEN:1;
      uint64_t CH6PEN:1;
      uint64_t CH7PEN:1;
      uint64_t CH8PEN:1;
      uint64_t CH9PEN:1;
      uint64_t CH10PEN:1;
      uint64_t CH11PEN:1;
      uint64_t CH12PEN:1;
      uint64_t CH13PEN:1;
      uint64_t CH14PEN:1;
      uint64_t CH15PEN:1;
      uint64_t ALTEX0PEN:1;
      uint64_t ALTEX1PEN:1;
      uint64_t ALTEX2PEN:1;
      uint64_t ALTEX3PEN:1;
      uint64_t ALTEX4PEN:1;
      uint64_t ALTEX5PEN:1;
      uint64_t ALTEX6PEN:1;
      uint64_t ALTEX7PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  uint8_t res1[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST0_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST0_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST1_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST1_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST2_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST2_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST3_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST3_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST4_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST4_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST5_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST5_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST6_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST6_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST7_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST7_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST8_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST8_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST9_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST9_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST10_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST10_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST11_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST11_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST12_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST12_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST13_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST13_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST14_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST14_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST15_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST15_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST16_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST16_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST17_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST17_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST18_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST18_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST19_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST19_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST20_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST20_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST21_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST21_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST22_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST22_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST23_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST23_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST24_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST24_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST25_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST25_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST26_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST26_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST27_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST27_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST28_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST28_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST29_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST29_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST30_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST30_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:1;
      uint64_t CHAIN:1;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST31_TCONFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:4;
      uint64_t MASK:4;
      uint64_t NEXTSTATE:5;
      uint64_t reservedSpace0:2;
      uint64_t SETIF:1;
      uint64_t PRSACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ST31_TCONFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF0_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF1_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF2_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF3_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF4_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF5_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF6_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF7_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF8_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF9_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF10_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF11_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF12_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF13_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF14_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATASRC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF15_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_EVAL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_EVAL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_EVAL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_EVAL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_EVAL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_EVAL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_EVAL;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_EVAL;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_EVAL;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_EVAL;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_EVAL;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_EVAL;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_EVAL;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_EVAL;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_EVAL;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIME:6;
      uint64_t SAMPLEDLY:8;
      uint64_t MEASUREDLY:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRES:12;
      uint64_t SAMPLE:2;
      uint64_t SETIF:3;
      uint64_t EXMODE:2;
      uint64_t EXCLK:1;
      uint64_t SAMPLECLK:1;
      uint64_t ALTEX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_INTERACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPTHRES:16;
      uint64_t COMP:1;
      uint64_t DECODE:1;
      uint64_t STRSAMPLE:2;
      uint64_t SCANRESINV:1;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_EVAL;

};

#define LESENSE (*(volatile struct LESENSE_tag *) 0x40055000)

struct EBI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t BANK0EN:1;
      uint64_t BANK1EN:1;
      uint64_t BANK2EN:1;
      uint64_t BANK3EN:1;
      uint64_t NOIDLE:1;
      uint64_t NOIDLE1:1;
      uint64_t NOIDLE2:1;
      uint64_t NOIDLE3:1;
      uint64_t ARDYEN:1;
      uint64_t ARDYTODIS:1;
      uint64_t ARDY1EN:1;
      uint64_t ARDYTO1DIS:1;
      uint64_t ARDY2EN:1;
      uint64_t ARDYTO2DIS:1;
      uint64_t ARDY3EN:1;
      uint64_t ARDYTO3DIS:1;
      uint64_t BL:1;
      uint64_t BL1:1;
      uint64_t BL2:1;
      uint64_t BL3:1;
      uint64_t reservedSpace0:2;
      uint64_t ITS:1;
      uint64_t ALTMAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t ADDRHOLD:3;
      uint64_t reservedSpace1:17;
      uint64_t HALFALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t RDSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t RDHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFRE:1;
      uint64_t PREFETCH:1;
      uint64_t PAGEMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t WRSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t WRHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFWE:1;
      uint64_t WBUFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSPOL:1;
      uint64_t REPOL:1;
      uint64_t WEPOL:1;
      uint64_t ALEPOL:1;
      uint64_t ARDYPOL:1;
      uint64_t BLPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLARITY;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t ADDRHOLD:3;
      uint64_t reservedSpace1:17;
      uint64_t HALFALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRTIMING1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t RDSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t RDHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFRE:1;
      uint64_t PREFETCH:1;
      uint64_t PAGEMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDTIMING1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t WRSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t WRHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFWE:1;
      uint64_t WBUFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTIMING1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSPOL:1;
      uint64_t REPOL:1;
      uint64_t WEPOL:1;
      uint64_t ALEPOL:1;
      uint64_t ARDYPOL:1;
      uint64_t BLPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLARITY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t ADDRHOLD:3;
      uint64_t reservedSpace1:17;
      uint64_t HALFALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRTIMING2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t RDSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t RDHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFRE:1;
      uint64_t PREFETCH:1;
      uint64_t PAGEMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDTIMING2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t WRSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t WRHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFWE:1;
      uint64_t WBUFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTIMING2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSPOL:1;
      uint64_t REPOL:1;
      uint64_t WEPOL:1;
      uint64_t ALEPOL:1;
      uint64_t ARDYPOL:1;
      uint64_t BLPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLARITY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t ADDRHOLD:3;
      uint64_t reservedSpace1:17;
      uint64_t HALFALE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDRTIMING3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t RDSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t RDHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFRE:1;
      uint64_t PREFETCH:1;
      uint64_t PAGEMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDTIMING3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRSETUP:3;
      uint64_t reservedSpace0:5;
      uint64_t WRSTRB:7;
      uint64_t reservedSpace1:1;
      uint64_t WRHOLD:3;
      uint64_t reservedSpace2:9;
      uint64_t HALFWE:1;
      uint64_t WBUFDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTIMING3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSPOL:1;
      uint64_t REPOL:1;
      uint64_t WEPOL:1;
      uint64_t ALEPOL:1;
      uint64_t ARDYPOL:1;
      uint64_t BLPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLARITY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGELEN:2;
      uint64_t reservedSpace0:2;
      uint64_t INCHIT:1;
      uint64_t reservedSpace1:3;
      uint64_t RDPA:4;
      uint64_t reservedSpace2:8;
      uint64_t KEEPOPEN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAGECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t BANKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NANDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCSTART:1;
      uint64_t ECCSTOP:1;
      uint64_t ECCCLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AHBACT:1;
      uint64_t reservedSpace0:3;
      uint64_t ECCACT:1;
      uint64_t reservedSpace1:3;
      uint64_t TFTPIXEL0EMPTY:1;
      uint64_t TFTPIXEL1EMPTY:1;
      uint64_t TFTPIXELFULL:1;
      uint64_t reservedSpace2:1;
      uint64_t DDACT:1;
      uint64_t TFTDDEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCPARITY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCPARITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DD:2;
      uint64_t MASKBLEND:4;
      uint64_t reservedSpace0:2;
      uint64_t SHIFTDCLKEN:1;
      uint64_t FBCTRIG:1;
      uint64_t INTERLEAVE:2;
      uint64_t COLOR1SRC:1;
      uint64_t reservedSpace1:3;
      uint64_t WIDTH:2;
      uint64_t reservedSpace2:1;
      uint64_t ALIASBANKEN:1;
      uint64_t BANKSEL:2;
      uint64_t ALIASBANK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCNT:11;
      uint64_t reservedSpace0:5;
      uint64_t VCNT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIXEL0FORMAT:3;
      uint64_t reservedSpace0:5;
      uint64_t PIXEL1FORMAT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTCOLORFORMAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMEBASE:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTFRAMEBASE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTRIDE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTSTRIDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSZ:10;
      uint64_t reservedSpace0:6;
      uint64_t VSZ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSYNC:7;
      uint64_t reservedSpace0:1;
      uint64_t HFPORCH:8;
      uint64_t reservedSpace1:2;
      uint64_t HBPORCH:8;
      uint64_t reservedSpace2:2;
      uint64_t HSYNCSTART:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTHPORCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC:7;
      uint64_t reservedSpace0:1;
      uint64_t VFPORCH:12;
      uint64_t VBPORCH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTVPORCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCLKPERIOD:12;
      uint64_t TFTSTART:12;
      uint64_t TFTSETUP:3;
      uint64_t reservedSpace0:1;
      uint64_t TFTHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSPOL:1;
      uint64_t DCLKPOL:1;
      uint64_t DATAENPOL:1;
      uint64_t HSYNCPOL:1;
      uint64_t VSYNCPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTPOLARITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTDD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALPHA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTALPHA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTPIXEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTPIXEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTPIXEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFTMASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC:1;
      uint64_t HSYNC:1;
      uint64_t VBPORCH:1;
      uint64_t VFPORCH:1;
      uint64_t DDEMPTY:1;
      uint64_t DDJIT:1;
      uint64_t TFTPIXEL0EMPTY:1;
      uint64_t TFTPIXEL1EMPTY:1;
      uint64_t TFTPIXELFULL:1;
      uint64_t TFTPIXELOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC:1;
      uint64_t HSYNC:1;
      uint64_t VBPORCH:1;
      uint64_t VFPORCH:1;
      uint64_t DDEMPTY:1;
      uint64_t DDJIT:1;
      uint64_t TFTPIXEL0EMPTY:1;
      uint64_t TFTPIXEL1EMPTY:1;
      uint64_t TFTPIXELFULL:1;
      uint64_t TFTPIXELOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC:1;
      uint64_t HSYNC:1;
      uint64_t VBPORCH:1;
      uint64_t VFPORCH:1;
      uint64_t DDEMPTY:1;
      uint64_t DDJIT:1;
      uint64_t TFTPIXEL0EMPTY:1;
      uint64_t TFTPIXEL1EMPTY:1;
      uint64_t TFTPIXELFULL:1;
      uint64_t TFTPIXELOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSYNC:1;
      uint64_t HSYNC:1;
      uint64_t VBPORCH:1;
      uint64_t VFPORCH:1;
      uint64_t DDEMPTY:1;
      uint64_t DDJIT:1;
      uint64_t TFTPIXEL0EMPTY:1;
      uint64_t TFTPIXEL1EMPTY:1;
      uint64_t TFTPIXELFULL:1;
      uint64_t TFTPIXELOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EBIPEN:1;
      uint64_t CS0PEN:1;
      uint64_t CS1PEN:1;
      uint64_t CS2PEN:1;
      uint64_t CS3PEN:1;
      uint64_t ALEPEN:1;
      uint64_t ARDYPEN:1;
      uint64_t BLPEN:1;
      uint64_t reservedSpace0:4;
      uint64_t NANDPEN:1;
      uint64_t reservedSpace1:3;
      uint64_t ALB:2;
      uint64_t APEN:5;
      uint64_t reservedSpace2:1;
      uint64_t TFTPEN:1;
      uint64_t DATAENPEN:1;
      uint64_t CSTFTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EBILOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t NANDLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t TFTLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t ALOC:6;
      uint64_t reservedSpace1:2;
      uint64_t RDYLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define EBI (*(volatile struct EBI_tag *) 0x4000b000)

struct ETH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LOOPBACKLOCAL:1;
      uint64_t ENBRX:1;
      uint64_t ENBTX:1;
      uint64_t MANPORTEN:1;
      uint64_t CLRALLSTATSREGS:1;
      uint64_t INCALLSTATSREGS:1;
      uint64_t STATSWREN:1;
      uint64_t BACKPRESSURE:1;
      uint64_t TXSTRT:1;
      uint64_t TXHALT:1;
      uint64_t TXPFRMREQ:1;
      uint64_t TXPFRMZERO:1;
      uint64_t reservedSpace1:2;
      uint64_t STORERXTS:1;
      uint64_t PFCENB:1;
      uint64_t TXPFCPRIORPFRM:1;
      uint64_t FLUSHRXPKT:1;
      uint64_t TXLPIEN:1;
      uint64_t PTPUNICASTEN:1;
      uint64_t reservedSpace2:1;
      uint64_t STOREUDPOFFSET:1;
      uint64_t reservedSpace3:1;
      uint64_t ONESTEPSYNCMODE:1;
      uint64_t PFCCTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NETWORKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED:1;
      uint64_t FULLDUPLEX:1;
      uint64_t DISCRDNONVLANFRAMES:1;
      uint64_t JUMBOFRAMES:1;
      uint64_t COPYALLFRAMES:1;
      uint64_t NOBROADCAST:1;
      uint64_t MULTICASTHASHEN:1;
      uint64_t UNICASTHASHEN:1;
      uint64_t RX1536BYTEFRAMES:1;
      uint64_t reservedSpace0:3;
      uint64_t RETRYTEST:1;
      uint64_t PAUSEEN:1;
      uint64_t RXBUFFOFFSET:2;
      uint64_t LENFIELDERRFRMDISCRD:1;
      uint64_t FCSREMOVE:1;
      uint64_t MDCCLKDIV:3;
      uint64_t reservedSpace1:2;
      uint64_t DISCOPYOFPFRAMES:1;
      uint64_t RXCHKSUMOFFLOADEN:1;
      uint64_t ENHALFDUPLEXRX:1;
      uint64_t IGNORERXFCS:1;
      uint64_t reservedSpace2:1;
      uint64_t IPGSTRTCHEN:1;
      uint64_t NSPCHANGE:1;
      uint64_t IGNOREIPGRXER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NETWORKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIOIN:1;
      uint64_t MANDONE:1;
      uint64_t reservedSpace1:3;
      uint64_t PFCNEGOTIATE:1;
      uint64_t LPIINDICATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NETWORKSTATUS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AMBABRSTLEN:5;
      uint64_t HDRDATASPLITEN:1;
      uint64_t reservedSpace0:2;
      uint64_t RXPBUFSIZE:2;
      uint64_t TXPBUFSIZE:1;
      uint64_t TXPBUFTCPEN:1;
      uint64_t INFLASTDBUFSIZEEN:1;
      uint64_t reservedSpace1:3;
      uint64_t RXBUFSIZE:8;
      uint64_t FRCDISCARDONERR:1;
      uint64_t FRCMAXAMBABRSTRX:1;
      uint64_t FRCMAXAMBABRSTTX:1;
      uint64_t reservedSpace2:1;
      uint64_t RXBDEXTNDMODEEN:1;
      uint64_t TXBDEXTENDMODEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USEDBITREAD:1;
      uint64_t COLOCCRD:1;
      uint64_t RETRYLMTEXCD:1;
      uint64_t TXGO:1;
      uint64_t AMBAERR:1;
      uint64_t TXCMPLT:1;
      uint64_t TXUNDERRUN:1;
      uint64_t LATECOLOCCRD:1;
      uint64_t RESPNOTOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMARXQPTR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXQPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DMATXQPTR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXQPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFFNOTAVAIL:1;
      uint64_t FRMRX:1;
      uint64_t RXOVERRUN:1;
      uint64_t RESPNOTOK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNGMNTDONE:1;
      uint64_t RXCMPLT:1;
      uint64_t RXUSEDBITREAD:1;
      uint64_t TXUSEDBITREAD:1;
      uint64_t TXUNDERRUN:1;
      uint64_t RTRYLMTORLATECOL:1;
      uint64_t AMBAERR:1;
      uint64_t TXCMPLT:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOVERRUN:1;
      uint64_t RESPNOTOK:1;
      uint64_t NONZEROPFRMQUANT:1;
      uint64_t PAUSETIMEZERO:1;
      uint64_t PFRMTX:1;
      uint64_t reservedSpace1:3;
      uint64_t PTPDLYREQFRMRX:1;
      uint64_t PTPSYNCFRMRX:1;
      uint64_t PTPDLYREQFRMTX:1;
      uint64_t PTPSYNCFRMTX:1;
      uint64_t PTPPDLYREQFRMRX:1;
      uint64_t PTPPDLYRESPFRMRX:1;
      uint64_t PTPPDLYREQFRMTX:1;
      uint64_t PTPPDLYRESPFRMTX:1;
      uint64_t TSUSECREGINCR:1;
      uint64_t RXLPIINDC:1;
      uint64_t WOLEVNTRX:1;
      uint64_t TSUTIMERCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNGMNTDONE:1;
      uint64_t RXCMPLT:1;
      uint64_t RXUSEDBITREAD:1;
      uint64_t TXUSEDBITREAD:1;
      uint64_t TXUNDERRUN:1;
      uint64_t RTRYLMTORLATECOL:1;
      uint64_t AMBAERR:1;
      uint64_t TXCMPLT:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOVERRUN:1;
      uint64_t RESPNOTOK:1;
      uint64_t NONZEROPFRMQUANT:1;
      uint64_t PAUSETIMEZERO:1;
      uint64_t PFRMTX:1;
      uint64_t reservedSpace1:3;
      uint64_t PTPDLYREQFRMRX:1;
      uint64_t PTPSYNCFRMRX:1;
      uint64_t PTPDLYREQFRMTX:1;
      uint64_t PTPSYNCFRMTX:1;
      uint64_t PTPPDLYREQFRMRX:1;
      uint64_t PTPPDLYRESPFRMRX:1;
      uint64_t PTPPDLYREQFRMTX:1;
      uint64_t PTPPDLYRESPFRMTX:1;
      uint64_t TSUSECREGINCR:1;
      uint64_t RXLPIINDC:1;
      uint64_t WOLEVNTRX:1;
      uint64_t TSUTIMERCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNGMNTDONE:1;
      uint64_t RXCMPLT:1;
      uint64_t RXUSEDBITREAD:1;
      uint64_t TXUSEDBITREAD:1;
      uint64_t TXUNDERRUN:1;
      uint64_t RTRYLMTORLATECOL:1;
      uint64_t AMBAERR:1;
      uint64_t TXCMPLT:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOVERRUN:1;
      uint64_t RESPNOTOK:1;
      uint64_t NONZEROPFRMQUANT:1;
      uint64_t PAUSETIMEZERO:1;
      uint64_t PFRMTX:1;
      uint64_t reservedSpace1:3;
      uint64_t PTPDLYREQFRMRX:1;
      uint64_t PTPSYNCFRMRX:1;
      uint64_t PTPDLYREQFRMTX:1;
      uint64_t PTPSYNCFRMTX:1;
      uint64_t PTPPDLYREQFRMRX:1;
      uint64_t PTPPDLYRESPFRMRX:1;
      uint64_t PTPPDLYREQFRMTX:1;
      uint64_t PTPPDLYRESPFRMTX:1;
      uint64_t TSUSECREGINCR:1;
      uint64_t RXLPIINDC:1;
      uint64_t WOLEVNTRX:1;
      uint64_t TSUTIMERCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MNGMNTDONE:1;
      uint64_t RXCMPLT:1;
      uint64_t RXUSEDBITREAD:1;
      uint64_t TXUSEDBITREAD:1;
      uint64_t TXUNDERRUN:1;
      uint64_t RTRYLMTORLATECOL:1;
      uint64_t AMBAERR:1;
      uint64_t TXCMPLT:1;
      uint64_t UNUSED:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVERRUN:1;
      uint64_t RESPNOTOK:1;
      uint64_t NONZEROPFRMQUANT:1;
      uint64_t PAUSETIMEZERO:1;
      uint64_t PFRMTX:1;
      uint64_t reservedSpace1:3;
      uint64_t PTPDLYREQFRMRX:1;
      uint64_t PTPSYNCFRMRX:1;
      uint64_t PTPDLYREQFRMTX:1;
      uint64_t PTPSYNCFRMTX:1;
      uint64_t PTPPDLYREQFRMRX:1;
      uint64_t PTPPDLYRESPFRMRX:1;
      uint64_t PTPPDLYREQFRMTX:1;
      uint64_t PTPPDLYRESPFRMTX:1;
      uint64_t TSUSECREGINCR:1;
      uint64_t RXLPIINDC:1;
      uint64_t WOLEVNTRX:1;
      uint64_t TSUTIMERCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYRWDATA:16;
      uint64_t WRITE10:2;
      uint64_t REGADDR:5;
      uint64_t PHYADDR:5;
      uint64_t OPERATION:2;
      uint64_t WRITE1:1;
      uint64_t WRITE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHYMNGMNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUANT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXPAUSEQUANT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUANT:16;
      uint64_t QUANTP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPAUSEQUANT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMATXCUTTHRUTHR:10;
      uint64_t reservedSpace0:21;
      uint64_t DMATXCUTTHRU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBUFTXCUTTHRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMARXCUTTHRUTHR:10;
      uint64_t reservedSpace0:21;
      uint64_t DMARXCUTTHRU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBUFRXCUTTHRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JUMBOMAXLEN:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JUMBOMAXLEN;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXINTMOD:8;
      uint64_t reservedSpace0:8;
      uint64_t TXINTMOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSWAKETIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSWAKETIME;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASHBOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASHTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR1BOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
      uint64_t FILTERTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR1TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR2BOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
      uint64_t FILTERTYPE:1;
      uint64_t reservedSpace0:7;
      uint64_t FILTERBYTEMASK:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR2TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR3BOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
      uint64_t FILTERTYPE:1;
      uint64_t reservedSpace0:7;
      uint64_t FILTERBYTEMASK:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR3TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR4BOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
      uint64_t FILTERTYPE:1;
      uint64_t reservedSpace0:7;
      uint64_t FILTERBYTEMASK:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECADDR4TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t reservedSpace0:15;
      uint64_t ENBCOPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECTYPE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t reservedSpace0:15;
      uint64_t ENBCOPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECTYPE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t reservedSpace0:15;
      uint64_t ENBCOPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECTYPE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t reservedSpace0:15;
      uint64_t ENBCOPY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPECTYPE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
      uint64_t WOLMASK0:1;
      uint64_t WOLMASK1:1;
      uint64_t WOLMASK2:1;
      uint64_t WOLMASK3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOLREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPGSTRETCH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STRETCHRATIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t reservedSpace0:15;
      uint64_t ENBPROCESSING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STACKEDVLAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTORENB:8;
      uint64_t VECTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPFCPAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRMASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKADD1BOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRMASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASKADD1TOP;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXPTPUNICAST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPTPUNICAST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPVAL:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUNSECCMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUSECCMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUMSBSECCMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERSEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPTXMSBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERSEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPRXMSBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERSEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERTXMSBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERSEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERRXMSBSEC;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTETSTXEDBOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTETSTXEDTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXEDOK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BROADCASTTXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MULTICASTTXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFRAMESTXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED1024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESTXED1519;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXUNDERRUNS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECOLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MULTICOLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXCESSCOLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATECOLS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEFERREDFRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTETSRXEDBOTTOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCTETSRXEDTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXEDOK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BROADCASTRXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MULTICASTRXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFRAMESRXED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED256;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED512;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED1024;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMESRXED1519;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UNDERSIZEFRAMES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXCESSIVERXLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXJABBERS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCSERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXLENERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSYMBOLERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALIGNERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXRESOURCEERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVERRUNS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIPCKERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTCPCKERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUDPCKERRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOFLUSHEDPKTS;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBNSINCR:16;
      uint64_t reservedSpace0:8;
      uint64_t SUBNSINCRLSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERINCRSUBNSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERMSBSEC;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERNSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INCREMENTVAL:30;
      uint64_t reservedSpace0:1;
      uint64_t ADDSUBTRACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERADJUST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSINCREMENT:8;
      uint64_t ALTNSINCR:8;
      uint64_t NUMINCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUTIMERINCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPTXSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPTXNSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPRXSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPTPRXNSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERTXSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERTXNSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERRXSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSUPEERRXNSEC;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUANTP2:16;
      uint64_t QUANTP3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPAUSEQUANT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUANTP4:16;
      uint64_t QUANTP5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPAUSEQUANT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUANTP6:16;
      uint64_t QUANTP7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPAUSEQUANT3;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXLPI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPITIME:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXLPITIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXLPI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPITIME:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXLPITIME;

  uint8_t res9[588];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TXBDTSMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXBDTSMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBDCTRL;

  uint8_t res10[1836];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIOPEN:1;
      uint64_t MIITXERPEN:1;
      uint64_t MIIRXERPEN:1;
      uint64_t MIIPEN:1;
      uint64_t RMIIPEN:1;
      uint64_t TSUTMRTOGPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIITXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t MIIRXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t MIICRSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t MIICOLLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSUEXTCLKLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TSUTMRTOGLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t MDIOLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t RMIILOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSUCLKSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t TSUPRESC:4;
      uint64_t MIISEL:1;
      uint64_t GBLCLKEN:1;
      uint64_t TXREFCLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

};

#define ETH (*(volatile struct ETH_tag *) 0x40024000)

struct SDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDMASYSADDRARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMASYSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFRBLKSIZE:12;
      uint64_t HSTSDMABUFSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t BLKSCNTFORCURRTFR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKSIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDARG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t BLKCNTEN:1;
      uint64_t AUTOCMDEN:2;
      uint64_t DATDIRSEL:1;
      uint64_t MULTSINGBLKSEL:1;
      uint64_t reservedSpace0:10;
      uint64_t RESPTYPESEL:2;
      uint64_t reservedSpace1:1;
      uint64_t CMDCRCCHKEN:1;
      uint64_t CMDINDXCHKEN:1;
      uint64_t DATPRESSEL:1;
      uint64_t CMDTYPE:2;
      uint64_t CMDINDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFRMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRESP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRESP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRESP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRESP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUFDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUFDATPORT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDINHIBITCMD:1;
      uint64_t CMDINHIBITDAT:1;
      uint64_t DATLINEACTIVE:1;
      uint64_t RETUNINGREQ:1;
      uint64_t reservedSpace0:4;
      uint64_t WRTRANACT:1;
      uint64_t RDTRANACT:1;
      uint64_t BUFFERWRITEENABLE:1;
      uint64_t BUFRDEN:1;
      uint64_t reservedSpace1:4;
      uint64_t CARDINS:1;
      uint64_t CARDSTATESTABLE:1;
      uint64_t CARDDETPINLVL:1;
      uint64_t WRPROTSWPINLVL:1;
      uint64_t DAT3TO0SIGLVL:4;
      uint64_t CMDSIGLVL:1;
      uint64_t DAT7TO4SIGLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEDCTRL:1;
      uint64_t DATTRANWD:1;
      uint64_t HSEN:1;
      uint64_t DMASEL:2;
      uint64_t EXTDATTRANWD:1;
      uint64_t CDTSTLVL:1;
      uint64_t CDSIGDET:1;
      uint64_t SDBUSPOWER:1;
      uint64_t SDBUSVOLTSEL:3;
      uint64_t HRDRST:1;
      uint64_t reservedSpace0:3;
      uint64_t STOPATBLKGAPREQ:1;
      uint64_t CONTINUEREQ:1;
      uint64_t RDWAITCTRL:1;
      uint64_t INTATBLKGAP:1;
      uint64_t SPIMODE:1;
      uint64_t BOOTEN:1;
      uint64_t ALTBOOTEN:1;
      uint64_t BOOTACKCHK:1;
      uint64_t WKUPEVNTENONCARDINT:1;
      uint64_t WKUPEVNTENONCINS:1;
      uint64_t WKUPEVNTENONCRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HOSTCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLKEN:1;
      uint64_t INTCLKSTABLE:1;
      uint64_t SDCLKEN:1;
      uint64_t reservedSpace0:2;
      uint64_t CLKGENSEL:1;
      uint64_t UPPSDCLKFRE:2;
      uint64_t SDCLKFREQSEL:8;
      uint64_t DATTOUTCNTVAL:4;
      uint64_t reservedSpace1:4;
      uint64_t SFTRSTA:1;
      uint64_t SFTRSTCMD:1;
      uint64_t SFTRSTDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLOCKCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCOM:1;
      uint64_t TRANCOM:1;
      uint64_t BLKGAPEVT:1;
      uint64_t DMAINT:1;
      uint64_t BFRWRRDY:1;
      uint64_t BFRRDRDY:1;
      uint64_t CARDINS:1;
      uint64_t CARDRM:1;
      uint64_t CARDINT:1;
      uint64_t reservedSpace0:3;
      uint64_t RETUNINGEVT:1;
      uint64_t BOOTACKRCV:1;
      uint64_t BOOTTERMINATE:1;
      uint64_t ERRINT:1;
      uint64_t CMDTOUTERR:1;
      uint64_t CMDCRCERR:1;
      uint64_t CMDENDBITERR:1;
      uint64_t CMDINDEXERR:1;
      uint64_t DATTOUTERR:1;
      uint64_t DATCRCERR:1;
      uint64_t DATENDBITERR:1;
      uint64_t CURRENTLIMITERR:1;
      uint64_t AUTOCMDERR:1;
      uint64_t ADMAERR:1;
      uint64_t reservedSpace1:2;
      uint64_t TARGETRESP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCOMEN:1;
      uint64_t TRANCOMEN:1;
      uint64_t BLKGAPEVTEN:1;
      uint64_t DMAINTEN:1;
      uint64_t BUFWRRDYEN:1;
      uint64_t BUFRDRDYEN:1;
      uint64_t CARDINSEN:1;
      uint64_t CARDRMEN:1;
      uint64_t CARDINTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RETUNINGEVTEN:1;
      uint64_t BOOTACKRCVEN:1;
      uint64_t BOOTTERMINATEEN:1;
      uint64_t reservedSpace1:1;
      uint64_t CMDTOUTERREN:1;
      uint64_t CMDCRCERREN:1;
      uint64_t CMDENDBITERREN:1;
      uint64_t CMDINDEXERREN:1;
      uint64_t DATTOUTERREN:1;
      uint64_t DATCRCERREN:1;
      uint64_t DATENDBITERREN:1;
      uint64_t CURRENTLIMITERREN:1;
      uint64_t AUTOCMDERREN:1;
      uint64_t ADMAERREN:1;
      uint64_t TUNINGERREN:1;
      uint64_t reservedSpace2:1;
      uint64_t TARGETRESPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFENC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDCOMSEN:1;
      uint64_t TRANCOMSEN:1;
      uint64_t BLKGAPEVTSEN:1;
      uint64_t DMAINTSEN:1;
      uint64_t BUFWRRDYSEN:1;
      uint64_t BUFRDRDYSEN:1;
      uint64_t CARDINSSEN:1;
      uint64_t CARDREMSEN:1;
      uint64_t CARDINTSEN:1;
      uint64_t reservedSpace0:3;
      uint64_t RETUNINGEVTSEN:1;
      uint64_t BOOTACKRCVSEN:1;
      uint64_t BOOTTERMINATESEN:1;
      uint64_t reservedSpace1:1;
      uint64_t CMDTOUTERRSEN:1;
      uint64_t CMDCRCERRSEN:1;
      uint64_t CMDENDBITERRSEN:1;
      uint64_t CMDINDEXERRSEN:1;
      uint64_t DATTOUTERRSEN:1;
      uint64_t DATCRCERRSEN:1;
      uint64_t DATENDBITERRSEN:1;
      uint64_t CURRENTLIMITERRSEN:1;
      uint64_t AUTOCMDERRSEN:1;
      uint64_t ADMAERRSEN:1;
      uint64_t TUNINGERRSIGNALENABLE:1;
      uint64_t reservedSpace2:1;
      uint64_t TARGETRESPERRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AC12NOTEXE:1;
      uint64_t AC12TOE:1;
      uint64_t AC12CRCERR:1;
      uint64_t AC12ENDBITERR:1;
      uint64_t AC12INDEXERR:1;
      uint64_t reservedSpace0:2;
      uint64_t CNIBAC12ERR:1;
      uint64_t reservedSpace1:8;
      uint64_t UHSMODESEL:3;
      uint64_t SIGEN1P8V:1;
      uint64_t DRVSTNSEL:2;
      uint64_t EXETUNING:1;
      uint64_t SAMPCLKSEL:1;
      uint64_t reservedSpace2:6;
      uint64_t ASYNCINTEN:1;
      uint64_t PRSTVALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC12ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTCLKFREQ:6;
      uint64_t reservedSpace0:1;
      uint64_t TMOUTCLKUNIT:1;
      uint64_t BASECLKFREQSD:8;
      uint64_t MAXBLOCKLEN:2;
      uint64_t EXTMEDIABUSSUP:1;
      uint64_t ADMA2SUP:1;
      uint64_t reservedSpace1:1;
      uint64_t HSSUP:1;
      uint64_t SDMASUP:1;
      uint64_t SUSRESSUP:1;
      uint64_t VOLTSUP3P3V:1;
      uint64_t VOLTSUP3P0V:1;
      uint64_t VOLTSUP1P8V:1;
      uint64_t reservedSpace2:1;
      uint64_t SYSBUS64BSUP:1;
      uint64_t ASYNCINTSUP:1;
      uint64_t IFSLOTTYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPAB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR50SUP:1;
      uint64_t SDR104SUP:1;
      uint64_t DDR50SUP:1;
      uint64_t reservedSpace0:1;
      uint64_t DRVTYPASUP:1;
      uint64_t DRVTYPCSUP:1;
      uint64_t DRVTYPDSUP:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMCNTRETUN:4;
      uint64_t reservedSpace2:1;
      uint64_t USETUNSDR50:1;
      uint64_t RETUNEMODES:2;
      uint64_t CLOCKKMUL:8;
      uint64_t SPIMODE:1;
      uint64_t SPIBLOCKMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPAB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCUR3P3VAL:8;
      uint64_t MAXCUR3P0VAL:8;
      uint64_t MAXCUR1P8VAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAXCURCAPAB;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AC12NEX:1;
      uint64_t AC12TOE:1;
      uint64_t AC12CRCE:1;
      uint64_t AC12EBE:1;
      uint64_t AC12INDXE:1;
      uint64_t reservedSpace0:2;
      uint64_t CNIBAC12E:1;
      uint64_t reservedSpace1:8;
      uint64_t CMDTOE:1;
      uint64_t CMDCRCE:1;
      uint64_t CMDEBE:1;
      uint64_t CMDINDXE:1;
      uint64_t DATTOE:1;
      uint64_t DATCRCE:1;
      uint64_t DATEBE:1;
      uint64_t CURLIMITE:1;
      uint64_t AC12E:1;
      uint64_t ADMAE:1;
      uint64_t TUNINGE:1;
      uint64_t reservedSpace2:1;
      uint64_t VENSPECE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEVTERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADMAES:2;
      uint64_t ADMALME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADSADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADSADDR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INITSDCLKFREQVAL:10;
      uint64_t INITCLCKGENVAL:1;
      uint64_t reservedSpace0:3;
      uint64_t INITDRVSTVAL:2;
      uint64_t DSPSDCLKFREQVAL:10;
      uint64_t DSPCLKGENVAL:1;
      uint64_t reservedSpace1:3;
      uint64_t DSPDRVSTVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSDCLKFREQVAL:10;
      uint64_t HSPCLKGENVAL:1;
      uint64_t reservedSpace0:3;
      uint64_t HSPDRVSTVAL:2;
      uint64_t SDR12SDCLKFREQVAL:10;
      uint64_t SDR12CLKGENVAL:1;
      uint64_t reservedSpace1:3;
      uint64_t SDR12DRVSTVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR25SDCLKFREQVAL:10;
      uint64_t SDR25CLKGENVAL:1;
      uint64_t reservedSpace0:3;
      uint64_t SDR25DRVSTVAL:2;
      uint64_t SDR50SDCLKFREQVAL:10;
      uint64_t SDR50CLCKGENVAL:1;
      uint64_t reservedSpace1:3;
      uint64_t SDR50DRVSTVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTVAL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR104SDCLKFREQVAL:10;
      uint64_t SDR104CLKGENVAL:1;
      uint64_t reservedSpace0:3;
      uint64_t SDR104DRVSTVAL:2;
      uint64_t DDR50SDCLKFREQVAL:10;
      uint64_t DDR50CLKGENVAL:1;
      uint64_t reservedSpace1:3;
      uint64_t DDR50DRVSTVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSTVAL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BOOTDATTOCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOOTTOCTRL;

  uint8_t res2[136];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSLOT0:1;
      uint64_t reservedSpace0:15;
      uint64_t SPECVERNUM:8;
      uint64_t VENDVERNUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLOTINTSTAT;

  uint8_t res3[1792];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITAPDLYEN:1;
      uint64_t ITAPDLYSEL:5;
      uint64_t ITAPCHGWIN:1;
      uint64_t OTAPDLYEN:1;
      uint64_t OTAPDLYSEL:4;
      uint64_t reservedSpace0:4;
      uint64_t TXDLYMUXSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUNINGCNT:6;
      uint64_t TOUTCLKFREQ:6;
      uint64_t TOUTCLKUNIT:1;
      uint64_t BASECLKFREQ:8;
      uint64_t MAXBLKLEN:2;
      uint64_t C8BITSUP:1;
      uint64_t CADMA2SUP:1;
      uint64_t CHSSUP:1;
      uint64_t CSDMASUP:1;
      uint64_t CSUSPRESSUP:1;
      uint64_t C3P3VSUP:1;
      uint64_t C3P0VSUP:1;
      uint64_t C1P8VSUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASYNCINTRSUP:1;
      uint64_t SLOTTYPE:2;
      uint64_t CSDR50SUP:1;
      uint64_t CSDR104SUP:1;
      uint64_t CDDR50SUP:1;
      uint64_t CDRVASUP:1;
      uint64_t CDRVCSUP:1;
      uint64_t CDRVDSUP:1;
      uint64_t RETUNTMRCTL:4;
      uint64_t TUNSDR50:1;
      uint64_t RETUNMODES:2;
      uint64_t SPISUP:1;
      uint64_t reservedSpace0:1;
      uint64_t ASYNCWKUPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INITSDCLKFREQ:10;
      uint64_t INITCLKGENEN:1;
      uint64_t INITDRVST:2;
      uint64_t reservedSpace0:3;
      uint64_t DSPSDCLKFREQ:10;
      uint64_t DSPCLKGENEN:1;
      uint64_t DSPDRVST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGPRESETVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSPSDCLKFREQ:10;
      uint64_t HSPCLKGENEN:1;
      uint64_t HSPDRVST:2;
      uint64_t reservedSpace0:3;
      uint64_t SDR12SDCLKFREQ:10;
      uint64_t SDR12CLKGENEN:1;
      uint64_t SDR12DRVST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGPRESETVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR25SDCLKFREQ:10;
      uint64_t SDR25CLKGENEN:1;
      uint64_t SDR25DRVST:2;
      uint64_t reservedSpace0:3;
      uint64_t SDR50SDCLKFREQ:10;
      uint64_t SDR50CLKGENEN:1;
      uint64_t SDR50DRVST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGPRESETVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDR104SDCLKFREQ:10;
      uint64_t SDR104CLKGENEN:1;
      uint64_t SDR104DRVST:2;
      uint64_t reservedSpace0:3;
      uint64_t DDR50SDCLKFREQ:10;
      uint64_t DDR50CLKGENEN:1;
      uint64_t DDR50DRVST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGPRESETVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t WPLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKPEN:1;
      uint64_t CMDPEN:1;
      uint64_t D0PEN:1;
      uint64_t D1PEN:1;
      uint64_t D2PEN:1;
      uint64_t D3PEN:1;
      uint64_t D4PEN:1;
      uint64_t D5PEN:1;
      uint64_t D6PEN:1;
      uint64_t D7PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

};

#define SDIO (*(volatile struct SDIO_tag *) 0x400f1000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_DOUT;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_PINLOCKN;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PA_OVTDIS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_DOUT;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_PINLOCKN;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PB_OVTDIS;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_DOUT;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_PINLOCKN;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC_OVTDIS;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_DOUT;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_PINLOCKN;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD_OVTDIS;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_DOUT;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_PINLOCKN;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PE_OVTDIS;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_DOUT;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_PINLOCKN;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PF_OVTDIS;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_DOUT;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_PINLOCKN;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG_OVTDIS;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_DOUT;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_PINLOCKN;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PH_OVTDIS;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_DOUT;

  uint8_t res24[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_PINLOCKN;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PI_OVTDIS;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_DOUT;

  uint8_t res27[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_PINLOCKN;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PJ_OVTDIS;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_DOUT;

  uint8_t res30[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_PINLOCKN;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PK_OVTDIS;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:1;
      uint64_t reservedSpace0:3;
      uint64_t SLEWRATE:3;
      uint64_t reservedSpace1:5;
      uint64_t DINDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t DRIVESTRENGTHALT:1;
      uint64_t reservedSpace3:3;
      uint64_t SLEWRATEALT:3;
      uint64_t reservedSpace4:5;
      uint64_t DINDISALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:4;
      uint64_t MODE1:4;
      uint64_t MODE2:4;
      uint64_t MODE3:4;
      uint64_t MODE4:4;
      uint64_t MODE5:4;
      uint64_t MODE6:4;
      uint64_t MODE7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_MODEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:4;
      uint64_t MODE9:4;
      uint64_t MODE10:4;
      uint64_t MODE11:4;
      uint64_t MODE12:4;
      uint64_t MODE13:4;
      uint64_t MODE14:4;
      uint64_t MODE15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_MODEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_DOUT;

  uint8_t res33[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOUTTGL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_DOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINLOCKN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_PINLOCKN;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PL_OVTDIS;

  uint8_t res35[452];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIPSEL0:4;
      uint64_t EXTIPSEL1:4;
      uint64_t EXTIPSEL2:4;
      uint64_t EXTIPSEL3:4;
      uint64_t EXTIPSEL4:4;
      uint64_t EXTIPSEL5:4;
      uint64_t EXTIPSEL6:4;
      uint64_t EXTIPSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIPSELL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIPSEL8:4;
      uint64_t EXTIPSEL9:4;
      uint64_t EXTIPSEL10:4;
      uint64_t EXTIPSEL11:4;
      uint64_t EXTIPSEL12:4;
      uint64_t EXTIPSEL13:4;
      uint64_t EXTIPSEL14:4;
      uint64_t EXTIPSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIPSELH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIPINSEL0:2;
      uint64_t reservedSpace0:2;
      uint64_t EXTIPINSEL1:2;
      uint64_t reservedSpace1:2;
      uint64_t EXTIPINSEL2:2;
      uint64_t reservedSpace2:2;
      uint64_t EXTIPINSEL3:2;
      uint64_t reservedSpace3:2;
      uint64_t EXTIPINSEL4:2;
      uint64_t reservedSpace4:2;
      uint64_t EXTIPINSEL5:2;
      uint64_t reservedSpace5:2;
      uint64_t EXTIPINSEL6:2;
      uint64_t reservedSpace6:2;
      uint64_t EXTIPINSEL7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIPINSELL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIPINSEL8:2;
      uint64_t reservedSpace0:2;
      uint64_t EXTIPINSEL9:2;
      uint64_t reservedSpace1:2;
      uint64_t EXTIPINSEL10:2;
      uint64_t reservedSpace2:2;
      uint64_t EXTIPINSEL11:2;
      uint64_t reservedSpace3:2;
      uint64_t EXTIPINSEL12:2;
      uint64_t reservedSpace4:2;
      uint64_t EXTIPINSEL13:2;
      uint64_t reservedSpace5:2;
      uint64_t EXTIPINSEL14:2;
      uint64_t reservedSpace6:2;
      uint64_t EXTIPINSEL15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIPINSELH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIRISE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIRISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIFALL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIFALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EM4WU0:1;
      uint64_t EM4WU1:1;
      uint64_t EM4WU2:1;
      uint64_t EM4WU3:1;
      uint64_t EM4WU4:1;
      uint64_t EM4WU5:1;
      uint64_t EM4WU6:1;
      uint64_t EM4WU7:1;
      uint64_t EM4WU8:1;
      uint64_t EM4WU9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTILEVEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT:16;
      uint64_t EM4WU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT:16;
      uint64_t EM4WU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT:16;
      uint64_t EM4WU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT:16;
      uint64_t EM4WU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EM4WUEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM4WUEN;

  uint8_t res36[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCLKTCKPEN:1;
      uint64_t SWDIOTMSPEN:1;
      uint64_t TDOPEN:1;
      uint64_t TDIPEN:1;
      uint64_t SWVPEN:1;
      uint64_t reservedSpace0:11;
      uint64_t ETMTCLKPEN:1;
      uint64_t ETMTD0PEN:1;
      uint64_t ETMTD1PEN:1;
      uint64_t ETMTD2PEN:1;
      uint64_t ETMTD3PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWVLOC:6;
      uint64_t ETMLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res37[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t EM4WU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INSENSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40088000)

struct PRS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0PULSE:1;
      uint64_t CH1PULSE:1;
      uint64_t CH2PULSE:1;
      uint64_t CH3PULSE:1;
      uint64_t CH4PULSE:1;
      uint64_t CH5PULSE:1;
      uint64_t CH6PULSE:1;
      uint64_t CH7PULSE:1;
      uint64_t CH8PULSE:1;
      uint64_t CH9PULSE:1;
      uint64_t CH10PULSE:1;
      uint64_t CH11PULSE:1;
      uint64_t CH12PULSE:1;
      uint64_t CH13PULSE:1;
      uint64_t CH14PULSE:1;
      uint64_t CH15PULSE:1;
      uint64_t CH16PULSE:1;
      uint64_t CH17PULSE:1;
      uint64_t CH18PULSE:1;
      uint64_t CH19PULSE:1;
      uint64_t CH20PULSE:1;
      uint64_t CH21PULSE:1;
      uint64_t CH22PULSE:1;
      uint64_t CH23PULSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWPULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0LEVEL:1;
      uint64_t CH1LEVEL:1;
      uint64_t CH2LEVEL:1;
      uint64_t CH3LEVEL:1;
      uint64_t CH4LEVEL:1;
      uint64_t CH5LEVEL:1;
      uint64_t CH6LEVEL:1;
      uint64_t CH7LEVEL:1;
      uint64_t CH8LEVEL:1;
      uint64_t CH9LEVEL:1;
      uint64_t CH10LEVEL:1;
      uint64_t CH11LEVEL:1;
      uint64_t CH12LEVEL:1;
      uint64_t CH13LEVEL:1;
      uint64_t CH14LEVEL:1;
      uint64_t CH15LEVEL:1;
      uint64_t CH16LEVEL:1;
      uint64_t CH17LEVEL:1;
      uint64_t CH18LEVEL:1;
      uint64_t CH19LEVEL:1;
      uint64_t CH20LEVEL:1;
      uint64_t CH21LEVEL:1;
      uint64_t CH22LEVEL:1;
      uint64_t CH23LEVEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWLEVEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0PEN:1;
      uint64_t CH1PEN:1;
      uint64_t CH2PEN:1;
      uint64_t CH3PEN:1;
      uint64_t CH4PEN:1;
      uint64_t CH5PEN:1;
      uint64_t CH6PEN:1;
      uint64_t CH7PEN:1;
      uint64_t CH8PEN:1;
      uint64_t CH9PEN:1;
      uint64_t CH10PEN:1;
      uint64_t CH11PEN:1;
      uint64_t CH12PEN:1;
      uint64_t CH13PEN:1;
      uint64_t CH14PEN:1;
      uint64_t CH15PEN:1;
      uint64_t CH16PEN:1;
      uint64_t CH17PEN:1;
      uint64_t CH18PEN:1;
      uint64_t CH19PEN:1;
      uint64_t CH20PEN:1;
      uint64_t CH21PEN:1;
      uint64_t CH22PEN:1;
      uint64_t CH23PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH4LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH5LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH6LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH7LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH8LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH9LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH10LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH11LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH12LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH13LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH14LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH15LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH16LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH17LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH18LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH19LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH20LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CH21LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CH22LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CH23LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEVONPRS:1;
      uint64_t SEVONPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAREQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAREQ1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0VAL:1;
      uint64_t CH1VAL:1;
      uint64_t CH2VAL:1;
      uint64_t CH3VAL:1;
      uint64_t CH4VAL:1;
      uint64_t CH5VAL:1;
      uint64_t CH6VAL:1;
      uint64_t CH7VAL:1;
      uint64_t CH8VAL:1;
      uint64_t CH9VAL:1;
      uint64_t CH10VAL:1;
      uint64_t CH11VAL:1;
      uint64_t CH12VAL:1;
      uint64_t CH13VAL:1;
      uint64_t CH14VAL:1;
      uint64_t CH15VAL:1;
      uint64_t CH16VAL:1;
      uint64_t CH17VAL:1;
      uint64_t CH18VAL:1;
      uint64_t CH19VAL:1;
      uint64_t CH20VAL:1;
      uint64_t CH21VAL:1;
      uint64_t CH22VAL:1;
      uint64_t CH23VAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:3;
      uint64_t reservedSpace0:5;
      uint64_t SOURCESEL:7;
      uint64_t reservedSpace1:5;
      uint64_t EDSEL:2;
      uint64_t reservedSpace2:3;
      uint64_t STRETCH:1;
      uint64_t INV:1;
      uint64_t ORPREV:1;
      uint64_t ANDNEXT:1;
      uint64_t reservedSpace3:1;
      uint64_t ASYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_CTRL;

};

#define PRS (*(volatile struct PRS_tag *) 0x400e6000)

struct LDMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPRSSETEN:8;
      uint64_t SYNCPRSCLREN:8;
      uint64_t reservedSpace0:8;
      uint64_t NUMFIXED:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ANYBUSY:1;
      uint64_t ANYREQ:1;
      uint64_t reservedSpace0:1;
      uint64_t CHGRANT:5;
      uint64_t CHERROR:5;
      uint64_t reservedSpace1:3;
      uint64_t FIFOLEVEL:5;
      uint64_t reservedSpace2:3;
      uint64_t CHNUM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCTRIG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHEN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHDONE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHDONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGHALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWREQ:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQDIS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQPEND:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKLOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINKLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQCLEAR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQCLEAR;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:24;
      uint64_t reservedSpace0:7;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:24;
      uint64_t reservedSpace0:7;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:24;
      uint64_t reservedSpace0:7;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:24;
      uint64_t reservedSpace0:7;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0_LINK;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1_LINK;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2_LINK;

  uint8_t res5[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH3_LINK;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH4_LINK;

  uint8_t res7[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH5_LINK;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH6_LINK;

  uint8_t res9[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH7_LINK;

  uint8_t res10[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH8_LINK;

  uint8_t res11[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH9_LINK;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH10_LINK;

  uint8_t res13[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH11_LINK;

  uint8_t res14[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH12_LINK;

  uint8_t res15[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH13_LINK;

  uint8_t res16[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH14_LINK;

  uint8_t res17[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH15_LINK;

  uint8_t res18[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH16_LINK;

  uint8_t res19[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH17_LINK;

  uint8_t res20[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH18_LINK;

  uint8_t res21[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH19_LINK;

  uint8_t res22[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH20_LINK;

  uint8_t res23[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH21_LINK;

  uint8_t res24[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH22_LINK;

  uint8_t res25[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t SOURCESEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_REQSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARBSLOTS:2;
      uint64_t reservedSpace1:2;
      uint64_t SRCINCSIGN:1;
      uint64_t DSTINCSIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOPCNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_LOOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRUCTTYPE:2;
      uint64_t reservedSpace0:1;
      uint64_t STRUCTREQ:1;
      uint64_t XFERCNT:11;
      uint64_t BYTESWAP:1;
      uint64_t BLOCKSIZE:4;
      uint64_t DONEIFSEN:1;
      uint64_t REQMODE:1;
      uint64_t DECLOOPCNT:1;
      uint64_t IGNORESREQ:1;
      uint64_t SRCINC:2;
      uint64_t SIZE:2;
      uint64_t DSTINC:2;
      uint64_t SRCMODE:1;
      uint64_t DSTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINKMODE:1;
      uint64_t LINK:1;
      uint64_t LINKADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH23_LINK;

};

#define LDMA (*(volatile struct LDMA_tag *) 0x40002000)

struct FPUEH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIOC:1;
      uint64_t FPDZC:1;
      uint64_t FPUFC:1;
      uint64_t FPOFC:1;
      uint64_t FPIDC:1;
      uint64_t FPIXC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIOC:1;
      uint64_t FPDZC:1;
      uint64_t FPUFC:1;
      uint64_t FPOFC:1;
      uint64_t FPIDC:1;
      uint64_t FPIXC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIOC:1;
      uint64_t FPDZC:1;
      uint64_t FPUFC:1;
      uint64_t FPOFC:1;
      uint64_t FPIDC:1;
      uint64_t FPIXC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPIOC:1;
      uint64_t FPDZC:1;
      uint64_t FPUFC:1;
      uint64_t FPOFC:1;
      uint64_t FPIDC:1;
      uint64_t FPIXC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

};

#define FPUEH (*(volatile struct FPUEH_tag *) 0x40001000)

struct GPCRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t POLYSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t BYTEMODE:1;
      uint64_t BITREVERSE:1;
      uint64_t BYTEREVERSE:1;
      uint64_t reservedSpace2:2;
      uint64_t AUTOINIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTDATAHWORD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTDATAHWORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTDATABYTE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTDATABYTE;

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
      uint64_t DATAREV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABYTEREV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATABYTEREV;

};

#define GPCRC (*(volatile struct GPCRC_tag *) 0x4001c000)

struct CAN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t IE:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RECERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BITTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
      uint64_t reservedSpace0:9;
      uint64_t INTSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQSTOUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MESSAGEDATA;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MESSAGESTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t DBGHALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPEN:1;
      uint64_t reservedSpace0:1;
      uint64_t RXLOC:6;
      uint64_t TXLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t TXRQSTNEWDAT:1;
      uint64_t CLRINTPND:1;
      uint64_t CONTROL:1;
      uint64_t ARBACC:1;
      uint64_t MASKACC:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CMDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:29;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MESSAGEOF:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CTRL;

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
  } __attribute__((aligned(4))) MIR0_DATAL;

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
  } __attribute__((aligned(4))) MIR0_DATAH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGNUM:6;
      uint64_t reservedSpace0:9;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CMDREQ;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t TXRQSTNEWDAT:1;
      uint64_t CLRINTPND:1;
      uint64_t CONTROL:1;
      uint64_t ARBACC:1;
      uint64_t MASKACC:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CMDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:29;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MESSAGEOF:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CTRL;

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
  } __attribute__((aligned(4))) MIR1_DATAL;

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
  } __attribute__((aligned(4))) MIR1_DATAH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGNUM:6;
      uint64_t reservedSpace0:9;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CMDREQ;

};

#define CAN0 (*(volatile struct CAN0_tag *) 0x40004000)

struct CAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t IE:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RECERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BITTIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
      uint64_t reservedSpace0:9;
      uint64_t INTSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQSTOUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MESSAGEDATA;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MESSAGESTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t DBGHALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MESSAGE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF0IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF1IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPEN:1;
      uint64_t reservedSpace0:1;
      uint64_t RXLOC:6;
      uint64_t TXLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t TXRQSTNEWDAT:1;
      uint64_t CLRINTPND:1;
      uint64_t CONTROL:1;
      uint64_t ARBACC:1;
      uint64_t MASKACC:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CMDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:29;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MESSAGEOF:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CTRL;

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
  } __attribute__((aligned(4))) MIR0_DATAL;

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
  } __attribute__((aligned(4))) MIR0_DATAH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGNUM:6;
      uint64_t reservedSpace0:9;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR0_CMDREQ;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t TXRQSTNEWDAT:1;
      uint64_t CLRINTPND:1;
      uint64_t CONTROL:1;
      uint64_t ARBACC:1;
      uint64_t MASKACC:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CMDMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:29;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:3;
      uint64_t EOB:1;
      uint64_t TXRQST:1;
      uint64_t RMTEN:1;
      uint64_t RXIE:1;
      uint64_t TXIE:1;
      uint64_t UMASK:1;
      uint64_t INTPND:1;
      uint64_t MESSAGEOF:1;
      uint64_t DATAVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CTRL;

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
  } __attribute__((aligned(4))) MIR1_DATAL;

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
  } __attribute__((aligned(4))) MIR1_DATAH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGNUM:6;
      uint64_t reservedSpace0:9;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIR1_CMDREQ;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40004400)

struct TIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER0 (*(volatile struct TIMER0_tag *) 0x40018000)

struct TIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER1 (*(volatile struct TIMER1_tag *) 0x40018400)

struct TIMER2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER2 (*(volatile struct TIMER2_tag *) 0x40018800)

struct TIMER3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER3 (*(volatile struct TIMER3_tag *) 0x40018c00)

struct TIMER4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER4 (*(volatile struct TIMER4_tag *) 0x40019000)

struct TIMER5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER5 (*(volatile struct TIMER5_tag *) 0x40019400)

struct TIMER6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define TIMER6 (*(volatile struct TIMER6_tag *) 0x40019800)

struct WTIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define WTIMER0 (*(volatile struct WTIMER0_tag *) 0x4001a000)

struct WTIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define WTIMER1 (*(volatile struct WTIMER1_tag *) 0x4001a400)

struct WTIMER2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define WTIMER2 (*(volatile struct WTIMER2_tag *) 0x4001a800)

struct WTIMER3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t reservedSpace0:1;
      uint64_t SYNC:1;
      uint64_t OSMEN:1;
      uint64_t QDM:1;
      uint64_t DEBUGRUN:1;
      uint64_t DMACLRACT:1;
      uint64_t RISEA:2;
      uint64_t FALLA:2;
      uint64_t reservedSpace1:1;
      uint64_t X2CNT:1;
      uint64_t DISSYNCOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace3:6;
      uint64_t PRESC:4;
      uint64_t ATI:1;
      uint64_t RSSCOIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
      uint64_t DIR:1;
      uint64_t TOPBV:1;
      uint64_t reservedSpace0:5;
      uint64_t CCVBV0:1;
      uint64_t CCVBV1:1;
      uint64_t CCVBV2:1;
      uint64_t CCVBV3:1;
      uint64_t reservedSpace1:4;
      uint64_t ICV0:1;
      uint64_t ICV1:1;
      uint64_t ICV2:1;
      uint64_t ICV3:1;
      uint64_t reservedSpace2:4;
      uint64_t CCPOL0:1;
      uint64_t CCPOL1:1;
      uint64_t CCPOL2:1;
      uint64_t CCPOL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t UF:1;
      uint64_t DIRCHG:1;
      uint64_t reservedSpace0:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t CC3:1;
      uint64_t ICBOF0:1;
      uint64_t ICBOF1:1;
      uint64_t ICBOF2:1;
      uint64_t ICBOF3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMERLOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0PEN:1;
      uint64_t CC1PEN:1;
      uint64_t CC2PEN:1;
      uint64_t CC3PEN:1;
      uint64_t reservedSpace0:4;
      uint64_t CDTI0PEN:1;
      uint64_t CDTI1PEN:1;
      uint64_t CDTI2PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CC1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CC2LOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CC3LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTI0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t CDTI1LOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CDTI2LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC2;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t OUTINV:1;
      uint64_t reservedSpace0:1;
      uint64_t COIST:1;
      uint64_t reservedSpace1:3;
      uint64_t CMOA:2;
      uint64_t COFOA:2;
      uint64_t CUFOA:2;
      uint64_t reservedSpace2:2;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace3:3;
      uint64_t ICEDGE:2;
      uint64_t ICEVCTRL:2;
      uint64_t PRSCONF:1;
      uint64_t INSEL:1;
      uint64_t FILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCVB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC3_CCVB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDAS:1;
      uint64_t DTIPOL:1;
      uint64_t DTCINV:1;
      uint64_t DTPRSSEL:5;
      uint64_t DTAR:1;
      uint64_t DTFATS:1;
      uint64_t reservedSpace0:13;
      uint64_t DTPRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRESC:4;
      uint64_t reservedSpace0:4;
      uint64_t DTRISET:6;
      uint64_t reservedSpace1:2;
      uint64_t DTFALLT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTTIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t DTPRS1FSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t DTFA:2;
      uint64_t reservedSpace2:6;
      uint64_t DTPRS0FEN:1;
      uint64_t DTPRS1FEN:1;
      uint64_t DTDBGFEN:1;
      uint64_t DTLOCKUPFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOGCC0EN:1;
      uint64_t DTOGCC1EN:1;
      uint64_t DTOGCC2EN:1;
      uint64_t DTOGCDTI0EN:1;
      uint64_t DTOGCDTI1EN:1;
      uint64_t DTOGCDTI2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTOGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0F:1;
      uint64_t DTPRS1F:1;
      uint64_t DTDBGF:1;
      uint64_t DTLOCKUPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTPRS0FC:1;
      uint64_t DTPRS1FC:1;
      uint64_t DTDBGFC:1;
      uint64_t TLOCKUPFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTFAULTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTLOCK;

};

#define WTIMER3 (*(volatile struct WTIMER3_tag *) 0x4001ac00)

struct USART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART0 (*(volatile struct USART0_tag *) 0x40010000)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART1 (*(volatile struct USART1_tag *) 0x40010400)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART2 (*(volatile struct USART2_tag *) 0x40010800)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40010c00)

struct USART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART4 (*(volatile struct USART4_tag *) 0x40011000)

struct USART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define USART5 (*(volatile struct USART5_tag *) 0x40011400)

struct UART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define UART0 (*(volatile struct UART0_tag *) 0x40014000)

struct UART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC:1;
      uint64_t LOOPBK:1;
      uint64_t CCEN:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t OVS:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKPOL:1;
      uint64_t CLKPHA:1;
      uint64_t MSBF:1;
      uint64_t CSMA:1;
      uint64_t TXBIL:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t CSINV:1;
      uint64_t AUTOCS:1;
      uint64_t AUTOTRI:1;
      uint64_t SCMODE:1;
      uint64_t SCRETRANS:1;
      uint64_t SKIPPERRF:1;
      uint64_t BIT8DV:1;
      uint64_t ERRSDMA:1;
      uint64_t ERRSRX:1;
      uint64_t ERRSTX:1;
      uint64_t SSSEARLY:1;
      uint64_t reservedSpace1:2;
      uint64_t BYTESWAP:1;
      uint64_t AUTOTX:1;
      uint64_t MVDIS:1;
      uint64_t SMSDELAY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATABITS:4;
      uint64_t reservedSpace0:4;
      uint64_t PARITY:2;
      uint64_t reservedSpace1:2;
      uint64_t STOPBITS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t RXTEN:1;
      uint64_t TXTEN:1;
      uint64_t AUTOTXTEN:1;
      uint64_t TXARX0EN:1;
      uint64_t TXARX1EN:1;
      uint64_t TXARX2EN:1;
      uint64_t RXATX0EN:1;
      uint64_t RXATX1EN:1;
      uint64_t RXATX2EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t MASTEREN:1;
      uint64_t MASTERDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t TXTRIEN:1;
      uint64_t TXTRIDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t MASTER:1;
      uint64_t RXBLOCK:1;
      uint64_t TXTRI:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t TXBDRIGHT:1;
      uint64_t TXBSRIGHT:1;
      uint64_t RXDATAVRIGHT:1;
      uint64_t RXFULLRIGHT:1;
      uint64_t TXIDLE:1;
      uint64_t TIMERRESTARTED:1;
      uint64_t reservedSpace0:1;
      uint64_t TXBUFCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:20;
      uint64_t reservedSpace1:8;
      uint64_t AUTOBAUDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR0:1;
      uint64_t FERR0:1;
      uint64_t RXDATA1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERR1:1;
      uint64_t FERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP0:1;
      uint64_t FERRP0:1;
      uint64_t RXDATAP1:9;
      uint64_t reservedSpace1:5;
      uint64_t PERRP1:1;
      uint64_t FERRP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATAX:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT:1;
      uint64_t TXTRIAT:1;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:9;
      uint64_t reservedSpace0:2;
      uint64_t UBRXAT0:1;
      uint64_t TXTRIAT0:1;
      uint64_t TXBREAK0:1;
      uint64_t TXDISAT0:1;
      uint64_t RXENAT0:1;
      uint64_t TXDATA1:9;
      uint64_t reservedSpace1:2;
      uint64_t UBRXAT1:1;
      uint64_t TXTRIAT1:1;
      uint64_t TXBREAK1:1;
      uint64_t TXDISAT1:1;
      uint64_t RXENAT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t TXUF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t SSM:1;
      uint64_t CCF:1;
      uint64_t TXIDLE:1;
      uint64_t TCMP0:1;
      uint64_t TCMP1:1;
      uint64_t TCMP2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREN:1;
      uint64_t IRPW:2;
      uint64_t IRFILT:1;
      uint64_t reservedSpace0:3;
      uint64_t IRPRSEN:1;
      uint64_t IRPRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t reservedSpace0:2;
      uint64_t RXPRS:1;
      uint64_t CLKPRSSEL:5;
      uint64_t reservedSpace1:2;
      uint64_t CLKPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t MONO:1;
      uint64_t JUSTIFY:1;
      uint64_t DMASPLIT:1;
      uint64_t DELAY:1;
      uint64_t reservedSpace0:3;
      uint64_t FORMAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TXDELAY:3;
      uint64_t reservedSpace1:1;
      uint64_t CSSETUP:3;
      uint64_t reservedSpace2:1;
      uint64_t ICS:3;
      uint64_t reservedSpace3:1;
      uint64_t CSHOLD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGHALT:1;
      uint64_t CTSINV:1;
      uint64_t CTSEN:1;
      uint64_t RTSINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMPVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t TSTART:3;
      uint64_t reservedSpace1:1;
      uint64_t TSTOP:3;
      uint64_t reservedSpace2:1;
      uint64_t RESTARTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMECMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
      uint64_t CSPEN:1;
      uint64_t CLKPEN:1;
      uint64_t CTSPEN:1;
      uint64_t RTSPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
      uint64_t reservedSpace1:2;
      uint64_t CSLOC:6;
      uint64_t reservedSpace2:2;
      uint64_t CLKLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTSLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t RTSLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC1;

};

#define UART1 (*(volatile struct UART1_tag *) 0x40014400)

struct QSPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENBSPI:1;
      uint64_t SELCLKPOL:1;
      uint64_t SELCLKPHASE:1;
      uint64_t PHYMODEENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t ENBDIRACCCTLR:1;
      uint64_t ENBLEGACYIPMODE:1;
      uint64_t PERIPHSELDEC:1;
      uint64_t PERIPHCSLINES:2;
      uint64_t reservedSpace1:2;
      uint64_t WRPROTFLASH:1;
      uint64_t reservedSpace2:1;
      uint64_t ENBAHBADDRREMAP:1;
      uint64_t ENTERXIPMODE:1;
      uint64_t ENTERXIPMODEIMM:1;
      uint64_t MSTRBAUDDIV:4;
      uint64_t ENABLEAHBDECODER:1;
      uint64_t ENABLEDTRPROTOCOL:1;
      uint64_t PIPELINEPHY:1;
      uint64_t reservedSpace3:3;
      uint64_t CRCENABLE:1;
      uint64_t DUALBYTEOPCODEEN:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDOPCODENONXIP:8;
      uint64_t INSTRTYPE:2;
      uint64_t DDREN:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDRXFERTYPESTDMODE:2;
      uint64_t reservedSpace1:2;
      uint64_t DATAXFERTYPEEXTMODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODEBITENABLE:1;
      uint64_t reservedSpace3:3;
      uint64_t DUMMYRDCLKCYCLES:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVINSTRRDCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WROPCODE:8;
      uint64_t WELDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t ADDRXFERTYPESTDMODE:2;
      uint64_t reservedSpace1:2;
      uint64_t DATAXFERTYPEEXTMODE:2;
      uint64_t reservedSpace2:6;
      uint64_t DUMMYWRCLKCYCLES:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVINSTRWRCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DINIT:8;
      uint64_t DAFTER:8;
      uint64_t DBTWN:8;
      uint64_t DNSS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYPASS:1;
      uint64_t DELAY:4;
      uint64_t reservedSpace0:3;
      uint64_t DQSENABLE:1;
      uint64_t reservedSpace1:7;
      uint64_t DDRREADDELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDDATACAPTURE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMADDRBYTES:4;
      uint64_t BYTESPERDEVICEPAGE:12;
      uint64_t BYTESPERSUBSECTOR:5;
      uint64_t MEMSIZEONCS0:2;
      uint64_t MEMSIZEONCS1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVSIZECONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMPARTITIONCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDAHBADDRTRIGGER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REMAPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:8;
      uint64_t CHUNKSIZE:3;
      uint64_t reservedSpace0:4;
      uint64_t CRCOUTENABLE:1;
      uint64_t RXCRCDATAUP:8;
      uint64_t RXCRCDATALOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODEBITCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAMFILLINDACREAD:16;
      uint64_t SRAMFILLINDACWRITE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRAMFILL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEVEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEVEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPCODE:8;
      uint64_t POLLINGBITINDEX:3;
      uint64_t reservedSpace0:2;
      uint64_t POLLINGPOLARITY:1;
      uint64_t DISABLEPOLLING:1;
      uint64_t ENABLEPOLLINGEXP:1;
      uint64_t POLLCOUNT:8;
      uint64_t POLLREPDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRITECOMPLETIONCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOOFPOLLSBEFEXP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOOFPOLLSBEFEXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODEMFAIL:1;
      uint64_t UNDERFLOWDET:1;
      uint64_t INDIRECTOPDONE:1;
      uint64_t INDIRECTREADREJECT:1;
      uint64_t PROTWRATTEMPT:1;
      uint64_t ILLEGALACCESSDET:1;
      uint64_t INDIRECTXFERLEVELBREACH:1;
      uint64_t RECVOVERFLOW:1;
      uint64_t TXFIFONOTFULL:1;
      uint64_t TXFIFOFULL:1;
      uint64_t RXFIFONOTEMPTY:1;
      uint64_t RXFIFOFULL:1;
      uint64_t INDRDSRAMFULL:1;
      uint64_t POLLEXPINT:1;
      uint64_t STIGREQINT:1;
      uint64_t reservedSpace0:1;
      uint64_t RXCRCDATAERR:1;
      uint64_t RXCRCDATAVAL:1;
      uint64_t TXCRCCHUNKBRK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODEMFAILMASK:1;
      uint64_t UNDERFLOWDETMASK:1;
      uint64_t INDIRECTOPDONEMASK:1;
      uint64_t INDIRECTREADREJECTMASK:1;
      uint64_t PROTWRATTEMPTMASK:1;
      uint64_t ILLEGALACCESSDETMASK:1;
      uint64_t INDIRECTXFERLEVELBREACHMASK:1;
      uint64_t RECVOVERFLOWMASK:1;
      uint64_t TXFIFONOTFULLMASK:1;
      uint64_t TXFIFOFULLMASK:1;
      uint64_t RXFIFONOTEMPTYMASK:1;
      uint64_t RXFIFOFULLMASK:1;
      uint64_t INDRDSRAMFULLMASK:1;
      uint64_t POLLEXPINTMASK:1;
      uint64_t STIGREQMASK:1;
      uint64_t reservedSpace0:1;
      uint64_t RXCRCDATAERRMASK:1;
      uint64_t RXCRCDATAVALMASK:1;
      uint64_t TXCRCCHUNKBRKMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQMASK;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSECTOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOWERWRPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSECTOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPPERWRPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t ENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRPROTCTRL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t CANCEL:1;
      uint64_t RDSTATUS:1;
      uint64_t SRAMFULL:1;
      uint64_t RDQUEUED:1;
      uint64_t INDOPSDONESTATUS:1;
      uint64_t NUMINDOPSDONE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTREADXFERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEVEL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTREADXFERWATERMARK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTREADXFERSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTREADXFERNUMBYTES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t CANCEL:1;
      uint64_t WRSTATUS:1;
      uint64_t reservedSpace0:1;
      uint64_t WRQUEUED:1;
      uint64_t INDOPSDONESTATUS:1;
      uint64_t NUMINDOPSDONE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTWRITEXFERCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEVEL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTWRITEXFERWATERMARK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTWRITEXFERSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTWRITEXFERNUMBYTES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDRANGEWIDTH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INDIRECTTRIGGERADDRRANGE;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGERMEMBANKREQ:1;
      uint64_t MEMBANKREQINPROGRESS:1;
      uint64_t reservedSpace0:6;
      uint64_t MEMBANKREADDATA:8;
      uint64_t NBOFSTIGREADBYTES:3;
      uint64_t reservedSpace1:1;
      uint64_t MEMBANKADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCOMMANDCTRLMEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDEXEC:1;
      uint64_t CMDEXECSTATUS:1;
      uint64_t STIGMEMBANKEN:1;
      uint64_t reservedSpace0:4;
      uint64_t NUMDUMMYCYCLES:5;
      uint64_t NUMWRDATABYTES:3;
      uint64_t ENBWRITEDATA:1;
      uint64_t NUMADDRBYTES:2;
      uint64_t ENBMODEBIT:1;
      uint64_t ENBCOMDADDR:1;
      uint64_t NUMRDDATABYTES:3;
      uint64_t ENBREADDATA:1;
      uint64_t CMDOPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCMDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCMDADDR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHRDDATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHRDDATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHWRDATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHWRDATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICESTATUS:8;
      uint64_t DEVICESTATUSVALID:1;
      uint64_t reservedSpace0:7;
      uint64_t DEVICESTATUSNBDUMMY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POLLINGFLASHSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYCONFIGRXDLLDELAY:7;
      uint64_t reservedSpace0:9;
      uint64_t PHYCONFIGTXDLLDELAY:7;
      uint64_t reservedSpace1:6;
      uint64_t PHYCONFIGRXDLLBYPASS:1;
      uint64_t PHYCONFIGRESET:1;
      uint64_t PHYCONFIGRESYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHYCONFIGURATION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYMASTERINITIALDELAY:7;
      uint64_t reservedSpace0:9;
      uint64_t PHYMASTERNBINDICATIONS:3;
      uint64_t reservedSpace1:1;
      uint64_t PHYMASTERPHASEDETECTSELECTOR:3;
      uint64_t PHYMASTERBYPASSMODE:1;
      uint64_t PHYMASTERLOCKMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHYMASTERCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLLOBSERVABLELOWERDLLLOCK:1;
      uint64_t DLLOBSERVABLELOWERLOCKMODE:2;
      uint64_t DLLOBSERVABLELOWERUNLOCKCOUNTER:5;
      uint64_t DLLOBSERVABLELOWERLOCKVALUE:7;
      uint64_t DLLOBSERVABLELOWERLOOPBACKLOCK:1;
      uint64_t DLLOBSERVABLELOWERDLLLOCKDEC:8;
      uint64_t DLLOBSERVABLELOWERDLLLOCKINC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLOBSERVABLELOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLLOBSERVABLEUPPERRXDECODEROUTPUT:7;
      uint64_t reservedSpace0:9;
      uint64_t DLLOBSERVABLEUPPERTXDECODEROUTPUT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLLOBSERVABLEUPPER;

  uint8_t res5[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTSTIGOPCODE:8;
      uint64_t EXTPOLLOPCODE:8;
      uint64_t EXTWRITEOPCODE:8;
      uint64_t EXTREADOPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPCODEEXTLOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EXTWELOPCODE:8;
      uint64_t WELOPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPCODEEXTUPPER;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONF:2;
      uint64_t reservedSpace0:6;
      uint64_t MODULEID:16;
      uint64_t FIXPATCH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODULEID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDLYMUXSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLKPEN:1;
      uint64_t CS0PEN:1;
      uint64_t CS1PEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DQ0PEN:1;
      uint64_t DQ1PEN:1;
      uint64_t DQ2PEN:1;
      uint64_t DQ3PEN:1;
      uint64_t DQ4PEN:1;
      uint64_t DQ5PEN:1;
      uint64_t DQ6PEN:1;
      uint64_t DQ7PEN:1;
      uint64_t DQSPEN:1;
      uint64_t SCLKINPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPILOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

};

#define QSPI0 (*(volatile struct QSPI0_tag *) 0x4001c400)

struct LEUART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOTRI:1;
      uint64_t DATABITS:1;
      uint64_t PARITY:2;
      uint64_t STOPBITS:1;
      uint64_t INV:1;
      uint64_t ERRSDMA:1;
      uint64_t LOOPBK:1;
      uint64_t SFUBRX:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t BIT8DV:1;
      uint64_t RXDMAWU:1;
      uint64_t TXDMAWU:1;
      uint64_t TXDELAY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t RXBLOCK:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t TXIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFRAME:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTFRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGFRAME:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGFRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSEW:4;
      uint64_t PULSEEN:1;
      uint64_t PULSEFILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t CLKDIV:1;
      uint64_t STARTFRAME:1;
      uint64_t SIGFRAME:1;
      uint64_t TXDATAX:1;
      uint64_t TXDATA:1;
      uint64_t PULSECTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t RXPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

};

#define LEUART0 (*(volatile struct LEUART0_tag *) 0x4006a000)

struct LEUART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOTRI:1;
      uint64_t DATABITS:1;
      uint64_t PARITY:2;
      uint64_t STOPBITS:1;
      uint64_t INV:1;
      uint64_t ERRSDMA:1;
      uint64_t LOOPBK:1;
      uint64_t SFUBRX:1;
      uint64_t MPM:1;
      uint64_t MPAB:1;
      uint64_t BIT8DV:1;
      uint64_t RXDMAWU:1;
      uint64_t TXDMAWU:1;
      uint64_t TXDELAY:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RXBLOCKEN:1;
      uint64_t RXBLOCKDIS:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARRX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENS:1;
      uint64_t TXENS:1;
      uint64_t RXBLOCK:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t TXIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFRAME:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTFRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGFRAME:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGFRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:9;
      uint64_t reservedSpace0:5;
      uint64_t PERR:1;
      uint64_t FERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:9;
      uint64_t reservedSpace0:5;
      uint64_t PERRP:1;
      uint64_t FERRP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAXP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:9;
      uint64_t reservedSpace0:4;
      uint64_t TXBREAK:1;
      uint64_t TXDISAT:1;
      uint64_t RXENAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXOF:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t PERR:1;
      uint64_t FERR:1;
      uint64_t MPAF:1;
      uint64_t STARTF:1;
      uint64_t SIGF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSEW:4;
      uint64_t PULSEEN:1;
      uint64_t PULSEFILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PULSECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t CLKDIV:1;
      uint64_t STARTFRAME:1;
      uint64_t SIGFRAME:1;
      uint64_t TXDATAX:1;
      uint64_t TXDATA:1;
      uint64_t PULSECTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEN:1;
      uint64_t TXPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t TXLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPRSSEL:5;
      uint64_t RXPRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

};

#define LEUART1 (*(volatile struct LEUART1_tag *) 0x4006a400)

struct LETIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPMODE:2;
      uint64_t UFOA0:2;
      uint64_t UFOA1:2;
      uint64_t OPOL0:1;
      uint64_t OPOL1:1;
      uint64_t BUFTOP:1;
      uint64_t COMP0TOP:1;
      uint64_t reservedSpace0:2;
      uint64_t DEBUGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t CLEAR:1;
      uint64_t CTO0:1;
      uint64_t CTO1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

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
      uint64_t COMP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0PEN:1;
      uint64_t OUT1PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t OUT1LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSTARTSEL:5;
      uint64_t reservedSpace0:1;
      uint64_t PRSSTOPSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSCLEARSEL:5;
      uint64_t reservedSpace2:1;
      uint64_t PRSSTARTMODE:2;
      uint64_t reservedSpace3:2;
      uint64_t PRSSTOPMODE:2;
      uint64_t reservedSpace4:2;
      uint64_t PRSCLEARMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSSEL;

};

#define LETIMER0 (*(volatile struct LETIMER0_tag *) 0x40066000)

struct LETIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REPMODE:2;
      uint64_t UFOA0:2;
      uint64_t UFOA1:2;
      uint64_t OPOL0:1;
      uint64_t OPOL1:1;
      uint64_t BUFTOP:1;
      uint64_t COMP0TOP:1;
      uint64_t reservedSpace0:2;
      uint64_t DEBUGRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t CLEAR:1;
      uint64_t CTO0:1;
      uint64_t CTO1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

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
      uint64_t COMP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:1;
      uint64_t COMP1:1;
      uint64_t UF:1;
      uint64_t REP0:1;
      uint64_t REP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0PEN:1;
      uint64_t OUT1PEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT0LOC:6;
      uint64_t reservedSpace0:2;
      uint64_t OUT1LOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSTARTSEL:5;
      uint64_t reservedSpace0:1;
      uint64_t PRSSTOPSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSCLEARSEL:5;
      uint64_t reservedSpace2:1;
      uint64_t PRSSTARTMODE:2;
      uint64_t reservedSpace3:2;
      uint64_t PRSSTOPMODE:2;
      uint64_t reservedSpace4:2;
      uint64_t PRSCLEARMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSSEL;

};

#define LETIMER1 (*(volatile struct LETIMER1_tag *) 0x40066400)

struct CRYOTIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DEBUGRUN:1;
      uint64_t OSCSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t PRESC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIODSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIODSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM4WU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM4WUEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

};

#define CRYOTIMER (*(volatile struct CRYOTIMER_tag *) 0x4008f000)

struct PCNT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t FILT:1;
      uint64_t RSTEN:1;
      uint64_t CNTRSTEN:1;
      uint64_t AUXCNTRSTEN:1;
      uint64_t DEBUGHALT:1;
      uint64_t HYST:1;
      uint64_t S1CDIR:1;
      uint64_t CNTEV:2;
      uint64_t AUXCNTEV:2;
      uint64_t CNTDIR:1;
      uint64_t EDGE:1;
      uint64_t TCCMODE:2;
      uint64_t reservedSpace0:1;
      uint64_t TCCPRESC:2;
      uint64_t reservedSpace1:1;
      uint64_t TCCCOMP:2;
      uint64_t PRSGATEEN:1;
      uint64_t TCCPRSPOL:1;
      uint64_t TCCPRSSEL:5;
      uint64_t TOPBHFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCNTIM:1;
      uint64_t LTOPBIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

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
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0INLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t S1INLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t TOPB:1;
      uint64_t OVSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0PRSSEL:5;
      uint64_t S0PRSEN:1;
      uint64_t S1PRSSEL:5;
      uint64_t S1PRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTLEN:8;
      uint64_t reservedSpace0:4;
      uint64_t FLUTTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSCFG;

};

#define PCNT0 (*(volatile struct PCNT0_tag *) 0x4006e000)

struct PCNT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t FILT:1;
      uint64_t RSTEN:1;
      uint64_t CNTRSTEN:1;
      uint64_t AUXCNTRSTEN:1;
      uint64_t DEBUGHALT:1;
      uint64_t HYST:1;
      uint64_t S1CDIR:1;
      uint64_t CNTEV:2;
      uint64_t AUXCNTEV:2;
      uint64_t CNTDIR:1;
      uint64_t EDGE:1;
      uint64_t TCCMODE:2;
      uint64_t reservedSpace0:1;
      uint64_t TCCPRESC:2;
      uint64_t reservedSpace1:1;
      uint64_t TCCCOMP:2;
      uint64_t PRSGATEEN:1;
      uint64_t TCCPRSPOL:1;
      uint64_t TCCPRSSEL:5;
      uint64_t TOPBHFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCNTIM:1;
      uint64_t LTOPBIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

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
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0INLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t S1INLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t TOPB:1;
      uint64_t OVSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0PRSSEL:5;
      uint64_t S0PRSEN:1;
      uint64_t S1PRSSEL:5;
      uint64_t S1PRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTLEN:8;
      uint64_t reservedSpace0:4;
      uint64_t FLUTTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSCFG;

};

#define PCNT1 (*(volatile struct PCNT1_tag *) 0x4006e400)

struct PCNT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t FILT:1;
      uint64_t RSTEN:1;
      uint64_t CNTRSTEN:1;
      uint64_t AUXCNTRSTEN:1;
      uint64_t DEBUGHALT:1;
      uint64_t HYST:1;
      uint64_t S1CDIR:1;
      uint64_t CNTEV:2;
      uint64_t AUXCNTEV:2;
      uint64_t CNTDIR:1;
      uint64_t EDGE:1;
      uint64_t TCCMODE:2;
      uint64_t reservedSpace0:1;
      uint64_t TCCPRESC:2;
      uint64_t reservedSpace1:1;
      uint64_t TCCCOMP:2;
      uint64_t PRSGATEEN:1;
      uint64_t TCCPRSPOL:1;
      uint64_t TCCPRSSEL:5;
      uint64_t TOPBHFSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCNTIM:1;
      uint64_t LTOPBIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

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
      uint64_t TOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOPB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UF:1;
      uint64_t OF:1;
      uint64_t DIRCNG:1;
      uint64_t AUXOF:1;
      uint64_t TCC:1;
      uint64_t OQSTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0INLOC:6;
      uint64_t reservedSpace0:2;
      uint64_t S1INLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t TOPB:1;
      uint64_t OVSCFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S0PRSSEL:5;
      uint64_t S0PRSEN:1;
      uint64_t S1PRSSEL:5;
      uint64_t S1PRSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTLEN:8;
      uint64_t reservedSpace0:4;
      uint64_t FLUTTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVSCFG;

};

#define PCNT2 (*(volatile struct PCNT2_tag *) 0x4006e800)

struct I2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t SLAVE:1;
      uint64_t AUTOACK:1;
      uint64_t AUTOSE:1;
      uint64_t AUTOSN:1;
      uint64_t ARBDIS:1;
      uint64_t GCAMEN:1;
      uint64_t TXBIL:1;
      uint64_t CLHR:2;
      uint64_t reservedSpace0:2;
      uint64_t BITO:2;
      uint64_t reservedSpace1:1;
      uint64_t GIBITO:1;
      uint64_t CLTO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t CONT:1;
      uint64_t ABORT:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t MASTER:1;
      uint64_t TRANSMITTER:1;
      uint64_t NACKED:1;
      uint64_t BUSHOLD:1;
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTART:1;
      uint64_t PSTOP:1;
      uint64_t PACK:1;
      uint64_t PNACK:1;
      uint64_t PCONT:1;
      uint64_t PABORT:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDRMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:8;
      uint64_t RXDATAP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAPEN:1;
      uint64_t SCLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDALOC:6;
      uint64_t reservedSpace0:2;
      uint64_t SCLLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x40089000)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t SLAVE:1;
      uint64_t AUTOACK:1;
      uint64_t AUTOSE:1;
      uint64_t AUTOSN:1;
      uint64_t ARBDIS:1;
      uint64_t GCAMEN:1;
      uint64_t TXBIL:1;
      uint64_t CLHR:2;
      uint64_t reservedSpace0:2;
      uint64_t BITO:2;
      uint64_t reservedSpace1:1;
      uint64_t GIBITO:1;
      uint64_t CLTO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t CONT:1;
      uint64_t ABORT:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t MASTER:1;
      uint64_t TRANSMITTER:1;
      uint64_t NACKED:1;
      uint64_t BUSHOLD:1;
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTART:1;
      uint64_t PSTOP:1;
      uint64_t PACK:1;
      uint64_t PNACK:1;
      uint64_t PCONT:1;
      uint64_t PABORT:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDRMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:8;
      uint64_t RXDATAP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAPEN:1;
      uint64_t SCLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDALOC:6;
      uint64_t reservedSpace0:2;
      uint64_t SCLLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40089400)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t SLAVE:1;
      uint64_t AUTOACK:1;
      uint64_t AUTOSE:1;
      uint64_t AUTOSN:1;
      uint64_t ARBDIS:1;
      uint64_t GCAMEN:1;
      uint64_t TXBIL:1;
      uint64_t CLHR:2;
      uint64_t reservedSpace0:2;
      uint64_t BITO:2;
      uint64_t reservedSpace1:1;
      uint64_t GIBITO:1;
      uint64_t CLTO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t CONT:1;
      uint64_t ABORT:1;
      uint64_t CLEARTX:1;
      uint64_t CLEARPC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t MASTER:1;
      uint64_t TRANSMITTER:1;
      uint64_t NACKED:1;
      uint64_t BUSHOLD:1;
      uint64_t STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTART:1;
      uint64_t PSTOP:1;
      uint64_t PACK:1;
      uint64_t PNACK:1;
      uint64_t PCONT:1;
      uint64_t PABORT:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADDR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADDRMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA0:8;
      uint64_t RXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDATAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATAP0:8;
      uint64_t RXDATAP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDOUBLEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA0:8;
      uint64_t TXDATA1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDOUBLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t reservedSpace0:2;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t RSTART:1;
      uint64_t ADDR:1;
      uint64_t TXC:1;
      uint64_t TXBL:1;
      uint64_t RXDATAV:1;
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t MSTOP:1;
      uint64_t ARBLOST:1;
      uint64_t BUSERR:1;
      uint64_t BUSHOLD:1;
      uint64_t TXOF:1;
      uint64_t RXUF:1;
      uint64_t BITO:1;
      uint64_t CLTO:1;
      uint64_t SSTOP:1;
      uint64_t RXFULL:1;
      uint64_t CLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAPEN:1;
      uint64_t SCLPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDALOC:6;
      uint64_t reservedSpace0:2;
      uint64_t SCLLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x40089800)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARMUPMODE:2;
      uint64_t SINGLEDMAWU:1;
      uint64_t SCANDMAWU:1;
      uint64_t TAILGATE:1;
      uint64_t reservedSpace0:1;
      uint64_t ASYNCCLKEN:1;
      uint64_t ADCCLKMODE:1;
      uint64_t PRESC:7;
      uint64_t reservedSpace1:1;
      uint64_t TIMEBASE:7;
      uint64_t reservedSpace2:1;
      uint64_t OVSRSEL:4;
      uint64_t DBGHALT:1;
      uint64_t CHCONMODE:1;
      uint64_t CHCONREFWARMIDLE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLESTART:1;
      uint64_t SINGLESTOP:1;
      uint64_t SCANSTART:1;
      uint64_t SCANSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEACT:1;
      uint64_t SCANACT:1;
      uint64_t SCANPENDING:1;
      uint64_t reservedSpace0:5;
      uint64_t SINGLEREFWARM:1;
      uint64_t SCANREFWARM:1;
      uint64_t PROGERR:2;
      uint64_t WARM:1;
      uint64_t reservedSpace1:3;
      uint64_t SINGLEDV:1;
      uint64_t SCANDV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP:1;
      uint64_t DIFF:1;
      uint64_t ADJ:1;
      uint64_t RES:2;
      uint64_t REF:3;
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t AT:4;
      uint64_t reservedSpace0:1;
      uint64_t PRSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREFSEL:3;
      uint64_t VREFATTFIX:1;
      uint64_t VREFATT:4;
      uint64_t VINATT:4;
      uint64_t DVL:2;
      uint64_t FIFOOFACT:1;
      uint64_t reservedSpace0:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t CONVSTARTDELAY:5;
      uint64_t CONVSTARTDELAYEN:1;
      uint64_t reservedSpace1:1;
      uint64_t REPDELAY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP:1;
      uint64_t DIFF:1;
      uint64_t ADJ:1;
      uint64_t RES:2;
      uint64_t REF:3;
      uint64_t reservedSpace0:16;
      uint64_t AT:4;
      uint64_t reservedSpace1:1;
      uint64_t PRSEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREFSEL:3;
      uint64_t VREFATTFIX:1;
      uint64_t VREFATT:4;
      uint64_t VINATT:4;
      uint64_t DVL:2;
      uint64_t FIFOOFACT:1;
      uint64_t reservedSpace0:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t CONVSTARTDELAY:5;
      uint64_t CONVSTARTDELAYEN:1;
      uint64_t reservedSpace1:1;
      uint64_t REPDELAY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANCTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANINPUTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT0TO7SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t INPUT8TO15SEL:5;
      uint64_t reservedSpace1:3;
      uint64_t INPUT16TO23SEL:5;
      uint64_t reservedSpace2:3;
      uint64_t INPUT24TO31SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANINPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT0NEGSEL:2;
      uint64_t INPUT2NEGSEL:2;
      uint64_t INPUT4NEGSEL:2;
      uint64_t INPUT6NEGSEL:2;
      uint64_t INPUT9NEGSEL:2;
      uint64_t INPUT11NEGSEL:2;
      uint64_t INPUT13NEGSEL:2;
      uint64_t INPUT15NEGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANNEGSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADLT:16;
      uint64_t ADGT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBIASPROG:4;
      uint64_t reservedSpace0:8;
      uint64_t VFAULTCLR:1;
      uint64_t reservedSpace1:3;
      uint64_t GPBIASACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIASPROG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEOFFSET:4;
      uint64_t SINGLEOFFSETINV:4;
      uint64_t SINGLEGAIN:7;
      uint64_t OFFSETINVMODE:1;
      uint64_t SCANOFFSET:4;
      uint64_t SCANOFFSETINV:4;
      uint64_t SCANGAIN:7;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLE:1;
      uint64_t SCAN:1;
      uint64_t reservedSpace0:6;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLE:1;
      uint64_t SCAN:1;
      uint64_t reservedSpace0:6;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEDATAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAP;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t SCANINPUTID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:16;
      uint64_t SCANINPUTIDPEEK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAXP;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEDC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEFIFOCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANDC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANFIFOCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEFIFOCLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEFIFOCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANFIFOCLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANFIFOCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XMASTERDIS:1;
      uint64_t APORT1YMASTERDIS:1;
      uint64_t APORT2XMASTERDIS:1;
      uint64_t APORT2YMASTERDIS:1;
      uint64_t APORT3XMASTERDIS:1;
      uint64_t APORT3YMASTERDIS:1;
      uint64_t APORT4XMASTERDIS:1;
      uint64_t APORT4YMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTMASTERDIS;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x40082000)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARMUPMODE:2;
      uint64_t SINGLEDMAWU:1;
      uint64_t SCANDMAWU:1;
      uint64_t TAILGATE:1;
      uint64_t reservedSpace0:1;
      uint64_t ASYNCCLKEN:1;
      uint64_t ADCCLKMODE:1;
      uint64_t PRESC:7;
      uint64_t reservedSpace1:1;
      uint64_t TIMEBASE:7;
      uint64_t reservedSpace2:1;
      uint64_t OVSRSEL:4;
      uint64_t DBGHALT:1;
      uint64_t CHCONMODE:1;
      uint64_t CHCONREFWARMIDLE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLESTART:1;
      uint64_t SINGLESTOP:1;
      uint64_t SCANSTART:1;
      uint64_t SCANSTOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEACT:1;
      uint64_t SCANACT:1;
      uint64_t SCANPENDING:1;
      uint64_t reservedSpace0:5;
      uint64_t SINGLEREFWARM:1;
      uint64_t SCANREFWARM:1;
      uint64_t PROGERR:2;
      uint64_t WARM:1;
      uint64_t reservedSpace1:3;
      uint64_t SINGLEDV:1;
      uint64_t SCANDV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP:1;
      uint64_t DIFF:1;
      uint64_t ADJ:1;
      uint64_t RES:2;
      uint64_t REF:3;
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t AT:4;
      uint64_t reservedSpace0:1;
      uint64_t PRSEN:1;
      uint64_t reservedSpace1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREFSEL:3;
      uint64_t VREFATTFIX:1;
      uint64_t VREFATT:4;
      uint64_t VINATT:4;
      uint64_t DVL:2;
      uint64_t FIFOOFACT:1;
      uint64_t reservedSpace0:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t CONVSTARTDELAY:5;
      uint64_t CONVSTARTDELAYEN:1;
      uint64_t reservedSpace1:1;
      uint64_t REPDELAY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP:1;
      uint64_t DIFF:1;
      uint64_t ADJ:1;
      uint64_t RES:2;
      uint64_t REF:3;
      uint64_t reservedSpace0:16;
      uint64_t AT:4;
      uint64_t reservedSpace1:1;
      uint64_t PRSEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREFSEL:3;
      uint64_t VREFATTFIX:1;
      uint64_t VREFATT:4;
      uint64_t VINATT:4;
      uint64_t DVL:2;
      uint64_t FIFOOFACT:1;
      uint64_t reservedSpace0:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t CONVSTARTDELAY:5;
      uint64_t CONVSTARTDELAYEN:1;
      uint64_t reservedSpace1:1;
      uint64_t REPDELAY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANCTRLX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANINPUTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT0TO7SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t INPUT8TO15SEL:5;
      uint64_t reservedSpace1:3;
      uint64_t INPUT16TO23SEL:5;
      uint64_t reservedSpace2:3;
      uint64_t INPUT24TO31SEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANINPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT0NEGSEL:2;
      uint64_t INPUT2NEGSEL:2;
      uint64_t INPUT4NEGSEL:2;
      uint64_t INPUT6NEGSEL:2;
      uint64_t INPUT9NEGSEL:2;
      uint64_t INPUT11NEGSEL:2;
      uint64_t INPUT13NEGSEL:2;
      uint64_t INPUT15NEGSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANNEGSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADLT:16;
      uint64_t ADGT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBIASPROG:4;
      uint64_t reservedSpace0:8;
      uint64_t VFAULTCLR:1;
      uint64_t reservedSpace1:3;
      uint64_t GPBIASACC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIASPROG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEOFFSET:4;
      uint64_t SINGLEOFFSETINV:4;
      uint64_t SINGLEGAIN:7;
      uint64_t OFFSETINVMODE:1;
      uint64_t SCANOFFSET:4;
      uint64_t SCANOFFSETINV:4;
      uint64_t SCANGAIN:7;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLE:1;
      uint64_t SCAN:1;
      uint64_t reservedSpace0:6;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLE:1;
      uint64_t SCAN:1;
      uint64_t reservedSpace0:6;
      uint64_t SINGLEOF:1;
      uint64_t SCANOF:1;
      uint64_t SINGLEUF:1;
      uint64_t SCANUF:1;
      uint64_t reservedSpace1:4;
      uint64_t SINGLECMP:1;
      uint64_t SCANCMP:1;
      uint64_t reservedSpace2:6;
      uint64_t VREFOV:1;
      uint64_t PROGERR:1;
      uint64_t SCANEXTPEND:1;
      uint64_t SCANPEND:1;
      uint64_t PRSTIMEDERR:1;
      uint64_t EM23ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEDATAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAP;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t SCANINPUTID:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAP:16;
      uint64_t SCANINPUTIDPEEK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANDATAXP;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEDC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEFIFOCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANDC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANFIFOCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLEFIFOCLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEFIFOCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANFIFOCLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANFIFOCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XMASTERDIS:1;
      uint64_t APORT1YMASTERDIS:1;
      uint64_t APORT2XMASTERDIS:1;
      uint64_t APORT2YMASTERDIS:1;
      uint64_t APORT3XMASTERDIS:1;
      uint64_t APORT3YMASTERDIS:1;
      uint64_t APORT4XMASTERDIS:1;
      uint64_t APORT4YMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTMASTERDIS;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40082400)

struct ACMP0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t INACTVAL:1;
      uint64_t GPIOINV:1;
      uint64_t reservedSpace1:4;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
      uint64_t APORTVMASTERDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PWRSEL:3;
      uint64_t ACCURACY:1;
      uint64_t reservedSpace3:2;
      uint64_t INPUTRANGE:2;
      uint64_t IRISE:1;
      uint64_t IFALL:1;
      uint64_t reservedSpace4:2;
      uint64_t BIASPROG:6;
      uint64_t reservedSpace5:1;
      uint64_t FULLBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t VASEL:6;
      uint64_t VBSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VLPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CSRESEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CSRESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMPACT:1;
      uint64_t ACMPOUT:1;
      uint64_t APORTCONFLICT:1;
      uint64_t EXTIFACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS1;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t APORTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIFCTRL;

};

#define ACMP0 (*(volatile struct ACMP0_tag *) 0x40080000)

struct ACMP1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t INACTVAL:1;
      uint64_t GPIOINV:1;
      uint64_t reservedSpace1:4;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
      uint64_t APORTVMASTERDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PWRSEL:3;
      uint64_t ACCURACY:1;
      uint64_t reservedSpace3:2;
      uint64_t INPUTRANGE:2;
      uint64_t IRISE:1;
      uint64_t IFALL:1;
      uint64_t reservedSpace4:2;
      uint64_t BIASPROG:6;
      uint64_t reservedSpace5:1;
      uint64_t FULLBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t VASEL:6;
      uint64_t VBSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VLPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CSRESEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CSRESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMPACT:1;
      uint64_t ACMPOUT:1;
      uint64_t APORTCONFLICT:1;
      uint64_t EXTIFACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS1;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t APORTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIFCTRL;

};

#define ACMP1 (*(volatile struct ACMP1_tag *) 0x40080400)

struct ACMP2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t INACTVAL:1;
      uint64_t GPIOINV:1;
      uint64_t reservedSpace1:4;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
      uint64_t APORTVMASTERDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PWRSEL:3;
      uint64_t ACCURACY:1;
      uint64_t reservedSpace3:2;
      uint64_t INPUTRANGE:2;
      uint64_t IRISE:1;
      uint64_t IFALL:1;
      uint64_t reservedSpace4:2;
      uint64_t BIASPROG:6;
      uint64_t reservedSpace5:1;
      uint64_t FULLBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t VASEL:6;
      uint64_t VBSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VLPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CSRESEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CSRESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMPACT:1;
      uint64_t ACMPOUT:1;
      uint64_t APORTCONFLICT:1;
      uint64_t EXTIFACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS1;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t APORTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIFCTRL;

};

#define ACMP2 (*(volatile struct ACMP2_tag *) 0x40080800)

struct ACMP3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t INACTVAL:1;
      uint64_t GPIOINV:1;
      uint64_t reservedSpace1:4;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
      uint64_t APORTVMASTERDIS:1;
      uint64_t reservedSpace2:1;
      uint64_t PWRSEL:3;
      uint64_t ACCURACY:1;
      uint64_t reservedSpace3:2;
      uint64_t INPUTRANGE:2;
      uint64_t IRISE:1;
      uint64_t IFALL:1;
      uint64_t reservedSpace4:2;
      uint64_t BIASPROG:6;
      uint64_t reservedSpace5:1;
      uint64_t FULLBIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t VASEL:6;
      uint64_t VBSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VLPSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t CSRESEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CSRESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INPUTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMPACT:1;
      uint64_t ACMPOUT:1;
      uint64_t APORTCONFLICT:1;
      uint64_t EXTIFACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE:1;
      uint64_t WARMUP:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XREQ:1;
      uint64_t APORT0YREQ:1;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APORT0XCONFLICT:1;
      uint64_t APORT0YCONFLICT:1;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HYST:4;
      uint64_t reservedSpace0:12;
      uint64_t DIVVA:6;
      uint64_t reservedSpace1:2;
      uint64_t DIVVB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HYSTERESIS1;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTEPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTLOC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTELOC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t APORTSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTIFCTRL;

};

#define ACMP3 (*(volatile struct ACMP3_tag *) 0x40080c00)

struct VDAC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIFF:1;
      uint64_t reservedSpace0:3;
      uint64_t SINEMODE:1;
      uint64_t OUTENPRS:1;
      uint64_t CH0PRESCRST:1;
      uint64_t reservedSpace1:1;
      uint64_t REFSEL:3;
      uint64_t reservedSpace2:5;
      uint64_t PRESC:7;
      uint64_t reservedSpace3:1;
      uint64_t REFRESHPERIOD:2;
      uint64_t reservedSpace4:2;
      uint64_t WARMUPMODE:1;
      uint64_t reservedSpace5:2;
      uint64_t DACCLKMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0ENS:1;
      uint64_t CH1ENS:1;
      uint64_t CH0BL:1;
      uint64_t CH1BL:1;
      uint64_t CH0WARM:1;
      uint64_t CH1WARM:1;
      uint64_t reservedSpace0:10;
      uint64_t OPA0APORTCONFLICT:1;
      uint64_t OPA1APORTCONFLICT:1;
      uint64_t OPA2APORTCONFLICT:1;
      uint64_t OPA3APORTCONFLICT:1;
      uint64_t OPA0ENS:1;
      uint64_t OPA1ENS:1;
      uint64_t OPA2ENS:1;
      uint64_t OPA3ENS:1;
      uint64_t OPA0WARM:1;
      uint64_t OPA1WARM:1;
      uint64_t OPA2WARM:1;
      uint64_t OPA3WARM:1;
      uint64_t OPA0OUTVALID:1;
      uint64_t OPA1OUTVALID:1;
      uint64_t OPA2OUTVALID:1;
      uint64_t OPA3OUTVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONVMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIGMODE:3;
      uint64_t reservedSpace1:1;
      uint64_t PRSASYNC:1;
      uint64_t reservedSpace2:3;
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONVMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t TRIGMODE:3;
      uint64_t reservedSpace1:1;
      uint64_t PRSASYNC:1;
      uint64_t reservedSpace2:3;
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0EN:1;
      uint64_t CH0DIS:1;
      uint64_t CH1EN:1;
      uint64_t CH1DIS:1;
      uint64_t reservedSpace0:12;
      uint64_t OPA0EN:1;
      uint64_t OPA0DIS:1;
      uint64_t OPA1EN:1;
      uint64_t OPA1DIS:1;
      uint64_t OPA2EN:1;
      uint64_t OPA2DIS:1;
      uint64_t OPA3EN:1;
      uint64_t OPA3DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0CD:1;
      uint64_t CH1CD:1;
      uint64_t CH0OF:1;
      uint64_t CH1OF:1;
      uint64_t CH0UF:1;
      uint64_t CH1UF:1;
      uint64_t CH0BL:1;
      uint64_t CH1BL:1;
      uint64_t reservedSpace0:7;
      uint64_t EM23ERR:1;
      uint64_t OPA0APORTCONFLICT:1;
      uint64_t OPA1APORTCONFLICT:1;
      uint64_t OPA2APORTCONFLICT:1;
      uint64_t OPA3APORTCONFLICT:1;
      uint64_t OPA0PRSTIMEDERR:1;
      uint64_t OPA1PRSTIMEDERR:1;
      uint64_t OPA2PRSTIMEDERR:1;
      uint64_t OPA3PRSTIMEDERR:1;
      uint64_t reservedSpace1:4;
      uint64_t OPA0OUTVALID:1;
      uint64_t OPA1OUTVALID:1;
      uint64_t OPA2OUTVALID:1;
      uint64_t OPA3OUTVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0CD:1;
      uint64_t CH1CD:1;
      uint64_t CH0OF:1;
      uint64_t CH1OF:1;
      uint64_t CH0UF:1;
      uint64_t CH1UF:1;
      uint64_t reservedSpace0:9;
      uint64_t EM23ERR:1;
      uint64_t OPA0APORTCONFLICT:1;
      uint64_t OPA1APORTCONFLICT:1;
      uint64_t OPA2APORTCONFLICT:1;
      uint64_t OPA3APORTCONFLICT:1;
      uint64_t OPA0PRSTIMEDERR:1;
      uint64_t OPA1PRSTIMEDERR:1;
      uint64_t OPA2PRSTIMEDERR:1;
      uint64_t OPA3PRSTIMEDERR:1;
      uint64_t reservedSpace1:4;
      uint64_t OPA0OUTVALID:1;
      uint64_t OPA1OUTVALID:1;
      uint64_t OPA2OUTVALID:1;
      uint64_t OPA3OUTVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0CD:1;
      uint64_t CH1CD:1;
      uint64_t CH0OF:1;
      uint64_t CH1OF:1;
      uint64_t CH0UF:1;
      uint64_t CH1UF:1;
      uint64_t reservedSpace0:9;
      uint64_t EM23ERR:1;
      uint64_t OPA0APORTCONFLICT:1;
      uint64_t OPA1APORTCONFLICT:1;
      uint64_t OPA2APORTCONFLICT:1;
      uint64_t OPA3APORTCONFLICT:1;
      uint64_t OPA0PRSTIMEDERR:1;
      uint64_t OPA1PRSTIMEDERR:1;
      uint64_t OPA2PRSTIMEDERR:1;
      uint64_t OPA3PRSTIMEDERR:1;
      uint64_t reservedSpace1:4;
      uint64_t OPA0OUTVALID:1;
      uint64_t OPA1OUTVALID:1;
      uint64_t OPA2OUTVALID:1;
      uint64_t OPA3OUTVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0CD:1;
      uint64_t CH1CD:1;
      uint64_t CH0OF:1;
      uint64_t CH1OF:1;
      uint64_t CH0UF:1;
      uint64_t CH1UF:1;
      uint64_t CH0BL:1;
      uint64_t CH1BL:1;
      uint64_t reservedSpace0:7;
      uint64_t EM23ERR:1;
      uint64_t OPA0APORTCONFLICT:1;
      uint64_t OPA1APORTCONFLICT:1;
      uint64_t OPA2APORTCONFLICT:1;
      uint64_t OPA3APORTCONFLICT:1;
      uint64_t OPA0PRSTIMEDERR:1;
      uint64_t OPA1PRSTIMEDERR:1;
      uint64_t OPA2PRSTIMEDERR:1;
      uint64_t OPA3PRSTIMEDERR:1;
      uint64_t reservedSpace1:4;
      uint64_t OPA0OUTVALID:1;
      uint64_t OPA1OUTVALID:1;
      uint64_t OPA2OUTVALID:1;
      uint64_t OPA3OUTVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0DATA:12;
      uint64_t reservedSpace0:4;
      uint64_t CH1DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSETTRIM:3;
      uint64_t reservedSpace0:5;
      uint64_t GAINERRTRIM:6;
      uint64_t reservedSpace1:2;
      uint64_t GAINERRTRIMCH1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAL;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:2;
      uint64_t INCBW:1;
      uint64_t HCMDIS:1;
      uint64_t OUTSCALE:1;
      uint64_t reservedSpace0:3;
      uint64_t PRSEN:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSOUTMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTUPDLY:6;
      uint64_t reservedSpace0:2;
      uint64_t WARMUPTIME:7;
      uint64_t reservedSpace1:1;
      uint64_t SETTLETIME:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t RESINMUX:3;
      uint64_t reservedSpace0:1;
      uint64_t GAIN3X:1;
      uint64_t reservedSpace1:3;
      uint64_t RESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_MUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINOUTEN:1;
      uint64_t ALTOUTEN:1;
      uint64_t APORTOUTEN:1;
      uint64_t SHORT:1;
      uint64_t ALTOUTPADEN:5;
      uint64_t reservedSpace0:7;
      uint64_t APORTOUTSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM1:4;
      uint64_t reservedSpace0:1;
      uint64_t CM2:4;
      uint64_t reservedSpace1:1;
      uint64_t CM3:2;
      uint64_t reservedSpace2:1;
      uint64_t GM:3;
      uint64_t reservedSpace3:1;
      uint64_t GM3:2;
      uint64_t reservedSpace4:1;
      uint64_t OFFSETP:5;
      uint64_t reservedSpace5:1;
      uint64_t OFFSETN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA0_CAL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:2;
      uint64_t INCBW:1;
      uint64_t HCMDIS:1;
      uint64_t OUTSCALE:1;
      uint64_t reservedSpace0:3;
      uint64_t PRSEN:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSOUTMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTUPDLY:6;
      uint64_t reservedSpace0:2;
      uint64_t WARMUPTIME:7;
      uint64_t reservedSpace1:1;
      uint64_t SETTLETIME:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t RESINMUX:3;
      uint64_t reservedSpace0:1;
      uint64_t GAIN3X:1;
      uint64_t reservedSpace1:3;
      uint64_t RESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_MUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINOUTEN:1;
      uint64_t ALTOUTEN:1;
      uint64_t APORTOUTEN:1;
      uint64_t SHORT:1;
      uint64_t ALTOUTPADEN:5;
      uint64_t reservedSpace0:7;
      uint64_t APORTOUTSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM1:4;
      uint64_t reservedSpace0:1;
      uint64_t CM2:4;
      uint64_t reservedSpace1:1;
      uint64_t CM3:2;
      uint64_t reservedSpace2:1;
      uint64_t GM:3;
      uint64_t reservedSpace3:1;
      uint64_t GM3:2;
      uint64_t reservedSpace4:1;
      uint64_t OFFSETP:5;
      uint64_t reservedSpace5:1;
      uint64_t OFFSETN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA1_CAL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:2;
      uint64_t INCBW:1;
      uint64_t HCMDIS:1;
      uint64_t OUTSCALE:1;
      uint64_t reservedSpace0:3;
      uint64_t PRSEN:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSOUTMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTUPDLY:6;
      uint64_t reservedSpace0:2;
      uint64_t WARMUPTIME:7;
      uint64_t reservedSpace1:1;
      uint64_t SETTLETIME:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t RESINMUX:3;
      uint64_t reservedSpace0:1;
      uint64_t GAIN3X:1;
      uint64_t reservedSpace1:3;
      uint64_t RESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_MUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINOUTEN:1;
      uint64_t ALTOUTEN:1;
      uint64_t APORTOUTEN:1;
      uint64_t SHORT:1;
      uint64_t ALTOUTPADEN:5;
      uint64_t reservedSpace0:7;
      uint64_t APORTOUTSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM1:4;
      uint64_t reservedSpace0:1;
      uint64_t CM2:4;
      uint64_t reservedSpace1:1;
      uint64_t CM3:2;
      uint64_t reservedSpace2:1;
      uint64_t GM:3;
      uint64_t reservedSpace3:1;
      uint64_t GM3:2;
      uint64_t reservedSpace4:1;
      uint64_t OFFSETP:5;
      uint64_t reservedSpace5:1;
      uint64_t OFFSETN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA2_CAL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVESTRENGTH:2;
      uint64_t INCBW:1;
      uint64_t HCMDIS:1;
      uint64_t OUTSCALE:1;
      uint64_t reservedSpace0:3;
      uint64_t PRSEN:1;
      uint64_t PRSMODE:1;
      uint64_t PRSSEL:5;
      uint64_t reservedSpace1:1;
      uint64_t PRSOUTMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t APORTXMASTERDIS:1;
      uint64_t APORTYMASTERDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTUPDLY:6;
      uint64_t reservedSpace0:2;
      uint64_t WARMUPTIME:7;
      uint64_t reservedSpace1:1;
      uint64_t SETTLETIME:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSSEL:8;
      uint64_t NEGSEL:8;
      uint64_t RESINMUX:3;
      uint64_t reservedSpace0:1;
      uint64_t GAIN3X:1;
      uint64_t reservedSpace1:3;
      uint64_t RESSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_MUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINOUTEN:1;
      uint64_t ALTOUTEN:1;
      uint64_t APORTOUTEN:1;
      uint64_t SHORT:1;
      uint64_t ALTOUTPADEN:5;
      uint64_t reservedSpace0:7;
      uint64_t APORTOUTSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM1:4;
      uint64_t reservedSpace0:1;
      uint64_t CM2:4;
      uint64_t reservedSpace1:1;
      uint64_t CM3:2;
      uint64_t reservedSpace2:1;
      uint64_t GM:3;
      uint64_t reservedSpace3:1;
      uint64_t GM3:2;
      uint64_t reservedSpace4:1;
      uint64_t OFFSETP:5;
      uint64_t reservedSpace5:1;
      uint64_t OFFSETN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPA3_CAL;

};

#define VDAC0 (*(volatile struct VDAC0_tag *) 0x40086000)

struct USB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSENAP:1;
      uint64_t reservedSpace0:2;
      uint64_t SELFPOWERED:1;
      uint64_t LEMOSCCTRL:2;
      uint64_t reservedSpace1:1;
      uint64_t LEMPHYCTRL:1;
      uint64_t reservedSpace2:1;
      uint64_t LEMIDLEEN:1;
      uint64_t reservedSpace3:2;
      uint64_t IDCDEN:1;
      uint64_t reservedSpace4:12;
      uint64_t OTGCLKCDIS:1;
      uint64_t OTGIDINDIS:1;
      uint64_t OTGPHYCTRLDIS:1;
      uint64_t DCDEN:2;
      uint64_t PDEN:1;
      uint64_t SDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDETH:1;
      uint64_t reservedSpace0:1;
      uint64_t LEMACTIVE:1;
      uint64_t reservedSpace1:5;
      uint64_t DCDTO:1;
      uint64_t SDP:1;
      uint64_t CDP:1;
      uint64_t DCP:1;
      uint64_t ACAFS:1;
      uint64_t ACALS:1;
      uint64_t reservedSpace2:1;
      uint64_t USBCDBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDETH:1;
      uint64_t VBUSDETL:1;
      uint64_t reservedSpace0:6;
      uint64_t ERR:1;
      uint64_t DCD:1;
      uint64_t PD:1;
      uint64_t SD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDETH:1;
      uint64_t VBUSDETL:1;
      uint64_t reservedSpace0:6;
      uint64_t ERR:1;
      uint64_t DCD:1;
      uint64_t PD:1;
      uint64_t SD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDETH:1;
      uint64_t VBUSDETL:1;
      uint64_t reservedSpace0:6;
      uint64_t ERR:1;
      uint64_t DCD:1;
      uint64_t PD:1;
      uint64_t SD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSDETH:1;
      uint64_t VBUSDETL:1;
      uint64_t reservedSpace0:6;
      uint64_t ERR:1;
      uint64_t DCD:1;
      uint64_t PD:1;
      uint64_t SD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYPEN:1;
      uint64_t VBUSENPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROUTE;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDTOCONF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTCD:1;
      uint64_t STOPCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEBASE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LEMCTRL;

  uint8_t res2[909248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SESREQSCS:1;
      uint64_t SESREQ:1;
      uint64_t VBVALIDOVEN:1;
      uint64_t VBVALIDOVVAL:1;
      uint64_t AVALIDOVEN:1;
      uint64_t AVALIDOVVAL:1;
      uint64_t BVALIDOVEN:1;
      uint64_t BVALIDOVVAL:1;
      uint64_t HSTNEGSCS:1;
      uint64_t HNPREQ:1;
      uint64_t HSTSETHNPEN:1;
      uint64_t DEVHNPEN:1;
      uint64_t EHEN:1;
      uint64_t reservedSpace0:2;
      uint64_t DBNCEFLTRBYPASS:1;
      uint64_t CONIDSTS:1;
      uint64_t DBNCTIME:1;
      uint64_t ASESVLD:1;
      uint64_t BSESVLD:1;
      uint64_t OTGVER:1;
      uint64_t CURMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GOTGCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SESENDDET:1;
      uint64_t reservedSpace1:5;
      uint64_t SESREQSUCSTSCHNG:1;
      uint64_t HSTNEGSUCSTSCHNG:1;
      uint64_t reservedSpace2:7;
      uint64_t HSTNEGDET:1;
      uint64_t ADEVTOUTCHG:1;
      uint64_t DBNCEDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GOTGINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GLBLINTRMSK:1;
      uint64_t HBSTLEN:4;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t NPTXFEMPLVL:1;
      uint64_t PTXFEMPLVL:1;
      uint64_t reservedSpace1:12;
      uint64_t REMMEMSUPP:1;
      uint64_t NOTIALLDMAWRIT:1;
      uint64_t AHBSINGLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAHBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTCAL:3;
      uint64_t PHYIF:1;
      uint64_t reservedSpace0:1;
      uint64_t FSINTF:1;
      uint64_t reservedSpace1:2;
      uint64_t SRPCAP:1;
      uint64_t HNPCAP:1;
      uint64_t USBTRDTIM:4;
      uint64_t reservedSpace2:8;
      uint64_t TERMSELDLPULSE:1;
      uint64_t reservedSpace3:5;
      uint64_t TXENDDELAY:1;
      uint64_t FORCEHSTMODE:1;
      uint64_t FORCEDEVMODE:1;
      uint64_t CORRUPTTXPKT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GUSBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSFTRST:1;
      uint64_t PIUFSSFTRST:1;
      uint64_t FRMCNTRRST:1;
      uint64_t reservedSpace0:1;
      uint64_t RXFFLSH:1;
      uint64_t TXFFLSH:1;
      uint64_t TXFNUM:5;
      uint64_t reservedSpace1:19;
      uint64_t DMAREQ:1;
      uint64_t AHBIDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURMOD:1;
      uint64_t MODEMIS:1;
      uint64_t OTGINT:1;
      uint64_t SOF:1;
      uint64_t RXFLVL:1;
      uint64_t NPTXFEMP:1;
      uint64_t GINNAKEFF:1;
      uint64_t GOUTNAKEFF:1;
      uint64_t reservedSpace0:2;
      uint64_t ERLYSUSP:1;
      uint64_t USBSUSP:1;
      uint64_t USBRST:1;
      uint64_t ENUMDONE:1;
      uint64_t ISOOUTDROP:1;
      uint64_t EOPF:1;
      uint64_t reservedSpace1:2;
      uint64_t IEPINT:1;
      uint64_t OEPINT:1;
      uint64_t INCOMPISOIN:1;
      uint64_t INCOMPLP:1;
      uint64_t FETSUSP:1;
      uint64_t RESETDET:1;
      uint64_t PRTINT:1;
      uint64_t HCHINT:1;
      uint64_t PTXFEMP:1;
      uint64_t reservedSpace2:1;
      uint64_t CONIDSTSCHNG:1;
      uint64_t DISCONNINT:1;
      uint64_t SESSREQINT:1;
      uint64_t WKUPINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MODEMISMSK:1;
      uint64_t OTGINTMSK:1;
      uint64_t SOFMSK:1;
      uint64_t RXFLVLMSK:1;
      uint64_t NPTXFEMPMSK:1;
      uint64_t GINNAKEFFMSK:1;
      uint64_t GOUTNAKEFFMSK:1;
      uint64_t reservedSpace1:2;
      uint64_t ERLYSUSPMSK:1;
      uint64_t USBSUSPMSK:1;
      uint64_t USBRSTMSK:1;
      uint64_t ENUMDONEMSK:1;
      uint64_t ISOOUTDROPMSK:1;
      uint64_t EOPFMSK:1;
      uint64_t reservedSpace2:1;
      uint64_t EPMISMSK:1;
      uint64_t IEPINTMSK:1;
      uint64_t OEPINTMSK:1;
      uint64_t INCOMPISOINMSK:1;
      uint64_t INCOMPLPMSK:1;
      uint64_t FETSUSPMSK:1;
      uint64_t RESETDETMSK:1;
      uint64_t PRTINTMSK:1;
      uint64_t HCHINTMSK:1;
      uint64_t PTXFEMPMSK:1;
      uint64_t reservedSpace3:1;
      uint64_t CONIDSTSCHNGMSK:1;
      uint64_t DISCONNINTMSK:1;
      uint64_t SESSREQINTMSK:1;
      uint64_t WKUPINTMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
      uint64_t FN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
      uint64_t FN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSTADDR:16;
      uint64_t NPTXFDEP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GNPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSPCAVAIL:16;
      uint64_t NPTXQSPCAVAIL:8;
      uint64_t NPTXQTOP:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GNPTXSTS;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNOPSYSID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GSNPSID;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GDFIFOCFG:16;
      uint64_t EPINFOBASEADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GDFIFOCFG;

  uint8_t res5[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSTADDR:11;
      uint64_t reservedSpace0:5;
      uint64_t PTXFSIZE:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:11;
      uint64_t reservedSpace0:5;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:11;
      uint64_t reservedSpace0:5;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:12;
      uint64_t reservedSpace0:4;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:12;
      uint64_t reservedSpace0:4;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:12;
      uint64_t reservedSpace0:4;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPNTXFSTADDR:12;
      uint64_t reservedSpace0:4;
      uint64_t INEPNTXFDEP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF6;

  uint8_t res6[740];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSLSPCLKSEL:2;
      uint64_t FSLSSUPP:1;
      uint64_t reservedSpace0:4;
      uint64_t ENA32KHZS:1;
      uint64_t RESVALID:8;
      uint64_t reservedSpace1:15;
      uint64_t MODECHTIMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRINT:16;
      uint64_t HFIRRLDCTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRNUM:16;
      uint64_t FRREM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFNUM;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSPCAVAIL:16;
      uint64_t PTXQSPCAVAIL:8;
      uint64_t PTXQTOP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HAINTMSK:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HAINTMSK;

  uint8_t res8[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTCONNSTS:1;
      uint64_t PRTCONNDET:1;
      uint64_t PRTENA:1;
      uint64_t PRTENCHNG:1;
      uint64_t PRTOVRCURRACT:1;
      uint64_t PRTOVRCURRCHNG:1;
      uint64_t PRTRES:1;
      uint64_t PRTSUSP:1;
      uint64_t PRTRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PRTLNSTS:2;
      uint64_t PRTPWR:1;
      uint64_t PRTTSTCTL:4;
      uint64_t PRTSPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRT;

  uint8_t res9[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC0_DMAADDR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC1_DMAADDR;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC2_DMAADDR;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC3_DMAADDR;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC4_DMAADDR;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC5_DMAADDR;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC6_DMAADDR;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC7_DMAADDR;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC8_DMAADDR;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC9_DMAADDR;

  uint8_t res19[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC10_DMAADDR;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC11_DMAADDR;

  uint8_t res21[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC12_DMAADDR;

  uint8_t res22[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t EPNUM:4;
      uint64_t EPDIR:1;
      uint64_t reservedSpace0:1;
      uint64_t LSPDDEV:1;
      uint64_t EPTYPE:2;
      uint64_t MC:2;
      uint64_t DEVADDR:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_CHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRTADDR:7;
      uint64_t HUBADDR:7;
      uint64_t XACTPOS:2;
      uint64_t COMPSPLT:1;
      uint64_t reservedSpace0:14;
      uint64_t SPLTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_SPLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t CHHLTD:1;
      uint64_t AHBERR:1;
      uint64_t STALL:1;
      uint64_t NAK:1;
      uint64_t ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERR:1;
      uint64_t BBLERR:1;
      uint64_t FRMOVRUN:1;
      uint64_t DATATGLERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t CHHLTDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t STALLMSK:1;
      uint64_t NAKMSK:1;
      uint64_t ACKMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t XACTERRMSK:1;
      uint64_t BBLERRMSK:1;
      uint64_t FRMOVRUNMSK:1;
      uint64_t DATATGLERRMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t PID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HC13_DMAADDR;

  uint8_t res23[328];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVSPD:2;
      uint64_t NZSTSOUTHSHK:1;
      uint64_t ENA32KHZSUSP:1;
      uint64_t DEVADDR:7;
      uint64_t PERFRINT:2;
      uint64_t ENDEVOUTNAK:1;
      uint64_t XCVRDLY:1;
      uint64_t ERRATICINTMSK:1;
      uint64_t reservedSpace0:10;
      uint64_t RESVALID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMTWKUPSIG:1;
      uint64_t SFTDISCON:1;
      uint64_t GNPINNAKSTS:1;
      uint64_t GOUTNAKSTS:1;
      uint64_t TSTCTL:3;
      uint64_t SGNPINNAK:1;
      uint64_t CGNPINNAK:1;
      uint64_t SGOUTNAK:1;
      uint64_t CGOUTNAK:1;
      uint64_t PWRONPRGDONE:1;
      uint64_t reservedSpace0:3;
      uint64_t IGNRFRMNUM:1;
      uint64_t NAKONBBLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPSTS:1;
      uint64_t ENUMSPD:2;
      uint64_t ERRTICERR:1;
      uint64_t reservedSpace0:4;
      uint64_t SOFFN:14;
      uint64_t DEVLNSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTS;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t EPDISBLDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t TIMEOUTMSK:1;
      uint64_t INTKNTXFEMPMSK:1;
      uint64_t INTKNEPMISMSK:1;
      uint64_t INEPNAKEFFMSK:1;
      uint64_t reservedSpace0:1;
      uint64_t TXFIFOUNDRNMSK:1;
      uint64_t reservedSpace1:4;
      uint64_t NAKMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPLMSK:1;
      uint64_t EPDISBLDMSK:1;
      uint64_t AHBERRMSK:1;
      uint64_t SETUPMSK:1;
      uint64_t OUTTKNEPDISMSK:1;
      uint64_t STSPHSERCVDMSK:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERRMSK:1;
      uint64_t reservedSpace1:3;
      uint64_t BBLEERRMSK:1;
      uint64_t NAKMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPINT0:1;
      uint64_t INEPINT1:1;
      uint64_t INEPINT2:1;
      uint64_t INEPINT3:1;
      uint64_t INEPINT4:1;
      uint64_t INEPINT5:1;
      uint64_t INEPINT6:1;
      uint64_t reservedSpace0:9;
      uint64_t OUTEPINT0:1;
      uint64_t OUTEPINT1:1;
      uint64_t OUTEPINT2:1;
      uint64_t OUTEPINT3:1;
      uint64_t OUTEPINT4:1;
      uint64_t OUTEPINT5:1;
      uint64_t OUTEPINT6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPMSK0:1;
      uint64_t INEPMSK1:1;
      uint64_t INEPMSK2:1;
      uint64_t INEPMSK3:1;
      uint64_t INEPMSK4:1;
      uint64_t INEPMSK5:1;
      uint64_t INEPMSK6:1;
      uint64_t reservedSpace0:9;
      uint64_t OUTEPMSK0:1;
      uint64_t OUTEPMSK1:1;
      uint64_t OUTEPMSK2:1;
      uint64_t OUTEPMSK3:1;
      uint64_t OUTEPMSK4:1;
      uint64_t OUTEPMSK5:1;
      uint64_t OUTEPMSK6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINTMSK;

  uint8_t res25[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DVBUSPULSE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DVBUSPULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONISOTHREN:1;
      uint64_t ISOTHREN:1;
      uint64_t TXTHRLEN:9;
      uint64_t AHBTHRRATIO:2;
      uint64_t reservedSpace0:3;
      uint64_t RXTHREN:1;
      uint64_t RXTHRLEN:9;
      uint64_t reservedSpace1:1;
      uint64_t ARBPRKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTHRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXFEMPMSK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPEMPMSK;

  uint8_t res26[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:2;
      uint64_t reservedSpace0:13;
      uint64_t USBACTEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace2:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0CTL;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0INT;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0TXFSTS;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0_CTL;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0_INT;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP0_DTXFSTS;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1_CTL;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1_INT;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP1_DTXFSTS;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2_CTL;

  uint8_t res36[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2_INT;

  uint8_t res37[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP2_DTXFSTS;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3_CTL;

  uint8_t res39[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3_INT;

  uint8_t res40[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP3_DTXFSTS;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4_CTL;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4_INT;

  uint8_t res43[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP4_DTXFSTS;

  uint8_t res44[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t reservedSpace1:1;
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5_CTL;

  uint8_t res45[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t TIMEOUT:1;
      uint64_t INTKNTXFEMP:1;
      uint64_t INTKNEPMIS:1;
      uint64_t INEPNAKEFF:1;
      uint64_t TXFEMP:1;
      uint64_t TXFIFOUNDRN:1;
      uint64_t reservedSpace0:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5_INT;

  uint8_t res46[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t MC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5_DMAADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPCAVAIL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEP5_DTXFSTS;

  uint8_t res47[292];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:2;
      uint64_t reservedSpace0:13;
      uint64_t USBACTEP:1;
      uint64_t reservedSpace1:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0CTL;

  uint8_t res48[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0INT;

  uint8_t res49[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:7;
      uint64_t reservedSpace0:12;
      uint64_t PKTCNT:1;
      uint64_t reservedSpace1:9;
      uint64_t SUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0DMAADDR;

  uint8_t res50[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0_CTL;

  uint8_t res51[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0_INT;

  uint8_t res52[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP0_DMAADDR;

  uint8_t res53[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1_CTL;

  uint8_t res54[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1_INT;

  uint8_t res55[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP1_DMAADDR;

  uint8_t res56[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2_CTL;

  uint8_t res57[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2_INT;

  uint8_t res58[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP2_DMAADDR;

  uint8_t res59[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3_CTL;

  uint8_t res60[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3_INT;

  uint8_t res61[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP3_DMAADDR;

  uint8_t res62[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4_CTL;

  uint8_t res63[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4_INT;

  uint8_t res64[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP4_DMAADDR;

  uint8_t res65[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPS:11;
      uint64_t reservedSpace0:4;
      uint64_t USBACTEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYPE:2;
      uint64_t SNP:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SETD0PIDEF:1;
      uint64_t SETD1PIDOF:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5_CTL;

  uint8_t res66[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERCOMPL:1;
      uint64_t EPDISBLD:1;
      uint64_t AHBERR:1;
      uint64_t SETUP:1;
      uint64_t OUTTKNEPDIS:1;
      uint64_t STSPHSERCVD:1;
      uint64_t BACK2BACKSETUP:1;
      uint64_t reservedSpace0:1;
      uint64_t OUTPKTERR:1;
      uint64_t reservedSpace1:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BBLEERR:1;
      uint64_t NAKINTRPT:1;
      uint64_t reservedSpace2:1;
      uint64_t STUPPKTRCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5_INT;

  uint8_t res67[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFERSIZE:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5_TSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEP5_DMAADDR;

  uint8_t res68[552];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOPPCLK:1;
      uint64_t GATEHCLK:1;
      uint64_t PWRCLMP:1;
      uint64_t RSTPDWNMODULE:1;
      uint64_t reservedSpace0:2;
      uint64_t PHYSLEEP:1;
      uint64_t L1SUSPENDED:1;
      uint64_t RESETAFTERSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCGCCTL;

};

#define USB (*(volatile struct USB_tag *) 0x40022000)

struct IDAC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t CURSINK:1;
      uint64_t MINOUTTRANS:1;
      uint64_t APORTOUTEN:1;
      uint64_t APORTOUTSEL:8;
      uint64_t PWRSEL:1;
      uint64_t EM2DELAY:1;
      uint64_t APORTMASTERDIS:1;
      uint64_t reservedSpace0:1;
      uint64_t APORTOUTENPRS:1;
      uint64_t reservedSpace1:1;
      uint64_t MAINOUTEN:1;
      uint64_t MAINOUTENPRS:1;
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGESEL:2;
      uint64_t reservedSpace0:6;
      uint64_t STEPSEL:5;
      uint64_t reservedSpace1:3;
      uint64_t TUNING:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURPROG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EM2DUTYCYCLEDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DUTYCONFIG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURSTABLE:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURSTABLE:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURSTABLE:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURSTABLE:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURSTABLE:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

};

#define IDAC0 (*(volatile struct IDAC0_tag *) 0x40084000)

struct CSEN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t EN:1;
      uint64_t CMPPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t CM:2;
      uint64_t reservedSpace2:2;
      uint64_t SARCR:2;
      uint64_t reservedSpace3:2;
      uint64_t ACU:3;
      uint64_t MCEN:1;
      uint64_t STM:2;
      uint64_t CMPEN:1;
      uint64_t DRSF:1;
      uint64_t DMAEN:1;
      uint64_t CONVSEL:1;
      uint64_t CHOPEN:1;
      uint64_t AUTOGND:1;
      uint64_t MXUC:1;
      uint64_t EMACMPEN:1;
      uint64_t WARMUPMODE:1;
      uint64_t LOCALSENS:1;
      uint64_t CPACCURACY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCPRESC:3;
      uint64_t reservedSpace0:5;
      uint64_t PCTOP:8;
      uint64_t WARMUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSENBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRSSEL;

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
      uint64_t SCANINPUTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT0TO7SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t INPUT8TO15SEL:4;
      uint64_t reservedSpace1:4;
      uint64_t INPUT16TO23SEL:4;
      uint64_t reservedSpace2:4;
      uint64_t INPUT24TO31SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANINPUTSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCANINPUTEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT32TO39SEL:4;
      uint64_t reservedSpace0:4;
      uint64_t INPUT40TO47SEL:4;
      uint64_t reservedSpace1:4;
      uint64_t INPUT48TO55SEL:4;
      uint64_t reservedSpace2:4;
      uint64_t INPUT56TO63SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCANINPUTSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XREQ:1;
      uint64_t APORT1YREQ:1;
      uint64_t APORT2XREQ:1;
      uint64_t APORT2YREQ:1;
      uint64_t APORT3XREQ:1;
      uint64_t APORT3YREQ:1;
      uint64_t APORT4XREQ:1;
      uint64_t APORT4YREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t APORT1XCONFLICT:1;
      uint64_t APORT1YCONFLICT:1;
      uint64_t APORT2XCONFLICT:1;
      uint64_t APORT2YCONFLICT:1;
      uint64_t APORT3XCONFLICT:1;
      uint64_t APORT3YCONFLICT:1;
      uint64_t APORT4XCONFLICT:1;
      uint64_t APORT4YCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APORTCONFLICT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPTHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMA:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMASAMPLE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMACTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SINGLESEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINEUP:16;
      uint64_t BASELINEDN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMBASELINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMG:8;
      uint64_t DMR:4;
      uint64_t reservedSpace0:4;
      uint64_t DMCR:4;
      uint64_t CRMODE:2;
      uint64_t reservedSpace1:6;
      uint64_t DMGRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t IREFPROG:3;
      uint64_t reservedSpace1:1;
      uint64_t IDACIREFS:3;
      uint64_t reservedSpace2:9;
      uint64_t TRSTPROG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANACTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:1;
      uint64_t CONV:1;
      uint64_t EOS:1;
      uint64_t DMAOF:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:1;
      uint64_t CONV:1;
      uint64_t EOS:1;
      uint64_t DMAOF:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:1;
      uint64_t CONV:1;
      uint64_t EOS:1;
      uint64_t DMAOF:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:1;
      uint64_t CONV:1;
      uint64_t EOS:1;
      uint64_t DMAOF:1;
      uint64_t APORTCONFLICT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

};

#define CSEN (*(volatile struct CSEN_tag *) 0x4008e000)

struct LCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t UDCTRL:2;
      uint64_t reservedSpace0:20;
      uint64_t DSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUX:3;
      uint64_t reservedSpace0:1;
      uint64_t WAVE:1;
      uint64_t reservedSpace1:3;
      uint64_t CONTRAST:6;
      uint64_t reservedSpace2:6;
      uint64_t CHGRDST:3;
      uint64_t reservedSpace3:1;
      uint64_t BIAS:2;
      uint64_t reservedSpace4:2;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DISPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLINKEN:1;
      uint64_t BLANK:1;
      uint64_t AEN:1;
      uint64_t AREGASC:2;
      uint64_t AREGBSC:2;
      uint64_t ALOGSEL:1;
      uint64_t FCEN:1;
      uint64_t reservedSpace0:7;
      uint64_t FCPRESC:2;
      uint64_t FCTOP:6;
      uint64_t reservedSpace1:4;
      uint64_t ALOC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BACTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASTATE:4;
      uint64_t reservedSpace0:4;
      uint64_t BLINK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AREGA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREGA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AREGB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED:3;
      uint64_t reservedSpace0:1;
      uint64_t BUFDRV:4;
      uint64_t reservedSpace1:2;
      uint64_t BUFBIAS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIASCTRL;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD0L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD0L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD1L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD1L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD2L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD2L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD3L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD3L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD0H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD0H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD1H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD1H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD2H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD2H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD3H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD3H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD4L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD4L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD5L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD5L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD6L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD6L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD7L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD7L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD4H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD4H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD5H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD5H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD6H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD6H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGD7H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGD7H;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGFREEZE:1;
      uint64_t LCDGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREEZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t BACTRL:1;
      uint64_t AREGA:1;
      uint64_t AREGB:1;
      uint64_t SEGD0L:1;
      uint64_t SEGD1L:1;
      uint64_t SEGD2L:1;
      uint64_t SEGD3L:1;
      uint64_t SEGD0H:1;
      uint64_t SEGD1H:1;
      uint64_t SEGD2H:1;
      uint64_t SEGD3H:1;
      uint64_t SEGD4L:1;
      uint64_t SEGD5L:1;
      uint64_t SEGD6L:1;
      uint64_t SEGD7L:1;
      uint64_t SEGD4H:1;
      uint64_t SEGD5H:1;
      uint64_t SEGD6H:1;
      uint64_t SEGD7H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDIV:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRAMERATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEGEN2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEGEN2;

};

#define LCD (*(volatile struct LCD_tag *) 0x40054000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DEBUGRUN:1;
      uint64_t COMP0TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t COMP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t COMP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t COMP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t COMP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPA_COMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPB_COMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPC_COMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPD_COMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPE_COMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPF_COMP;

};

#define RTC (*(volatile struct RTC_tag *) 0x40060000)

struct RTCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t DEBUGRUN:1;
      uint64_t reservedSpace1:1;
      uint64_t PRECCV0TOP:1;
      uint64_t CCV1TOP:1;
      uint64_t reservedSpace2:2;
      uint64_t CNTPRESC:4;
      uint64_t CNTTICK:1;
      uint64_t reservedSpace3:1;
      uint64_t BUMODETSEN:1;
      uint64_t OSCFDETEN:1;
      uint64_t CNTMODE:1;
      uint64_t LYEARCORRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECNT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECNT:15;
      uint64_t CNTLSB:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECU:4;
      uint64_t SECT:3;
      uint64_t reservedSpace0:1;
      uint64_t MINU:4;
      uint64_t MINT:3;
      uint64_t reservedSpace1:1;
      uint64_t HOURU:4;
      uint64_t HOURT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYOMU:4;
      uint64_t DAYOMT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONTHU:4;
      uint64_t MONTHT:1;
      uint64_t reservedSpace1:3;
      uint64_t YEARU:4;
      uint64_t YEART:4;
      uint64_t DAYOW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t OSCFAIL:1;
      uint64_t CNTTICK:1;
      uint64_t MINTICK:1;
      uint64_t HOURTICK:1;
      uint64_t DAYTICK:1;
      uint64_t DAYOWOF:1;
      uint64_t MONTHTICK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t OSCFAIL:1;
      uint64_t CNTTICK:1;
      uint64_t MINTICK:1;
      uint64_t HOURTICK:1;
      uint64_t DAYTICK:1;
      uint64_t DAYOWOF:1;
      uint64_t MONTHTICK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t OSCFAIL:1;
      uint64_t CNTTICK:1;
      uint64_t MINTICK:1;
      uint64_t HOURTICK:1;
      uint64_t DAYTICK:1;
      uint64_t DAYOWOF:1;
      uint64_t MONTHTICK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OF:1;
      uint64_t CC0:1;
      uint64_t CC1:1;
      uint64_t CC2:1;
      uint64_t OSCFAIL:1;
      uint64_t CNTTICK:1;
      uint64_t MINTICK:1;
      uint64_t HOURTICK:1;
      uint64_t DAYTICK:1;
      uint64_t DAYOWOF:1;
      uint64_t MONTHTICK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUMODETS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRSTATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POWERDOWN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM4WU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EM4WUEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t CMOA:2;
      uint64_t ICEDGE:2;
      uint64_t PRSSEL:5;
      uint64_t COMPBASE:1;
      uint64_t COMPMASK:5;
      uint64_t DAYCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECU:4;
      uint64_t SECT:3;
      uint64_t reservedSpace0:1;
      uint64_t MINU:4;
      uint64_t MINT:3;
      uint64_t reservedSpace1:1;
      uint64_t HOURU:4;
      uint64_t HOURT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONTHU:4;
      uint64_t MONTHT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC0_DATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t CMOA:2;
      uint64_t ICEDGE:2;
      uint64_t PRSSEL:5;
      uint64_t COMPBASE:1;
      uint64_t COMPMASK:5;
      uint64_t DAYCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECU:4;
      uint64_t SECT:3;
      uint64_t reservedSpace0:1;
      uint64_t MINU:4;
      uint64_t MINT:3;
      uint64_t reservedSpace1:1;
      uint64_t HOURU:4;
      uint64_t HOURT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONTHU:4;
      uint64_t MONTHT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC1_DATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t CMOA:2;
      uint64_t ICEDGE:2;
      uint64_t PRSSEL:5;
      uint64_t COMPBASE:1;
      uint64_t COMPMASK:5;
      uint64_t DAYCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_CCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECU:4;
      uint64_t SECT:3;
      uint64_t reservedSpace0:1;
      uint64_t MINU:4;
      uint64_t MINT:3;
      uint64_t reservedSpace1:1;
      uint64_t HOURU:4;
      uint64_t HOURT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYT:2;
      uint64_t reservedSpace0:2;
      uint64_t MONTHU:4;
      uint64_t MONTHT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC2_DATE;

  uint8_t res0[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET4_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET5_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET6_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET7_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET8_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET9_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET10_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET11_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET12_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET13_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET14_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET15_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET16_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET17_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET18_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET19_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET20_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET21_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET22_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET23_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET24_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET25_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET26_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET27_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET28_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET29_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET30_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RET31_REG;

};

#define RTCC (*(volatile struct RTCC_tag *) 0x40062000)

struct WDOG0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DEBUGRUN:1;
      uint64_t EM2RUN:1;
      uint64_t EM3RUN:1;
      uint64_t LOCK:1;
      uint64_t EM4BLOCK:1;
      uint64_t SWOSCBLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t PERSEL:4;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t WARNSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t WINSEL:3;
      uint64_t reservedSpace3:3;
      uint64_t CLRSRC:1;
      uint64_t WDOGRSTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t PCH0_PRSCTRL:1;
      uint64_t PCH1_PRSCTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t PRSMISSRSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCH0_PRSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t PRSMISSRSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCH1_PRSCTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

};

#define WDOG0 (*(volatile struct WDOG0_tag *) 0x40052000)

struct WDOG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DEBUGRUN:1;
      uint64_t EM2RUN:1;
      uint64_t EM3RUN:1;
      uint64_t LOCK:1;
      uint64_t EM4BLOCK:1;
      uint64_t SWOSCBLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t PERSEL:4;
      uint64_t CLKSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t WARNSEL:2;
      uint64_t reservedSpace2:6;
      uint64_t WINSEL:3;
      uint64_t reservedSpace3:3;
      uint64_t CLRSRC:1;
      uint64_t WDOGRSTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL:1;
      uint64_t CMD:1;
      uint64_t PCH0_PRSCTRL:1;
      uint64_t PCH1_PRSCTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNCBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t PRSMISSRSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCH0_PRSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRSSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t PRSMISSRSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCH1_PRSCTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUT:1;
      uint64_t WARN:1;
      uint64_t WIN:1;
      uint64_t PEM0:1;
      uint64_t PEM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

};

#define WDOG1 (*(volatile struct WDOG1_tag *) 0x40052400)

struct ETM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWERDWN:1;
      uint64_t reservedSpace0:3;
      uint64_t PORTSIZE:3;
      uint64_t STALL:1;
      uint64_t BRANCHOUTPUT:1;
      uint64_t DBGREQCTRL:1;
      uint64_t ETMPROG:1;
      uint64_t ETMPORTSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t PORTMODE2:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTMODE:2;
      uint64_t reservedSpace3:3;
      uint64_t EPORTSIZE:2;
      uint64_t reservedSpace4:5;
      uint64_t TSTAMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRCMPPAIR:4;
      uint64_t DATACMPNUM:4;
      uint64_t MMDECCNT:5;
      uint64_t COUNTNUM:3;
      uint64_t SEQPRES:1;
      uint64_t EXTINPNUM:3;
      uint64_t EXTOUTNUM:3;
      uint64_t FIFOFULLPRES:1;
      uint64_t IDCOMPNUM:2;
      uint64_t TRACESS:1;
      uint64_t MMACCESS:1;
      uint64_t reservedSpace0:3;
      uint64_t ETMID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESA:7;
      uint64_t RESB:7;
      uint64_t ETMFCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTRIGGER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETHOF:1;
      uint64_t ETMPROGBIT:1;
      uint64_t TRACESTAT:1;
      uint64_t TRIGBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXPORTSIZE:3;
      uint64_t reservedSpace0:5;
      uint64_t FIFOFULL:1;
      uint64_t MAXPORTSIZE3:1;
      uint64_t PORTSIZE:1;
      uint64_t PORTMODE:1;
      uint64_t PROCNUM:3;
      uint64_t reservedSpace1:2;
      uint64_t NOFETCHCOMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMSCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESA:7;
      uint64_t RESB:7;
      uint64_t ETMFCNEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTEEVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRCMP:8;
      uint64_t MEMMAP:16;
      uint64_t INCEXCTL:1;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTECR1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYTENUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMFFLR;

  uint8_t res3[272];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCNTRLDVR1;

  uint8_t res4[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMSYNCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMPVER:4;
      uint64_t ETMMINVER:4;
      uint64_t ETMMAJVER:4;
      uint64_t PROCFAM:4;
      uint64_t LPCF:1;
      uint64_t reservedSpace0:1;
      uint64_t THUMBT:1;
      uint64_t SECEXT:1;
      uint64_t BPE:1;
      uint64_t reservedSpace1:3;
      uint64_t IMPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINPSEL:2;
      uint64_t reservedSpace0:1;
      uint64_t EXTINPBUS:8;
      uint64_t READREGS:1;
      uint64_t DADDRCMP:1;
      uint64_t INSTRES:3;
      uint64_t EICEWPNT:4;
      uint64_t TEICEWPNT:1;
      uint64_t EICEIMP:1;
      uint64_t TIMP:1;
      uint64_t reservedSpace1:4;
      uint64_t RFCNT:1;
      uint64_t TENC:1;
      uint64_t TSIZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCCER;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTRSEL:4;
      uint64_t reservedSpace0:12;
      uint64_t STOPRSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTESSEICR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESAEVT:7;
      uint64_t RESBEVT:7;
      uint64_t ETMFCNEVT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTSEVR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACEID:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMTRACEIDR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFE:1;
      uint64_t SWP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMIDR2;

  uint8_t res9[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETMUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPDSR;

  uint8_t res10[3016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTIN:2;
      uint64_t reservedSpace0:2;
      uint64_t COREHALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMISCIN;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGEROUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITTRIGOUT;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATREADY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMITATBCTR2;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATVALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMITATBCTR0;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMITCTRL;

  uint8_t res15[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETTAG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCLAIMSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRTAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCLAIMCLR;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMLAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKIMP:1;
      uint64_t LOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONSECINVDBG:2;
      uint64_t NONSECNONINVDBG:2;
      uint64_t SECINVDBG:2;
      uint64_t SECNONINVDBG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMAUTHSTATUS;

  uint8_t res17[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACESRC:4;
      uint64_t PROCTRACE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMDEVTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTCODE:4;
      uint64_t COUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPIDR4;

  uint32_t ETMPIDR5;
  uint32_t ETMPIDR6;
  uint32_t ETMPIDR7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARTNUM:4;
      uint64_t IDCODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDCODE:3;
      uint64_t ALWAYS1:1;
      uint64_t REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUSTMOD:4;
      uint64_t REVAND:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMPIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETMCIDR3;

};

#define ETM (*(volatile struct ETM_tag *) 0xe0041000)

struct SMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPUPRIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPUPRIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPUPRIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPUPRIV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPUCTRL;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACMP0_bitfield:1;
      uint64_t ACMP1_bitfield:1;
      uint64_t ACMP2_bitfield:1;
      uint64_t ACMP3_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t ADC1_bitfield:1;
      uint64_t CAN0_bitfield:1;
      uint64_t CAN1_bitfield:1;
      uint64_t CMU_bitfield:1;
      uint64_t CRYOTIMER_bitfield:1;
      uint64_t CRYPTO0_bitfield:1;
      uint64_t CSEN_bitfield:1;
      uint64_t VDAC0_bitfield:1;
      uint64_t PRS_bitfield:1;
      uint64_t EBI_bitfield:1;
      uint64_t EMU_bitfield:1;
      uint64_t ETH_bitfield:1;
      uint64_t FPUEH_bitfield:1;
      uint64_t GPCRC_bitfield:1;
      uint64_t GPIO_bitfield:1;
      uint64_t I2C0_bitfield:1;
      uint64_t I2C1_bitfield:1;
      uint64_t I2C2_bitfield:1;
      uint64_t IDAC0_bitfield:1;
      uint64_t MSC_bitfield:1;
      uint64_t LCD_bitfield:1;
      uint64_t LDMA_bitfield:1;
      uint64_t LESENSE_bitfield:1;
      uint64_t LETIMER0_bitfield:1;
      uint64_t LETIMER1_bitfield:1;
      uint64_t LEUART0_bitfield:1;
      uint64_t LEUART1_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPUPATD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCNT0_bitfield:1;
      uint64_t PCNT1_bitfield:1;
      uint64_t PCNT2_bitfield:1;
      uint64_t QSPI0_bitfield:1;
      uint64_t RMU_bitfield:1;
      uint64_t RTC_bitfield:1;
      uint64_t RTCC_bitfield:1;
      uint64_t SDIO_bitfield:1;
      uint64_t SMU_bitfield:1;
      uint64_t TIMER0_bitfield:1;
      uint64_t TIMER1_bitfield:1;
      uint64_t TIMER2_bitfield:1;
      uint64_t TIMER3_bitfield:1;
      uint64_t TIMER4_bitfield:1;
      uint64_t TIMER5_bitfield:1;
      uint64_t TIMER6_bitfield:1;
      uint64_t TRNG0_bitfield:1;
      uint64_t UART0_bitfield:1;
      uint64_t UART1_bitfield:1;
      uint64_t USART0_bitfield:1;
      uint64_t USART1_bitfield:1;
      uint64_t USART2_bitfield:1;
      uint64_t USART3_bitfield:1;
      uint64_t USART4_bitfield:1;
      uint64_t USART5_bitfield:1;
      uint64_t USB_bitfield:1;
      uint64_t WDOG0_bitfield:1;
      uint64_t WDOG1_bitfield:1;
      uint64_t WTIMER0_bitfield:1;
      uint64_t WTIMER1_bitfield:1;
      uint64_t WTIMER2_bitfield:1;
      uint64_t WTIMER3_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPUPATD1;

  uint32_t PPUPATD2;
  uint8_t res2[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPUFS;

};

#define SMU (*(volatile struct SMU_tag *) 0x4002000c)

struct TRNG0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t TESTEN:1;
      uint64_t CONDBYPASS:1;
      uint64_t REPCOUNTIEN:1;
      uint64_t APT64IEN:1;
      uint64_t APT4096IEN:1;
      uint64_t FULLIEN:1;
      uint64_t SOFTRESET:1;
      uint64_t PREIEN:1;
      uint64_t ALMIEN:1;
      uint64_t FORCERUN:1;
      uint64_t BYPNIST:1;
      uint64_t BYPAIS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOLEVEL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFODEPTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTDATA;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TESTDATABUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t REPCOUNTIF:1;
      uint64_t APT64IF:1;
      uint64_t APT4096IF:1;
      uint64_t FULLIF:1;
      uint64_t PREIF:1;
      uint64_t ALMIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INITWAITVAL;

  uint8_t res2[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define TRNG0 (*(volatile struct TRNG0_tag *) 0x4001d000)

