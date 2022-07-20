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
      uint64_t VECTKEY_VECTKEYSTAT:16;
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
      uint64_t reservedSpace2:6;
      uint64_t DC:1;
      uint64_t IC:1;
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

struct ADC1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MS:2;
      uint64_t reservedSpace0:2;
      uint64_t ACCSEL:2;
      uint64_t CLREN:1;
      uint64_t DFMT:1;
      uint64_t AVCNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR1;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRGSELA:2;
      uint64_t reservedSpace0:5;
      uint64_t TRGENA:1;
      uint64_t TRGSELB:2;
      uint64_t reservedSpace1:5;
      uint64_t TRGENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVCHSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AVCHSELR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EXCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EXCHSELR;

  uint8_t res2[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SHSST:8;
      uint64_t SHSEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SHCR;

  uint8_t res3[4];

  uint8_t SSTR0;
  uint8_t SSTR1;
  uint8_t SSTR2;
  uint8_t SSTR3;
  uint8_t SSTR4;
  uint8_t SSTR5;
  uint8_t SSTR6;
  uint8_t SSTR7;
  uint8_t SSTR8;
  uint8_t SSTR9;
  uint8_t SSTR10;
  uint8_t SSTR11;
  uint8_t SSTR12;
  uint8_t SSTR13;
  uint8_t SSTR14;
  uint8_t SSTR15;
  uint8_t SSTRL;
  uint8_t res4[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH00MUX:4;
      uint64_t CH01MUX:4;
      uint64_t CH02MUX:4;
      uint64_t CH03MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH04MUX:4;
      uint64_t CH05MUX:4;
      uint64_t CH06MUX:4;
      uint64_t CH07MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH08MUX:4;
      uint64_t CH09MUX:4;
      uint64_t CH10MUX:4;
      uint64_t CH11MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH12MUX:4;
      uint64_t CH13MUX:4;
      uint64_t CH14MUX:4;
      uint64_t CH15MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR3;

  uint8_t res5[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAF:1;
      uint64_t EOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t SASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAIEN:1;
      uint64_t EOCBIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ICR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLREOCAF:1;
      uint64_t CLREOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRSASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISCLRR;

  uint8_t res6[5];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SYNCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t SYNCMD:3;
      uint64_t reservedSpace1:1;
      uint64_t SYNCDLY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SYNCCR;

  uint8_t res7[2];

  uint16_t DR0;
  uint16_t DR1;
  uint16_t DR2;
  uint16_t DR3;
  uint16_t DR4;
  uint16_t DR5;
  uint16_t DR6;
  uint16_t DR7;
  uint16_t DR8;
  uint16_t DR9;
  uint16_t DR10;
  uint16_t DR11;
  uint16_t DR12;
  uint16_t DR13;
  uint16_t DR14;
  uint16_t DR15;
  uint8_t res8[48];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AWD0EN:1;
      uint64_t AWD0IEN:1;
      uint64_t AWD0MD:1;
      uint64_t reservedSpace0:1;
      uint64_t AWD1EN:1;
      uint64_t AWD1IEN:1;
      uint64_t AWD1MD:1;
      uint64_t reservedSpace1:1;
      uint64_t AWDCM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) AWDCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWD0F:1;
      uint64_t AWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t AWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRAWD0F:1;
      uint64_t CLRAWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRAWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSCLRR;

  uint16_t AWD0DR0;
  uint16_t AWD0DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD0CHSR;

  uint8_t res9[3];

  uint16_t AWD1DR0;
  uint16_t AWD1DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD1CHSR;

  uint8_t res10[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGACTL:4;
      uint64_t PGAGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGACR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGACTL:4;
      uint64_t PGAGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGACR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGACTL:4;
      uint64_t PGAGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGACR3;

  uint8_t res11[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGAVSSEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGAVSSENR;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40040000)

struct ADC2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MS:2;
      uint64_t reservedSpace0:2;
      uint64_t ACCSEL:2;
      uint64_t CLREN:1;
      uint64_t DFMT:1;
      uint64_t AVCNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR1;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRGSELA:2;
      uint64_t reservedSpace0:5;
      uint64_t TRGENA:1;
      uint64_t TRGSELB:2;
      uint64_t reservedSpace1:5;
      uint64_t TRGENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVCHSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AVCHSELR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EXCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EXCHSELR;

  uint8_t res2[7];

  uint8_t SSTR0;
  uint8_t SSTR1;
  uint8_t SSTR2;
  uint8_t SSTR3;
  uint8_t SSTR4;
  uint8_t SSTR5;
  uint8_t SSTR6;
  uint8_t SSTR7;
  uint8_t SSTR8;
  uint8_t SSTR9;
  uint8_t SSTR10;
  uint8_t SSTR11;
  uint8_t SSTR12;
  uint8_t SSTR13;
  uint8_t SSTR14;
  uint8_t SSTR15;
  uint8_t SSTRL;
  uint8_t res3[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH00MUX:4;
      uint64_t CH01MUX:4;
      uint64_t CH02MUX:4;
      uint64_t CH03MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH04MUX:4;
      uint64_t CH05MUX:4;
      uint64_t CH06MUX:4;
      uint64_t CH07MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH08MUX:4;
      uint64_t CH09MUX:4;
      uint64_t CH10MUX:4;
      uint64_t CH11MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH12MUX:4;
      uint64_t CH13MUX:4;
      uint64_t CH14MUX:4;
      uint64_t CH15MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR3;

  uint8_t res4[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAF:1;
      uint64_t EOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t SASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAIEN:1;
      uint64_t EOCBIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ICR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLREOCAF:1;
      uint64_t CLREOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRSASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISCLRR;

  uint8_t res5[9];

  uint16_t DR0;
  uint16_t DR1;
  uint16_t DR2;
  uint16_t DR3;
  uint16_t DR4;
  uint16_t DR5;
  uint16_t DR6;
  uint16_t DR7;
  uint16_t DR8;
  uint16_t DR9;
  uint16_t DR10;
  uint16_t DR11;
  uint16_t DR12;
  uint16_t DR13;
  uint16_t DR14;
  uint16_t DR15;
  uint8_t res6[48];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AWD0EN:1;
      uint64_t AWD0IEN:1;
      uint64_t AWD0MD:1;
      uint64_t reservedSpace0:1;
      uint64_t AWD1EN:1;
      uint64_t AWD1IEN:1;
      uint64_t AWD1MD:1;
      uint64_t reservedSpace1:1;
      uint64_t AWDCM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) AWDCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWD0F:1;
      uint64_t AWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t AWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRAWD0F:1;
      uint64_t CLRAWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRAWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSCLRR;

  uint16_t AWD0DR0;
  uint16_t AWD0DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD0CHSR;

  uint8_t res7[3];

  uint16_t AWD1DR0;
  uint16_t AWD1DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD1CHSR;

  uint8_t res8[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGACTL:4;
      uint64_t PGAGAIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGACR1;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PGAVSSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PGAVSSENR;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x40040400)

struct ADC3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STR;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MS:2;
      uint64_t reservedSpace0:2;
      uint64_t ACCSEL:2;
      uint64_t CLREN:1;
      uint64_t DFMT:1;
      uint64_t AVCNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CR1;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRGSELA:2;
      uint64_t reservedSpace0:5;
      uint64_t TRGENA:1;
      uint64_t TRGSELB:2;
      uint64_t reservedSpace1:5;
      uint64_t TRGENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELA:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSELB:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVCHSEL:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AVCHSELR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EXCHSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EXCHSELR;

  uint8_t res2[7];

  uint8_t SSTR0;
  uint8_t SSTR1;
  uint8_t SSTR2;
  uint8_t SSTR3;
  uint8_t SSTR4;
  uint8_t SSTR5;
  uint8_t SSTR6;
  uint8_t SSTR7;
  uint8_t SSTR8;
  uint8_t SSTR9;
  uint8_t SSTR10;
  uint8_t SSTR11;
  uint8_t SSTR12;
  uint8_t SSTR13;
  uint8_t SSTR14;
  uint8_t SSTR15;
  uint8_t SSTRL;
  uint8_t res3[7];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH00MUX:4;
      uint64_t CH01MUX:4;
      uint64_t CH02MUX:4;
      uint64_t CH03MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH04MUX:4;
      uint64_t CH05MUX:4;
      uint64_t CH06MUX:4;
      uint64_t CH07MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH08MUX:4;
      uint64_t CH09MUX:4;
      uint64_t CH10MUX:4;
      uint64_t CH11MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CH12MUX:4;
      uint64_t CH13MUX:4;
      uint64_t CH14MUX:4;
      uint64_t CH15MUX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHMUXR3;

  uint8_t res4[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAF:1;
      uint64_t EOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t SASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EOCAIEN:1;
      uint64_t EOCBIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ICR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLREOCAF:1;
      uint64_t CLREOCBF:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRSASTPDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISCLRR;

  uint8_t res5[9];

  uint16_t DR0;
  uint16_t DR1;
  uint16_t DR2;
  uint16_t DR3;
  uint16_t DR4;
  uint16_t DR5;
  uint16_t DR6;
  uint16_t DR7;
  uint16_t DR8;
  uint16_t DR9;
  uint16_t DR10;
  uint16_t DR11;
  uint16_t DR12;
  uint16_t DR13;
  uint16_t DR14;
  uint16_t DR15;
  uint16_t DR16;
  uint16_t DR17;
  uint16_t DR18;
  uint16_t DR19;
  uint8_t res6[40];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AWD0EN:1;
      uint64_t AWD0IEN:1;
      uint64_t AWD0MD:1;
      uint64_t reservedSpace0:1;
      uint64_t AWD1EN:1;
      uint64_t AWD1IEN:1;
      uint64_t AWD1MD:1;
      uint64_t reservedSpace1:1;
      uint64_t AWDCM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) AWDCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWD0F:1;
      uint64_t AWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t AWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLRAWD0F:1;
      uint64_t CLRAWD1F:1;
      uint64_t reservedSpace0:2;
      uint64_t CLRAWDCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWDSCLRR;

  uint16_t AWD0DR0;
  uint16_t AWD0DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD0CHSR;

  uint8_t res7[3];

  uint16_t AWD1DR0;
  uint16_t AWD1DR1;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) AWD1CHSR;

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x40040800)

struct AES_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t KEYSIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[12];

  uint32_t DR0;
  uint32_t DR1;
  uint32_t DR2;
  uint32_t DR3;
  uint32_t KR0;
  uint32_t KR1;
  uint32_t KR2;
  uint32_t KR3;
  uint32_t KR4;
  uint32_t KR5;
  uint32_t KR6;
  uint32_t KR7;
};

#define AES (*(volatile struct AES_tag *) 0x40008000)

struct AOS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSFTTRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCU_TRGSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCU_TRGSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCU_TRGSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCU_TRGSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1_TRGSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2_TRGSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TRGSELRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR6_HTSSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR6_HTSSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR6_HTSSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR6_HTSSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTTRGSR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTTRGSR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR0_HTSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMR2_HTSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_ITRGSELA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HASH_ITRGSELB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRA_HTSSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRA_HTSSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRA_HTSSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMRA_HTSSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTS_TRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_ITRGSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC1_ITRGSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC2_ITRGSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC2_ITRGSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC3_ITRGSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGSEL:9;
      uint64_t reservedSpace0:21;
      uint64_t COMTRG_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC3_ITRGSELR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMTRG:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMTRG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMTRG:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMTRG2;

  uint8_t res0[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTDIRR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTODR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTORR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTOSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTRISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTFAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTDIRR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTODR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTORR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTOSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTRISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTFAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTDIRR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTODR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTORR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTOSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTRISR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTFAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTDIRR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTIDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTODR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTORR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTOSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTRISR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTFAL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFEN1:1;
      uint64_t DIVS1:2;
      uint64_t reservedSpace0:5;
      uint64_t NFEN2:1;
      uint64_t DIVS2:2;
      uint64_t reservedSpace1:5;
      uint64_t NFEN3:1;
      uint64_t DIVS3:2;
      uint64_t reservedSpace2:5;
      uint64_t NFEN4:1;
      uint64_t DIVS4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEVNTNFCR;

};

#define AOS (*(volatile struct AOS_tag *) 0x40010800)

struct CAN1_tag
{
  uint32_t RBUF;
  uint8_t res0[76];

  uint32_t TBUF;
  uint8_t res1[76];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BUSOFF:1;
      uint64_t TACTIVE:1;
      uint64_t RACTIVE:1;
      uint64_t TSSS:1;
      uint64_t TPSS:1;
      uint64_t LBMI:1;
      uint64_t LBME:1;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG_STAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSA:1;
      uint64_t TSALL:1;
      uint64_t TSONE:1;
      uint64_t TPA:1;
      uint64_t TPE:1;
      uint64_t reservedSpace0:1;
      uint64_t LOM:1;
      uint64_t TBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TCMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSSTAT:2;
      uint64_t reservedSpace0:2;
      uint64_t TTTBM:1;
      uint64_t TSMODE:1;
      uint64_t TSNEXT:1;
      uint64_t FD_ISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTAT:2;
      uint64_t reservedSpace0:1;
      uint64_t RBALL:1;
      uint64_t RREL:1;
      uint64_t ROV:1;
      uint64_t ROM:1;
      uint64_t SACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSFF:1;
      uint64_t EIE:1;
      uint64_t TSIE:1;
      uint64_t TPIE:1;
      uint64_t RAFIE:1;
      uint64_t RFIE:1;
      uint64_t ROIE:1;
      uint64_t RIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTIE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AIF:1;
      uint64_t EIF:1;
      uint64_t TSIF:1;
      uint64_t TPIF:1;
      uint64_t RAFIF:1;
      uint64_t RFIF:1;
      uint64_t ROIF:1;
      uint64_t RIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTIF;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BEIF:1;
      uint64_t BEIE:1;
      uint64_t ALIF:1;
      uint64_t ALIE:1;
      uint64_t EPIF:1;
      uint64_t EPIE:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRINT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EWL:4;
      uint64_t AFWL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIMIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SEG_1:8;
      uint64_t S_SEG_2:7;
      uint64_t reservedSpace0:1;
      uint64_t S_SJW:7;
      uint64_t reservedSpace1:1;
      uint64_t S_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_SEG_1:5;
      uint64_t reservedSpace0:3;
      uint64_t F_SEG_2:4;
      uint64_t reservedSpace1:4;
      uint64_t F_SJW:4;
      uint64_t reservedSpace2:4;
      uint64_t F_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALC:5;
      uint64_t KOER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EALCAP;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSPOFF:7;
      uint64_t TDCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TDC;

  uint8_t RECNT;
  uint8_t TECNT;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACFADR:4;
      uint64_t reservedSpace0:1;
      uint64_t SELMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACFCTRL;

  uint8_t res2[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AE_1:1;
      uint64_t AE_2:1;
      uint64_t AE_3:1;
      uint64_t AE_4:1;
      uint64_t AE_5:1;
      uint64_t AE_6:1;
      uint64_t AE_7:1;
      uint64_t AE_8:1;
      uint64_t AE_9:1;
      uint64_t AE_10:1;
      uint64_t AE_11:1;
      uint64_t AE_12:1;
      uint64_t AE_13:1;
      uint64_t AE_14:1;
      uint64_t AE_15:1;
      uint64_t AE_16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACFEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACODEORAMASK:29;
      uint64_t AIDE:1;
      uint64_t AIDEE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACF;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TBPTR:6;
      uint64_t TBF:1;
      uint64_t TBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TBSLOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTEN:1;
      uint64_t T_PRESC:2;
      uint64_t TTIF:1;
      uint64_t TTIE:1;
      uint64_t TEIF:1;
      uint64_t WTIF:1;
      uint64_t WTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_ID:29;
      uint64_t reservedSpace0:2;
      uint64_t REF_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REF_MSG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TTPTR:6;
      uint64_t reservedSpace0:2;
      uint64_t TTYPE:3;
      uint64_t reservedSpace1:1;
      uint64_t TEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRG_CFG;

  uint16_t TT_TRIG;
  uint16_t TT_WTRIG;
};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40009000)

struct CAN2_tag
{
  uint32_t RBUF;
  uint8_t res0[76];

  uint32_t TBUF;
  uint8_t res1[76];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BUSOFF:1;
      uint64_t TACTIVE:1;
      uint64_t RACTIVE:1;
      uint64_t TSSS:1;
      uint64_t TPSS:1;
      uint64_t LBMI:1;
      uint64_t LBME:1;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG_STAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSA:1;
      uint64_t TSALL:1;
      uint64_t TSONE:1;
      uint64_t TPA:1;
      uint64_t TPE:1;
      uint64_t reservedSpace0:1;
      uint64_t LOM:1;
      uint64_t TBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TCMD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSSTAT:2;
      uint64_t reservedSpace0:2;
      uint64_t TTTBM:1;
      uint64_t TSMODE:1;
      uint64_t TSNEXT:1;
      uint64_t FD_ISO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTAT:2;
      uint64_t reservedSpace0:1;
      uint64_t RBALL:1;
      uint64_t RREL:1;
      uint64_t ROV:1;
      uint64_t ROM:1;
      uint64_t SACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TSFF:1;
      uint64_t EIE:1;
      uint64_t TSIE:1;
      uint64_t TPIE:1;
      uint64_t RAFIE:1;
      uint64_t RFIE:1;
      uint64_t ROIE:1;
      uint64_t RIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTIE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AIF:1;
      uint64_t EIF:1;
      uint64_t TSIF:1;
      uint64_t TPIF:1;
      uint64_t RAFIF:1;
      uint64_t RFIF:1;
      uint64_t ROIF:1;
      uint64_t RIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTIF;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BEIF:1;
      uint64_t BEIE:1;
      uint64_t ALIF:1;
      uint64_t ALIE:1;
      uint64_t EPIF:1;
      uint64_t EPIE:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRINT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EWL:4;
      uint64_t AFWL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LIMIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SEG_1:8;
      uint64_t S_SEG_2:7;
      uint64_t reservedSpace0:1;
      uint64_t S_SJW:7;
      uint64_t reservedSpace1:1;
      uint64_t S_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_SEG_1:5;
      uint64_t reservedSpace0:3;
      uint64_t F_SEG_2:4;
      uint64_t reservedSpace1:4;
      uint64_t F_SJW:4;
      uint64_t reservedSpace2:4;
      uint64_t F_PRESC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALC:5;
      uint64_t KOER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EALCAP;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSPOFF:7;
      uint64_t TDCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TDC;

  uint8_t RECNT;
  uint8_t TECNT;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ACFADR:4;
      uint64_t reservedSpace0:1;
      uint64_t SELMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ACFCTRL;

  uint8_t res2[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AE_1:1;
      uint64_t AE_2:1;
      uint64_t AE_3:1;
      uint64_t AE_4:1;
      uint64_t AE_5:1;
      uint64_t AE_6:1;
      uint64_t AE_7:1;
      uint64_t AE_8:1;
      uint64_t AE_9:1;
      uint64_t AE_10:1;
      uint64_t AE_11:1;
      uint64_t AE_12:1;
      uint64_t AE_13:1;
      uint64_t AE_14:1;
      uint64_t AE_15:1;
      uint64_t AE_16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ACFEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACODEORAMASK:29;
      uint64_t AIDE:1;
      uint64_t AIDEE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACF;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TBPTR:6;
      uint64_t TBF:1;
      uint64_t TBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TBSLOT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTEN:1;
      uint64_t T_PRESC:2;
      uint64_t TTIF:1;
      uint64_t TTIE:1;
      uint64_t TEIF:1;
      uint64_t WTIF:1;
      uint64_t WTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_ID:29;
      uint64_t reservedSpace0:2;
      uint64_t REF_IDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REF_MSG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TTPTR:6;
      uint64_t reservedSpace0:2;
      uint64_t TTYPE:3;
      uint64_t reservedSpace1:1;
      uint64_t TEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRG_CFG;

  uint16_t TT_TRIG;
  uint16_t TT_WTRIG;
};

#define CAN2 (*(volatile struct CAN2_tag *) 0x40078000)

struct CMP1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CENB:1;
      uint64_t CWDE:1;
      uint64_t reservedSpace0:5;
      uint64_t CMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FCKS:2;
      uint64_t reservedSpace0:2;
      uint64_t EDGS:2;
      uint64_t CIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COEN:1;
      uint64_t COPS:1;
      uint64_t CPOE:1;
      uint64_t TWOE:1;
      uint64_t TWOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RVSL:4;
      uint64_t CVSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWS0:1;
      uint64_t CTWS1:1;
      uint64_t CTWS2:1;
      uint64_t CTWS3:1;
      uint64_t CTWS4:1;
      uint64_t CTWS5:1;
      uint64_t CTWS6:1;
      uint64_t CTWS7:1;
      uint64_t CTWS8:1;
      uint64_t CTWS9:1;
      uint64_t CTWS10:1;
      uint64_t CTWS11:1;
      uint64_t CTWS12:1;
      uint64_t CTWS13:1;
      uint64_t CTWS14:1;
      uint64_t CTWS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWP0:1;
      uint64_t CTWP1:1;
      uint64_t CTWP2:1;
      uint64_t CTWP3:1;
      uint64_t CTWP4:1;
      uint64_t CTWP5:1;
      uint64_t CTWP6:1;
      uint64_t CTWP7:1;
      uint64_t CTWP8:1;
      uint64_t CTWP9:1;
      uint64_t CTWP10:1;
      uint64_t CTWP11:1;
      uint64_t CTWP12:1;
      uint64_t CTWP13:1;
      uint64_t CTWP14:1;
      uint64_t CTWP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWPR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2SL:3;
      uint64_t reservedSpace0:1;
      uint64_t P3SL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VISR;

};

#define CMP1 (*(volatile struct CMP1_tag *) 0x4004a000)

struct CMP2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CENB:1;
      uint64_t CWDE:1;
      uint64_t reservedSpace0:5;
      uint64_t CMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FCKS:2;
      uint64_t reservedSpace0:2;
      uint64_t EDGS:2;
      uint64_t CIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COEN:1;
      uint64_t COPS:1;
      uint64_t CPOE:1;
      uint64_t TWOE:1;
      uint64_t TWOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RVSL:4;
      uint64_t CVSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWS0:1;
      uint64_t CTWS1:1;
      uint64_t CTWS2:1;
      uint64_t CTWS3:1;
      uint64_t CTWS4:1;
      uint64_t CTWS5:1;
      uint64_t CTWS6:1;
      uint64_t CTWS7:1;
      uint64_t CTWS8:1;
      uint64_t CTWS9:1;
      uint64_t CTWS10:1;
      uint64_t CTWS11:1;
      uint64_t CTWS12:1;
      uint64_t CTWS13:1;
      uint64_t CTWS14:1;
      uint64_t CTWS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWP0:1;
      uint64_t CTWP1:1;
      uint64_t CTWP2:1;
      uint64_t CTWP3:1;
      uint64_t CTWP4:1;
      uint64_t CTWP5:1;
      uint64_t CTWP6:1;
      uint64_t CTWP7:1;
      uint64_t CTWP8:1;
      uint64_t CTWP9:1;
      uint64_t CTWP10:1;
      uint64_t CTWP11:1;
      uint64_t CTWP12:1;
      uint64_t CTWP13:1;
      uint64_t CTWP14:1;
      uint64_t CTWP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWPR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2SL:3;
      uint64_t reservedSpace0:1;
      uint64_t P3SL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VISR;

};

#define CMP2 (*(volatile struct CMP2_tag *) 0x4004a010)

struct CMP3_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CENB:1;
      uint64_t CWDE:1;
      uint64_t reservedSpace0:5;
      uint64_t CMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FCKS:2;
      uint64_t reservedSpace0:2;
      uint64_t EDGS:2;
      uint64_t CIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COEN:1;
      uint64_t COPS:1;
      uint64_t CPOE:1;
      uint64_t TWOE:1;
      uint64_t TWOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RVSL:4;
      uint64_t CVSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWS0:1;
      uint64_t CTWS1:1;
      uint64_t CTWS2:1;
      uint64_t CTWS3:1;
      uint64_t CTWS4:1;
      uint64_t CTWS5:1;
      uint64_t CTWS6:1;
      uint64_t CTWS7:1;
      uint64_t CTWS8:1;
      uint64_t CTWS9:1;
      uint64_t CTWS10:1;
      uint64_t CTWS11:1;
      uint64_t CTWS12:1;
      uint64_t CTWS13:1;
      uint64_t CTWS14:1;
      uint64_t CTWS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWP0:1;
      uint64_t CTWP1:1;
      uint64_t CTWP2:1;
      uint64_t CTWP3:1;
      uint64_t CTWP4:1;
      uint64_t CTWP5:1;
      uint64_t CTWP6:1;
      uint64_t CTWP7:1;
      uint64_t CTWP8:1;
      uint64_t CTWP9:1;
      uint64_t CTWP10:1;
      uint64_t CTWP11:1;
      uint64_t CTWP12:1;
      uint64_t CTWP13:1;
      uint64_t CTWP14:1;
      uint64_t CTWP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWPR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2SL:3;
      uint64_t reservedSpace0:1;
      uint64_t P3SL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VISR;

};

#define CMP3 (*(volatile struct CMP3_tag *) 0x4004a400)

struct CMP4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CENB:1;
      uint64_t CWDE:1;
      uint64_t reservedSpace0:5;
      uint64_t CMON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FCKS:2;
      uint64_t reservedSpace0:2;
      uint64_t EDGS:2;
      uint64_t CIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FIR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COEN:1;
      uint64_t COPS:1;
      uint64_t CPOE:1;
      uint64_t TWOE:1;
      uint64_t TWOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RVSL:4;
      uint64_t CVSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWS0:1;
      uint64_t CTWS1:1;
      uint64_t CTWS2:1;
      uint64_t CTWS3:1;
      uint64_t CTWS4:1;
      uint64_t CTWS5:1;
      uint64_t CTWS6:1;
      uint64_t CTWS7:1;
      uint64_t CTWS8:1;
      uint64_t CTWS9:1;
      uint64_t CTWS10:1;
      uint64_t CTWS11:1;
      uint64_t CTWS12:1;
      uint64_t CTWS13:1;
      uint64_t CTWS14:1;
      uint64_t CTWS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTWP0:1;
      uint64_t CTWP1:1;
      uint64_t CTWP2:1;
      uint64_t CTWP3:1;
      uint64_t CTWP4:1;
      uint64_t CTWP5:1;
      uint64_t CTWP6:1;
      uint64_t CTWP7:1;
      uint64_t CTWP8:1;
      uint64_t CTWP9:1;
      uint64_t CTWP10:1;
      uint64_t CTWP11:1;
      uint64_t CTWP12:1;
      uint64_t CTWP13:1;
      uint64_t CTWP14:1;
      uint64_t CTWP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TWPR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2SL:3;
      uint64_t reservedSpace0:1;
      uint64_t P3SL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VISR;

};

#define CMP4 (*(volatile struct CMP4_tag *) 0x4004a410)

struct CMU_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTAL32STP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTAL32CR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTAL32DRV:3;
      uint64_t XTAL32IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTAL32CFGR;

  uint8_t res1[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTAL32NF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTAL32NFR;

  uint8_t res2[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LRCSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LRCCR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCLRCSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RTCLRCCR;

  uint8_t res4[3];

  uint8_t LRCTRM;
  uint8_t res5[7];

  uint8_t RTCLRCTRM;
  uint8_t res6[2123];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t XTALDRV:2;
      uint64_t XTALMS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTALCFGR;

  uint8_t res7[29591];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PERICKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERICKSEL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2S1CKSEL:4;
      uint64_t I2S2CKSEL:4;
      uint64_t I2S3CKSEL:4;
      uint64_t I2S4CKSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2SCKSEL;

  uint8_t res8[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CAN1CKS:4;
      uint64_t CAN2CKS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANCKCFGR;

  uint8_t res9[7];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCLK0S:3;
      uint64_t reservedSpace0:1;
      uint64_t PCLK1S:3;
      uint64_t reservedSpace1:1;
      uint64_t PCLK2S:3;
      uint64_t reservedSpace2:1;
      uint64_t PCLK3S:3;
      uint64_t reservedSpace3:1;
      uint64_t PCLK4S:3;
      uint64_t reservedSpace4:1;
      uint64_t EXCKS:3;
      uint64_t reservedSpace5:1;
      uint64_t HCLKS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFGR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t USBCKS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) USBCKCFGR;

  uint8_t res10[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CKSW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CKSWR;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLHOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLLHCR;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLAOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLLACR;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTALSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTALCR;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HRCSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HRCCR;

  uint8_t res15[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MRCSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MRCCR;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HRCSTBF:1;
      uint64_t reservedSpace0:2;
      uint64_t XTALSTBF:1;
      uint64_t reservedSpace1:1;
      uint64_t PLLHSTBF:1;
      uint64_t PLLASTBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) OSCSTBSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCOSEL:4;
      uint64_t MCODIV:3;
      uint64_t MCOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCOCFGR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCOSEL:4;
      uint64_t MCODIV:3;
      uint64_t MCOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCOCFGR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TPIUCKS:2;
      uint64_t reservedSpace0:5;
      uint64_t TPIUCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TPIUCKCFGR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTALSTDIE:1;
      uint64_t XTALSTDRE:1;
      uint64_t XTALSTDRIS:1;
      uint64_t reservedSpace0:4;
      uint64_t XTALSTDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTALSTDCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTALSTDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTALSTDSR;

  uint8_t res17[31];

  uint8_t MRCTRM;
  uint8_t HRCTRM;
  uint8_t res18[63];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XTALSTB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) XTALSTBCR;

  uint8_t res19[93];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLHM:2;
      uint64_t reservedSpace0:5;
      uint64_t PLLSRC:1;
      uint64_t PLLHN:8;
      uint64_t reservedSpace1:4;
      uint64_t PLLHR:4;
      uint64_t PLLHQ:4;
      uint64_t PLLHP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLHCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLAM:5;
      uint64_t reservedSpace0:3;
      uint64_t PLLAN:9;
      uint64_t reservedSpace1:3;
      uint64_t PLLAR:4;
      uint64_t PLLAQ:4;
      uint64_t PLLAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLACFGR;

};

#define CMU (*(volatile struct CMU_tag *) 0x4004c400)

struct CRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR:1;
      uint64_t FLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint32_t RESLT;
  uint8_t res0[120];

  uint32_t DAT0;
  uint32_t DAT1;
  uint32_t DAT2;
  uint32_t DAT3;
  uint32_t DAT4;
  uint32_t DAT5;
  uint32_t DAT6;
  uint32_t DAT7;
  uint32_t DAT8;
  uint32_t DAT9;
  uint32_t DAT10;
  uint32_t DAT11;
  uint32_t DAT12;
  uint32_t DAT13;
  uint32_t DAT14;
  uint32_t DAT15;
  uint32_t DAT16;
  uint32_t DAT17;
  uint32_t DAT18;
  uint32_t DAT19;
  uint32_t DAT20;
  uint32_t DAT21;
  uint32_t DAT22;
  uint32_t DAT23;
  uint32_t DAT24;
  uint32_t DAT25;
  uint32_t DAT26;
  uint32_t DAT27;
  uint32_t DAT28;
  uint32_t DAT29;
  uint32_t DAT30;
  uint32_t DAT31;
};

#define CRC (*(volatile struct CRC_tag *) 0x40008c00)

struct CTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFPSC:3;
      uint64_t reservedSpace0:1;
      uint64_t REFCKS:2;
      uint64_t ERRIE:1;
      uint64_t CTCEN:1;
      uint64_t reservedSpace1:8;
      uint64_t TRMVAL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFSVAL:8;
      uint64_t reservedSpace0:8;
      uint64_t RLDVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMOK:1;
      uint64_t TRMOVF:1;
      uint64_t TRMUDF:1;
      uint64_t CTCBSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

};

#define CTC (*(volatile struct CTC_tag *) 0x40049c00)

struct DAC1_tag
{
  uint16_t DADR1;
  uint16_t DADR2;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DA1E:1;
      uint64_t DA2E:1;
      uint64_t reservedSpace0:5;
      uint64_t DPSEL:1;
      uint64_t DAAMP1:1;
      uint64_t DAAMP2:1;
      uint64_t EXTDSL1:1;
      uint64_t EXTDSL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DACR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADCSL1:1;
      uint64_t ADCSL2:1;
      uint64_t ADCSL3:1;
      uint64_t reservedSpace0:5;
      uint64_t DA1SF:1;
      uint64_t DA2SF:1;
      uint64_t reservedSpace1:5;
      uint64_t ADPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAADPCR;

  uint8_t res0[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t DAODIS1:1;
      uint64_t DAODIS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAOCR;

};

#define DAC1 (*(volatile struct DAC1_tag *) 0x40041000)

struct DAC2_tag
{
  uint16_t DADR1;
  uint16_t DADR2;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DA1E:1;
      uint64_t DA2E:1;
      uint64_t reservedSpace0:5;
      uint64_t DPSEL:1;
      uint64_t DAAMP1:1;
      uint64_t DAAMP2:1;
      uint64_t EXTDSL1:1;
      uint64_t EXTDSL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DACR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADCSL1:1;
      uint64_t ADCSL2:1;
      uint64_t ADCSL3:1;
      uint64_t reservedSpace0:5;
      uint64_t DA1SF:1;
      uint64_t DA2SF:1;
      uint64_t reservedSpace1:5;
      uint64_t ADPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAADPCR;

  uint8_t res0[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t DAODIS1:1;
      uint64_t DAODIS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DAOCR;

};

#define DAC2 (*(volatile struct DAC2_tag *) 0x40041400)

struct DBGC_tag
{
  uint32_t AUTHID0;
  uint32_t AUTHID1;
  uint32_t AUTHID2;
  uint32_t RESV0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTH:1;
      uint64_t REMVLOCK:1;
      uint64_t SAFTYLOCK1:1;
      uint64_t SAFTYLOCK2:1;
      uint64_t reservedSpace0:4;
      uint64_t CPUSTOP:1;
      uint64_t CPUSLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDBGRQ:1;
      uint64_t RESTART:1;
      uint64_t reservedSpace0:6;
      uint64_t DIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASEREQ:1;
      uint64_t ERASEACK:1;
      uint64_t ERASEERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDBGPWRUPREQ:1;
      uint64_t CDBGPWRUPACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUDBGCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWDTSTP:1;
      uint64_t WDTSTP:1;
      uint64_t RTCSTP:1;
      uint64_t PVD0STP:1;
      uint64_t PVD1STP:1;
      uint64_t PVD2STP:1;
      uint64_t M06STP:1;
      uint64_t M07STP:1;
      uint64_t M08STP:1;
      uint64_t M09STP:1;
      uint64_t M10STP:1;
      uint64_t M11STP:1;
      uint64_t M12STP:1;
      uint64_t M13STP:1;
      uint64_t M14STP:1;
      uint64_t M15STP:1;
      uint64_t M16STP:1;
      uint64_t M17STP:1;
      uint64_t M18STP:1;
      uint64_t M19STP:1;
      uint64_t M20STP:1;
      uint64_t M21STP:1;
      uint64_t M22STP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUSTPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACEMODE:2;
      uint64_t TRACEIOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUTRACECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M32STP:1;
      uint64_t M33STP:1;
      uint64_t M34STP:1;
      uint64_t M35STP:1;
      uint64_t M36STP:1;
      uint64_t M37STP:1;
      uint64_t M38STP:1;
      uint64_t M39STP:1;
      uint64_t M40STP:1;
      uint64_t M41STP:1;
      uint64_t M42STP:1;
      uint64_t M43STP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUSTPCTL2;

};

#define DBGC (*(volatile struct DBGC_tag *) 0xe0042000)

struct DCU1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t FLAG_RLD:1;
      uint64_t FLAG_BTM:1;
      uint64_t FLAG_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_RLD:1;
      uint64_t CLR_BTM:1;
      uint64_t CLR_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
      uint64_t SEL_RLD:1;
      uint64_t SEL_BTM:1;
      uint64_t SEL_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU1 (*(volatile struct DCU1_tag *) 0x40056000)

struct DCU2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t FLAG_RLD:1;
      uint64_t FLAG_BTM:1;
      uint64_t FLAG_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_RLD:1;
      uint64_t CLR_BTM:1;
      uint64_t CLR_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
      uint64_t SEL_RLD:1;
      uint64_t SEL_BTM:1;
      uint64_t SEL_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU2 (*(volatile struct DCU2_tag *) 0x40056400)

struct DCU3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t FLAG_RLD:1;
      uint64_t FLAG_BTM:1;
      uint64_t FLAG_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_RLD:1;
      uint64_t CLR_BTM:1;
      uint64_t CLR_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
      uint64_t SEL_RLD:1;
      uint64_t SEL_BTM:1;
      uint64_t SEL_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU3 (*(volatile struct DCU3_tag *) 0x40056800)

struct DCU4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t FLAG_RLD:1;
      uint64_t FLAG_BTM:1;
      uint64_t FLAG_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_RLD:1;
      uint64_t CLR_BTM:1;
      uint64_t CLR_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
      uint64_t SEL_RLD:1;
      uint64_t SEL_BTM:1;
      uint64_t SEL_TOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU4 (*(volatile struct DCU4_tag *) 0x40056c00)

struct DCU5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU5 (*(volatile struct DCU5_tag *) 0x40057000)

struct DCU6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU6 (*(volatile struct DCU6_tag *) 0x40057400)

struct DCU7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU7 (*(volatile struct DCU7_tag *) 0x40057800)

struct DCU8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:4;
      uint64_t DATASIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t COMP_TRG:1;
      uint64_t reservedSpace1:22;
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLAG_OP:1;
      uint64_t FLAG_LS2:1;
      uint64_t FLAG_EQ2:1;
      uint64_t FLAG_GT2:1;
      uint64_t FLAG_LS1:1;
      uint64_t FLAG_EQ1:1;
      uint64_t FLAG_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAG;

  uint32_t DATA0;
  uint32_t DATA1;
  uint32_t DATA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_OP:1;
      uint64_t CLR_LS2:1;
      uint64_t CLR_EQ2:1;
      uint64_t CLR_GT2:1;
      uint64_t CLR_LS1:1;
      uint64_t CLR_EQ1:1;
      uint64_t CLR_GT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_OP:1;
      uint64_t SEL_LS2:1;
      uint64_t SEL_EQ2:1;
      uint64_t SEL_GT2:1;
      uint64_t SEL_LS1:1;
      uint64_t SEL_EQ1:1;
      uint64_t SEL_GT1:1;
      uint64_t SEL_WIN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEVTSEL;

};

#define DCU8 (*(volatile struct DCU8_tag *) 0x40057c00)

struct DMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:2;
      uint64_t MEMW:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDADD:14;
      uint64_t reservedSpace0:2;
      uint64_t CMDBA:2;
      uint64_t CMD:2;
      uint64_t CMDCHIP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COLBS:3;
      uint64_t reservedSpace0:1;
      uint64_t ROWBS:3;
      uint64_t APBS:1;
      uint64_t CKEDIS:1;
      uint64_t CKSTOP:1;
      uint64_t CKEDISPRD:6;
      uint64_t BURST:3;
      uint64_t reservedSpace1:5;
      uint64_t ACTCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFPRD:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_CASL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_CASL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_DQSS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_DQSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_MRD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_MRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RAS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RCD_B:3;
      uint64_t reservedSpace0:1;
      uint64_t T_RCD_P:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RCD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RFC_B:5;
      uint64_t reservedSpace0:3;
      uint64_t T_RFC_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RP_B:3;
      uint64_t reservedSpace0:1;
      uint64_t T_RP_P:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_RRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_WR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_WR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_WTR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_WTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_XP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_XP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_XSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_XSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_ESR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR_T_ESR;

  uint8_t res0[436];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
      uint64_t BRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
      uint64_t BRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
      uint64_t BRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
      uint64_t BRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR3;

  uint8_t res1[240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMCMW:2;
      uint64_t reservedSpace0:12;
      uint64_t CKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BACR;

};

#define DMC (*(volatile struct DMC_tag *) 0x88000400)

struct DVP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPEN:1;
      uint64_t CAPMD:1;
      uint64_t CROPEN:1;
      uint64_t JPEGEN:1;
      uint64_t SWSYNC:1;
      uint64_t PIXCKSEL:1;
      uint64_t HSYNCSEL:1;
      uint64_t VSYNCSEL:1;
      uint64_t CAPFRC:2;
      uint64_t BITSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t DVPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  uint32_t DTR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSF:1;
      uint64_t LSF:1;
      uint64_t LEF:1;
      uint64_t FEF:1;
      uint64_t SQUERF:1;
      uint64_t FIFOERF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSIEN:1;
      uint64_t LSIEN:1;
      uint64_t LEIEN:1;
      uint64_t FEIEN:1;
      uint64_t SQUERIEN:1;
      uint64_t FIFOERIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  uint32_t DMR;
  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSDAT:8;
      uint64_t LSDAT:8;
      uint64_t LEDAT:8;
      uint64_t FEDAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSYNDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMSK:8;
      uint64_t LSMSK:8;
      uint64_t LEMSK:8;
      uint64_t FEMSK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSYNMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSHIFT:14;
      uint64_t reservedSpace0:2;
      uint64_t CSHIFT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSFTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSIZE:14;
      uint64_t reservedSpace0:2;
      uint64_t CSIZE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSZER;

};

#define DVP (*(volatile struct DVP_tag *) 0x40055800)

struct EFM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAPRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAPRT;

  uint32_t KEY1;
  uint32_t KEY2;
  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0STP:1;
      uint64_t F1STP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLWT:4;
      uint64_t reservedSpace0:4;
      uint64_t LVM:1;
      uint64_t reservedSpace1:7;
      uint64_t ICACHE:1;
      uint64_t DCACHE:1;
      uint64_t PREFETE:1;
      uint64_t CRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEMOD:3;
      uint64_t reservedSpace0:5;
      uint64_t BUSHLDCTL:1;
      uint64_t reservedSpace1:7;
      uint64_t KEY1LOCK:1;
      uint64_t KEY2LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPWERR0:1;
      uint64_t PRTWERR0:1;
      uint64_t PGSZERR0:1;
      uint64_t MISMTCH0:1;
      uint64_t OPTEND0:1;
      uint64_t COLERR0:1;
      uint64_t reservedSpace0:2;
      uint64_t RDY0:1;
      uint64_t reservedSpace1:8;
      uint64_t PRTWERR1:1;
      uint64_t PGSZERR1:1;
      uint64_t MISMTCH1:1;
      uint64_t OPTEND1:1;
      uint64_t COLERR1:1;
      uint64_t reservedSpace2:2;
      uint64_t RDY1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPWERRCLR0:1;
      uint64_t PRTWERRCLR0:1;
      uint64_t PGSZERRCLR0:1;
      uint64_t MISMTCHCLR0:1;
      uint64_t OPTENDCLR0:1;
      uint64_t COLERRCLR0:1;
      uint64_t reservedSpace0:11;
      uint64_t PRTWERRCLR1:1;
      uint64_t PGSZERRCLR1:1;
      uint64_t MISMTCHCLR1:1;
      uint64_t OPTENDCLR1:1;
      uint64_t COLERRCLR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEERRITE:1;
      uint64_t OPTENDITE:1;
      uint64_t COLERRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FITE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSWP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSWP;

  uint8_t res1[16];

  uint32_t CHIPID;
  uint8_t res2[12];

  uint32_t UQID0;
  uint32_t UQID1;
  uint32_t UQID2;
  uint8_t res3[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MMF_REMPRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMF_REMPRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMSIZE:5;
      uint64_t reservedSpace0:7;
      uint64_t RMTADDR:17;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMF_REMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMSIZE:5;
      uint64_t reservedSpace0:7;
      uint64_t RMTADDR:17;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMF_REMCR1;

  uint8_t res4[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLOCK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WLOCK;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0NWPRT0:1;
      uint64_t F0NWPRT1:1;
      uint64_t F0NWPRT2:1;
      uint64_t F0NWPRT3:1;
      uint64_t F0NWPRT4:1;
      uint64_t F0NWPRT5:1;
      uint64_t F0NWPRT6:1;
      uint64_t F0NWPRT7:1;
      uint64_t F0NWPRT8:1;
      uint64_t F0NWPRT9:1;
      uint64_t F0NWPRT10:1;
      uint64_t F0NWPRT11:1;
      uint64_t F0NWPRT12:1;
      uint64_t F0NWPRT13:1;
      uint64_t F0NWPRT14:1;
      uint64_t F0NWPRT15:1;
      uint64_t F0NWPRT16:1;
      uint64_t F0NWPRT17:1;
      uint64_t F0NWPRT18:1;
      uint64_t F0NWPRT19:1;
      uint64_t F0NWPRT20:1;
      uint64_t F0NWPRT21:1;
      uint64_t F0NWPRT22:1;
      uint64_t F0NWPRT23:1;
      uint64_t F0NWPRT24:1;
      uint64_t F0NWPRT25:1;
      uint64_t F0NWPRT26:1;
      uint64_t F0NWPRT27:1;
      uint64_t F0NWPRT28:1;
      uint64_t F0NWPRT29:1;
      uint64_t F0NWPRT30:1;
      uint64_t F0NWPRT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0NWPRT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0NWPRT32:1;
      uint64_t F0NWPRT33:1;
      uint64_t F0NWPRT34:1;
      uint64_t F0NWPRT35:1;
      uint64_t F0NWPRT36:1;
      uint64_t F0NWPRT37:1;
      uint64_t F0NWPRT38:1;
      uint64_t F0NWPRT39:1;
      uint64_t F0NWPRT40:1;
      uint64_t F0NWPRT41:1;
      uint64_t F0NWPRT42:1;
      uint64_t F0NWPRT43:1;
      uint64_t F0NWPRT44:1;
      uint64_t F0NWPRT45:1;
      uint64_t F0NWPRT46:1;
      uint64_t F0NWPRT47:1;
      uint64_t F0NWPRT48:1;
      uint64_t F0NWPRT49:1;
      uint64_t F0NWPRT50:1;
      uint64_t F0NWPRT51:1;
      uint64_t F0NWPRT52:1;
      uint64_t F0NWPRT53:1;
      uint64_t F0NWPRT54:1;
      uint64_t F0NWPRT55:1;
      uint64_t F0NWPRT56:1;
      uint64_t F0NWPRT57:1;
      uint64_t F0NWPRT58:1;
      uint64_t F0NWPRT59:1;
      uint64_t F0NWPRT60:1;
      uint64_t F0NWPRT61:1;
      uint64_t F0NWPRT62:1;
      uint64_t F0NWPRT63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0NWPRT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0NWPRT64:1;
      uint64_t F0NWPRT65:1;
      uint64_t F0NWPRT66:1;
      uint64_t F0NWPRT67:1;
      uint64_t F0NWPRT68:1;
      uint64_t F0NWPRT69:1;
      uint64_t F0NWPRT70:1;
      uint64_t F0NWPRT71:1;
      uint64_t F0NWPRT72:1;
      uint64_t F0NWPRT73:1;
      uint64_t F0NWPRT74:1;
      uint64_t F0NWPRT75:1;
      uint64_t F0NWPRT76:1;
      uint64_t F0NWPRT77:1;
      uint64_t F0NWPRT78:1;
      uint64_t F0NWPRT79:1;
      uint64_t F0NWPRT80:1;
      uint64_t F0NWPRT81:1;
      uint64_t F0NWPRT82:1;
      uint64_t F0NWPRT83:1;
      uint64_t F0NWPRT84:1;
      uint64_t F0NWPRT85:1;
      uint64_t F0NWPRT86:1;
      uint64_t F0NWPRT87:1;
      uint64_t F0NWPRT88:1;
      uint64_t F0NWPRT89:1;
      uint64_t F0NWPRT90:1;
      uint64_t F0NWPRT91:1;
      uint64_t F0NWPRT92:1;
      uint64_t F0NWPRT93:1;
      uint64_t F0NWPRT94:1;
      uint64_t F0NWPRT95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0NWPRT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F0NWPRT96:1;
      uint64_t F0NWPRT97:1;
      uint64_t F0NWPRT98:1;
      uint64_t F0NWPRT99:1;
      uint64_t F0NWPRT100:1;
      uint64_t F0NWPRT101:1;
      uint64_t F0NWPRT102:1;
      uint64_t F0NWPRT103:1;
      uint64_t F0NWPRT104:1;
      uint64_t F0NWPRT105:1;
      uint64_t F0NWPRT106:1;
      uint64_t F0NWPRT107:1;
      uint64_t F0NWPRT108:1;
      uint64_t F0NWPRT109:1;
      uint64_t F0NWPRT110:1;
      uint64_t F0NWPRT111:1;
      uint64_t F0NWPRT112:1;
      uint64_t F0NWPRT113:1;
      uint64_t F0NWPRT114:1;
      uint64_t F0NWPRT115:1;
      uint64_t F0NWPRT116:1;
      uint64_t F0NWPRT117:1;
      uint64_t F0NWPRT118:1;
      uint64_t F0NWPRT119:1;
      uint64_t F0NWPRT120:1;
      uint64_t F0NWPRT121:1;
      uint64_t F0NWPRT122:1;
      uint64_t F0NWPRT123:1;
      uint64_t F0NWPRT124:1;
      uint64_t F0NWPRT125:1;
      uint64_t F0NWPRT126:1;
      uint64_t F0NWPRT127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0NWPRT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1NWPRT0:1;
      uint64_t F1NWPRT1:1;
      uint64_t F1NWPRT2:1;
      uint64_t F1NWPRT3:1;
      uint64_t F1NWPRT4:1;
      uint64_t F1NWPRT5:1;
      uint64_t F1NWPRT6:1;
      uint64_t F1NWPRT7:1;
      uint64_t F1NWPRT8:1;
      uint64_t F1NWPRT9:1;
      uint64_t F1NWPRT10:1;
      uint64_t F1NWPRT11:1;
      uint64_t F1NWPRT12:1;
      uint64_t F1NWPRT13:1;
      uint64_t F1NWPRT14:1;
      uint64_t F1NWPRT15:1;
      uint64_t F1NWPRT16:1;
      uint64_t F1NWPRT17:1;
      uint64_t F1NWPRT18:1;
      uint64_t F1NWPRT19:1;
      uint64_t F1NWPRT20:1;
      uint64_t F1NWPRT21:1;
      uint64_t F1NWPRT22:1;
      uint64_t F1NWPRT23:1;
      uint64_t F1NWPRT24:1;
      uint64_t F1NWPRT25:1;
      uint64_t F1NWPRT26:1;
      uint64_t F1NWPRT27:1;
      uint64_t F1NWPRT28:1;
      uint64_t F1NWPRT29:1;
      uint64_t F1NWPRT30:1;
      uint64_t F1NWPRT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1NWPRT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1NWPRT32:1;
      uint64_t F1NWPRT33:1;
      uint64_t F1NWPRT34:1;
      uint64_t F1NWPRT35:1;
      uint64_t F1NWPRT36:1;
      uint64_t F1NWPRT37:1;
      uint64_t F1NWPRT38:1;
      uint64_t F1NWPRT39:1;
      uint64_t F1NWPRT40:1;
      uint64_t F1NWPRT41:1;
      uint64_t F1NWPRT42:1;
      uint64_t F1NWPRT43:1;
      uint64_t F1NWPRT44:1;
      uint64_t F1NWPRT45:1;
      uint64_t F1NWPRT46:1;
      uint64_t F1NWPRT47:1;
      uint64_t F1NWPRT48:1;
      uint64_t F1NWPRT49:1;
      uint64_t F1NWPRT50:1;
      uint64_t F1NWPRT51:1;
      uint64_t F1NWPRT52:1;
      uint64_t F1NWPRT53:1;
      uint64_t F1NWPRT54:1;
      uint64_t F1NWPRT55:1;
      uint64_t F1NWPRT56:1;
      uint64_t F1NWPRT57:1;
      uint64_t F1NWPRT58:1;
      uint64_t F1NWPRT59:1;
      uint64_t F1NWPRT60:1;
      uint64_t F1NWPRT61:1;
      uint64_t F1NWPRT62:1;
      uint64_t F1NWPRT63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1NWPRT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1NWPRT64:1;
      uint64_t F1NWPRT65:1;
      uint64_t F1NWPRT66:1;
      uint64_t F1NWPRT67:1;
      uint64_t F1NWPRT68:1;
      uint64_t F1NWPRT69:1;
      uint64_t F1NWPRT70:1;
      uint64_t F1NWPRT71:1;
      uint64_t F1NWPRT72:1;
      uint64_t F1NWPRT73:1;
      uint64_t F1NWPRT74:1;
      uint64_t F1NWPRT75:1;
      uint64_t F1NWPRT76:1;
      uint64_t F1NWPRT77:1;
      uint64_t F1NWPRT78:1;
      uint64_t F1NWPRT79:1;
      uint64_t F1NWPRT80:1;
      uint64_t F1NWPRT81:1;
      uint64_t F1NWPRT82:1;
      uint64_t F1NWPRT83:1;
      uint64_t F1NWPRT84:1;
      uint64_t F1NWPRT85:1;
      uint64_t F1NWPRT86:1;
      uint64_t F1NWPRT87:1;
      uint64_t F1NWPRT88:1;
      uint64_t F1NWPRT89:1;
      uint64_t F1NWPRT90:1;
      uint64_t F1NWPRT91:1;
      uint64_t F1NWPRT92:1;
      uint64_t F1NWPRT93:1;
      uint64_t F1NWPRT94:1;
      uint64_t F1NWPRT95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1NWPRT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F1NWPRT96:1;
      uint64_t F1NWPRT97:1;
      uint64_t F1NWPRT98:1;
      uint64_t F1NWPRT99:1;
      uint64_t F1NWPRT100:1;
      uint64_t F1NWPRT101:1;
      uint64_t F1NWPRT102:1;
      uint64_t F1NWPRT103:1;
      uint64_t F1NWPRT104:1;
      uint64_t F1NWPRT105:1;
      uint64_t F1NWPRT106:1;
      uint64_t F1NWPRT107:1;
      uint64_t F1NWPRT108:1;
      uint64_t F1NWPRT109:1;
      uint64_t F1NWPRT110:1;
      uint64_t F1NWPRT111:1;
      uint64_t F1NWPRT112:1;
      uint64_t F1NWPRT113:1;
      uint64_t F1NWPRT114:1;
      uint64_t F1NWPRT115:1;
      uint64_t F1NWPRT116:1;
      uint64_t F1NWPRT117:1;
      uint64_t F1NWPRT118:1;
      uint64_t F1NWPRT119:1;
      uint64_t F1NWPRT120:1;
      uint64_t F1NWPRT121:1;
      uint64_t F1NWPRT122:1;
      uint64_t F1NWPRT123:1;
      uint64_t F1NWPRT124:1;
      uint64_t F1NWPRT125:1;
      uint64_t F1NWPRT126:1;
      uint64_t F1NWPRT127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1NWPRT3;

};

#define EFM (*(volatile struct EFM_tag *) 0x40010400)

struct EMB0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN0:1;
      uint64_t CMPEN1:1;
      uint64_t CMPEN2:1;
      uint64_t CMPEN3:1;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN0:1;
      uint64_t PWMSEN1:1;
      uint64_t PWMSEN2:1;
      uint64_t PWMSEN3:1;
      uint64_t PWMSEN4:1;
      uint64_t PWMSEN5:1;
      uint64_t PWMSEN6:1;
      uint64_t PWMSEN7:1;
      uint64_t reservedSpace0:3;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV0:1;
      uint64_t PWMLV1:1;
      uint64_t PWMLV2:1;
      uint64_t PWMLV3:1;
      uint64_t PWMLV4:1;
      uint64_t PWMLV5:1;
      uint64_t PWMLV6:1;
      uint64_t PWMLV7:1;
      uint64_t reservedSpace0:8;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB0 (*(volatile struct EMB0_tag *) 0x40017c00)

struct EMB1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN0:1;
      uint64_t CMPEN1:1;
      uint64_t CMPEN2:1;
      uint64_t CMPEN3:1;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN0:1;
      uint64_t PWMSEN1:1;
      uint64_t PWMSEN2:1;
      uint64_t PWMSEN3:1;
      uint64_t PWMSEN4:1;
      uint64_t PWMSEN5:1;
      uint64_t PWMSEN6:1;
      uint64_t PWMSEN7:1;
      uint64_t reservedSpace0:3;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV0:1;
      uint64_t PWMLV1:1;
      uint64_t PWMLV2:1;
      uint64_t PWMLV3:1;
      uint64_t PWMLV4:1;
      uint64_t PWMLV5:1;
      uint64_t PWMLV6:1;
      uint64_t PWMLV7:1;
      uint64_t reservedSpace0:8;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB1 (*(volatile struct EMB1_tag *) 0x40017c20)

struct EMB2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN0:1;
      uint64_t CMPEN1:1;
      uint64_t CMPEN2:1;
      uint64_t CMPEN3:1;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN0:1;
      uint64_t PWMSEN1:1;
      uint64_t PWMSEN2:1;
      uint64_t PWMSEN3:1;
      uint64_t PWMSEN4:1;
      uint64_t PWMSEN5:1;
      uint64_t PWMSEN6:1;
      uint64_t PWMSEN7:1;
      uint64_t reservedSpace0:3;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV0:1;
      uint64_t PWMLV1:1;
      uint64_t PWMLV2:1;
      uint64_t PWMLV3:1;
      uint64_t PWMLV4:1;
      uint64_t PWMLV5:1;
      uint64_t PWMLV6:1;
      uint64_t PWMLV7:1;
      uint64_t reservedSpace0:8;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB2 (*(volatile struct EMB2_tag *) 0x40017c40)

struct EMB3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN0:1;
      uint64_t CMPEN1:1;
      uint64_t CMPEN2:1;
      uint64_t CMPEN3:1;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN0:1;
      uint64_t PWMSEN1:1;
      uint64_t PWMSEN2:1;
      uint64_t PWMSEN3:1;
      uint64_t PWMSEN4:1;
      uint64_t PWMSEN5:1;
      uint64_t PWMSEN6:1;
      uint64_t PWMSEN7:1;
      uint64_t reservedSpace0:3;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV0:1;
      uint64_t PWMLV1:1;
      uint64_t PWMLV2:1;
      uint64_t PWMLV3:1;
      uint64_t PWMLV4:1;
      uint64_t PWMLV5:1;
      uint64_t PWMLV6:1;
      uint64_t PWMLV7:1;
      uint64_t reservedSpace0:8;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB3 (*(volatile struct EMB3_tag *) 0x40017c60)

struct EMB4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:4;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN:3;
      uint64_t reservedSpace0:8;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV:3;
      uint64_t reservedSpace0:13;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB4 (*(volatile struct EMB4_tag *) 0x40017c80)

struct EMB5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:4;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN:3;
      uint64_t reservedSpace0:8;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV:3;
      uint64_t reservedSpace0:13;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB5 (*(volatile struct EMB5_tag *) 0x40017ca0)

struct EMB6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPEN:4;
      uint64_t OSCSTPEN:1;
      uint64_t PWMSEN:3;
      uint64_t reservedSpace0:8;
      uint64_t PORTINEN1:1;
      uint64_t PORTINEN2:1;
      uint64_t PORTINEN3:1;
      uint64_t PORTINEN4:1;
      uint64_t reservedSpace1:2;
      uint64_t INVSEL1:1;
      uint64_t INVSEL2:1;
      uint64_t INVSEL3:1;
      uint64_t INVSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMLV:3;
      uint64_t reservedSpace0:13;
      uint64_t NFSEL1:2;
      uint64_t NFEN1:1;
      uint64_t NFSEL2:2;
      uint64_t NFEN2:1;
      uint64_t NFSEL3:2;
      uint64_t NFEN3:1;
      uint64_t NFSEL4:2;
      uint64_t NFEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSF:1;
      uint64_t CMPF:1;
      uint64_t OSF:1;
      uint64_t reservedSpace1:1;
      uint64_t PWMST:1;
      uint64_t CMPST:1;
      uint64_t OSST:1;
      uint64_t PORTINF1:1;
      uint64_t PORTINF2:1;
      uint64_t PORTINF3:1;
      uint64_t PORTINF4:1;
      uint64_t reservedSpace2:2;
      uint64_t PORTINST1:1;
      uint64_t PORTINST2:1;
      uint64_t PORTINST3:1;
      uint64_t PORTINST4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSFCLR:1;
      uint64_t CMPFCLR:1;
      uint64_t OSFCLR:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINFCLR1:1;
      uint64_t PORTINFCLR2:1;
      uint64_t PORTINFCLR3:1;
      uint64_t PORTINFCLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMSINTEN:1;
      uint64_t CMPINTEN:1;
      uint64_t OSINTEN:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINTEN1:1;
      uint64_t PORTINTEN2:1;
      uint64_t PORTINTEN3:1;
      uint64_t PORTINTEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWMRSEL:1;
      uint64_t CMPRSEL:1;
      uint64_t OSRSEL:1;
      uint64_t reservedSpace1:4;
      uint64_t PORTINRSEL1:1;
      uint64_t PORTINRSEL2:1;
      uint64_t PORTINRSEL3:1;
      uint64_t PORTINRSEL4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLSSEL;

};

#define EMB6 (*(volatile struct EMB6_tag *) 0x40017cc0)

struct ETH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFSEL:1;
      uint64_t reservedSpace0:3;
      uint64_t RCKINV:1;
      uint64_t TCKINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_IFCONFR;

  uint8_t res0[44012];

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
      uint64_t ACS:1;
      uint64_t reservedSpace1:1;
      uint64_t DRTY:1;
      uint64_t IPCO:1;
      uint64_t DM:1;
      uint64_t LM:1;
      uint64_t DO:1;
      uint64_t FES:1;
      uint64_t reservedSpace2:1;
      uint64_t DCRS:1;
      uint64_t IFG:3;
      uint64_t reservedSpace3:2;
      uint64_t MJB:1;
      uint64_t MWD:1;
      uint64_t reservedSpace4:1;
      uint64_t CST:1;
      uint64_t reservedSpace5:2;
      uint64_t SAIRC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_CONFIGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:1;
      uint64_t HUC:1;
      uint64_t HMC:1;
      uint64_t DAIF:1;
      uint64_t PMF:1;
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
  } __attribute__((aligned(4))) MAC_FLTCTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HASHTHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HASHTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMIB:1;
      uint64_t SMIW:1;
      uint64_t SMIC:4;
      uint64_t SMIR:5;
      uint64_t SMIA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SMIADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_SMIDATR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCA_BPA:1;
      uint64_t TFE:1;
      uint64_t RFE:1;
      uint64_t UNP:1;
      uint64_t PLT:2;
      uint64_t reservedSpace0:1;
      uint64_t DZPQ:1;
      uint64_t reservedSpace1:8;
      uint64_t PAUSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FLOCTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLFLT:16;
      uint64_t VTAL:1;
      uint64_t VTIM:1;
      uint64_t reservedSpace0:1;
      uint64_t VTHM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VTAFLTR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MREA:1;
      uint64_t MRS:2;
      uint64_t reservedSpace0:1;
      uint64_t RFWA:1;
      uint64_t RFRS:2;
      uint64_t reservedSpace1:1;
      uint64_t RFFL:2;
      uint64_t reservedSpace2:6;
      uint64_t MTEA:1;
      uint64_t MTS:2;
      uint64_t MTP:1;
      uint64_t TFRS:2;
      uint64_t TFWA:1;
      uint64_t reservedSpace3:1;
      uint64_t TFNE:1;
      uint64_t TFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPFRMFT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RTWKFFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t MPEN:1;
      uint64_t WKEN:1;
      uint64_t reservedSpace0:2;
      uint64_t MPFR:1;
      uint64_t WKFR:1;
      uint64_t reservedSpace1:2;
      uint64_t GLUB:1;
      uint64_t RTWKTR:1;
      uint64_t reservedSpace2:13;
      uint64_t RTWKPT:3;
      uint64_t reservedSpace3:4;
      uint64_t RTWKFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_PMTCTLR;

  uint8_t res2[8];

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
      uint64_t reservedSpace1:2;
      uint64_t TSPIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PMTIM:1;
      uint64_t reservedSpace1:5;
      uint64_t TSPIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTMSKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRH0:16;
      uint64_t reservedSpace0:15;
      uint64_t AE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADHR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRH1:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC1:6;
      uint64_t SA1:1;
      uint64_t AE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADHR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRH2:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC2:6;
      uint64_t SA2:1;
      uint64_t AE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADHR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRL2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRH3:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC3:6;
      uint64_t SA3:1;
      uint64_t AE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADHR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRL3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRH4:16;
      uint64_t reservedSpace0:8;
      uint64_t MBC4:6;
      uint64_t SA4:1;
      uint64_t AE4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADHR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRL4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MACADLR4;

  uint8_t res3[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRST:1;
      uint64_t COS:1;
      uint64_t ROR:1;
      uint64_t MCF:1;
      uint64_t MCPSET:1;
      uint64_t MCPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_MMCCTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RXBGIS:1;
      uint64_t RXMGIS:1;
      uint64_t RXCEIS:1;
      uint64_t RXAEIS:1;
      uint64_t RXREIS:1;
      uint64_t reservedSpace1:9;
      uint64_t RXUGIS:1;
      uint64_t RXLEIS:1;
      uint64_t RXOEIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_REVSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TXBGIS:1;
      uint64_t TXMGIS:1;
      uint64_t reservedSpace1:12;
      uint64_t TXDEEIS:1;
      uint64_t TXLCEIS:1;
      uint64_t TXECEIS:1;
      uint64_t TXCAEIS:1;
      uint64_t reservedSpace2:1;
      uint64_t TXUGIS:1;
      uint64_t TXEDEIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TRSSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RXBGIM:1;
      uint64_t RXMGIM:1;
      uint64_t RXCEIM:1;
      uint64_t RXAEIM:1;
      uint64_t RXREIM:1;
      uint64_t reservedSpace1:9;
      uint64_t RXUGIM:1;
      uint64_t RXLEIM:1;
      uint64_t RXOEIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RITCTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TXBGIM:1;
      uint64_t TXMGIM:1;
      uint64_t reservedSpace1:12;
      uint64_t TXDEEIM:1;
      uint64_t TXLCEIM:1;
      uint64_t TXECEIM:1;
      uint64_t TXCAEIM:1;
      uint64_t reservedSpace2:1;
      uint64_t TXUGIM:1;
      uint64_t TXEDEIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TITCTLR;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBRGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXBRGFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMUGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXMUGFR;

  uint8_t res5[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDEECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXDEEFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLCECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXLCEFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXECECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXECEFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCAECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXCAEFR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXUNGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXUNGFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXEDECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_TXEDEFR;

  uint8_t res7[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBRGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXBRGFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMUGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXMUGFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCRECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXCREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXALECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXALEFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRUECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXRUEFR;

  uint8_t res8[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXUNGCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXUNGFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXLEECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXLEEFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXORECNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMC_RXOREFR;

  uint8_t res9[560];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3PEN:1;
      uint64_t reservedSpace0:1;
      uint64_t L3SAM:1;
      uint64_t L3SAIM:1;
      uint64_t L3DAM:1;
      uint64_t L3DAIM:1;
      uint64_t L3HSBM:5;
      uint64_t L3HDBM:5;
      uint64_t L4PEN:1;
      uint64_t reservedSpace1:1;
      uint64_t L4SPM:1;
      uint64_t L4SPIM:1;
      uint64_t L4DPM:1;
      uint64_t L4DPIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L34CTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L4SPVAL:16;
      uint64_t L4DPVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L4PORTR;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ADDR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L3ADDRR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L3ADDRR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ADDR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L3ADDRR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ADDR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_L3ADDRR3;

  uint8_t res11[356];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLANV:16;
      uint64_t VLANC:2;
      uint64_t VLANS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VTACTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLHT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VLAHTBR;

  uint8_t res12[372];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPEN:1;
      uint64_t TSPUPSEL:1;
      uint64_t TSPINI:1;
      uint64_t TSPUP:1;
      uint64_t TSPINT:1;
      uint64_t TSPADUP:1;
      uint64_t reservedSpace0:2;
      uint64_t TSPEALL:1;
      uint64_t TSPSSR:1;
      uint64_t TSPVER:1;
      uint64_t TSPOVETH:1;
      uint64_t TSPOVIPV6:1;
      uint64_t TSPOVIPV4:1;
      uint64_t TSPMTSEL:4;
      uint64_t TSPADF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSPCTLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPNSEADD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSPNSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPSYSSEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMSSECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPSYSNSEC:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMSNSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPUPSEC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMUSECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPUPNSEC:31;
      uint64_t TSPUPNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMUNSER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPTAGSEC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMTSECR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPTAGNSEC0:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMTNSER0;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSOVF:1;
      uint64_t TSTAR0:1;
      uint64_t reservedSpace0:1;
      uint64_t TSERR0:1;
      uint64_t TSTAR1:1;
      uint64_t TSERR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TSPSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSFRE0:4;
      uint64_t PPSOMD:1;
      uint64_t TT0SEL:2;
      uint64_t reservedSpace0:1;
      uint64_t PPSFRE1:3;
      uint64_t reservedSpace1:2;
      uint64_t TT1SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_PPSCTLR;

  uint8_t res14[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPTAGSEC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMTSECR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPTAGNSEC1:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTP_TMTNSER1;

  uint8_t res15[2168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DMAA:1;
      uint64_t DSL:5;
      uint64_t DSEN:1;
      uint64_t TPBL:6;
      uint64_t PRAT:2;
      uint64_t FBST:1;
      uint64_t RPBL:6;
      uint64_t SPBL:1;
      uint64_t M8PBL:1;
      uint64_t AAL:1;
      uint64_t MBST:1;
      uint64_t TXPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_BUSMODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPOLL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TXPOLLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPOLL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RXPOLLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDLAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RXDLADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDLAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TXDLADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIS:1;
      uint64_t TSS:1;
      uint64_t TUS:1;
      uint64_t TJS:1;
      uint64_t OVS:1;
      uint64_t UNS:1;
      uint64_t RIS:1;
      uint64_t RUS:1;
      uint64_t RSS:1;
      uint64_t RWS:1;
      uint64_t ETS:1;
      uint64_t reservedSpace0:2;
      uint64_t FBS:1;
      uint64_t ERS:1;
      uint64_t AIS:1;
      uint64_t NIS:1;
      uint64_t RSTS:3;
      uint64_t TSTS:3;
      uint64_t EBUS:3;
      uint64_t reservedSpace1:1;
      uint64_t MMCS:1;
      uint64_t PMTS:1;
      uint64_t PTPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DMASTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t STR:1;
      uint64_t OSF:1;
      uint64_t RTC_bitfield:2;
      uint64_t DGF:1;
      uint64_t FUF:1;
      uint64_t FEF:1;
      uint64_t reservedSpace1:5;
      uint64_t STT:1;
      uint64_t TTC:3;
      uint64_t reservedSpace2:3;
      uint64_t FTF:1;
      uint64_t TSF:1;
      uint64_t reservedSpace3:2;
      uint64_t DFRF:1;
      uint64_t RSF:1;
      uint64_t DTCOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OPRMODR;

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
  } __attribute__((aligned(4))) DMA_INTENAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNACNT:16;
      uint64_t UNAOVF:1;
      uint64_t OVFCNT:11;
      uint64_t OVFOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_RFRCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIWT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_REVWDTR;

  uint8_t res16[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHTXDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHTXDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHRXDE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHRXDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHTXBF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHTXBFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHRXBF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CHRXBFR;

};

#define ETH (*(volatile struct ETH_tag *) 0x40055410)

struct FCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UVR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIVS:2;
      uint64_t reservedSpace0:2;
      uint64_t MCKS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDIVS:2;
      uint64_t reservedSpace0:1;
      uint64_t RCKS:4;
      uint64_t INEXS:1;
      uint64_t DNFS:2;
      uint64_t reservedSpace1:2;
      uint64_t EDGES:2;
      uint64_t reservedSpace2:1;
      uint64_t EXREFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRIE:1;
      uint64_t MENDIE:1;
      uint64_t OVFIE:1;
      uint64_t reservedSpace0:1;
      uint64_t ERRINTRS:1;
      uint64_t reservedSpace1:2;
      uint64_t ERRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRF:1;
      uint64_t MENDF:1;
      uint64_t OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRFCLR:1;
      uint64_t MENDFCLR:1;
      uint64_t OVFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

};

#define FCM (*(volatile struct FCM_tag *) 0x40048400)

struct FMAC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAGE_NUM:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIFT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTR;

  uint32_t RTR0;
  uint32_t RTR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR16;

};

#define FMAC1 (*(volatile struct FMAC1_tag *) 0x40058000)

struct FMAC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAGE_NUM:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIFT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTR;

  uint32_t RTR0;
  uint32_t RTR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR16;

};

#define FMAC2 (*(volatile struct FMAC2_tag *) 0x40058400)

struct FMAC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAGE_NUM:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIFT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTR;

  uint32_t RTR0;
  uint32_t RTR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR16;

};

#define FMAC3 (*(volatile struct FMAC3_tag *) 0x40058800)

struct FMAC4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAGE_NUM:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIFT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTR;

  uint32_t RTR0;
  uint32_t RTR1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COR16;

};

#define FMAC4 (*(volatile struct FMAC4_tag *) 0x40058c00)

struct GPIO_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRA;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRA;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRB;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRB;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRB;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRC;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRC;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRD;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRD;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRD;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRE;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRE;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRF;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRF;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERF;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRF;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRF;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRF;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRG;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRG;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
      uint64_t PIN14:1;
      uint64_t PIN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRH;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
      uint64_t POUT14:1;
      uint64_t POUT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
      uint64_t POUTE14:1;
      uint64_t POUTE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
      uint64_t POS14:1;
      uint64_t POS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
      uint64_t POR14:1;
      uint64_t POR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
      uint64_t POT14:1;
      uint64_t POT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRH;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PIN00:1;
      uint64_t PIN01:1;
      uint64_t PIN02:1;
      uint64_t PIN03:1;
      uint64_t PIN04:1;
      uint64_t PIN05:1;
      uint64_t PIN06:1;
      uint64_t PIN07:1;
      uint64_t PIN08:1;
      uint64_t PIN09:1;
      uint64_t PIN10:1;
      uint64_t PIN11:1;
      uint64_t PIN12:1;
      uint64_t PIN13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PIDRI;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT00:1;
      uint64_t POUT01:1;
      uint64_t POUT02:1;
      uint64_t POUT03:1;
      uint64_t POUT04:1;
      uint64_t POUT05:1;
      uint64_t POUT06:1;
      uint64_t POUT07:1;
      uint64_t POUT08:1;
      uint64_t POUT09:1;
      uint64_t POUT10:1;
      uint64_t POUT11:1;
      uint64_t POUT12:1;
      uint64_t POUT13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PODRI;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUTE00:1;
      uint64_t POUTE01:1;
      uint64_t POUTE02:1;
      uint64_t POUTE03:1;
      uint64_t POUTE04:1;
      uint64_t POUTE05:1;
      uint64_t POUTE06:1;
      uint64_t POUTE07:1;
      uint64_t POUTE08:1;
      uint64_t POUTE09:1;
      uint64_t POUTE10:1;
      uint64_t POUTE11:1;
      uint64_t POUTE12:1;
      uint64_t POUTE13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POERI;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POS00:1;
      uint64_t POS01:1;
      uint64_t POS02:1;
      uint64_t POS03:1;
      uint64_t POS04:1;
      uint64_t POS05:1;
      uint64_t POS06:1;
      uint64_t POS07:1;
      uint64_t POS08:1;
      uint64_t POS09:1;
      uint64_t POS10:1;
      uint64_t POS11:1;
      uint64_t POS12:1;
      uint64_t POS13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POSRI;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POR00:1;
      uint64_t POR01:1;
      uint64_t POR02:1;
      uint64_t POR03:1;
      uint64_t POR04:1;
      uint64_t POR05:1;
      uint64_t POR06:1;
      uint64_t POR07:1;
      uint64_t POR08:1;
      uint64_t POR09:1;
      uint64_t POR10:1;
      uint64_t POR11:1;
      uint64_t POR12:1;
      uint64_t POR13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PORRI;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POT00:1;
      uint64_t POT01:1;
      uint64_t POT02:1;
      uint64_t POT03:1;
      uint64_t POT04:1;
      uint64_t POT05:1;
      uint64_t POT06:1;
      uint64_t POT07:1;
      uint64_t POT08:1;
      uint64_t POT09:1;
      uint64_t POT10:1;
      uint64_t POT11:1;
      uint64_t POT12:1;
      uint64_t POT13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POTRI;

  uint8_t res17[870];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPFE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSPCR;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BFSEL:6;
      uint64_t reservedSpace0:6;
      uint64_t RDWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCCR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PINAE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PINAER;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WE:1;
      uint64_t reservedSpace0:7;
      uint64_t WP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWPR;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRA15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRA15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRB15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRB15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRC15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRC15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRD15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRD15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRE15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRE15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRF15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRF15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRG15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRG15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRH15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRH15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t POUT:1;
      uint64_t POUTE:1;
      uint64_t NOD:1;
      uint64_t reservedSpace0:1;
      uint64_t DRV:2;
      uint64_t PUU:1;
      uint64_t reservedSpace1:1;
      uint64_t PIN:1;
      uint64_t INVE:1;
      uint64_t CINSEL:1;
      uint64_t reservedSpace2:1;
      uint64_t INTE:1;
      uint64_t reservedSpace3:1;
      uint64_t LTE:1;
      uint64_t DDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCRI13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSEL:6;
      uint64_t reservedSpace0:2;
      uint64_t BFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PFSRI13;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40053800)

struct HASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t FST_GRP:1;
      uint64_t KMSG_END:1;
      uint64_t reservedSpace0:1;
      uint64_t MODE:2;
      uint64_t LKEY:1;
      uint64_t reservedSpace1:1;
      uint64_t BUSY:1;
      uint64_t CYC_END:1;
      uint64_t HMAC_END:1;
      uint64_t reservedSpace2:3;
      uint64_t HCIE:1;
      uint64_t HEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[12];

  uint32_t HR7;
  uint32_t HR6;
  uint32_t HR5;
  uint32_t HR4;
  uint32_t HR3;
  uint32_t HR2;
  uint32_t HR1;
  uint32_t HR0;
  uint8_t res1[16];

  uint32_t DR15;
  uint32_t DR14;
  uint32_t DR13;
  uint32_t DR12;
  uint32_t DR11;
  uint32_t DR10;
  uint32_t DR9;
  uint32_t DR8;
  uint32_t DR7;
  uint32_t DR6;
  uint32_t DR5;
  uint32_t DR4;
  uint32_t DR3;
  uint32_t DR2;
  uint32_t DR1;
  uint32_t DR0;
};

#define HASH (*(volatile struct HASH_tag *) 0x40008400)

struct HRPWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSEL:8;
      uint64_t PSEL:8;
      uint64_t reservedSpace0:13;
      uint64_t NE:1;
      uint64_t PE:1;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR16;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALCODE:8;
      uint64_t reservedSpace0:4;
      uint64_t ENDF:1;
      uint64_t reservedSpace1:2;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALCODE:8;
      uint64_t reservedSpace0:4;
      uint64_t ENDF:1;
      uint64_t reservedSpace1:2;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALCR1;

};

#define HRPWM (*(volatile struct HRPWM_tag *) 0x4003c000)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x4004e000)

struct I2C2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x4004e400)

struct I2C3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C3 (*(volatile struct I2C3_tag *) 0x4004e800)

struct I2C4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C4 (*(volatile struct I2C4_tag *) 0x4004ec00)

struct I2C5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C5 (*(volatile struct I2C5_tag *) 0x4004f000)

struct I2C6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t SMBALRTEN:1;
      uint64_t SMBDEFAULTEN:1;
      uint64_t SMBHOSTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t GCEN:1;
      uint64_t RESTART:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t reservedSpace1:4;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTIE:1;
      uint64_t SLADDR0IE:1;
      uint64_t SLADDR1IE:1;
      uint64_t TENDIE:1;
      uint64_t STOPIE:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLIE:1;
      uint64_t TEMPTYIE:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOIE:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKIE:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTIE:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLIE:1;
      uint64_t SMBDEFAULTIE:1;
      uint64_t SMBHOSTIE:1;
      uint64_t SMBALRTIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMOUTEN:1;
      uint64_t LTMOUT:1;
      uint64_t HTMOUT:1;
      uint64_t reservedSpace0:4;
      uint64_t FACKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BUSWAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR0:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR0EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLADDR1:10;
      uint64_t reservedSpace0:2;
      uint64_t SLADDR1EN:1;
      uint64_t reservedSpace1:2;
      uint64_t ADDRMOD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOUTLOW:16;
      uint64_t TOUTHIGH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTF:1;
      uint64_t SLADDR0F:1;
      uint64_t SLADDR1F:1;
      uint64_t TENDF:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLF:1;
      uint64_t TEMPTYF:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOF:1;
      uint64_t ACKRF:1;
      uint64_t reservedSpace2:1;
      uint64_t NACKF:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTF:1;
      uint64_t reservedSpace4:1;
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace5:1;
      uint64_t GENCALLF:1;
      uint64_t SMBDEFAULTF:1;
      uint64_t SMBHOSTF:1;
      uint64_t SMBALRTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTFCLR:1;
      uint64_t SLADDR0FCLR:1;
      uint64_t SLADDR1FCLR:1;
      uint64_t TENDFCLR:1;
      uint64_t STOPFCLR:1;
      uint64_t reservedSpace0:1;
      uint64_t RFULLFCLR:1;
      uint64_t TEMPTYFCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t ARLOFCLR:1;
      uint64_t reservedSpace2:2;
      uint64_t NACKFCLR:1;
      uint64_t reservedSpace3:1;
      uint64_t TMOUTFCLR:1;
      uint64_t reservedSpace4:5;
      uint64_t GENCALLFCLR:1;
      uint64_t SMBDEFAULTFCLR:1;
      uint64_t SMBHOSTFCLR:1;
      uint64_t SMBALRTFCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DTR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWW:5;
      uint64_t reservedSpace0:3;
      uint64_t SHIGHW:5;
      uint64_t reservedSpace1:3;
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DNF:2;
      uint64_t reservedSpace0:2;
      uint64_t DNFEN:1;
      uint64_t ANFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLTR;

};

#define I2C6 (*(volatile struct I2C6_tag *) 0x4004f400)

struct I2S1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIE:1;
      uint64_t RXE:1;
      uint64_t RXIE:1;
      uint64_t EIE:1;
      uint64_t WMS:1;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
      uint64_t TXBIRQWL:3;
      uint64_t reservedSpace0:1;
      uint64_t RXBIRQWL:3;
      uint64_t reservedSpace1:1;
      uint64_t FIFOR:1;
      uint64_t CODECRC:1;
      uint64_t I2SPLLSEL:1;
      uint64_t SDOE:1;
      uint64_t LRCKOE:1;
      uint64_t CKOE:1;
      uint64_t DUPLEX:1;
      uint64_t CLKSEL:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBA:1;
      uint64_t RXBA:1;
      uint64_t TXBE:1;
      uint64_t TXBF:1;
      uint64_t RXBE:1;
      uint64_t RXBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SSTD:2;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t PCMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint32_t TXBUF;
  uint32_t RXBUF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define I2S1 (*(volatile struct I2S1_tag *) 0x4001e000)

struct I2S2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIE:1;
      uint64_t RXE:1;
      uint64_t RXIE:1;
      uint64_t EIE:1;
      uint64_t WMS:1;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
      uint64_t TXBIRQWL:3;
      uint64_t reservedSpace0:1;
      uint64_t RXBIRQWL:3;
      uint64_t reservedSpace1:1;
      uint64_t FIFOR:1;
      uint64_t CODECRC:1;
      uint64_t I2SPLLSEL:1;
      uint64_t SDOE:1;
      uint64_t LRCKOE:1;
      uint64_t CKOE:1;
      uint64_t DUPLEX:1;
      uint64_t CLKSEL:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBA:1;
      uint64_t RXBA:1;
      uint64_t TXBE:1;
      uint64_t TXBF:1;
      uint64_t RXBE:1;
      uint64_t RXBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SSTD:2;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t PCMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint32_t TXBUF;
  uint32_t RXBUF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define I2S2 (*(volatile struct I2S2_tag *) 0x4001e400)

struct I2S3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIE:1;
      uint64_t RXE:1;
      uint64_t RXIE:1;
      uint64_t EIE:1;
      uint64_t WMS:1;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
      uint64_t TXBIRQWL:3;
      uint64_t reservedSpace0:1;
      uint64_t RXBIRQWL:3;
      uint64_t reservedSpace1:1;
      uint64_t FIFOR:1;
      uint64_t CODECRC:1;
      uint64_t I2SPLLSEL:1;
      uint64_t SDOE:1;
      uint64_t LRCKOE:1;
      uint64_t CKOE:1;
      uint64_t DUPLEX:1;
      uint64_t CLKSEL:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBA:1;
      uint64_t RXBA:1;
      uint64_t TXBE:1;
      uint64_t TXBF:1;
      uint64_t RXBE:1;
      uint64_t RXBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SSTD:2;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t PCMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint32_t TXBUF;
  uint32_t RXBUF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define I2S3 (*(volatile struct I2S3_tag *) 0x40022000)

struct I2S4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIE:1;
      uint64_t RXE:1;
      uint64_t RXIE:1;
      uint64_t EIE:1;
      uint64_t WMS:1;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
      uint64_t TXBIRQWL:3;
      uint64_t reservedSpace0:1;
      uint64_t RXBIRQWL:3;
      uint64_t reservedSpace1:1;
      uint64_t FIFOR:1;
      uint64_t CODECRC:1;
      uint64_t I2SPLLSEL:1;
      uint64_t SDOE:1;
      uint64_t LRCKOE:1;
      uint64_t CKOE:1;
      uint64_t DUPLEX:1;
      uint64_t CLKSEL:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBA:1;
      uint64_t RXBA:1;
      uint64_t TXBE:1;
      uint64_t TXBF:1;
      uint64_t RXBE:1;
      uint64_t RXBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERR:1;
      uint64_t RXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SSTD:2;
      uint64_t DATLEN:2;
      uint64_t CHLEN:1;
      uint64_t PCMSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint32_t TXBUF;
  uint32_t RXBUF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define I2S4 (*(volatile struct I2S4_tag *) 0x40022400)

struct ICG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWDTAUTS:1;
      uint64_t SWDTITS:1;
      uint64_t SWDTPERI:2;
      uint64_t SWDTCKS:4;
      uint64_t SWDTWDPT:4;
      uint64_t SWDTSLPOFF:1;
      uint64_t reservedSpace0:3;
      uint64_t WDTAUTS:1;
      uint64_t WDTITS:1;
      uint64_t WDTPERI:2;
      uint64_t WDTCKS:4;
      uint64_t WDTWDPT:4;
      uint64_t WDTSLPOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRCFREQSEL:1;
      uint64_t reservedSpace0:7;
      uint64_t HRCSTOP:1;
      uint64_t reservedSpace1:7;
      uint64_t BOR_LEV:2;
      uint64_t BORDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICG1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBUSPRT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICG3;

};

#define ICG (*(volatile struct ICG_tag *) 0x400)

struct INTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t NOCSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SWDTENR:1;
      uint64_t PVD1ENR:1;
      uint64_t PVD2ENR:1;
      uint64_t reservedSpace1:1;
      uint64_t XTALSTPENR:1;
      uint64_t reservedSpace2:2;
      uint64_t REPENR:1;
      uint64_t RECCENR:1;
      uint64_t BUSMENR:1;
      uint64_t WDTENR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SWDTFR:1;
      uint64_t PVD1FR:1;
      uint64_t PVD2FR:1;
      uint64_t reservedSpace1:1;
      uint64_t XTALSTPFR:1;
      uint64_t reservedSpace2:2;
      uint64_t REPFR:1;
      uint64_t RECCFR:1;
      uint64_t BUSMFR:1;
      uint64_t WDTFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SWDTCFR:1;
      uint64_t PVD1CFR:1;
      uint64_t PVD2CFR:1;
      uint64_t reservedSpace1:1;
      uint64_t XTALSTPCFR:1;
      uint64_t reservedSpace2:2;
      uint64_t REPCFR:1;
      uint64_t RECCCFR:1;
      uint64_t BUSMCFR:1;
      uint64_t WDTCFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMICFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQTRG:2;
      uint64_t reservedSpace0:2;
      uint64_t EISMPCLK:2;
      uint64_t reservedSpace1:1;
      uint64_t EFEN:1;
      uint64_t reservedSpace2:7;
      uint64_t NOCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQWUEN:16;
      uint64_t SWDTWUEN:1;
      uint64_t PVD1WUEN:1;
      uint64_t PVD2WUEN:1;
      uint64_t CMPWUEN:1;
      uint64_t WKTMWUEN:1;
      uint64_t RTCALMWUEN:1;
      uint64_t RTCPRDWUEN:1;
      uint64_t TMR0GCMWUEN:1;
      uint64_t TMR2GCMWUEN:1;
      uint64_t TMR2OVFWUEN:1;
      uint64_t RXWUEN:1;
      uint64_t USHWUEN:1;
      uint64_t USFWUEN:1;
      uint64_t ETHWUEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUPEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQFR0:1;
      uint64_t EIRQFR1:1;
      uint64_t EIRQFR2:1;
      uint64_t EIRQFR3:1;
      uint64_t EIRQFR4:1;
      uint64_t EIRQFR5:1;
      uint64_t EIRQFR6:1;
      uint64_t EIRQFR7:1;
      uint64_t EIRQFR8:1;
      uint64_t EIRQFR9:1;
      uint64_t EIRQFR10:1;
      uint64_t EIRQFR11:1;
      uint64_t EIRQFR12:1;
      uint64_t EIRQFR13:1;
      uint64_t EIRQFR14:1;
      uint64_t EIRQFR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRQCFR0:1;
      uint64_t EIRQCFR1:1;
      uint64_t EIRQCFR2:1;
      uint64_t EIRQCFR3:1;
      uint64_t EIRQCFR4:1;
      uint64_t EIRQCFR5:1;
      uint64_t EIRQCFR6:1;
      uint64_t EIRQCFR7:1;
      uint64_t EIRQCFR8:1;
      uint64_t EIRQCFR9:1;
      uint64_t EIRQCFR10:1;
      uint64_t EIRQCFR11:1;
      uint64_t EIRQCFR12:1;
      uint64_t EIRQCFR13:1;
      uint64_t EIRQCFR14:1;
      uint64_t EIRQCFR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRQCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSEL0:1;
      uint64_t VSEL1:1;
      uint64_t VSEL2:1;
      uint64_t VSEL3:1;
      uint64_t VSEL4:1;
      uint64_t VSEL5:1;
      uint64_t VSEL6:1;
      uint64_t VSEL7:1;
      uint64_t VSEL8:1;
      uint64_t VSEL9:1;
      uint64_t VSEL10:1;
      uint64_t VSEL11:1;
      uint64_t VSEL12:1;
      uint64_t VSEL13:1;
      uint64_t VSEL14:1;
      uint64_t VSEL15:1;
      uint64_t VSEL16:1;
      uint64_t VSEL17:1;
      uint64_t VSEL18:1;
      uint64_t VSEL19:1;
      uint64_t VSEL20:1;
      uint64_t VSEL21:1;
      uint64_t VSEL22:1;
      uint64_t VSEL23:1;
      uint64_t VSEL24:1;
      uint64_t VSEL25:1;
      uint64_t VSEL26:1;
      uint64_t VSEL27:1;
      uint64_t VSEL28:1;
      uint64_t VSEL29:1;
      uint64_t VSEL30:1;
      uint64_t VSEL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VSSEL143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIE0:1;
      uint64_t SWIE1:1;
      uint64_t SWIE2:1;
      uint64_t SWIE3:1;
      uint64_t SWIE4:1;
      uint64_t SWIE5:1;
      uint64_t SWIE6:1;
      uint64_t SWIE7:1;
      uint64_t SWIE8:1;
      uint64_t SWIE9:1;
      uint64_t SWIE10:1;
      uint64_t SWIE11:1;
      uint64_t SWIE12:1;
      uint64_t SWIE13:1;
      uint64_t SWIE14:1;
      uint64_t SWIE15:1;
      uint64_t SWIE16:1;
      uint64_t SWIE17:1;
      uint64_t SWIE18:1;
      uint64_t SWIE19:1;
      uint64_t SWIE20:1;
      uint64_t SWIE21:1;
      uint64_t SWIE22:1;
      uint64_t SWIE23:1;
      uint64_t SWIE24:1;
      uint64_t SWIE25:1;
      uint64_t SWIE26:1;
      uint64_t SWIE27:1;
      uint64_t SWIE28:1;
      uint64_t SWIE29:1;
      uint64_t SWIE30:1;
      uint64_t SWIE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTE0:1;
      uint64_t EVTE1:1;
      uint64_t EVTE2:1;
      uint64_t EVTE3:1;
      uint64_t EVTE4:1;
      uint64_t EVTE5:1;
      uint64_t EVTE6:1;
      uint64_t EVTE7:1;
      uint64_t EVTE8:1;
      uint64_t EVTE9:1;
      uint64_t EVTE10:1;
      uint64_t EVTE11:1;
      uint64_t EVTE12:1;
      uint64_t EVTE13:1;
      uint64_t EVTE14:1;
      uint64_t EVTE15:1;
      uint64_t EVTE16:1;
      uint64_t EVTE17:1;
      uint64_t EVTE18:1;
      uint64_t EVTE19:1;
      uint64_t EVTE20:1;
      uint64_t EVTE21:1;
      uint64_t EVTE22:1;
      uint64_t EVTE23:1;
      uint64_t EVTE24:1;
      uint64_t EVTE25:1;
      uint64_t EVTE26:1;
      uint64_t EVTE27:1;
      uint64_t EVTE28:1;
      uint64_t EVTE29:1;
      uint64_t EVTE30:1;
      uint64_t EVTE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IER0:1;
      uint64_t IER1:1;
      uint64_t IER2:1;
      uint64_t IER3:1;
      uint64_t IER4:1;
      uint64_t IER5:1;
      uint64_t IER6:1;
      uint64_t IER7:1;
      uint64_t IER8:1;
      uint64_t IER9:1;
      uint64_t IER10:1;
      uint64_t IER11:1;
      uint64_t IER12:1;
      uint64_t IER13:1;
      uint64_t IER14:1;
      uint64_t IER15:1;
      uint64_t IER16:1;
      uint64_t IER17:1;
      uint64_t IER18:1;
      uint64_t IER19:1;
      uint64_t IER20:1;
      uint64_t IER21:1;
      uint64_t IER22:1;
      uint64_t IER23:1;
      uint64_t IER24:1;
      uint64_t IER25:1;
      uint64_t IER26:1;
      uint64_t IER27:1;
      uint64_t IER28:1;
      uint64_t IER29:1;
      uint64_t IER30:1;
      uint64_t IER31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define INTC (*(volatile struct INTC_tag *) 0x40051000)

struct KEYSCAN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEYINSEL:16;
      uint64_t KEYOUTSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t CKSEL:2;
      uint64_t reservedSpace1:2;
      uint64_t T_LLEVEL:5;
      uint64_t T_HIZ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INDEX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

};

#define KEYSCAN (*(volatile struct KEYSCAN_tag *) 0x40050c00)

struct MAU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t INTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:4;
      uint64_t SHIFT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint32_t DTR0;
  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQRT_DOUT:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIN_DIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIN_DOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTR1;

};

#define MAU (*(volatile struct MAU_tag *) 0x40055000)

struct MPU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPURGSIZE:5;
      uint64_t MPURGADDR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPU1EAF:1;
      uint64_t SMPU2EAF:1;
      uint64_t FMPUEAF:1;
      uint64_t HMPUEAF:1;
      uint64_t EMPUEAF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPU1ECLR:1;
      uint64_t SMPU2ECLR:1;
      uint64_t FMPUECLR:1;
      uint64_t HMPUECLR:1;
      uint64_t EMPUECLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPUWE:1;
      uint64_t WKEY:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESRDP:1;
      uint64_t AESWRP:1;
      uint64_t HASHRDP:1;
      uint64_t HASHWRP:1;
      uint64_t TRNGRDP:1;
      uint64_t TRNGWRP:1;
      uint64_t CRCRDP:1;
      uint64_t CRCWRP:1;
      uint64_t FMCRDP:1;
      uint64_t FMCWRP:1;
      uint64_t reservedSpace0:2;
      uint64_t WDTRDP:1;
      uint64_t WDTWRP:1;
      uint64_t SWDTRDP:1;
      uint64_t SWDTWRP:1;
      uint64_t BKSRAMRDP:1;
      uint64_t BKSRAMWRP:1;
      uint64_t RTCRDP:1;
      uint64_t RTCWRP:1;
      uint64_t DMPURDP:1;
      uint64_t DMPUWRP:1;
      uint64_t SRAMCRDP:1;
      uint64_t SRAMCWRP:1;
      uint64_t INTCRDP:1;
      uint64_t INTCWRP:1;
      uint64_t SYSCRDP:1;
      uint64_t SYSCWRP:1;
      uint64_t MSTPRDP:1;
      uint64_t MSPTWRP:1;
      uint64_t reservedSpace1:1;
      uint64_t BUSERRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1RG0E:1;
      uint64_t S1RG1E:1;
      uint64_t S1RG2E:1;
      uint64_t S1RG3E:1;
      uint64_t S1RG4E:1;
      uint64_t S1RG5E:1;
      uint64_t S1RG6E:1;
      uint64_t S1RG7E:1;
      uint64_t S1RG8E:1;
      uint64_t S1RG9E:1;
      uint64_t S1RG10E:1;
      uint64_t S1RG11E:1;
      uint64_t S1RG12E:1;
      uint64_t S1RG13E:1;
      uint64_t S1RG14E:1;
      uint64_t S1RG15E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1RGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1RG0WP:1;
      uint64_t S1RG1WP:1;
      uint64_t S1RG2WP:1;
      uint64_t S1RG3WP:1;
      uint64_t S1RG4WP:1;
      uint64_t S1RG5WP:1;
      uint64_t S1RG6WP:1;
      uint64_t S1RG7WP:1;
      uint64_t S1RG8WP:1;
      uint64_t S1RG9WP:1;
      uint64_t S1RG10WP:1;
      uint64_t S1RG11WP:1;
      uint64_t S1RG12WP:1;
      uint64_t S1RG13WP:1;
      uint64_t S1RG14WP:1;
      uint64_t S1RG15WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1RGWP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1RG0RP:1;
      uint64_t S1RG1RP:1;
      uint64_t S1RG2RP:1;
      uint64_t S1RG3RP:1;
      uint64_t S1RG4RP:1;
      uint64_t S1RG5RP:1;
      uint64_t S1RG6RP:1;
      uint64_t S1RG7RP:1;
      uint64_t S1RG8RP:1;
      uint64_t S1RG9RP:1;
      uint64_t S1RG10RP:1;
      uint64_t S1RG11RP:1;
      uint64_t S1RG12RP:1;
      uint64_t S1RG13RP:1;
      uint64_t S1RG14RP:1;
      uint64_t S1RG15RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1RGRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPU1BRP:1;
      uint64_t SMPU1BWP:1;
      uint64_t SMPU1ACT:2;
      uint64_t reservedSpace0:3;
      uint64_t SMPU1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S2RG0E:1;
      uint64_t S2RG1E:1;
      uint64_t S2RG2E:1;
      uint64_t S2RG3E:1;
      uint64_t S2RG4E:1;
      uint64_t S2RG5E:1;
      uint64_t S2RG6E:1;
      uint64_t S2RG7E:1;
      uint64_t S2RG8E:1;
      uint64_t S2RG9E:1;
      uint64_t S2RG10E:1;
      uint64_t S2RG11E:1;
      uint64_t S2RG12E:1;
      uint64_t S2RG13E:1;
      uint64_t S2RG14E:1;
      uint64_t S2RG15E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2RGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S2RG0WP:1;
      uint64_t S2RG1WP:1;
      uint64_t S2RG2WP:1;
      uint64_t S2RG3WP:1;
      uint64_t S2RG4WP:1;
      uint64_t S2RG5WP:1;
      uint64_t S2RG6WP:1;
      uint64_t S2RG7WP:1;
      uint64_t S2RG8WP:1;
      uint64_t S2RG9WP:1;
      uint64_t S2RG10WP:1;
      uint64_t S2RG11WP:1;
      uint64_t S2RG12WP:1;
      uint64_t S2RG13WP:1;
      uint64_t S2RG14WP:1;
      uint64_t S2RG15WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2RGWP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S2RG0RP:1;
      uint64_t S2RG1RP:1;
      uint64_t S2RG2RP:1;
      uint64_t S2RG3RP:1;
      uint64_t S2RG4RP:1;
      uint64_t S2RG5RP:1;
      uint64_t S2RG6RP:1;
      uint64_t S2RG7RP:1;
      uint64_t S2RG8RP:1;
      uint64_t S2RG9RP:1;
      uint64_t S2RG10RP:1;
      uint64_t S2RG11RP:1;
      uint64_t S2RG12RP:1;
      uint64_t S2RG13RP:1;
      uint64_t S2RG14RP:1;
      uint64_t S2RG15RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2RGRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPU2BRP:1;
      uint64_t SMPU2BWP:1;
      uint64_t SMPU2ACT:2;
      uint64_t reservedSpace0:3;
      uint64_t SMPU2E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRG0E:1;
      uint64_t FRG1E:1;
      uint64_t FRG2E:1;
      uint64_t FRG3E:1;
      uint64_t FRG4E:1;
      uint64_t FRG5E:1;
      uint64_t FRG6E:1;
      uint64_t FRG7E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRG0WP:1;
      uint64_t FRG1WP:1;
      uint64_t FRG2WP:1;
      uint64_t FRG3WP:1;
      uint64_t FRG4WP:1;
      uint64_t FRG5WP:1;
      uint64_t FRG6WP:1;
      uint64_t FRG7WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGWP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRG0RP:1;
      uint64_t FRG1RP:1;
      uint64_t FRG2RP:1;
      uint64_t FRG3RP:1;
      uint64_t FRG4RP:1;
      uint64_t FRG5RP:1;
      uint64_t FRG6RP:1;
      uint64_t FRG7RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRGRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMPUBRP:1;
      uint64_t FMPUBWP:1;
      uint64_t FMPUACT:2;
      uint64_t reservedSpace0:3;
      uint64_t FMPUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRG0E:1;
      uint64_t HRG1E:1;
      uint64_t HRG2E:1;
      uint64_t HRG3E:1;
      uint64_t HRG4E:1;
      uint64_t HRG5E:1;
      uint64_t HRG6E:1;
      uint64_t HRG7E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRG0WP:1;
      uint64_t HRG1WP:1;
      uint64_t HRG2WP:1;
      uint64_t HRG3WP:1;
      uint64_t HRG4WP:1;
      uint64_t HRG5WP:1;
      uint64_t HRG6WP:1;
      uint64_t HRG7WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRGWP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRG0RP:1;
      uint64_t HRG1RP:1;
      uint64_t HRG2RP:1;
      uint64_t HRG3RP:1;
      uint64_t HRG4RP:1;
      uint64_t HRG5RP:1;
      uint64_t HRG6RP:1;
      uint64_t HRG7RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRGRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HMPUBRP:1;
      uint64_t HMPUBWP:1;
      uint64_t HMPUACT:2;
      uint64_t reservedSpace0:3;
      uint64_t HMPUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERG0E:1;
      uint64_t ERG1E:1;
      uint64_t ERG2E:1;
      uint64_t ERG3E:1;
      uint64_t ERG4E:1;
      uint64_t ERG5E:1;
      uint64_t ERG6E:1;
      uint64_t ERG7E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERGE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERG0WP:1;
      uint64_t ERG1WP:1;
      uint64_t ERG2WP:1;
      uint64_t ERG3WP:1;
      uint64_t ERG4WP:1;
      uint64_t ERG5WP:1;
      uint64_t ERG6WP:1;
      uint64_t ERG7WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERGWP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERG0RP:1;
      uint64_t ERG1RP:1;
      uint64_t ERG2RP:1;
      uint64_t ERG3RP:1;
      uint64_t ERG4RP:1;
      uint64_t ERG5RP:1;
      uint64_t ERG6RP:1;
      uint64_t ERG7RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERGRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMPUBRP:1;
      uint64_t EMPUBWP:1;
      uint64_t EMPUACT:2;
      uint64_t reservedSpace0:3;
      uint64_t EMPUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

};

#define MPU (*(volatile struct MPU_tag *) 0x40050000)

struct NFC_tag
{
  uint32_t DATR_BASE;
  uint8_t res0[32764];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:8;
      uint64_t ARG:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  uint32_t IDXR0;
  uint8_t res1[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCEUEN:1;
      uint64_t ECCECEN:1;
      uint64_t reservedSpace0:2;
      uint64_t ECCCEN:1;
      uint64_t reservedSpace1:1;
      uint64_t ECCEEN:1;
      uint64_t ECCDIS:1;
      uint64_t RBEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCEUST:1;
      uint64_t ECCECST:1;
      uint64_t reservedSpace0:2;
      uint64_t ECCCST:1;
      uint64_t reservedSpace1:1;
      uint64_t ECCEST:1;
      uint64_t reservedSpace2:1;
      uint64_t RBST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCEURS:1;
      uint64_t ECCECRS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECCCRS:1;
      uint64_t reservedSpace1:1;
      uint64_t ECCERS:1;
      uint64_t reservedSpace2:1;
      uint64_t RBRS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRSR;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDX1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDXR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS:8;
      uint64_t TWP:8;
      uint64_t TRP:8;
      uint64_t TH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWH:8;
      uint64_t TRH:8;
      uint64_t TRR:8;
      uint64_t TWB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:3;
      uint64_t B16BIT:1;
      uint64_t reservedSpace0:2;
      uint64_t BANK:2;
      uint64_t PAGE:2;
      uint64_t WP:1;
      uint64_t ECCM:2;
      uint64_t RAC:1;
      uint64_t reservedSpace1:2;
      uint64_t SCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BACR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCCS:8;
      uint64_t TWTR:8;
      uint64_t TRTW:8;
      uint64_t TADL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRLOC:12;
      uint64_t SE:1;
      uint64_t ME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRSEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND4_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND4_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND5_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND6_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
      uint64_t reservedSpace1:2;
      uint64_t RESV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND6_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND6_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND6_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND7_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND7_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND8_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND8_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND8_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND8_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND9_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND9_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND9_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND9_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND10_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND10_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND10_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND10_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND11_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND11_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND11_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND11_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND12_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND12_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND12_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND12_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND13_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND13_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND13_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND13_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND14_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND14_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND14_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND14_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S1:13;
      uint64_t reservedSpace0:3;
      uint64_t S2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND15_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S3:13;
      uint64_t reservedSpace0:3;
      uint64_t S4:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND15_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S5:13;
      uint64_t reservedSpace0:3;
      uint64_t S6:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND15_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S7:13;
      uint64_t reservedSpace0:3;
      uint64_t S8:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SYND15_3;

};

#define NFC (*(volatile struct NFC_tag *) 0x88100000)

struct OTS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPD1:16;
      uint64_t TSPD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR1;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPD1:16;
      uint64_t TSPD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSPD1:16;
      uint64_t TSPD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDR3;

  uint8_t res1[237828];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OTSST:1;
      uint64_t OTSCK:1;
      uint64_t OTSIE:1;
      uint64_t TSSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CTL;

  uint16_t DR1;
  uint16_t DR2;
  uint16_t ECR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSOFS:8;
      uint64_t TSSLP:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPR;

};

#define OTS (*(volatile struct OTS_tag *) 0x400106e0)

struct PWC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAMH:1;
      uint64_t reservedSpace0:3;
      uint64_t SRAM1:1;
      uint64_t SRAM2:1;
      uint64_t SRAM3:1;
      uint64_t SRAM4:1;
      uint64_t reservedSpace1:2;
      uint64_t SRAMB:1;
      uint64_t reservedSpace2:2;
      uint64_t KEY:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t FCM_bitfield:1;
      uint64_t AOS_bitfield:1;
      uint64_t CTC_bitfield:1;
      uint64_t MAU_bitfield:1;
      uint64_t AES_bitfield:1;
      uint64_t HASH_bitfield:1;
      uint64_t TRNG_bitfield:1;
      uint64_t CRC_bitfield:1;
      uint64_t DCU1_bitfield:1;
      uint64_t DCU2_bitfield:1;
      uint64_t DCU3_bitfield:1;
      uint64_t DCU4_bitfield:1;
      uint64_t DCU5_bitfield:1;
      uint64_t DCU6_bitfield:1;
      uint64_t DCU7_bitfield:1;
      uint64_t DCU8_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAN1_bitfield:1;
      uint64_t CAN2_bitfield:1;
      uint64_t ETHMAC:1;
      uint64_t QSPI_bitfield:1;
      uint64_t I2C1_bitfield:1;
      uint64_t I2C2_bitfield:1;
      uint64_t I2C3_bitfield:1;
      uint64_t I2C4_bitfield:1;
      uint64_t I2C5_bitfield:1;
      uint64_t I2C6_bitfield:1;
      uint64_t SDIOC1_bitfield:1;
      uint64_t SDIOC2_bitfield:1;
      uint64_t I2S1_bitfield:1;
      uint64_t I2S2_bitfield:1;
      uint64_t I2S3_bitfield:1;
      uint64_t I2S4_bitfield:1;
      uint64_t SPI1_bitfield:1;
      uint64_t SPI2_bitfield:1;
      uint64_t SPI3_bitfield:1;
      uint64_t SPI4_bitfield:1;
      uint64_t SPI5_bitfield:1;
      uint64_t SPI6_bitfield:1;
      uint64_t USBFS_bitfield:1;
      uint64_t USBHS_bitfield:1;
      uint64_t FMAC1_bitfield:1;
      uint64_t FMAC2_bitfield:1;
      uint64_t FMAC3_bitfield:1;
      uint64_t FMAC4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMR6_1:1;
      uint64_t TMR6_2:1;
      uint64_t TMR6_3:1;
      uint64_t TMR6_4:1;
      uint64_t TMR6_5:1;
      uint64_t TMR6_6:1;
      uint64_t TMR6_7:1;
      uint64_t TMR6_8:1;
      uint64_t TMR4_1:1;
      uint64_t TMR4_2:1;
      uint64_t TMR4_3:1;
      uint64_t HRPWM_bitfield:1;
      uint64_t TMR0_1:1;
      uint64_t TMR0_2:1;
      uint64_t reservedSpace0:1;
      uint64_t EMB:1;
      uint64_t TMR2_1:1;
      uint64_t TMR2_2:1;
      uint64_t TMR2_3:1;
      uint64_t TMR2_4:1;
      uint64_t TMRA_1:1;
      uint64_t TMRA_2:1;
      uint64_t TMRA_3:1;
      uint64_t TMRA_4:1;
      uint64_t TMRA_5:1;
      uint64_t TMRA_6:1;
      uint64_t TMRA_7:1;
      uint64_t TMRA_8:1;
      uint64_t TMRA_9:1;
      uint64_t TMRA_10:1;
      uint64_t TMRA_11:1;
      uint64_t TMRA_12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC1_bitfield:1;
      uint64_t ADC2_bitfield:1;
      uint64_t ADC3_bitfield:1;
      uint64_t CMBIAS:1;
      uint64_t DAC1_bitfield:1;
      uint64_t DAC2_bitfield:1;
      uint64_t reservedSpace0:2;
      uint64_t CMP1_bitfield:1;
      uint64_t CMP2_bitfield:1;
      uint64_t reservedSpace1:2;
      uint64_t OTS_bitfield:1;
      uint64_t reservedSpace2:2;
      uint64_t DVP_bitfield:1;
      uint64_t SMC_bitfield:1;
      uint64_t DMC_bitfield:1;
      uint64_t NFC_bitfield:1;
      uint64_t reservedSpace3:1;
      uint64_t USART1_bitfield:1;
      uint64_t USART2_bitfield:1;
      uint64_t USART3_bitfield:1;
      uint64_t USART4_bitfield:1;
      uint64_t USART5_bitfield:1;
      uint64_t USART6_bitfield:1;
      uint64_t USART7_bitfield:1;
      uint64_t USART8_bitfield:1;
      uint64_t USART9_bitfield:1;
      uint64_t USART10_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRT0:1;
      uint64_t reservedSpace0:15;
      uint64_t FCG0PCWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCG0PC;

  uint8_t res0[17436];

  uint8_t VBATRSTR;
  uint8_t res1[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VBTRSD:1;
      uint64_t RAMVALID:1;
      uint64_t RAMPDF:1;
      uint64_t VBATDIVMONE:1;
      uint64_t reservedSpace0:3;
      uint64_t CSDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBATCR;

  uint8_t res2[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WKTMCMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WKTC0;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WKTMCMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WKTC1;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t WKOVF:1;
      uint64_t WKCKS:2;
      uint64_t WKTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WKTC2;

  uint8_t res5[423];

  uint8_t BKR0;
  uint8_t res6[3];

  uint8_t BKR1;
  uint8_t res7[3];

  uint8_t BKR2;
  uint8_t res8[3];

  uint8_t BKR3;
  uint8_t res9[3];

  uint8_t BKR4;
  uint8_t res10[3];

  uint8_t BKR5;
  uint8_t res11[3];

  uint8_t BKR6;
  uint8_t res12[3];

  uint8_t BKR7;
  uint8_t res13[3];

  uint8_t BKR8;
  uint8_t res14[3];

  uint8_t BKR9;
  uint8_t res15[3];

  uint8_t BKR10;
  uint8_t res16[3];

  uint8_t BKR11;
  uint8_t res17[3];

  uint8_t BKR12;
  uint8_t res18[3];

  uint8_t BKR13;
  uint8_t res19[3];

  uint8_t BKR14;
  uint8_t res20[3];

  uint8_t BKR15;
  uint8_t res21[3];

  uint8_t BKR16;
  uint8_t res22[3];

  uint8_t BKR17;
  uint8_t res23[3];

  uint8_t BKR18;
  uint8_t res24[3];

  uint8_t BKR19;
  uint8_t res25[3];

  uint8_t BKR20;
  uint8_t res26[3];

  uint8_t BKR21;
  uint8_t res27[3];

  uint8_t BKR22;
  uint8_t res28[3];

  uint8_t BKR23;
  uint8_t res29[3];

  uint8_t BKR24;
  uint8_t res30[3];

  uint8_t BKR25;
  uint8_t res31[3];

  uint8_t BKR26;
  uint8_t res32[3];

  uint8_t BKR27;
  uint8_t res33[3];

  uint8_t BKR28;
  uint8_t res34[3];

  uint8_t BKR29;
  uint8_t res35[3];

  uint8_t BKR30;
  uint8_t res36[3];

  uint8_t BKR31;
  uint8_t res37[3];

  uint8_t BKR32;
  uint8_t res38[3];

  uint8_t BKR33;
  uint8_t res39[3];

  uint8_t BKR34;
  uint8_t res40[3];

  uint8_t BKR35;
  uint8_t res41[3];

  uint8_t BKR36;
  uint8_t res42[3];

  uint8_t BKR37;
  uint8_t res43[3];

  uint8_t BKR38;
  uint8_t res44[3];

  uint8_t BKR39;
  uint8_t res45[3];

  uint8_t BKR40;
  uint8_t res46[3];

  uint8_t BKR41;
  uint8_t res47[3];

  uint8_t BKR42;
  uint8_t res48[3];

  uint8_t BKR43;
  uint8_t res49[3];

  uint8_t BKR44;
  uint8_t res50[3];

  uint8_t BKR45;
  uint8_t res51[3];

  uint8_t BKR46;
  uint8_t res52[3];

  uint8_t BKR47;
  uint8_t res53[3];

  uint8_t BKR48;
  uint8_t res54[3];

  uint8_t BKR49;
  uint8_t res55[3];

  uint8_t BKR50;
  uint8_t res56[3];

  uint8_t BKR51;
  uint8_t res57[3];

  uint8_t BKR52;
  uint8_t res58[3];

  uint8_t BKR53;
  uint8_t res59[3];

  uint8_t BKR54;
  uint8_t res60[3];

  uint8_t BKR55;
  uint8_t res61[3];

  uint8_t BKR56;
  uint8_t res62[3];

  uint8_t BKR57;
  uint8_t res63[3];

  uint8_t BKR58;
  uint8_t res64[3];

  uint8_t BKR59;
  uint8_t res65[3];

  uint8_t BKR60;
  uint8_t res66[3];

  uint8_t BKR61;
  uint8_t res67[3];

  uint8_t BKR62;
  uint8_t res68[3];

  uint8_t BKR63;
  uint8_t res69[3];

  uint8_t BKR64;
  uint8_t res70[3];

  uint8_t BKR65;
  uint8_t res71[3];

  uint8_t BKR66;
  uint8_t res72[3];

  uint8_t BKR67;
  uint8_t res73[3];

  uint8_t BKR68;
  uint8_t res74[3];

  uint8_t BKR69;
  uint8_t res75[3];

  uint8_t BKR70;
  uint8_t res76[3];

  uint8_t BKR71;
  uint8_t res77[3];

  uint8_t BKR72;
  uint8_t res78[3];

  uint8_t BKR73;
  uint8_t res79[3];

  uint8_t BKR74;
  uint8_t res80[3];

  uint8_t BKR75;
  uint8_t res81[3];

  uint8_t BKR76;
  uint8_t res82[3];

  uint8_t BKR77;
  uint8_t res83[3];

  uint8_t BKR78;
  uint8_t res84[3];

  uint8_t BKR79;
  uint8_t res85[3];

  uint8_t BKR80;
  uint8_t res86[3];

  uint8_t BKR81;
  uint8_t res87[3];

  uint8_t BKR82;
  uint8_t res88[3];

  uint8_t BKR83;
  uint8_t res89[3];

  uint8_t BKR84;
  uint8_t res90[3];

  uint8_t BKR85;
  uint8_t res91[3];

  uint8_t BKR86;
  uint8_t res92[3];

  uint8_t BKR87;
  uint8_t res93[3];

  uint8_t BKR88;
  uint8_t res94[3];

  uint8_t BKR89;
  uint8_t res95[3];

  uint8_t BKR90;
  uint8_t res96[3];

  uint8_t BKR91;
  uint8_t res97[3];

  uint8_t BKR92;
  uint8_t res98[3];

  uint8_t BKR93;
  uint8_t res99[3];

  uint8_t BKR94;
  uint8_t res100[3];

  uint8_t BKR95;
  uint8_t res101[3];

  uint8_t BKR96;
  uint8_t res102[3];

  uint8_t BKR97;
  uint8_t res103[3];

  uint8_t BKR98;
  uint8_t res104[3];

  uint8_t BKR99;
  uint8_t res105[3];

  uint8_t BKR100;
  uint8_t res106[3];

  uint8_t BKR101;
  uint8_t res107[3];

  uint8_t BKR102;
  uint8_t res108[3];

  uint8_t BKR103;
  uint8_t res109[3];

  uint8_t BKR104;
  uint8_t res110[3];

  uint8_t BKR105;
  uint8_t res111[3];

  uint8_t BKR106;
  uint8_t res112[3];

  uint8_t BKR107;
  uint8_t res113[3];

  uint8_t BKR108;
  uint8_t res114[3];

  uint8_t BKR109;
  uint8_t res115[3];

  uint8_t BKR110;
  uint8_t res116[3];

  uint8_t BKR111;
  uint8_t res117[3];

  uint8_t BKR112;
  uint8_t res118[3];

  uint8_t BKR113;
  uint8_t res119[3];

  uint8_t BKR114;
  uint8_t res120[3];

  uint8_t BKR115;
  uint8_t res121[3];

  uint8_t BKR116;
  uint8_t res122[3];

  uint8_t BKR117;
  uint8_t res123[3];

  uint8_t BKR118;
  uint8_t res124[3];

  uint8_t BKR119;
  uint8_t res125[3];

  uint8_t BKR120;
  uint8_t res126[3];

  uint8_t BKR121;
  uint8_t res127[3];

  uint8_t BKR122;
  uint8_t res128[3];

  uint8_t BKR123;
  uint8_t res129[3];

  uint8_t BKR124;
  uint8_t res130[3];

  uint8_t BKR125;
  uint8_t res131[3];

  uint8_t BKR126;
  uint8_t res132[3];

  uint8_t BKR127;
  uint8_t res133[1027];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PDMDS:2;
      uint64_t reservedSpace0:2;
      uint64_t IORTN:2;
      uint64_t reservedSpace1:1;
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRC0;

  uint8_t res134[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPLLSD:2;
      uint64_t VHRCSD:1;
      uint64_t PDTS:1;
      uint64_t reservedSpace0:2;
      uint64_t STPDAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRC1;

  uint8_t res135[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DDAS:4;
      uint64_t DVS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRC2;

  uint8_t res136[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DDAS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRC3;

  uint8_t res137[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VBATREFSEL:1;
      uint64_t VBATME:1;
      uint64_t reservedSpace0:2;
      uint64_t VBATMON:1;
      uint64_t reservedSpace1:1;
      uint64_t ADBUFS:1;
      uint64_t ADBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRC4;

  uint8_t res138[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EXVCCINEN:1;
      uint64_t reservedSpace0:4;
      uint64_t PVD1EN:1;
      uint64_t PVD2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDCR0;

  uint8_t res139[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PVD1IRE:1;
      uint64_t PVD1IRS:1;
      uint64_t PVD1CMPOE:1;
      uint64_t reservedSpace0:1;
      uint64_t PVD2IRE:1;
      uint64_t PVD2IRS:1;
      uint64_t PVD2CMPOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDCR1;

  uint8_t res140[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PVD1NFDIS:1;
      uint64_t PVD1NFCKS:2;
      uint64_t reservedSpace0:1;
      uint64_t PVD2NFDIS:1;
      uint64_t PVD2NFCKS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDFCR;

  uint8_t res141[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PVD1LVL:3;
      uint64_t reservedSpace0:1;
      uint64_t PVD2LVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDLCR;

  uint8_t res142[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WKE00:1;
      uint64_t WKE01:1;
      uint64_t WKE02:1;
      uint64_t WKE03:1;
      uint64_t WKE10:1;
      uint64_t WKE11:1;
      uint64_t WKE12:1;
      uint64_t WKE13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKE0;

  uint8_t res143[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WKE20:1;
      uint64_t WKE21:1;
      uint64_t WKE22:1;
      uint64_t WKE23:1;
      uint64_t WKE30:1;
      uint64_t WKE31:1;
      uint64_t WKE32:1;
      uint64_t WKE33:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKE1;

  uint8_t res144[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VD1WKE:1;
      uint64_t VD2WKE:1;
      uint64_t reservedSpace0:2;
      uint64_t RTCPRDWKE:1;
      uint64_t RTCALMWKE:1;
      uint64_t reservedSpace1:1;
      uint64_t WKTMWKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKE2;

  uint8_t res145[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WK0EGS:1;
      uint64_t WK1EGS:1;
      uint64_t WK2EGS:1;
      uint64_t WK3EGS:1;
      uint64_t VD1EGS:1;
      uint64_t VD2EGS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKES;

  uint8_t res146[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PTWK0F:1;
      uint64_t PTWK1F:1;
      uint64_t PTWK2F:1;
      uint64_t PTWK3F:1;
      uint64_t VD1WKF:1;
      uint64_t VD2WKF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKF0;

  uint8_t res147[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RXD0WKF:1;
      uint64_t RTCPRDWKF:1;
      uint64_t RTCALMWKF:1;
      uint64_t reservedSpace1:1;
      uint64_t WKTMWKF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PDWKF1;

  uint8_t res148[163];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMPDC0:1;
      uint64_t RAMPDC1:1;
      uint64_t RAMPDC2:1;
      uint64_t RAMPDC3:1;
      uint64_t RAMPDC4:1;
      uint64_t RAMPDC5:1;
      uint64_t RAMPDC6:1;
      uint64_t RAMPDC7:1;
      uint64_t RAMPDC8:1;
      uint64_t RAMPDC9:1;
      uint64_t RAMPDC10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMPC0;

  uint16_t RAMOPM;
  uint8_t res149[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRAMPDC0:1;
      uint64_t PRAMPDC1:1;
      uint64_t PRAMPDC2:1;
      uint64_t PRAMPDC3:1;
      uint64_t PRAMPDC4:1;
      uint64_t PRAMPDC5:1;
      uint64_t PRAMPDC6:1;
      uint64_t PRAMPDC7:1;
      uint64_t PRAMPDC8:1;
      uint64_t PRAMPDC9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRAMLPC;

  uint8_t res150[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PVD1NMIS:1;
      uint64_t PVD1EDGS:2;
      uint64_t reservedSpace0:1;
      uint64_t PVD2NMIS:1;
      uint64_t PVD2EDGS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDICR;

  uint8_t res151[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PVD1MON:1;
      uint64_t PVD1DETFLG:1;
      uint64_t reservedSpace0:2;
      uint64_t PVD2MON:1;
      uint64_t PVD2DETFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PVDDSR;

  uint8_t res152[29463];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FLNWT:1;
      uint64_t CKSMRC:1;
      uint64_t reservedSpace0:12;
      uint64_t EXBUSOE:1;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STPMCR;

  uint8_t res153[1008];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FPRCB0:1;
      uint64_t FPRCB1:1;
      uint64_t FPRCB2:1;
      uint64_t FPRCB3:1;
      uint64_t reservedSpace0:4;
      uint64_t FPRCWE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FPRC;

};

#define PWC (*(volatile struct PWC_tag *) 0x40048000)

struct QSPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDSEL:3;
      uint64_t PFE:1;
      uint64_t PFSAE:1;
      uint64_t DCOME:1;
      uint64_t XIPE:1;
      uint64_t SPIMD3:1;
      uint64_t IPRSL:2;
      uint64_t APRSL:2;
      uint64_t DPRSL:2;
      uint64_t reservedSpace0:2;
      uint64_t DIV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSHW:4;
      uint64_t SSNW:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWSL:2;
      uint64_t FOUR_BIC:1;
      uint64_t reservedSpace0:1;
      uint64_t SSNHD:1;
      uint64_t SSNLD:1;
      uint64_t WPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t DMCYCN:4;
      uint64_t reservedSpace2:3;
      uint64_t DUTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t reservedSpace0:5;
      uint64_t XIPF:1;
      uint64_t RAER:1;
      uint64_t PFNUM:5;
      uint64_t reservedSpace1:1;
      uint64_t PFFUL:1;
      uint64_t PFAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XIPMC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XCMD;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t RAERCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  uint8_t res1[2012];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:26;
      uint64_t EXADR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXAR;

};

#define QSPI (*(volatile struct QSPI_tag *) 0x9c000000)

struct RMU_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t LKUPREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRSTCR0;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORF:1;
      uint64_t PINRF:1;
      uint64_t BORF:1;
      uint64_t PVD1RF:1;
      uint64_t PVD2RF:1;
      uint64_t WDRF:1;
      uint64_t SWDRF:1;
      uint64_t PDRF:1;
      uint64_t SWRF:1;
      uint64_t MPUERF:1;
      uint64_t RAPERF:1;
      uint64_t RAECRF:1;
      uint64_t CKFERF:1;
      uint64_t XTALERF:1;
      uint64_t LKUPRF:1;
      uint64_t reservedSpace0:15;
      uint64_t MULTIRF:1;
      uint64_t CLRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTF0;

};

#define RMU (*(volatile struct RMU_tag *) 0x4004ccf8)

struct RTC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR0;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRDS:3;
      uint64_t AMPM:1;
      uint64_t reservedSpace0:1;
      uint64_t ONEHZOE:1;
      uint64_t ONEHZSEL:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RWREQ:1;
      uint64_t RWEN:1;
      uint64_t PRDF:1;
      uint64_t ALMF:1;
      uint64_t reservedSpace0:1;
      uint64_t PRDIE:1;
      uint64_t ALMIE:1;
      uint64_t ALME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LRCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t RCKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SECU:4;
      uint64_t SECD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SEC;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MINU:4;
      uint64_t MIND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MIN;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HOURU:4;
      uint64_t HOURD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HOUR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WEEK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WEEK;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAYU:4;
      uint64_t DAYD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAY;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MON:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MON;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t YEARU:4;
      uint64_t YEARD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) YEAR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALMMINU:4;
      uint64_t ALMMIND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMMIN;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALMHOURU:4;
      uint64_t ALMHOURD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMHOUR;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ALMWEEK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMWEEK;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMP8:1;
      uint64_t reservedSpace0:6;
      uint64_t COMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRCRH;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ERRCRL;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TPCT0:2;
      uint64_t TPNF0:2;
      uint64_t TPRSTE0:1;
      uint64_t TPIE0:1;
      uint64_t TSTPE0:1;
      uint64_t TPEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TPCR0;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TPCT1:2;
      uint64_t TPNF1:2;
      uint64_t TPRSTE1:1;
      uint64_t TPIE1:1;
      uint64_t TSTPE1:1;
      uint64_t TPEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TPCR1;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TPF0:1;
      uint64_t TPF1:1;
      uint64_t TPOVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TPSR;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SECTPU:4;
      uint64_t SECTPD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SECTP;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MINTPU:4;
      uint64_t MINTPD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MINTP;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HOURTPU:4;
      uint64_t HOURTPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HOURTP;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAYTPU:4;
      uint64_t DAYTPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DAYTP;

  uint8_t res22[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MONTP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MONTP;

};

#define RTC (*(volatile struct RTC_tag *) 0x4004c000)

struct SDIOC1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TBS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BLKSIZE;

  uint16_t BLKCNT;
  uint16_t ARG0;
  uint16_t ARG1;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t BCE:1;
      uint64_t ATCEN:2;
      uint64_t DDIR:1;
      uint64_t MULB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRANSMODE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESTYP:2;
      uint64_t reservedSpace0:1;
      uint64_t CCE:1;
      uint64_t ICE:1;
      uint64_t DAT:1;
      uint64_t TYP:2;
      uint64_t IDX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMD;

  uint16_t RESP0;
  uint16_t RESP1;
  uint16_t RESP2;
  uint16_t RESP3;
  uint16_t RESP4;
  uint16_t RESP5;
  uint16_t RESP6;
  uint16_t RESP7;
  uint16_t BUF0;
  uint16_t BUF1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIC:1;
      uint64_t CID:1;
      uint64_t DA:1;
      uint64_t reservedSpace0:5;
      uint64_t WTA:1;
      uint64_t RTA:1;
      uint64_t BWE:1;
      uint64_t BRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CIN:1;
      uint64_t CSS:1;
      uint64_t CDL:1;
      uint64_t WPL:1;
      uint64_t DATL:4;
      uint64_t CMDL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DW:1;
      uint64_t HSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t EXDW:1;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HOSTCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PWON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SABGR:1;
      uint64_t CR:1;
      uint64_t RWC:1;
      uint64_t IABG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BLKGPCON;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ICE:1;
      uint64_t reservedSpace0:1;
      uint64_t CE:1;
      uint64_t reservedSpace1:5;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLKCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOUTCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTA:1;
      uint64_t RSTC:1;
      uint64_t RSTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFTRST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CC:1;
      uint64_t TC:1;
      uint64_t BGE:1;
      uint64_t reservedSpace0:1;
      uint64_t BWR:1;
      uint64_t BRR:1;
      uint64_t CIST:1;
      uint64_t CRM:1;
      uint64_t CINT:1;
      uint64_t reservedSpace1:6;
      uint64_t EI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOE:1;
      uint64_t CCE:1;
      uint64_t CEBE:1;
      uint64_t CIE:1;
      uint64_t DTOE:1;
      uint64_t DCE:1;
      uint64_t DEBE:1;
      uint64_t reservedSpace0:1;
      uint64_t ACE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CCEN:1;
      uint64_t TCEN:1;
      uint64_t BGEEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BWREN:1;
      uint64_t BRREN:1;
      uint64_t CISTEN:1;
      uint64_t CRMEN:1;
      uint64_t CINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTSTEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOEEN:1;
      uint64_t CCEEN:1;
      uint64_t CEBEEN:1;
      uint64_t CIEEN:1;
      uint64_t DTOEEN:1;
      uint64_t DCEEN:1;
      uint64_t DEBEEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ACEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTSTEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CCSEN:1;
      uint64_t TCSEN:1;
      uint64_t BGESEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BWRSEN:1;
      uint64_t BRRSEN:1;
      uint64_t CISTSEN:1;
      uint64_t CRMSEN:1;
      uint64_t CINTSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTSGEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOESEN:1;
      uint64_t CCESEN:1;
      uint64_t CEBESEN:1;
      uint64_t CIESEN:1;
      uint64_t DTOESEN:1;
      uint64_t DCESEN:1;
      uint64_t DEBESEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ACESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTSGEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NE:1;
      uint64_t TOE:1;
      uint64_t CE:1;
      uint64_t EBE:1;
      uint64_t IE:1;
      uint64_t reservedSpace0:2;
      uint64_t CMDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ATCERRST;

  uint8_t res1[18];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FNE:1;
      uint64_t FTOE:1;
      uint64_t FCE:1;
      uint64_t FEBE:1;
      uint64_t FIE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCMDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FEA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FCTOE:1;
      uint64_t FCCE:1;
      uint64_t FCEBE:1;
      uint64_t FCIE:1;
      uint64_t FDTOE:1;
      uint64_t FDCE:1;
      uint64_t FDEBE:1;
      uint64_t reservedSpace0:1;
      uint64_t FACE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FEE;

};

#define SDIOC1 (*(volatile struct SDIOC1_tag *) 0x40070004)

struct SDIOC2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TBS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BLKSIZE;

  uint16_t BLKCNT;
  uint16_t ARG0;
  uint16_t ARG1;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t BCE:1;
      uint64_t ATCEN:2;
      uint64_t DDIR:1;
      uint64_t MULB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRANSMODE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESTYP:2;
      uint64_t reservedSpace0:1;
      uint64_t CCE:1;
      uint64_t ICE:1;
      uint64_t DAT:1;
      uint64_t TYP:2;
      uint64_t IDX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMD;

  uint16_t RESP0;
  uint16_t RESP1;
  uint16_t RESP2;
  uint16_t RESP3;
  uint16_t RESP4;
  uint16_t RESP5;
  uint16_t RESP6;
  uint16_t RESP7;
  uint16_t BUF0;
  uint16_t BUF1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIC:1;
      uint64_t CID:1;
      uint64_t DA:1;
      uint64_t reservedSpace0:5;
      uint64_t WTA:1;
      uint64_t RTA:1;
      uint64_t BWE:1;
      uint64_t BRE:1;
      uint64_t reservedSpace1:4;
      uint64_t CIN:1;
      uint64_t CSS:1;
      uint64_t CDL:1;
      uint64_t WPL:1;
      uint64_t DATL:4;
      uint64_t CMDL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DW:1;
      uint64_t HSEN:1;
      uint64_t reservedSpace1:2;
      uint64_t EXDW:1;
      uint64_t CDTL:1;
      uint64_t CDSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HOSTCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PWON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PWRCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SABGR:1;
      uint64_t CR:1;
      uint64_t RWC:1;
      uint64_t IABG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BLKGPCON;

  uint8_t res0[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ICE:1;
      uint64_t reservedSpace0:1;
      uint64_t CE:1;
      uint64_t reservedSpace1:5;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLKCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TOUTCON;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTA:1;
      uint64_t RSTC:1;
      uint64_t RSTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFTRST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CC:1;
      uint64_t TC:1;
      uint64_t BGE:1;
      uint64_t reservedSpace0:1;
      uint64_t BWR:1;
      uint64_t BRR:1;
      uint64_t CIST:1;
      uint64_t CRM:1;
      uint64_t CINT:1;
      uint64_t reservedSpace1:6;
      uint64_t EI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOE:1;
      uint64_t CCE:1;
      uint64_t CEBE:1;
      uint64_t CIE:1;
      uint64_t DTOE:1;
      uint64_t DCE:1;
      uint64_t DEBE:1;
      uint64_t reservedSpace0:1;
      uint64_t ACE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTST;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CCEN:1;
      uint64_t TCEN:1;
      uint64_t BGEEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BWREN:1;
      uint64_t BRREN:1;
      uint64_t CISTEN:1;
      uint64_t CRMEN:1;
      uint64_t CINTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTSTEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOEEN:1;
      uint64_t CCEEN:1;
      uint64_t CEBEEN:1;
      uint64_t CIEEN:1;
      uint64_t DTOEEN:1;
      uint64_t DCEEN:1;
      uint64_t DEBEEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ACEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTSTEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CCSEN:1;
      uint64_t TCSEN:1;
      uint64_t BGESEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BWRSEN:1;
      uint64_t BRRSEN:1;
      uint64_t CISTSEN:1;
      uint64_t CRMSEN:1;
      uint64_t CINTSEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NORINTSGEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTOESEN:1;
      uint64_t CCESEN:1;
      uint64_t CEBESEN:1;
      uint64_t CIESEN:1;
      uint64_t DTOESEN:1;
      uint64_t DCESEN:1;
      uint64_t DEBESEN:1;
      uint64_t reservedSpace0:1;
      uint64_t ACESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRINTSGEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NE:1;
      uint64_t TOE:1;
      uint64_t CE:1;
      uint64_t EBE:1;
      uint64_t IE:1;
      uint64_t reservedSpace0:2;
      uint64_t CMDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ATCERRST;

  uint8_t res1[18];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FNE:1;
      uint64_t FTOE:1;
      uint64_t FCE:1;
      uint64_t FEBE:1;
      uint64_t FIE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCMDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FEA;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FCTOE:1;
      uint64_t FCCE:1;
      uint64_t FCEBE:1;
      uint64_t FCIE:1;
      uint64_t FDTOE:1;
      uint64_t FDCE:1;
      uint64_t FDEBE:1;
      uint64_t reservedSpace0:1;
      uint64_t FACE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FEE;

};

#define SDIOC2 (*(volatile struct SDIOC2_tag *) 0x40078404)

struct SMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LPWIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LPWOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDADD:20;
      uint64_t CRES:1;
      uint64_t CMD:2;
      uint64_t CMDCHIP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
      uint64_t T_WC:4;
      uint64_t T_CEOE:3;
      uint64_t reservedSpace0:1;
      uint64_t T_WP:3;
      uint64_t reservedSpace1:1;
      uint64_t T_PC:3;
      uint64_t reservedSpace2:1;
      uint64_t T_TR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSYN:1;
      uint64_t RBL:3;
      uint64_t WSYN:1;
      uint64_t WBL:3;
      uint64_t MW:2;
      uint64_t BAAS:1;
      uint64_t ADVS:1;
      uint64_t BLSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFPRD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFTR;

  uint8_t res2[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
      uint64_t T_WC:4;
      uint64_t T_CEOE:3;
      uint64_t reservedSpace0:1;
      uint64_t T_WP:3;
      uint64_t reservedSpace1:1;
      uint64_t T_PC:3;
      uint64_t reservedSpace2:1;
      uint64_t T_TR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSYN:1;
      uint64_t RBL:3;
      uint64_t WSYN:1;
      uint64_t WBL:3;
      uint64_t MW:2;
      uint64_t BAAS:1;
      uint64_t ADVS:1;
      uint64_t BLSS:1;
      uint64_t reservedSpace0:3;
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR0;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
      uint64_t T_WC:4;
      uint64_t T_CEOE:3;
      uint64_t reservedSpace0:1;
      uint64_t T_WP:3;
      uint64_t reservedSpace1:1;
      uint64_t T_PC:3;
      uint64_t reservedSpace2:1;
      uint64_t T_TR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSYN:1;
      uint64_t RBL:3;
      uint64_t WSYN:1;
      uint64_t WBL:3;
      uint64_t MW:2;
      uint64_t BAAS:1;
      uint64_t ADVS:1;
      uint64_t BLSS:1;
      uint64_t reservedSpace0:3;
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR1;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
      uint64_t T_WC:4;
      uint64_t T_CEOE:3;
      uint64_t reservedSpace0:1;
      uint64_t T_WP:3;
      uint64_t reservedSpace1:1;
      uint64_t T_PC:3;
      uint64_t reservedSpace2:1;
      uint64_t T_TR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSYN:1;
      uint64_t RBL:3;
      uint64_t WSYN:1;
      uint64_t WBL:3;
      uint64_t MW:2;
      uint64_t BAAS:1;
      uint64_t ADVS:1;
      uint64_t BLSS:1;
      uint64_t reservedSpace0:3;
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR2;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_RC:4;
      uint64_t T_WC:4;
      uint64_t T_CEOE:3;
      uint64_t reservedSpace0:1;
      uint64_t T_WP:3;
      uint64_t reservedSpace1:1;
      uint64_t T_PC:3;
      uint64_t reservedSpace2:1;
      uint64_t T_TR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSYN:1;
      uint64_t RBL:3;
      uint64_t WSYN:1;
      uint64_t WBL:3;
      uint64_t MW:2;
      uint64_t BAAS:1;
      uint64_t ADVS:1;
      uint64_t BLSS:1;
      uint64_t reservedSpace0:3;
      uint64_t ADDMSK:8;
      uint64_t ADDMAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR3;

  uint8_t res6[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MUXMD:1;
      uint64_t reservedSpace1:9;
      uint64_t CKSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BACR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMSK0:8;
      uint64_t ADDMSK1:8;
      uint64_t ADDMSK2:8;
      uint64_t ADDMSK3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDMAT0:8;
      uint64_t ADDMAT1:8;
      uint64_t ADDMAT2:8;
      uint64_t ADDMAT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSCR1;

};

#define SMC (*(volatile struct SMC_tag *) 0x88000000)

struct SPI1_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x4001c000)

struct SPI2_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x4001c400)

struct SPI3_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI3 (*(volatile struct SPI3_tag *) 0x4001c800)

struct SPI4_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI4 (*(volatile struct SPI4_tag *) 0x40020000)

struct SPI5_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI5 (*(volatile struct SPI5_tag *) 0x40020400)

struct SPI6_tag
{
  uint32_t DR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIMDS:1;
      uint64_t TXMDS:1;
      uint64_t reservedSpace0:1;
      uint64_t MSTR:1;
      uint64_t SPLPBK:1;
      uint64_t SPLPBK2:1;
      uint64_t SPE:1;
      uint64_t CSUSPE:1;
      uint64_t EIE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t IDIE:1;
      uint64_t MODFE:1;
      uint64_t PATE:1;
      uint64_t PAOE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTHLV:2;
      uint64_t reservedSpace0:4;
      uint64_t SPRDTD:1;
      uint64_t reservedSpace1:1;
      uint64_t SS0PV:1;
      uint64_t SS1PV:1;
      uint64_t SS2PV:1;
      uint64_t SS3PV:1;
      uint64_t reservedSpace2:8;
      uint64_t MSSI:3;
      uint64_t reservedSpace3:1;
      uint64_t MSSDL:3;
      uint64_t reservedSpace4:1;
      uint64_t MIDI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRERF:1;
      uint64_t IDLNF:1;
      uint64_t MODFERF:1;
      uint64_t PERF:1;
      uint64_t UDRERF:1;
      uint64_t TDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t RDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MBR:3;
      uint64_t SSA:3;
      uint64_t DSIZE:4;
      uint64_t LSBF:1;
      uint64_t MIDIE:1;
      uint64_t MSSDLE:1;
      uint64_t MSSIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

};

#define SPI6 (*(volatile struct SPI6_tag *) 0x40020800)

struct SRAMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM123RWT:3;
      uint64_t reservedSpace0:1;
      uint64_t SRAM123WWT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRAM4RWT:3;
      uint64_t reservedSpace2:1;
      uint64_t SRAM4WWT:3;
      uint64_t reservedSpace3:1;
      uint64_t SRAMHRWT:3;
      uint64_t reservedSpace4:1;
      uint64_t SRAMHWWT:3;
      uint64_t reservedSpace5:1;
      uint64_t SRAMBRWT:3;
      uint64_t reservedSpace6:1;
      uint64_t SRAMBWWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTPRC:1;
      uint64_t WTPRKW:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PYOAD:1;
      uint64_t reservedSpace0:15;
      uint64_t ECCOAD:1;
      uint64_t BECCOAD:1;
      uint64_t reservedSpace1:6;
      uint64_t ECCMOD:2;
      uint64_t BECCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKPRC:1;
      uint64_t CKPRKW:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM1_PYERR:1;
      uint64_t SRAM2_PYERR:1;
      uint64_t SRAM3_PYERR:1;
      uint64_t SRAMH_PYERR:1;
      uint64_t SRAM4_1ERR:1;
      uint64_t SRAM4_2ERR:1;
      uint64_t SRAMB_1ERR:1;
      uint64_t SRAMB_2ERR:1;
      uint64_t CACHE_PYERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSR;

};

#define SRAMC (*(volatile struct SRAMC_tag *) 0x40050800)

struct SWDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERI:2;
      uint64_t reservedSpace0:2;
      uint64_t CKS:4;
      uint64_t WDPT:4;
      uint64_t reservedSpace1:4;
      uint64_t SLPOFF:1;
      uint64_t reservedSpace2:14;
      uint64_t ITS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
      uint64_t UDF:1;
      uint64_t REF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR;

};

#define SWDT (*(volatile struct SWDT_tag *) 0x40049400)

struct TMR01_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t INTENA:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIVA:4;
      uint64_t SYNSA:1;
      uint64_t SYNCLKA:1;
      uint64_t ASYNCLKA:1;
      uint64_t reservedSpace1:1;
      uint64_t HSTAA:1;
      uint64_t HSTPA:1;
      uint64_t HCLEA:1;
      uint64_t HICPA:1;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t INTENB:1;
      uint64_t reservedSpace2:1;
      uint64_t CKDIVB:4;
      uint64_t SYNSB:1;
      uint64_t SYNCLKB:1;
      uint64_t ASYNCLKB:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB:1;
      uint64_t HSTPB:1;
      uint64_t HCLEB:1;
      uint64_t HICPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t reservedSpace0:15;
      uint64_t CMFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR01 (*(volatile struct TMR01_tag *) 0x40024000)

struct TMR02_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t INTENA:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIVA:4;
      uint64_t SYNSA:1;
      uint64_t SYNCLKA:1;
      uint64_t ASYNCLKA:1;
      uint64_t reservedSpace1:1;
      uint64_t HSTAA:1;
      uint64_t HSTPA:1;
      uint64_t HCLEA:1;
      uint64_t HICPA:1;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t INTENB:1;
      uint64_t reservedSpace2:1;
      uint64_t CKDIVB:4;
      uint64_t SYNSB:1;
      uint64_t SYNCLKB:1;
      uint64_t ASYNCLKB:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB:1;
      uint64_t HSTPB:1;
      uint64_t HCLEB:1;
      uint64_t HICPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t reservedSpace0:15;
      uint64_t CMFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR02 (*(volatile struct TMR02_tag *) 0x40024400)

struct TMR21_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t reservedSpace0:1;
      uint64_t SYNSA:1;
      uint64_t CKDIVA:4;
      uint64_t SYNCLKA:2;
      uint64_t ASYNCLKA:2;
      uint64_t SYNCLKAT:2;
      uint64_t reservedSpace1:2;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNSB:1;
      uint64_t CKDIVB:4;
      uint64_t SYNCLKB:2;
      uint64_t ASYNCLKB:2;
      uint64_t SYNCLKBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMENA:1;
      uint64_t OVENA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMENB:1;
      uint64_t OVENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t CMPCA:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace1:3;
      uint64_t NOFIENA:1;
      uint64_t NOFICKA:2;
      uint64_t reservedSpace2:1;
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t CMPCB:2;
      uint64_t reservedSpace3:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace4:3;
      uint64_t NOFIENB:1;
      uint64_t NOFICKB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTAA0:1;
      uint64_t HSTAA1:1;
      uint64_t HSTAA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTPA0:1;
      uint64_t HSTPA1:1;
      uint64_t HSTPA2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLEA0:1;
      uint64_t HCLEA1:1;
      uint64_t HCLEA2:1;
      uint64_t reservedSpace2:1;
      uint64_t HICPA0:1;
      uint64_t HICPA1:1;
      uint64_t HICPA2:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB0:1;
      uint64_t HSTAB1:1;
      uint64_t HSTAB2:1;
      uint64_t reservedSpace4:1;
      uint64_t HSTPB0:1;
      uint64_t HSTPB1:1;
      uint64_t HSTPB2:1;
      uint64_t reservedSpace5:1;
      uint64_t HCLEB0:1;
      uint64_t HCLEB1:1;
      uint64_t HCLEB2:1;
      uint64_t reservedSpace6:1;
      uint64_t HICPB0:1;
      uint64_t HICPB1:1;
      uint64_t HICPB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t OVFA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMFB:1;
      uint64_t OVFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR21 (*(volatile struct TMR21_tag *) 0x40024800)

struct TMR22_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t reservedSpace0:1;
      uint64_t SYNSA:1;
      uint64_t CKDIVA:4;
      uint64_t SYNCLKA:2;
      uint64_t ASYNCLKA:2;
      uint64_t SYNCLKAT:2;
      uint64_t reservedSpace1:2;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNSB:1;
      uint64_t CKDIVB:4;
      uint64_t SYNCLKB:2;
      uint64_t ASYNCLKB:2;
      uint64_t SYNCLKBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMENA:1;
      uint64_t OVENA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMENB:1;
      uint64_t OVENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t CMPCA:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace1:3;
      uint64_t NOFIENA:1;
      uint64_t NOFICKA:2;
      uint64_t reservedSpace2:1;
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t CMPCB:2;
      uint64_t reservedSpace3:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace4:3;
      uint64_t NOFIENB:1;
      uint64_t NOFICKB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTAA0:1;
      uint64_t HSTAA1:1;
      uint64_t HSTAA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTPA0:1;
      uint64_t HSTPA1:1;
      uint64_t HSTPA2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLEA0:1;
      uint64_t HCLEA1:1;
      uint64_t HCLEA2:1;
      uint64_t reservedSpace2:1;
      uint64_t HICPA0:1;
      uint64_t HICPA1:1;
      uint64_t HICPA2:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB0:1;
      uint64_t HSTAB1:1;
      uint64_t HSTAB2:1;
      uint64_t reservedSpace4:1;
      uint64_t HSTPB0:1;
      uint64_t HSTPB1:1;
      uint64_t HSTPB2:1;
      uint64_t reservedSpace5:1;
      uint64_t HCLEB0:1;
      uint64_t HCLEB1:1;
      uint64_t HCLEB2:1;
      uint64_t reservedSpace6:1;
      uint64_t HICPB0:1;
      uint64_t HICPB1:1;
      uint64_t HICPB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t OVFA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMFB:1;
      uint64_t OVFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR22 (*(volatile struct TMR22_tag *) 0x40024c00)

struct TMR23_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t reservedSpace0:1;
      uint64_t SYNSA:1;
      uint64_t CKDIVA:4;
      uint64_t SYNCLKA:2;
      uint64_t ASYNCLKA:2;
      uint64_t SYNCLKAT:2;
      uint64_t reservedSpace1:2;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNSB:1;
      uint64_t CKDIVB:4;
      uint64_t SYNCLKB:2;
      uint64_t ASYNCLKB:2;
      uint64_t SYNCLKBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMENA:1;
      uint64_t OVENA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMENB:1;
      uint64_t OVENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t CMPCA:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace1:3;
      uint64_t NOFIENA:1;
      uint64_t NOFICKA:2;
      uint64_t reservedSpace2:1;
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t CMPCB:2;
      uint64_t reservedSpace3:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace4:3;
      uint64_t NOFIENB:1;
      uint64_t NOFICKB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTAA0:1;
      uint64_t HSTAA1:1;
      uint64_t HSTAA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTPA0:1;
      uint64_t HSTPA1:1;
      uint64_t HSTPA2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLEA0:1;
      uint64_t HCLEA1:1;
      uint64_t HCLEA2:1;
      uint64_t reservedSpace2:1;
      uint64_t HICPA0:1;
      uint64_t HICPA1:1;
      uint64_t HICPA2:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB0:1;
      uint64_t HSTAB1:1;
      uint64_t HSTAB2:1;
      uint64_t reservedSpace4:1;
      uint64_t HSTPB0:1;
      uint64_t HSTPB1:1;
      uint64_t HSTPB2:1;
      uint64_t reservedSpace5:1;
      uint64_t HCLEB0:1;
      uint64_t HCLEB1:1;
      uint64_t HCLEB2:1;
      uint64_t reservedSpace6:1;
      uint64_t HICPB0:1;
      uint64_t HICPB1:1;
      uint64_t HICPB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t OVFA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMFB:1;
      uint64_t OVFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR23 (*(volatile struct TMR23_tag *) 0x40025000)

struct TMR24_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTA:1;
      uint64_t CAPMDA:1;
      uint64_t reservedSpace0:1;
      uint64_t SYNSA:1;
      uint64_t CKDIVA:4;
      uint64_t SYNCLKA:2;
      uint64_t ASYNCLKA:2;
      uint64_t SYNCLKAT:2;
      uint64_t reservedSpace1:2;
      uint64_t CSTB:1;
      uint64_t CAPMDB:1;
      uint64_t reservedSpace2:1;
      uint64_t SYNSB:1;
      uint64_t CKDIVB:4;
      uint64_t SYNCLKB:2;
      uint64_t ASYNCLKB:2;
      uint64_t SYNCLKBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMENA:1;
      uint64_t OVENA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMENB:1;
      uint64_t OVENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t CMPCA:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace1:3;
      uint64_t NOFIENA:1;
      uint64_t NOFICKA:2;
      uint64_t reservedSpace2:1;
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t CMPCB:2;
      uint64_t reservedSpace3:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace4:3;
      uint64_t NOFIENB:1;
      uint64_t NOFICKB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTAA0:1;
      uint64_t HSTAA1:1;
      uint64_t HSTAA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTPA0:1;
      uint64_t HSTPA1:1;
      uint64_t HSTPA2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLEA0:1;
      uint64_t HCLEA1:1;
      uint64_t HCLEA2:1;
      uint64_t reservedSpace2:1;
      uint64_t HICPA0:1;
      uint64_t HICPA1:1;
      uint64_t HICPA2:1;
      uint64_t reservedSpace3:1;
      uint64_t HSTAB0:1;
      uint64_t HSTAB1:1;
      uint64_t HSTAB2:1;
      uint64_t reservedSpace4:1;
      uint64_t HSTPB0:1;
      uint64_t HSTPB1:1;
      uint64_t HSTPB2:1;
      uint64_t reservedSpace5:1;
      uint64_t HCLEB0:1;
      uint64_t HCLEB1:1;
      uint64_t HCLEB2:1;
      uint64_t reservedSpace6:1;
      uint64_t HICPB0:1;
      uint64_t HICPB1:1;
      uint64_t HICPB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMFA:1;
      uint64_t OVFA:1;
      uint64_t reservedSpace0:14;
      uint64_t CMFB:1;
      uint64_t OVFB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

};

#define TMR24 (*(volatile struct TMR24_tag *) 0x40025400)

struct TMR41_tag
{
  uint16_t OCCRUH;
  uint8_t res0[2];

  uint16_t OCCRUL;
  uint8_t res1[2];

  uint16_t OCCRVH;
  uint8_t res2[2];

  uint16_t OCCRVL;
  uint8_t res3[2];

  uint16_t OCCRWH;
  uint8_t res4[2];

  uint16_t OCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHUH;

  uint8_t res5[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHVH;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHWH;

  uint8_t res7[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLWL;

  uint8_t res8[6];

  uint16_t CPSR;
  uint8_t res9[2];

  uint16_t CNTR;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CKDIV:4;
      uint64_t CLEAR:1;
      uint64_t MODE:1;
      uint64_t STOP:1;
      uint64_t BUFEN:1;
      uint64_t IRQPEN:1;
      uint64_t IRQPF:1;
      uint64_t reservedSpace0:3;
      uint64_t IRQZEN:1;
      uint64_t IRQZF:1;
      uint64_t ECKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZIM:4;
      uint64_t PIM:4;
      uint64_t ZIC:4;
      uint64_t PIC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CVPR;

  uint8_t res10[54];

  uint16_t PFSRU;
  uint16_t PDARU;
  uint16_t PDBRU;
  uint8_t res11[2];

  uint16_t PFSRV;
  uint16_t PDARV;
  uint16_t PDBRV;
  uint8_t res12[2];

  uint16_t PFSRW;
  uint16_t PDARW;
  uint16_t PDBRW;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRU;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRV;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRW;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RTIDU:1;
      uint64_t RTIDV:1;
      uint64_t RTIDW:1;
      uint64_t reservedSpace0:1;
      uint64_t RTIFU:1;
      uint64_t RTICU:1;
      uint64_t RTEU:1;
      uint64_t RTSU:1;
      uint64_t RTIFV:1;
      uint64_t RTICV:1;
      uint64_t RTEV:1;
      uint64_t RTSV:1;
      uint64_t RTIFW:1;
      uint64_t RTICW:1;
      uint64_t RTEW:1;
      uint64_t RTSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RCSR;

  uint8_t res16[12];

  uint16_t SCCRUH;
  uint8_t res17[2];

  uint16_t SCCRUL;
  uint8_t res18[2];

  uint16_t SCCRVH;
  uint8_t res19[2];

  uint16_t SCCRVL;
  uint8_t res20[2];

  uint16_t SCCRWH;
  uint8_t res21[2];

  uint16_t SCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OEUH:1;
      uint64_t OEUL:1;
      uint64_t OEVH:1;
      uint64_t OEVL:1;
      uint64_t OEWH:1;
      uint64_t OEWL:1;
      uint64_t ODT:2;
      uint64_t MOE:1;
      uint64_t AOE:1;
      uint64_t reservedSpace0:6;
      uint64_t OSUH:2;
      uint64_t OSUL:2;
      uint64_t OSVH:2;
      uint64_t OSVL:2;
      uint64_t OSWH:2;
      uint64_t OSWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EVTRS:3;
      uint64_t PCTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCER;

};

#define TMR41 (*(volatile struct TMR41_tag *) 0x40038002)

struct TMR42_tag
{
  uint16_t OCCRUH;
  uint8_t res0[2];

  uint16_t OCCRUL;
  uint8_t res1[2];

  uint16_t OCCRVH;
  uint8_t res2[2];

  uint16_t OCCRVL;
  uint8_t res3[2];

  uint16_t OCCRWH;
  uint8_t res4[2];

  uint16_t OCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHUH;

  uint8_t res5[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHVH;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHWH;

  uint8_t res7[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLWL;

  uint8_t res8[6];

  uint16_t CPSR;
  uint8_t res9[2];

  uint16_t CNTR;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CKDIV:4;
      uint64_t CLEAR:1;
      uint64_t MODE:1;
      uint64_t STOP:1;
      uint64_t BUFEN:1;
      uint64_t IRQPEN:1;
      uint64_t IRQPF:1;
      uint64_t reservedSpace0:3;
      uint64_t IRQZEN:1;
      uint64_t IRQZF:1;
      uint64_t ECKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZIM:4;
      uint64_t PIM:4;
      uint64_t ZIC:4;
      uint64_t PIC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CVPR;

  uint8_t res10[54];

  uint16_t PFSRU;
  uint16_t PDARU;
  uint16_t PDBRU;
  uint8_t res11[2];

  uint16_t PFSRV;
  uint16_t PDARV;
  uint16_t PDBRV;
  uint8_t res12[2];

  uint16_t PFSRW;
  uint16_t PDARW;
  uint16_t PDBRW;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRU;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRV;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRW;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RTIDU:1;
      uint64_t RTIDV:1;
      uint64_t RTIDW:1;
      uint64_t reservedSpace0:1;
      uint64_t RTIFU:1;
      uint64_t RTICU:1;
      uint64_t RTEU:1;
      uint64_t RTSU:1;
      uint64_t RTIFV:1;
      uint64_t RTICV:1;
      uint64_t RTEV:1;
      uint64_t RTSV:1;
      uint64_t RTIFW:1;
      uint64_t RTICW:1;
      uint64_t RTEW:1;
      uint64_t RTSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RCSR;

  uint8_t res16[12];

  uint16_t SCCRUH;
  uint8_t res17[2];

  uint16_t SCCRUL;
  uint8_t res18[2];

  uint16_t SCCRVH;
  uint8_t res19[2];

  uint16_t SCCRVL;
  uint8_t res20[2];

  uint16_t SCCRWH;
  uint8_t res21[2];

  uint16_t SCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OEUH:1;
      uint64_t OEUL:1;
      uint64_t OEVH:1;
      uint64_t OEVL:1;
      uint64_t OEWH:1;
      uint64_t OEWL:1;
      uint64_t ODT:2;
      uint64_t MOE:1;
      uint64_t AOE:1;
      uint64_t reservedSpace0:6;
      uint64_t OSUH:2;
      uint64_t OSUL:2;
      uint64_t OSVH:2;
      uint64_t OSVL:2;
      uint64_t OSWH:2;
      uint64_t OSWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EVTRS:3;
      uint64_t PCTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCER;

};

#define TMR42 (*(volatile struct TMR42_tag *) 0x40038402)

struct TMR43_tag
{
  uint16_t OCCRUH;
  uint8_t res0[2];

  uint16_t OCCRUL;
  uint8_t res1[2];

  uint16_t OCCRVH;
  uint8_t res2[2];

  uint16_t OCCRVL;
  uint8_t res3[2];

  uint16_t OCCRWH;
  uint8_t res4[2];

  uint16_t OCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERU;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERV;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCEH:1;
      uint64_t OCEL:1;
      uint64_t OCPH:1;
      uint64_t OCPL:1;
      uint64_t OCIEH:1;
      uint64_t OCIEL:1;
      uint64_t OCFH:1;
      uint64_t OCFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCSRW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHBUFEN:2;
      uint64_t CLBUFEN:2;
      uint64_t MHBUFEN:2;
      uint64_t MLBUFEN:2;
      uint64_t LMCH:1;
      uint64_t LMCL:1;
      uint64_t LMMH:1;
      uint64_t LMML:1;
      uint64_t MCECH:1;
      uint64_t MCECL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCERW;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHUH;

  uint8_t res5[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHVH;

  uint8_t res6[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OCFDCH:1;
      uint64_t OCFPKH:1;
      uint64_t OCFUCH:1;
      uint64_t OCFZRH:1;
      uint64_t OPDCH:2;
      uint64_t OPPKH:2;
      uint64_t OPUCH:2;
      uint64_t OPZRH:2;
      uint64_t OPNPKH:2;
      uint64_t OPNZRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OCMRHWH;

  uint8_t res7[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCFDCL:1;
      uint64_t OCFPKL:1;
      uint64_t OCFUCL:1;
      uint64_t OCFZRL:1;
      uint64_t OPDCL:2;
      uint64_t OPPKL:2;
      uint64_t OPUCL:2;
      uint64_t OPZRL:2;
      uint64_t OPNPKL:2;
      uint64_t OPNZRL:2;
      uint64_t EOPNDCL:2;
      uint64_t EOPNUCL:2;
      uint64_t EOPDCL:2;
      uint64_t EOPPKL:2;
      uint64_t EOPUCL:2;
      uint64_t EOPZRL:2;
      uint64_t EOPNPKL:2;
      uint64_t EOPNZRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCMRLWL;

  uint8_t res8[6];

  uint16_t CPSR;
  uint8_t res9[2];

  uint16_t CNTR;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CKDIV:4;
      uint64_t CLEAR:1;
      uint64_t MODE:1;
      uint64_t STOP:1;
      uint64_t BUFEN:1;
      uint64_t IRQPEN:1;
      uint64_t IRQPF:1;
      uint64_t reservedSpace0:3;
      uint64_t IRQZEN:1;
      uint64_t IRQZF:1;
      uint64_t ECKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCSR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ZIM:4;
      uint64_t PIM:4;
      uint64_t ZIC:4;
      uint64_t PIC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CVPR;

  uint8_t res10[54];

  uint16_t PFSRU;
  uint16_t PDARU;
  uint16_t PDBRU;
  uint8_t res11[2];

  uint16_t PFSRV;
  uint16_t PDARV;
  uint16_t PDBRV;
  uint8_t res12[2];

  uint16_t PFSRW;
  uint16_t PDARW;
  uint16_t PDBRW;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRU;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRV;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVCK:3;
      uint64_t reservedSpace0:1;
      uint64_t PWMMD:2;
      uint64_t LVLS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POCRW;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RTIDU:1;
      uint64_t RTIDV:1;
      uint64_t RTIDW:1;
      uint64_t reservedSpace0:1;
      uint64_t RTIFU:1;
      uint64_t RTICU:1;
      uint64_t RTEU:1;
      uint64_t RTSU:1;
      uint64_t RTIFV:1;
      uint64_t RTICV:1;
      uint64_t RTEV:1;
      uint64_t RTSV:1;
      uint64_t RTIFW:1;
      uint64_t RTICW:1;
      uint64_t RTEW:1;
      uint64_t RTSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RCSR;

  uint8_t res16[12];

  uint16_t SCCRUH;
  uint8_t res17[2];

  uint16_t SCCRUL;
  uint8_t res18[2];

  uint16_t SCCRVH;
  uint8_t res19[2];

  uint16_t SCCRVL;
  uint8_t res20[2];

  uint16_t SCCRWH;
  uint8_t res21[2];

  uint16_t SCCRWL;
  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRUL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRVL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWH;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BUFEN:2;
      uint64_t EVTOS:3;
      uint64_t LMC:1;
      uint64_t reservedSpace0:2;
      uint64_t EVTMS:1;
      uint64_t EVTDS:1;
      uint64_t reservedSpace1:2;
      uint64_t DEN:1;
      uint64_t PEN:1;
      uint64_t UEN:1;
      uint64_t ZEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCSRWL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:4;
      uint64_t reservedSpace0:2;
      uint64_t MZCE:1;
      uint64_t MPCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCMRWL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OEUH:1;
      uint64_t OEUL:1;
      uint64_t OEVH:1;
      uint64_t OEVL:1;
      uint64_t OEWH:1;
      uint64_t OEWL:1;
      uint64_t ODT:2;
      uint64_t MOE:1;
      uint64_t AOE:1;
      uint64_t reservedSpace0:6;
      uint64_t OSUH:2;
      uint64_t OSUL:2;
      uint64_t OSVH:2;
      uint64_t OSVL:2;
      uint64_t OSWH:2;
      uint64_t OSWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EVTRS:3;
      uint64_t PCTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SCER;

};

#define TMR43 (*(volatile struct TMR43_tag *) 0x40038802)

struct TMR61_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR61 (*(volatile struct TMR61_tag *) 0x40018000)

struct TMR62_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR62 (*(volatile struct TMR62_tag *) 0x40018400)

struct TMR63_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR63 (*(volatile struct TMR63_tag *) 0x40018800)

struct TMR64_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR64 (*(volatile struct TMR64_tag *) 0x40018c00)

struct TMR65_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR65 (*(volatile struct TMR65_tag *) 0x40019000)

struct TMR66_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR66 (*(volatile struct TMR66_tag *) 0x40019400)

struct TMR67_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR67 (*(volatile struct TMR67_tag *) 0x40019800)

struct TMR68_tag
{
  uint32_t CNTER;
  uint32_t UPDAR;
  uint8_t res0[56];

  uint32_t PERAR;
  uint32_t PERBR;
  uint32_t PERCR;
  uint8_t res1[52];

  uint32_t GCMAR;
  uint32_t GCMBR;
  uint32_t GCMCR;
  uint32_t GCMDR;
  uint32_t GCMER;
  uint32_t GCMFR;
  uint8_t res2[40];

  uint32_t SCMAR;
  uint32_t SCMBR;
  uint32_t SCMCR;
  uint32_t SCMDR;
  uint32_t SCMER;
  uint32_t SCMFR;
  uint8_t res3[40];

  uint32_t DTUAR;
  uint32_t DTDAR;
  uint32_t DTUBR;
  uint32_t DTDBR;
  uint8_t res4[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace1:7;
      uint64_t ZMSKREV:1;
      uint64_t ZMSKPOS:1;
      uint64_t ZMSKVAL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENA:1;
      uint64_t INTENB:1;
      uint64_t INTENC:1;
      uint64_t INTEND:1;
      uint64_t INTENE:1;
      uint64_t INTENF:1;
      uint64_t INTENOVF:1;
      uint64_t INTENUDF:1;
      uint64_t INTENDTE:1;
      uint64_t reservedSpace0:7;
      uint64_t INTENSAU:1;
      uint64_t INTENSAD:1;
      uint64_t INTENSBU:1;
      uint64_t INTENSBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BENA:1;
      uint64_t BSEA:1;
      uint64_t BTRUA:1;
      uint64_t BTRDA:1;
      uint64_t BENB:1;
      uint64_t BSEB:1;
      uint64_t BTRUB:1;
      uint64_t BTRDB:1;
      uint64_t BENP:1;
      uint64_t BSEP:1;
      uint64_t BTRUP:1;
      uint64_t BTRDP:1;
      uint64_t reservedSpace0:4;
      uint64_t BENSPA:1;
      uint64_t BSESPA:1;
      uint64_t BTRUSPA:1;
      uint64_t BTRDSPA:1;
      uint64_t BENSPB:1;
      uint64_t BSESPB:1;
      uint64_t BTRUSPB:1;
      uint64_t BTRDSPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCONR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTCEN:1;
      uint64_t SEPA:1;
      uint64_t reservedSpace0:2;
      uint64_t DTBENU:1;
      uint64_t DTBEND:1;
      uint64_t DTBTRU:1;
      uint64_t DTBTRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCONR;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACA:2;
      uint64_t STPCA:2;
      uint64_t OVFCA:2;
      uint64_t UDFCA:2;
      uint64_t CMAUCA:2;
      uint64_t CMADCA:2;
      uint64_t CMBUCA:2;
      uint64_t CMBDCA:2;
      uint64_t FORCA:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCA:2;
      uint64_t EMBRA:2;
      uint64_t EMBSA:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENA:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STACB:2;
      uint64_t STPCB:2;
      uint64_t OVFCB:2;
      uint64_t UDFCB:2;
      uint64_t CMAUCB:2;
      uint64_t CMADCB:2;
      uint64_t CMBUCB:2;
      uint64_t CMBDCB:2;
      uint64_t FORCB:2;
      uint64_t reservedSpace0:2;
      uint64_t EMBCB:2;
      uint64_t EMBRB:2;
      uint64_t EMBSB:2;
      uint64_t reservedSpace1:2;
      uint64_t OUTENB:1;
      uint64_t reservedSpace2:2;
      uint64_t CAPMDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENGA:1;
      uint64_t NOFICKGA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENGB:1;
      uint64_t NOFICKGB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SPPERIA:1;
      uint64_t SPPERIB:1;
      uint64_t reservedSpace1:6;
      uint64_t PCNTE:2;
      uint64_t PCNTS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VPERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMAF:1;
      uint64_t CMBF:1;
      uint64_t CMCF:1;
      uint64_t CMDF:1;
      uint64_t CMEF:1;
      uint64_t CMFF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
      uint64_t DTEF:1;
      uint64_t CMSAUF:1;
      uint64_t CMSADF:1;
      uint64_t CMSBUF:1;
      uint64_t CMSBDF:1;
      uint64_t reservedSpace0:8;
      uint64_t VPERNUM:3;
      uint64_t reservedSpace1:7;
      uint64_t DIRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STFLR;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t HSTA3:1;
      uint64_t reservedSpace0:3;
      uint64_t STAS:1;
      uint64_t HSTA8:1;
      uint64_t HSTA9:1;
      uint64_t HSTA10:1;
      uint64_t HSTA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTA16:1;
      uint64_t HSTA17:1;
      uint64_t HSTA18:1;
      uint64_t HSTA19:1;
      uint64_t HSTA20:1;
      uint64_t HSTA21:1;
      uint64_t HSTA22:1;
      uint64_t HSTA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t HSTP3:1;
      uint64_t reservedSpace0:3;
      uint64_t STPS:1;
      uint64_t HSTP8:1;
      uint64_t HSTP9:1;
      uint64_t HSTP10:1;
      uint64_t HSTP11:1;
      uint64_t reservedSpace1:4;
      uint64_t HSTP16:1;
      uint64_t HSTP17:1;
      uint64_t HSTP18:1;
      uint64_t HSTP19:1;
      uint64_t HSTP20:1;
      uint64_t HSTP21:1;
      uint64_t HSTP22:1;
      uint64_t HSTP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t HCLE3:1;
      uint64_t reservedSpace0:3;
      uint64_t CLES:1;
      uint64_t HCLE8:1;
      uint64_t HCLE9:1;
      uint64_t HCLE10:1;
      uint64_t HCLE11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCLE16:1;
      uint64_t HCLE17:1;
      uint64_t HCLE18:1;
      uint64_t HCLE19:1;
      uint64_t HCLE20:1;
      uint64_t HCLE21:1;
      uint64_t HCLE22:1;
      uint64_t HCLE23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HUPD0:1;
      uint64_t HUPD1:1;
      uint64_t HUPD2:1;
      uint64_t HUPD3:1;
      uint64_t reservedSpace0:3;
      uint64_t UPDS:1;
      uint64_t HUPD8:1;
      uint64_t HUPD9:1;
      uint64_t HUPD10:1;
      uint64_t HUPD11:1;
      uint64_t reservedSpace1:4;
      uint64_t HUPD16:1;
      uint64_t HUPD17:1;
      uint64_t HUPD18:1;
      uint64_t HUPD19:1;
      uint64_t HUPD20:1;
      uint64_t HUPD21:1;
      uint64_t HUPD22:1;
      uint64_t HUPD23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPA0:1;
      uint64_t HCPA1:1;
      uint64_t HCPA2:1;
      uint64_t HCPA3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPA8:1;
      uint64_t HCPA9:1;
      uint64_t HCPA10:1;
      uint64_t HCPA11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPA16:1;
      uint64_t HCPA17:1;
      uint64_t HCPA18:1;
      uint64_t HCPA19:1;
      uint64_t HCPA20:1;
      uint64_t HCPA21:1;
      uint64_t HCPA22:1;
      uint64_t HCPA23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCPB0:1;
      uint64_t HCPB1:1;
      uint64_t HCPB2:1;
      uint64_t HCPB3:1;
      uint64_t reservedSpace0:4;
      uint64_t HCPB8:1;
      uint64_t HCPB9:1;
      uint64_t HCPB10:1;
      uint64_t HCPB11:1;
      uint64_t reservedSpace1:4;
      uint64_t HCPB16:1;
      uint64_t HCPB17:1;
      uint64_t HCPB18:1;
      uint64_t HCPB19:1;
      uint64_t HCPB20:1;
      uint64_t HCPB21:1;
      uint64_t HCPB22:1;
      uint64_t HCPB23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCPBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCUP16:1;
      uint64_t HCUP17:1;
      uint64_t HCUP18:1;
      uint64_t HCUP19:1;
      uint64_t HCUP20:1;
      uint64_t HCUP21:1;
      uint64_t HCUP22:1;
      uint64_t HCUP23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCUPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t reservedSpace0:4;
      uint64_t HCDO16:1;
      uint64_t HCDO17:1;
      uint64_t HCDO18:1;
      uint64_t HCDO19:1;
      uint64_t HCDO20:1;
      uint64_t HCDO21:1;
      uint64_t HCDO22:1;
      uint64_t HCDO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCDOR;

};

#define TMR68 (*(volatile struct TMR68_tag *) 0x40019c00)

struct TMR6CR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOFIENTA:1;
      uint64_t NOFICKTA:2;
      uint64_t reservedSpace0:1;
      uint64_t NOFIENTB:1;
      uint64_t NOFICKTB:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENTC:1;
      uint64_t NOFICKTC:2;
      uint64_t reservedSpace2:1;
      uint64_t NOFIENTD:1;
      uint64_t NOFICKTD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTA1:1;
      uint64_t SSTA2:1;
      uint64_t SSTA3:1;
      uint64_t SSTA4:1;
      uint64_t SSTA5:1;
      uint64_t SSTA6:1;
      uint64_t SSTA7:1;
      uint64_t SSTA8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTP1:1;
      uint64_t SSTP2:1;
      uint64_t SSTP3:1;
      uint64_t SSTP4:1;
      uint64_t SSTP5:1;
      uint64_t SSTP6:1;
      uint64_t SSTP7:1;
      uint64_t SSTP8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLE1:1;
      uint64_t SCLE2:1;
      uint64_t SCLE3:1;
      uint64_t SCLE4:1;
      uint64_t SCLE5:1;
      uint64_t SCLE6:1;
      uint64_t SCLE7:1;
      uint64_t SCLE8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCLRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUPD1:1;
      uint64_t SUPD2:1;
      uint64_t SUPD3:1;
      uint64_t SUPD4:1;
      uint64_t SUPD5:1;
      uint64_t SUPD6:1;
      uint64_t SUPD7:1;
      uint64_t SUPD8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPDR;

};

#define TMR6CR (*(volatile struct TMR6CR_tag *) 0x400183ec)

struct TMRA1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA1 (*(volatile struct TMRA1_tag *) 0x4003a000)

struct TMRA10_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA10 (*(volatile struct TMRA10_tag *) 0x40027400)

struct TMRA11_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA11 (*(volatile struct TMRA11_tag *) 0x40027800)

struct TMRA12_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA12 (*(volatile struct TMRA12_tag *) 0x40027c00)

struct TMRA2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA2 (*(volatile struct TMRA2_tag *) 0x4003a400)

struct TMRA3_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA3 (*(volatile struct TMRA3_tag *) 0x4003a800)

struct TMRA4_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA4 (*(volatile struct TMRA4_tag *) 0x4003ac00)

struct TMRA5_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA5 (*(volatile struct TMRA5_tag *) 0x40026000)

struct TMRA6_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA6 (*(volatile struct TMRA6_tag *) 0x40026400)

struct TMRA7_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA7 (*(volatile struct TMRA7_tag *) 0x40026800)

struct TMRA8_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA8 (*(volatile struct TMRA8_tag *) 0x40026c00)

struct TMRA9_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CNTER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PERAR;

  uint8_t res1[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR1;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR2;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR3;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPAR4;

  uint8_t res5[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START:1;
      uint64_t DIR:1;
      uint64_t MODE:1;
      uint64_t SYNST:1;
      uint64_t CKDIV:4;
      uint64_t OVSTP:1;
      uint64_t reservedSpace0:3;
      uint64_t ITENOVF:1;
      uint64_t ITENUDF:1;
      uint64_t OVFF:1;
      uint64_t UDFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCSTR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HSTA0:1;
      uint64_t HSTA1:1;
      uint64_t HSTA2:1;
      uint64_t reservedSpace0:1;
      uint64_t HSTP0:1;
      uint64_t HSTP1:1;
      uint64_t HSTP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HCLE0:1;
      uint64_t HCLE1:1;
      uint64_t HCLE2:1;
      uint64_t reservedSpace2:1;
      uint64_t HCLE3:1;
      uint64_t HCLE4:1;
      uint64_t HCLE5:1;
      uint64_t HCLE6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCONR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCUP0:1;
      uint64_t HCUP1:1;
      uint64_t HCUP2:1;
      uint64_t HCUP3:1;
      uint64_t HCUP4:1;
      uint64_t HCUP5:1;
      uint64_t HCUP6:1;
      uint64_t HCUP7:1;
      uint64_t HCUP8:1;
      uint64_t HCUP9:1;
      uint64_t HCUP10:1;
      uint64_t HCUP11:1;
      uint64_t HCUP12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCUPR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCDO0:1;
      uint64_t HCDO1:1;
      uint64_t HCDO2:1;
      uint64_t HCDO3:1;
      uint64_t HCDO4:1;
      uint64_t HCDO5:1;
      uint64_t HCDO6:1;
      uint64_t HCDO7:1;
      uint64_t HCDO8:1;
      uint64_t HCDO9:1;
      uint64_t HCDO10:1;
      uint64_t HCDO11:1;
      uint64_t HCDO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCDOR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ITEN1:1;
      uint64_t ITEN2:1;
      uint64_t ITEN3:1;
      uint64_t ITEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ICONR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ETEN1:1;
      uint64_t ETEN2:1;
      uint64_t ETEN3:1;
      uint64_t ETEN4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECONR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOFIENTG:1;
      uint64_t NOFICKTG:2;
      uint64_t reservedSpace0:5;
      uint64_t NOFIENCA:1;
      uint64_t NOFICKCA:2;
      uint64_t reservedSpace1:1;
      uint64_t NOFIENCB:1;
      uint64_t NOFICKCB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCONR;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF1:1;
      uint64_t CMPF2:1;
      uint64_t CMPF3:1;
      uint64_t CMPF4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STFLR;

  uint8_t res13[34];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR1;

  uint8_t res14[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BEN:1;
      uint64_t BSE0:1;
      uint64_t BSE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BCONR2;

  uint8_t res15[54];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR1;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR2;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR3;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPMD:1;
      uint64_t reservedSpace0:3;
      uint64_t HICP0:1;
      uint64_t HICP1:1;
      uint64_t HICP2:1;
      uint64_t reservedSpace1:1;
      uint64_t HICP3:1;
      uint64_t HICP4:1;
      uint64_t reservedSpace2:2;
      uint64_t NOFIENCP:1;
      uint64_t NOFICKCP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCONR4;

  uint8_t res19[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR1;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR2;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR3;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t STAC:2;
      uint64_t STPC:2;
      uint64_t CMPC:2;
      uint64_t PERC:2;
      uint64_t FORC:2;
      uint64_t reservedSpace0:2;
      uint64_t OUTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCONR4;

};

#define TMRA9 (*(volatile struct TMRA9_tag *) 0x40027000)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOAD:1;
      uint64_t reservedSpace0:1;
      uint64_t CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR;

  uint8_t res0[4];

  uint32_t DR0;
  uint32_t DR1;
};

#define TRNG (*(volatile struct TRNG_tag *) 0x40042000)

struct USART1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t RTOF:1;
      uint64_t reservedSpace2:7;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTOE:1;
      uint64_t RTOIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace0:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace1:1;
      uint64_t M:1;
      uint64_t reservedSpace2:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace3:1;
      uint64_t CORE:1;
      uint64_t CRTOF:1;
      uint64_t reservedSpace4:3;
      uint64_t MS:1;
      uint64_t reservedSpace5:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART1 (*(volatile struct USART1_tag *) 0x4001cc00)

struct USART10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t BE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace1:1;
      uint64_t WKUP:1;
      uint64_t LBD:1;
      uint64_t reservedSpace2:5;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:1;
      uint64_t CBE:1;
      uint64_t CWKUP:1;
      uint64_t CLBD:1;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t reservedSpace7:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t WKUPIE:1;
      uint64_t BEIE:1;
      uint64_t BEE:1;
      uint64_t LBDIE:1;
      uint64_t LBDL:1;
      uint64_t SBKL:2;
      uint64_t WKUPE:1;
      uint64_t reservedSpace0:2;
      uint64_t CLKC:2;
      uint64_t STOP:1;
      uint64_t LINEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SBK:1;
      uint64_t SBKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace1:3;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
      uint64_t LBMPSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBMC;

};

#define USART10 (*(volatile struct USART10_tag *) 0x40021c00)

struct USART2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t RTOF:1;
      uint64_t reservedSpace2:7;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTOE:1;
      uint64_t RTOIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace0:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace1:1;
      uint64_t M:1;
      uint64_t reservedSpace2:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace3:1;
      uint64_t CORE:1;
      uint64_t CRTOF:1;
      uint64_t reservedSpace4:3;
      uint64_t MS:1;
      uint64_t reservedSpace5:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART2 (*(volatile struct USART2_tag *) 0x4001d000)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace2:8;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:4;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART3 (*(volatile struct USART3_tag *) 0x4001d400)

struct USART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace2:8;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:4;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART4 (*(volatile struct USART4_tag *) 0x4001d800)

struct USART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t BE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace1:1;
      uint64_t WKUP:1;
      uint64_t LBD:1;
      uint64_t reservedSpace2:5;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:1;
      uint64_t CBE:1;
      uint64_t CWKUP:1;
      uint64_t CLBD:1;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t reservedSpace7:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t WKUPIE:1;
      uint64_t BEIE:1;
      uint64_t BEE:1;
      uint64_t LBDIE:1;
      uint64_t LBDL:1;
      uint64_t SBKL:2;
      uint64_t WKUPE:1;
      uint64_t reservedSpace0:2;
      uint64_t CLKC:2;
      uint64_t STOP:1;
      uint64_t LINEN:1;
      uint64_t reservedSpace1:1;
      uint64_t SBK:1;
      uint64_t SBKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t LOOP:1;
      uint64_t reservedSpace1:3;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
      uint64_t LBMPSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBMC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBMC;

};

#define USART5 (*(volatile struct USART5_tag *) 0x4001dc00)

struct USART6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t RTOF:1;
      uint64_t reservedSpace2:7;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTOE:1;
      uint64_t RTOIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace0:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace1:1;
      uint64_t M:1;
      uint64_t reservedSpace2:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace3:1;
      uint64_t CORE:1;
      uint64_t CRTOF:1;
      uint64_t reservedSpace4:3;
      uint64_t MS:1;
      uint64_t reservedSpace5:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART6 (*(volatile struct USART6_tag *) 0x40020c00)

struct USART7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t RTOF:1;
      uint64_t reservedSpace2:7;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTOE:1;
      uint64_t RTOIE:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace0:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace1:1;
      uint64_t M:1;
      uint64_t reservedSpace2:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace3:1;
      uint64_t CORE:1;
      uint64_t CRTOF:1;
      uint64_t reservedSpace4:3;
      uint64_t MS:1;
      uint64_t reservedSpace5:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART7 (*(volatile struct USART7_tag *) 0x40021000)

struct USART8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace2:8;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:4;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART8 (*(volatile struct USART8_tag *) 0x40021400)

struct USART9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t reservedSpace0:1;
      uint64_t ORE:1;
      uint64_t reservedSpace1:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace2:8;
      uint64_t MPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
      uint64_t MPID:1;
      uint64_t reservedSpace0:6;
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_FRACTION:7;
      uint64_t reservedSpace0:1;
      uint64_t DIV_INTEGER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t SLME:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t reservedSpace1:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t reservedSpace2:1;
      uint64_t M:1;
      uint64_t reservedSpace3:2;
      uint64_t OVER8:1;
      uint64_t CPE:1;
      uint64_t CFE:1;
      uint64_t reservedSpace4:1;
      uint64_t CORE:1;
      uint64_t reservedSpace5:4;
      uint64_t MS:1;
      uint64_t reservedSpace6:3;
      uint64_t ML:1;
      uint64_t FBME:1;
      uint64_t NFE:1;
      uint64_t SBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPE:1;
      uint64_t reservedSpace0:10;
      uint64_t CLKC:2;
      uint64_t STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SCEN:1;
      uint64_t reservedSpace2:2;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t reservedSpace3:11;
      uint64_t BCN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define USART9 (*(volatile struct USART9_tag *) 0x40021800)

struct USBFS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t VBUSOVEN:1;
      uint64_t VBUSVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GVBUSCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GINTMSK:1;
      uint64_t HBSTLEN:4;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TXFELVL:1;
      uint64_t PTXFELVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAHBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOCAL:3;
      uint64_t reservedSpace0:3;
      uint64_t PHYSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t TRDT:4;
      uint64_t reservedSpace2:15;
      uint64_t FHMOD:1;
      uint64_t FDMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GUSBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSRST:1;
      uint64_t HSRST:1;
      uint64_t FCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t RXFFLSH:1;
      uint64_t TXFFLSH:1;
      uint64_t TXFNUM:5;
      uint64_t reservedSpace1:19;
      uint64_t DMAREQ:1;
      uint64_t AHBIDL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMOD:1;
      uint64_t MMIS:1;
      uint64_t reservedSpace0:1;
      uint64_t SOF:1;
      uint64_t RXFNE:1;
      uint64_t NPTXFE:1;
      uint64_t GINAKEFF:1;
      uint64_t GONAKEFF:1;
      uint64_t reservedSpace1:2;
      uint64_t ESUSP:1;
      uint64_t USBSUSP:1;
      uint64_t USBRST:1;
      uint64_t ENUMDNE:1;
      uint64_t ISOODRP:1;
      uint64_t EOPF:1;
      uint64_t reservedSpace2:2;
      uint64_t IEPINT:1;
      uint64_t OEPINT:1;
      uint64_t IISOIXFR:1;
      uint64_t IPXFR_INCOMPISOOUT:1;
      uint64_t DATAFSUSP:1;
      uint64_t reservedSpace3:1;
      uint64_t HPRTINT:1;
      uint64_t HCINT:1;
      uint64_t PTXFE:1;
      uint64_t LPMINT:1;
      uint64_t CIDSCHG:1;
      uint64_t DISCINT:1;
      uint64_t VBUSVINT:1;
      uint64_t WKUINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MMISM:1;
      uint64_t reservedSpace1:1;
      uint64_t SOFM:1;
      uint64_t RXFNEM:1;
      uint64_t NPTXFEM:1;
      uint64_t GINAKEFFM:1;
      uint64_t GONAKEFFM:1;
      uint64_t reservedSpace2:2;
      uint64_t ESUSPM:1;
      uint64_t USBSUSPM:1;
      uint64_t USBRSTM:1;
      uint64_t ENUMDNEM:1;
      uint64_t ISOODRPM:1;
      uint64_t EOPFM:1;
      uint64_t reservedSpace3:2;
      uint64_t IEPIM:1;
      uint64_t OEPIM:1;
      uint64_t IISOIXFRM:1;
      uint64_t IPXFRM_INCOMPISOOUTM:1;
      uint64_t DATAFSUSPM:1;
      uint64_t reservedSpace4:1;
      uint64_t HPRTIM:1;
      uint64_t HCIM:1;
      uint64_t PTXFEM:1;
      uint64_t LPMINTM:1;
      uint64_t CIDSCHGM:1;
      uint64_t DISCIM:1;
      uint64_t VBUSVIM:1;
      uint64_t WKUIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM_EPNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM_EPNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFD:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSA:16;
      uint64_t NPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HNPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSAV:16;
      uint64_t NPTQXSAV:8;
      uint64_t NPTXQTOP:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HNPTXSTS;

  uint8_t res1[12];

  uint32_t CID;
  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMEN:1;
      uint64_t LPMACK:1;
      uint64_t BSEL:4;
      uint64_t REMWAKE:1;
      uint64_t L1SSEN:1;
      uint64_t BESLTHRS:4;
      uint64_t L1DSEN:1;
      uint64_t LPMRSP:2;
      uint64_t SLPSTS:1;
      uint64_t L1RSMOK:1;
      uint64_t LPMCHIDX:4;
      uint64_t LPMRCNT:3;
      uint64_t SENDLPM:1;
      uint64_t LPMRCNTSTS:3;
      uint64_t ENBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLPMCFG;

  uint8_t res3[168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXSA:16;
      uint64_t PTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF15;

  uint8_t res4[704];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSLSPCS:2;
      uint64_t FSLSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCFG;

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
  } __attribute__((aligned(4))) HFNUM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSAVL:16;
      uint64_t PTXQSAV:8;
      uint64_t PTXQTOP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXSTS;

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

  uint8_t res6[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSTS:1;
      uint64_t PCDET:1;
      uint64_t PENA:1;
      uint64_t PENCHNG:1;
      uint64_t reservedSpace0:2;
      uint64_t PRES:1;
      uint64_t PSUSP:1;
      uint64_t PRST:1;
      uint64_t reservedSpace1:1;
      uint64_t PLSTS:2;
      uint64_t PWPR:1;
      uint64_t reservedSpace2:4;
      uint64_t PSPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRT;

  uint8_t res7[188];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR0;

  uint8_t res8[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ0;

  uint32_t HCDMA0;
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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR1;

  uint8_t res10[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ1;

  uint32_t HCDMA1;
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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR2;

  uint8_t res12[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ2;

  uint32_t HCDMA2;
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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR3;

  uint8_t res14[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ3;

  uint32_t HCDMA3;
  uint8_t res15[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR4;

  uint8_t res16[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ4;

  uint32_t HCDMA4;
  uint8_t res17[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR5;

  uint8_t res18[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ5;

  uint32_t HCDMA5;
  uint8_t res19[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR6;

  uint8_t res20[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ6;

  uint32_t HCDMA6;
  uint8_t res21[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR7;

  uint8_t res22[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ7;

  uint32_t HCDMA7;
  uint8_t res23[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR8;

  uint8_t res24[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ8;

  uint32_t HCDMA8;
  uint8_t res25[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR9;

  uint8_t res26[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ9;

  uint32_t HCDMA9;
  uint8_t res27[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR10;

  uint8_t res28[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ10;

  uint32_t HCDMA10;
  uint8_t res29[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR11;

  uint8_t res30[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ11;

  uint32_t HCDMA11;
  uint8_t res31[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR12;

  uint8_t res32[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ12;

  uint32_t HCDMA12;
  uint8_t res33[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR13;

  uint8_t res34[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ13;

  uint32_t HCDMA13;
  uint8_t res35[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR14;

  uint8_t res36[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ14;

  uint32_t HCDMA14;
  uint8_t res37[8];

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
      uint64_t reservedSpace1:2;
      uint64_t DAD:7;
      uint64_t ODDFRM:1;
      uint64_t CHDIS:1;
      uint64_t CHENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCCHAR15;

  uint8_t res38[4];

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
      uint64_t reservedSpace0:1;
      uint64_t TXERR:1;
      uint64_t BBERR:1;
      uint64_t FRMOR:1;
      uint64_t DTERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t reservedSpace0:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ15;

  uint32_t HCDMA15;
  uint8_t res39[264];

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
  } __attribute__((aligned(4))) DCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWUSIG:1;
      uint64_t SDIS:1;
      uint64_t GINSTS:1;
      uint64_t GONSTS:1;
      uint64_t reservedSpace0:3;
      uint64_t SGINAK:1;
      uint64_t CGINAK:1;
      uint64_t SGONAK:1;
      uint64_t CGONAK:1;
      uint64_t POPRGDNE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTL;

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
      uint64_t LNSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTS;

  uint8_t res40[4];

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
      uint64_t reservedSpace1:6;
      uint64_t NAKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPMSK;

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
  } __attribute__((aligned(4))) DOEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINT:16;
      uint64_t OEPINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINTM:16;
      uint64_t OEPINTM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINTMSK;

  uint8_t res41[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXFEM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPEMPMSK;

  uint8_t res42[200];

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
  } __attribute__((aligned(4))) DIEPCTL0;

  uint8_t res43[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT0;

  uint8_t res44[4];

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

  uint32_t DIEPDMA0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS0;

  uint8_t res45[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL1;

  uint8_t res46[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT1;

  uint8_t res47[4];

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

  uint32_t DIEPDMA1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS1;

  uint8_t res48[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL2;

  uint8_t res49[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT2;

  uint8_t res50[4];

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

  uint32_t DIEPDMA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS2;

  uint8_t res51[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL3;

  uint8_t res52[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT3;

  uint8_t res53[4];

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

  uint32_t DIEPDMA3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS3;

  uint8_t res54[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL4;

  uint8_t res55[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT4;

  uint8_t res56[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ4;

  uint32_t DIEPDMA4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS4;

  uint8_t res57[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL5;

  uint8_t res58[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT5;

  uint8_t res59[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ5;

  uint32_t DIEPDMA5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS5;

  uint8_t res60[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL6;

  uint8_t res61[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT6;

  uint8_t res62[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ6;

  uint32_t DIEPDMA6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS6;

  uint8_t res63[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL7;

  uint8_t res64[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT7;

  uint8_t res65[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ7;

  uint32_t DIEPDMA7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS7;

  uint8_t res66[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL8;

  uint8_t res67[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT8;

  uint8_t res68[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ8;

  uint32_t DIEPDMA8;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS8;

  uint8_t res69[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL9;

  uint8_t res70[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT9;

  uint8_t res71[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ9;

  uint32_t DIEPDMA9;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS9;

  uint8_t res72[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL10;

  uint8_t res73[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT10;

  uint8_t res74[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ10;

  uint32_t DIEPDMA10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS10;

  uint8_t res75[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL11;

  uint8_t res76[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT11;

  uint8_t res77[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ11;

  uint32_t DIEPDMA11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS11;

  uint8_t res78[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL12;

  uint8_t res79[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT12;

  uint8_t res80[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ12;

  uint32_t DIEPDMA12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS12;

  uint8_t res81[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL13;

  uint8_t res82[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT13;

  uint8_t res83[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ13;

  uint32_t DIEPDMA13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS13;

  uint8_t res84[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL14;

  uint8_t res85[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT14;

  uint8_t res86[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ14;

  uint32_t DIEPDMA14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS14;

  uint8_t res87[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL15;

  uint8_t res88[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT15;

  uint8_t res89[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ15;

  uint32_t DIEPDMA15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS15;

  uint8_t res90[4];

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
      uint64_t STALL:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL0;

  uint8_t res91[4];

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

  uint8_t res92[4];

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

  uint32_t DOEPDMA0;
  uint8_t res93[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL1;

  uint8_t res94[4];

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

  uint8_t res95[4];

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

  uint32_t DOEPDMA1;
  uint8_t res96[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL2;

  uint8_t res97[4];

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

  uint8_t res98[4];

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

  uint32_t DOEPDMA2;
  uint8_t res99[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL3;

  uint8_t res100[4];

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

  uint8_t res101[4];

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

  uint32_t DOEPDMA3;
  uint8_t res102[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL4;

  uint8_t res103[4];

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
  } __attribute__((aligned(4))) DOEPINT4;

  uint8_t res104[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ4;

  uint32_t DOEPDMA4;
  uint8_t res105[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL5;

  uint8_t res106[4];

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
  } __attribute__((aligned(4))) DOEPINT5;

  uint8_t res107[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ5;

  uint32_t DOEPDMA5;
  uint8_t res108[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL6;

  uint8_t res109[4];

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
  } __attribute__((aligned(4))) DOEPINT6;

  uint8_t res110[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ6;

  uint32_t DOEPDMA6;
  uint8_t res111[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL7;

  uint8_t res112[4];

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
  } __attribute__((aligned(4))) DOEPINT7;

  uint8_t res113[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ7;

  uint32_t DOEPDMA7;
  uint8_t res114[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL8;

  uint8_t res115[4];

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
  } __attribute__((aligned(4))) DOEPINT8;

  uint8_t res116[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ8;

  uint32_t DOEPDMA8;
  uint8_t res117[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL9;

  uint8_t res118[4];

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
  } __attribute__((aligned(4))) DOEPINT9;

  uint8_t res119[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ9;

  uint32_t DOEPDMA9;
  uint8_t res120[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL10;

  uint8_t res121[4];

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
  } __attribute__((aligned(4))) DOEPINT10;

  uint8_t res122[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ10;

  uint32_t DOEPDMA10;
  uint8_t res123[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL11;

  uint8_t res124[4];

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
  } __attribute__((aligned(4))) DOEPINT11;

  uint8_t res125[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ11;

  uint32_t DOEPDMA11;
  uint8_t res126[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL12;

  uint8_t res127[4];

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
  } __attribute__((aligned(4))) DOEPINT12;

  uint8_t res128[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ12;

  uint32_t DOEPDMA12;
  uint8_t res129[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL13;

  uint8_t res130[4];

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
  } __attribute__((aligned(4))) DOEPINT13;

  uint8_t res131[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ13;

  uint32_t DOEPDMA13;
  uint8_t res132[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL14;

  uint8_t res133[4];

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
  } __attribute__((aligned(4))) DOEPINT14;

  uint8_t res134[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ14;

  uint32_t DOEPDMA14;
  uint8_t res135[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL15;

  uint8_t res136[4];

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
  } __attribute__((aligned(4))) DOEPINT15;

  uint8_t res137[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ15;

  uint32_t DOEPDMA15;
  uint8_t res138[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STPPCLK:1;
      uint64_t GATEHCLK:1;
      uint64_t reservedSpace0:3;
      uint64_t ENL1GTG:1;
      uint64_t PHYSLEEP:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCCTL;

};

#define USBFS (*(volatile struct USBFS_tag *) 0x40080000)

struct USBHS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t VBUSOVEN:1;
      uint64_t VBUSVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GVBUSCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GINTMSK:1;
      uint64_t HBSTLEN:4;
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TXFELVL:1;
      uint64_t PTXFELVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAHBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TOCAL:3;
      uint64_t reservedSpace0:3;
      uint64_t PHYSEL:1;
      uint64_t reservedSpace1:3;
      uint64_t TRDT:4;
      uint64_t reservedSpace2:1;
      uint64_t PHYLPCS:1;
      uint64_t reservedSpace3:1;
      uint64_t ULFSLS:1;
      uint64_t ULPIAR:1;
      uint64_t ULPICSM:1;
      uint64_t ULPIEVBUSD:1;
      uint64_t ULPIEVBUSI:1;
      uint64_t reservedSpace4:1;
      uint64_t PCCI:1;
      uint64_t PTCI:1;
      uint64_t ULPIPD:1;
      uint64_t reservedSpace5:3;
      uint64_t FHMOD:1;
      uint64_t FDMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GUSBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSRST:1;
      uint64_t HSRST:1;
      uint64_t FCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t RXFFLSH:1;
      uint64_t TXFFLSH:1;
      uint64_t TXFNUM:5;
      uint64_t reservedSpace1:19;
      uint64_t DMAREQ:1;
      uint64_t AHBIDL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRSTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMOD:1;
      uint64_t MMIS:1;
      uint64_t reservedSpace0:1;
      uint64_t SOF:1;
      uint64_t RXFNE:1;
      uint64_t NPTXFE:1;
      uint64_t GINAKEFF:1;
      uint64_t GONAKEFF:1;
      uint64_t reservedSpace1:2;
      uint64_t ESUSP:1;
      uint64_t USBSUSP:1;
      uint64_t USBRST:1;
      uint64_t ENUMDNE:1;
      uint64_t ISOODRP:1;
      uint64_t EOPF:1;
      uint64_t reservedSpace2:2;
      uint64_t IEPINT:1;
      uint64_t OEPINT:1;
      uint64_t IISOIXFR:1;
      uint64_t IPXFR_INCOMPISOOUT:1;
      uint64_t DATAFSUSP:1;
      uint64_t reservedSpace3:1;
      uint64_t HPRTINT:1;
      uint64_t HCINT:1;
      uint64_t PTXFE:1;
      uint64_t LPMINT:1;
      uint64_t CIDSCHG:1;
      uint64_t DISCINT:1;
      uint64_t VBUSVINT:1;
      uint64_t WKUINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MMISM:1;
      uint64_t reservedSpace1:1;
      uint64_t SOFM:1;
      uint64_t RXFNEM:1;
      uint64_t NPTXFEM:1;
      uint64_t GINAKEFFM:1;
      uint64_t GONAKEFFM:1;
      uint64_t reservedSpace2:2;
      uint64_t ESUSPM:1;
      uint64_t USBSUSPM:1;
      uint64_t USBRSTM:1;
      uint64_t ENUMDNEM:1;
      uint64_t ISOODRPM:1;
      uint64_t EOPFM:1;
      uint64_t reservedSpace3:2;
      uint64_t IEPIM:1;
      uint64_t OEPIM:1;
      uint64_t IISOIXFRM:1;
      uint64_t IPXFRM_INCOMPISOOUTM:1;
      uint64_t DATAFSUSPM:1;
      uint64_t reservedSpace4:1;
      uint64_t HPRTIM:1;
      uint64_t HCIM:1;
      uint64_t PTXFEM:1;
      uint64_t LPMINTM:1;
      uint64_t CIDSCHGM:1;
      uint64_t DISCIM:1;
      uint64_t VBUSVIM:1;
      uint64_t WKUIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM_EPNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNUM_EPNUM:4;
      uint64_t BCNT:11;
      uint64_t DPID:2;
      uint64_t PKTSTS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXSTSP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GRXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSA:16;
      uint64_t NPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HNPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NPTXFSAV:16;
      uint64_t NPTQXSAV:8;
      uint64_t NPTXQTOP:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HNPTXSTS;

  uint8_t res1[12];

  uint32_t CID;
  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMEN:1;
      uint64_t LPMACK:1;
      uint64_t BSEL:4;
      uint64_t REMWAKE:1;
      uint64_t L1SSEN:1;
      uint64_t BESLTHRS:4;
      uint64_t L1DSEN:1;
      uint64_t LPMRSP:2;
      uint64_t SLPSTS:1;
      uint64_t L1RSMOK:1;
      uint64_t LPMCHIDX:4;
      uint64_t LPMRCNT:3;
      uint64_t SENDLPM:1;
      uint64_t LPMRCNTSTS:3;
      uint64_t ENBSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLPMCFG;

  uint8_t res3[168];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXSA:16;
      uint64_t PTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXFSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXSA:16;
      uint64_t INEPTXFD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTXF15;

  uint8_t res4[704];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSLSPCS:2;
      uint64_t FSLSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCFG;

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
  } __attribute__((aligned(4))) HFNUM;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTXFSAVL:16;
      uint64_t PTXQSAV:8;
      uint64_t PTXQTOP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPTXSTS;

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

  uint8_t res6[36];

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
      uint64_t PWPR:1;
      uint64_t PTCTL:4;
      uint64_t PSPD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPRT;

  uint8_t res7[188];

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
  } __attribute__((aligned(4))) HCCHAR0;

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
  } __attribute__((aligned(4))) HCSPLT0;

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
  } __attribute__((aligned(4))) HCINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ0;

  uint32_t HCDMA0;
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
  } __attribute__((aligned(4))) HCCHAR1;

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
  } __attribute__((aligned(4))) HCSPLT1;

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
  } __attribute__((aligned(4))) HCINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ1;

  uint32_t HCDMA1;
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
  } __attribute__((aligned(4))) HCCHAR2;

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
  } __attribute__((aligned(4))) HCSPLT2;

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
  } __attribute__((aligned(4))) HCINT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ2;

  uint32_t HCDMA2;
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
  } __attribute__((aligned(4))) HCCHAR3;

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
  } __attribute__((aligned(4))) HCSPLT3;

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
  } __attribute__((aligned(4))) HCINT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ3;

  uint32_t HCDMA3;
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
  } __attribute__((aligned(4))) HCCHAR4;

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
  } __attribute__((aligned(4))) HCSPLT4;

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
  } __attribute__((aligned(4))) HCINT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ4;

  uint32_t HCDMA4;
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
  } __attribute__((aligned(4))) HCCHAR5;

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
  } __attribute__((aligned(4))) HCSPLT5;

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
  } __attribute__((aligned(4))) HCINT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ5;

  uint32_t HCDMA5;
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
  } __attribute__((aligned(4))) HCCHAR6;

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
  } __attribute__((aligned(4))) HCSPLT6;

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
  } __attribute__((aligned(4))) HCINT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ6;

  uint32_t HCDMA6;
  uint8_t res14[8];

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
  } __attribute__((aligned(4))) HCCHAR7;

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
  } __attribute__((aligned(4))) HCSPLT7;

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
  } __attribute__((aligned(4))) HCINT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ7;

  uint32_t HCDMA7;
  uint8_t res15[8];

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
  } __attribute__((aligned(4))) HCCHAR8;

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
  } __attribute__((aligned(4))) HCSPLT8;

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
  } __attribute__((aligned(4))) HCINT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ8;

  uint32_t HCDMA8;
  uint8_t res16[8];

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
  } __attribute__((aligned(4))) HCCHAR9;

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
  } __attribute__((aligned(4))) HCSPLT9;

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
  } __attribute__((aligned(4))) HCINT9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ9;

  uint32_t HCDMA9;
  uint8_t res17[8];

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
  } __attribute__((aligned(4))) HCCHAR10;

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
  } __attribute__((aligned(4))) HCSPLT10;

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
  } __attribute__((aligned(4))) HCINT10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ10;

  uint32_t HCDMA10;
  uint8_t res18[8];

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
  } __attribute__((aligned(4))) HCCHAR11;

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
  } __attribute__((aligned(4))) HCSPLT11;

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
  } __attribute__((aligned(4))) HCINT11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ11;

  uint32_t HCDMA11;
  uint8_t res19[8];

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
  } __attribute__((aligned(4))) HCCHAR12;

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
  } __attribute__((aligned(4))) HCSPLT12;

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
  } __attribute__((aligned(4))) HCINT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ12;

  uint32_t HCDMA12;
  uint8_t res20[8];

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
  } __attribute__((aligned(4))) HCCHAR13;

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
  } __attribute__((aligned(4))) HCSPLT13;

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
  } __attribute__((aligned(4))) HCINT13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ13;

  uint32_t HCDMA13;
  uint8_t res21[8];

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
  } __attribute__((aligned(4))) HCCHAR14;

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
  } __attribute__((aligned(4))) HCSPLT14;

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
  } __attribute__((aligned(4))) HCINT14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ14;

  uint32_t HCDMA14;
  uint8_t res22[8];

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
  } __attribute__((aligned(4))) HCCHAR15;

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
  } __attribute__((aligned(4))) HCSPLT15;

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
  } __attribute__((aligned(4))) HCINT15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t CHHM:1;
      uint64_t AHBERRM:1;
      uint64_t STALLM:1;
      uint64_t NAKM:1;
      uint64_t ACKM:1;
      uint64_t NYETM:1;
      uint64_t TXERRM:1;
      uint64_t BBERRM:1;
      uint64_t FRMORM:1;
      uint64_t DTERRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCINTMSK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t DPID:2;
      uint64_t DOPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HCTSIZ15;

  uint32_t HCDMA15;
  uint8_t res23[264];

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
  } __attribute__((aligned(4))) DCFG;

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
  } __attribute__((aligned(4))) DCTL;

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
      uint64_t LNSTS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSTS;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t TTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
      uint64_t reservedSpace1:1;
      uint64_t TXFURM:1;
      uint64_t reservedSpace2:4;
      uint64_t NAKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPMSK;

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
      uint64_t reservedSpace3:5;
      uint64_t NYETM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINT:16;
      uint64_t OEPINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPINTM:16;
      uint64_t OEPINTM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAINTMSK;

  uint8_t res25[16];

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
  } __attribute__((aligned(4))) DTHRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTXFEM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPEMPMSK;

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
  } __attribute__((aligned(4))) DEACHINT;

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
  } __attribute__((aligned(4))) DEACHINTMSK;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRCM:1;
      uint64_t EPDM:1;
      uint64_t reservedSpace0:1;
      uint64_t TOM:1;
      uint64_t TTXFEMSK:1;
      uint64_t INEPNMM:1;
      uint64_t INEPNEM:1;
      uint64_t reservedSpace1:1;
      uint64_t TXFURM:1;
      uint64_t reservedSpace2:4;
      uint64_t NAKM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPEACHMSK1;

  uint8_t res27[60];

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
      uint64_t reservedSpace3:5;
      uint64_t NYETM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPEACHMSK1;

  uint8_t res28[120];

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
  } __attribute__((aligned(4))) DIEPCTL0;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT0;

  uint8_t res30[4];

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

  uint32_t DIEPDMA0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS0;

  uint8_t res31[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL1;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT1;

  uint8_t res33[4];

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

  uint32_t DIEPDMA1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS1;

  uint8_t res34[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL2;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT2;

  uint8_t res36[4];

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

  uint32_t DIEPDMA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS2;

  uint8_t res37[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL3;

  uint8_t res38[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT3;

  uint8_t res39[4];

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

  uint32_t DIEPDMA3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS3;

  uint8_t res40[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL4;

  uint8_t res41[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT4;

  uint8_t res42[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ4;

  uint32_t DIEPDMA4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS4;

  uint8_t res43[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL5;

  uint8_t res44[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT5;

  uint8_t res45[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ5;

  uint32_t DIEPDMA5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS5;

  uint8_t res46[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL6;

  uint8_t res47[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT6;

  uint8_t res48[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ6;

  uint32_t DIEPDMA6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS6;

  uint8_t res49[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL7;

  uint8_t res50[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT7;

  uint8_t res51[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ7;

  uint32_t DIEPDMA7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS7;

  uint8_t res52[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL8;

  uint8_t res53[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT8;

  uint8_t res54[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ8;

  uint32_t DIEPDMA8;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS8;

  uint8_t res55[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL9;

  uint8_t res56[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT9;

  uint8_t res57[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ9;

  uint32_t DIEPDMA9;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS9;

  uint8_t res58[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL10;

  uint8_t res59[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT10;

  uint8_t res60[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ10;

  uint32_t DIEPDMA10;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS10;

  uint8_t res61[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL11;

  uint8_t res62[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT11;

  uint8_t res63[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ11;

  uint32_t DIEPDMA11;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS11;

  uint8_t res64[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL12;

  uint8_t res65[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT12;

  uint8_t res66[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ12;

  uint32_t DIEPDMA12;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS12;

  uint8_t res67[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL13;

  uint8_t res68[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT13;

  uint8_t res69[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ13;

  uint32_t DIEPDMA13;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS13;

  uint8_t res70[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL14;

  uint8_t res71[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT14;

  uint8_t res72[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ14;

  uint32_t DIEPDMA14;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS14;

  uint8_t res73[4];

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
      uint64_t STALL:1;
      uint64_t TXFNUM:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID_SEVNFRM:1;
      uint64_t SODDFRM:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPCTL15;

  uint8_t res74[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRC:1;
      uint64_t EPDISD:1;
      uint64_t reservedSpace0:1;
      uint64_t TOC:1;
      uint64_t TTXFE:1;
      uint64_t reservedSpace1:1;
      uint64_t INEPNE:1;
      uint64_t TXFE:1;
      uint64_t TXFIFOUDRN:1;
      uint64_t reservedSpace2:2;
      uint64_t PKTDRPSTS:1;
      uint64_t BERR:1;
      uint64_t NAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPINT15;

  uint8_t res75[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t MCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEPTSIZ15;

  uint32_t DIEPDMA15;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INEPTFSAV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTXFSTS15;

  uint8_t res76[4];

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
      uint64_t STALL:1;
      uint64_t reservedSpace2:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t reservedSpace3:2;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL0;

  uint8_t res77[4];

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
  } __attribute__((aligned(4))) DOEPINT0;

  uint8_t res78[4];

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

  uint32_t DOEPDMA0;
  uint8_t res79[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL1;

  uint8_t res80[4];

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
  } __attribute__((aligned(4))) DOEPINT1;

  uint8_t res81[4];

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

  uint32_t DOEPDMA1;
  uint8_t res82[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL2;

  uint8_t res83[4];

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
  } __attribute__((aligned(4))) DOEPINT2;

  uint8_t res84[4];

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

  uint32_t DOEPDMA2;
  uint8_t res85[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL3;

  uint8_t res86[4];

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
  } __attribute__((aligned(4))) DOEPINT3;

  uint8_t res87[4];

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

  uint32_t DOEPDMA3;
  uint8_t res88[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL4;

  uint8_t res89[4];

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
  } __attribute__((aligned(4))) DOEPINT4;

  uint8_t res90[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ4;

  uint32_t DOEPDMA4;
  uint8_t res91[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL5;

  uint8_t res92[4];

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
  } __attribute__((aligned(4))) DOEPINT5;

  uint8_t res93[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ5;

  uint32_t DOEPDMA5;
  uint8_t res94[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL6;

  uint8_t res95[4];

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
  } __attribute__((aligned(4))) DOEPINT6;

  uint8_t res96[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ6;

  uint32_t DOEPDMA6;
  uint8_t res97[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL7;

  uint8_t res98[4];

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
  } __attribute__((aligned(4))) DOEPINT7;

  uint8_t res99[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ7;

  uint32_t DOEPDMA7;
  uint8_t res100[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL8;

  uint8_t res101[4];

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
  } __attribute__((aligned(4))) DOEPINT8;

  uint8_t res102[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ8;

  uint32_t DOEPDMA8;
  uint8_t res103[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL9;

  uint8_t res104[4];

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
  } __attribute__((aligned(4))) DOEPINT9;

  uint8_t res105[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ9;

  uint32_t DOEPDMA9;
  uint8_t res106[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL10;

  uint8_t res107[4];

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
  } __attribute__((aligned(4))) DOEPINT10;

  uint8_t res108[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ10;

  uint32_t DOEPDMA10;
  uint8_t res109[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL11;

  uint8_t res110[4];

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
  } __attribute__((aligned(4))) DOEPINT11;

  uint8_t res111[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ11;

  uint32_t DOEPDMA11;
  uint8_t res112[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL12;

  uint8_t res113[4];

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
  } __attribute__((aligned(4))) DOEPINT12;

  uint8_t res114[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ12;

  uint32_t DOEPDMA12;
  uint8_t res115[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL13;

  uint8_t res116[4];

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
  } __attribute__((aligned(4))) DOEPINT13;

  uint8_t res117[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ13;

  uint32_t DOEPDMA13;
  uint8_t res118[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL14;

  uint8_t res119[4];

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
  } __attribute__((aligned(4))) DOEPINT14;

  uint8_t res120[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ14;

  uint32_t DOEPDMA14;
  uint8_t res121[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPSIZ:11;
      uint64_t reservedSpace0:4;
      uint64_t USBAEP:1;
      uint64_t DPID:1;
      uint64_t NAKSTS:1;
      uint64_t EPTYP:2;
      uint64_t SNPM:1;
      uint64_t STALL:1;
      uint64_t reservedSpace1:4;
      uint64_t CNAK:1;
      uint64_t SNAK:1;
      uint64_t SD0PID:1;
      uint64_t SD1PID:1;
      uint64_t EPDIS:1;
      uint64_t EPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPCTL15;

  uint8_t res122[4];

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
  } __attribute__((aligned(4))) DOEPINT15;

  uint8_t res123[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XFRSIZ:19;
      uint64_t PKTCNT:10;
      uint64_t RXDPID_STUPCNT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOEPTSIZ15;

  uint32_t DOEPDMA15;
  uint8_t res124[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STPPCLK:1;
      uint64_t GATEHCLK:1;
      uint64_t reservedSpace0:3;
      uint64_t ENL1GTG:1;
      uint64_t PHYSLEEP:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCCTL;

};

#define USBHS (*(volatile struct USBHS_tag *) 0x400c0000)

struct WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERI:2;
      uint64_t reservedSpace0:2;
      uint64_t CKS:4;
      uint64_t WDPT:4;
      uint64_t reservedSpace1:4;
      uint64_t SLPOFF:1;
      uint64_t reservedSpace2:14;
      uint64_t ITS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
      uint64_t UDF:1;
      uint64_t REF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR;

};

#define WDT (*(volatile struct WDT_tag *) 0x40049000)

