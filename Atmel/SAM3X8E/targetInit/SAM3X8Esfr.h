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

struct M3_Peripherals_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Auxiliary_Control_Register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t INTEN:1;
      uint64_t CLK_SRC:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Control_and_Status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Reload_Value;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Current_Value;

  uint8_t res1[228];

  uint32_t Interrupt_0_to_31_Set_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Enable;

  uint8_t res2[120];

  uint32_t Interrupt_0_to_31_Clear_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Enable;

  uint8_t res3[120];

  uint32_t Interrupt_0_to_31_Set_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Pending;

  uint8_t res4[120];

  uint32_t Interrupt_0_to_31_Clear_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Pending;

  uint8_t res5[120];

  uint32_t Interrupt_0_to_31_Active_Bit;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_63_Active_Bit;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_0_to_3_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_4_to_7_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_8_to_11_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_12_to_15_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_16_to_19_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_20_to_23_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_24_to_27_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_28_to_31_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_35_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_36_to_39_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_40_to_43_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_44_to_47_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_48_to_51_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_52_to_53_Priority;

  uint8_t res7[2248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:4;
      uint64_t PARTNO:12;
      uint64_t CON:4;
      uint64_t VAR:4;
      uint64_t IMP:8;
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
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:20;
      uint64_t BASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTABLE;

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
  } __attribute__((aligned(4))) SYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETHR:1;
      uint64_t MAINPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t MEM:3;
      uint64_t reservedSpace1:5;
      uint64_t BUS:3;
      uint64_t reservedSpace2:5;
      uint64_t USAGE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SVC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DEBUG:3;
      uint64_t reservedSpace1:13;
      uint64_t PENDSV:3;
      uint64_t reservedSpace2:5;
      uint64_t TICK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI3;

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
  } __attribute__((aligned(4))) SYSHNDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IERR:1;
      uint64_t DERR:1;
      uint64_t reservedSpace0:1;
      uint64_t MUSTKE:1;
      uint64_t MSTKE:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARV:1;
      uint64_t IBUS:1;
      uint64_t PRECISE:1;
      uint64_t IMPRE:1;
      uint64_t BUSTKE:1;
      uint64_t BSTKE:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARV:1;
      uint64_t UNDEF:1;
      uint64_t INVSTAT:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECT:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFAULTSTAT;

  uint8_t res8[4];

  uint32_t Mem_Manage_Address;
  uint32_t Bus_Fault_Address;
  uint8_t res9[84];

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
  } __attribute__((aligned(4))) MPUTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMBER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUNUMBER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE;

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
  } __attribute__((aligned(4))) MPUATTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE1;

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
  } __attribute__((aligned(4))) MPUATTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE2;

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
  } __attribute__((aligned(4))) MPUATTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE3;

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
  } __attribute__((aligned(4))) MPUATTR3;

  uint8_t res10[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Software_Trigger_Interrupt_Register;

};

#define M3_Peripherals (*(volatile struct M3_Peripherals_tag *) 0xe000e008)

struct HSMCI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCIEN:1;
      uint64_t MCIDIS:1;
      uint64_t PWSEN:1;
      uint64_t PWSDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t PWSDIV:3;
      uint64_t RDPROOF:1;
      uint64_t WRPROOF:1;
      uint64_t FBYTE:1;
      uint64_t PADV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTOCYC:4;
      uint64_t DTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDCSEL:2;
      uint64_t reservedSpace0:4;
      uint64_t SDCBUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_ARGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDNB:6;
      uint64_t RSPTYP:2;
      uint64_t SPCMD:3;
      uint64_t OPDCMD:1;
      uint64_t MAXLAT:1;
      uint64_t reservedSpace0:3;
      uint64_t TRCMD:2;
      uint64_t TRDIR:1;
      uint64_t TRTYP:3;
      uint64_t reservedSpace1:2;
      uint64_t IOSPCMD:2;
      uint64_t ATACS:1;
      uint64_t BOOT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCNT:16;
      uint64_t BLKLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_BLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTOCYC:4;
      uint64_t CSTOMUL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CSTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RSPR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_TDR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t BLKE:1;
      uint64_t DTIP:1;
      uint64_t NOTBUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t SDIOIRQforSlotA:1;
      uint64_t SDIOIRQforSlotB:1;
      uint64_t reservedSpace1:2;
      uint64_t SDIOWAIT:1;
      uint64_t CSRCV:1;
      uint64_t reservedSpace2:2;
      uint64_t RINDE:1;
      uint64_t RDIRE:1;
      uint64_t RCRCE:1;
      uint64_t RENDE:1;
      uint64_t RTOE:1;
      uint64_t DCRCE:1;
      uint64_t DTOE:1;
      uint64_t CSTOE:1;
      uint64_t BLKOVRE:1;
      uint64_t DMADONE:1;
      uint64_t FIFOEMPTY:1;
      uint64_t XFRDONE:1;
      uint64_t ACKRCV:1;
      uint64_t ACKRCVE:1;
      uint64_t OVRE:1;
      uint64_t UNRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:2;
      uint64_t reservedSpace0:2;
      uint64_t CHKSIZE:1;
      uint64_t reservedSpace1:3;
      uint64_t DMAEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ROPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_DMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t FERRCTRL:1;
      uint64_t reservedSpace1:3;
      uint64_t HSMODE:1;
      uint64_t reservedSpace2:3;
      uint64_t LSYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_CFG;

  uint8_t res1[140];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_WPSR;

  uint8_t res2[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSMCI_FIFO_255;

};

#define HSMCI (*(volatile struct HSMCI_tag *) 0x40000000)

struct SSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t reservedSpace1:5;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_CMR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t LOOP:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t reservedSpace2:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace3:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKS:2;
      uint64_t CKO:3;
      uint64_t CKI:1;
      uint64_t CKG:2;
      uint64_t START:4;
      uint64_t reservedSpace0:4;
      uint64_t STTDLY:8;
      uint64_t PERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TCMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATLEN:5;
      uint64_t DATDEF:1;
      uint64_t reservedSpace0:1;
      uint64_t MSBF:1;
      uint64_t DATNB:4;
      uint64_t reservedSpace1:4;
      uint64_t FSLEN:4;
      uint64_t FSOS:3;
      uint64_t FSDEN:1;
      uint64_t FSEDGE:1;
      uint64_t reservedSpace2:3;
      uint64_t FSLEN_EXT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_THR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSDAT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_TSHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_RC1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
      uint64_t reservedSpace2:4;
      uint64_t TXEN:1;
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace0:2;
      uint64_t RXRDY:1;
      uint64_t OVRUN:1;
      uint64_t reservedSpace1:2;
      uint64_t CP0:1;
      uint64_t CP1:1;
      uint64_t TXSYN:1;
      uint64_t RXSYN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_IMR;

  uint8_t res2[148];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSC_WPMR;

  uint32_t SSC_WPSR;
};

#define SSC (*(volatile struct SSC_tag *) 0x40004000)

struct SPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIEN:1;
      uint64_t SPIDIS:1;
      uint64_t reservedSpace0:5;
      uint64_t SWRST:1;
      uint64_t reservedSpace1:16;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTR:1;
      uint64_t PS:1;
      uint64_t PCSDEC:1;
      uint64_t reservedSpace0:1;
      uint64_t MODFDIS:1;
      uint64_t WDRBT:1;
      uint64_t reservedSpace1:1;
      uint64_t LLB:1;
      uint64_t reservedSpace2:8;
      uint64_t PCS:4;
      uint64_t reservedSpace3:4;
      uint64_t DLYBCS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:16;
      uint64_t PCS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:16;
      uint64_t PCS:4;
      uint64_t reservedSpace0:4;
      uint64_t LASTXFER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_TDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
      uint64_t reservedSpace1:5;
      uint64_t SPIENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRF:1;
      uint64_t TDRE:1;
      uint64_t MODF:1;
      uint64_t OVRES:1;
      uint64_t reservedSpace0:4;
      uint64_t NSSR:1;
      uint64_t TXEMPTY:1;
      uint64_t UNDES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_IMR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOL:1;
      uint64_t NCPHA:1;
      uint64_t CSNAAT:1;
      uint64_t CSAAT:1;
      uint64_t BITS:4;
      uint64_t SCBR:8;
      uint64_t DLYBS:8;
      uint64_t DLYBCT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CSR_3;

  uint8_t res1[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_WPSR;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40008000)

struct TWI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI0_PTSR;

};

#define TWI0 (*(volatile struct TWI0_tag *) 0x4008c000)

struct TWI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t MSEN:1;
      uint64_t MSDIS:1;
      uint64_t SVEN:1;
      uint64_t SVDIS:1;
      uint64_t QUICK:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t IADRSZ:2;
      uint64_t reservedSpace1:2;
      uint64_t MREAD:1;
      uint64_t reservedSpace2:3;
      uint64_t DADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_MMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IADR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLDIV:8;
      uint64_t CHDIV:8;
      uint64_t CKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_CWGR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SVREAD:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace0:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCLWS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCOMP:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SVACC:1;
      uint64_t GACC:1;
      uint64_t OVRE:1;
      uint64_t reservedSpace1:1;
      uint64_t NACK:1;
      uint64_t ARBLST:1;
      uint64_t SCL_WS:1;
      uint64_t EOSACC:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t RXBUFF:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_THR;

  uint8_t res1[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWI1_PTSR;

};

#define TWI1 (*(volatile struct TWI1_tag *) 0x40090000)

struct PWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PREA:4;
      uint64_t reservedSpace0:4;
      uint64_t DIVB:8;
      uint64_t PREB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHID0:1;
      uint64_t CHID1:1;
      uint64_t CHID2:1;
      uint64_t CHID3:1;
      uint64_t CHID4:1;
      uint64_t CHID5:1;
      uint64_t CHID6:1;
      uint64_t CHID7:1;
      uint64_t reservedSpace0:8;
      uint64_t FCHID0:1;
      uint64_t FCHID1:1;
      uint64_t FCHID2:1;
      uint64_t FCHID3:1;
      uint64_t FCHID4:1;
      uint64_t FCHID5:1;
      uint64_t FCHID6:1;
      uint64_t FCHID7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:1;
      uint64_t SYNC1:1;
      uint64_t SYNC2:1;
      uint64_t SYNC3:1;
      uint64_t SYNC4:1;
      uint64_t SYNC5:1;
      uint64_t SYNC6:1;
      uint64_t SYNC7:1;
      uint64_t reservedSpace0:8;
      uint64_t UPDM:2;
      uint64_t reservedSpace1:2;
      uint64_t PTRM:1;
      uint64_t PTRCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCM;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDULOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPR:4;
      uint64_t UPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SCUPUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_IMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRDY:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
      uint64_t UNRE:1;
      uint64_t reservedSpace0:4;
      uint64_t CMPM0:1;
      uint64_t CMPM1:1;
      uint64_t CMPM2:1;
      uint64_t CMPM3:1;
      uint64_t CMPM4:1;
      uint64_t CMPM5:1;
      uint64_t CMPM6:1;
      uint64_t CMPM7:1;
      uint64_t CMPU0:1;
      uint64_t CMPU1:1;
      uint64_t CMPU2:1;
      uint64_t CMPU3:1;
      uint64_t CMPU4:1;
      uint64_t CMPU5:1;
      uint64_t CMPU6:1;
      uint64_t CMPU7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ISR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OOVH0:1;
      uint64_t OOVH1:1;
      uint64_t OOVH2:1;
      uint64_t OOVH3:1;
      uint64_t OOVH4:1;
      uint64_t OOVH5:1;
      uint64_t OOVH6:1;
      uint64_t OOVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OOVL0:1;
      uint64_t OOVL1:1;
      uint64_t OOVL2:1;
      uint64_t OOVL3:1;
      uint64_t OOVL4:1;
      uint64_t OOVL5:1;
      uint64_t OOVL6:1;
      uint64_t OOVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OOV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSH0:1;
      uint64_t OSH1:1;
      uint64_t OSH2:1;
      uint64_t OSH3:1;
      uint64_t OSH4:1;
      uint64_t OSH5:1;
      uint64_t OSH6:1;
      uint64_t OSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSL0:1;
      uint64_t OSL1:1;
      uint64_t OSL2:1;
      uint64_t OSL3:1;
      uint64_t OSL4:1;
      uint64_t OSL5:1;
      uint64_t OSL6:1;
      uint64_t OSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSH0:1;
      uint64_t OSSH1:1;
      uint64_t OSSH2:1;
      uint64_t OSSH3:1;
      uint64_t OSSH4:1;
      uint64_t OSSH5:1;
      uint64_t OSSH6:1;
      uint64_t OSSH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSL0:1;
      uint64_t OSSL1:1;
      uint64_t OSSL2:1;
      uint64_t OSSL3:1;
      uint64_t OSSL4:1;
      uint64_t OSSL5:1;
      uint64_t OSSL6:1;
      uint64_t OSSL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCH0:1;
      uint64_t OSCH1:1;
      uint64_t OSCH2:1;
      uint64_t OSCH3:1;
      uint64_t OSCH4:1;
      uint64_t OSCH5:1;
      uint64_t OSCH6:1;
      uint64_t OSCH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCL0:1;
      uint64_t OSCL1:1;
      uint64_t OSCL2:1;
      uint64_t OSCL3:1;
      uint64_t OSCL4:1;
      uint64_t OSCL5:1;
      uint64_t OSCL6:1;
      uint64_t OSCL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSSUPH0:1;
      uint64_t OSSUPH1:1;
      uint64_t OSSUPH2:1;
      uint64_t OSSUPH3:1;
      uint64_t OSSUPH4:1;
      uint64_t OSSUPH5:1;
      uint64_t OSSUPH6:1;
      uint64_t OSSUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSSUPL0:1;
      uint64_t OSSUPL1:1;
      uint64_t OSSUPL2:1;
      uint64_t OSSUPL3:1;
      uint64_t OSSUPL4:1;
      uint64_t OSSUPL5:1;
      uint64_t OSSUPL6:1;
      uint64_t OSSUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSSUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCUPH0:1;
      uint64_t OSCUPH1:1;
      uint64_t OSCUPH2:1;
      uint64_t OSCUPH3:1;
      uint64_t OSCUPH4:1;
      uint64_t OSCUPH5:1;
      uint64_t OSCUPH6:1;
      uint64_t OSCUPH7:1;
      uint64_t reservedSpace0:8;
      uint64_t OSCUPL0:1;
      uint64_t OSCUPL1:1;
      uint64_t OSCUPL2:1;
      uint64_t OSCUPL3:1;
      uint64_t OSCUPL4:1;
      uint64_t OSCUPL5:1;
      uint64_t OSCUPL6:1;
      uint64_t OSCUPL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_OSCUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPOL:8;
      uint64_t FMOD:8;
      uint64_t FFIL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIV:8;
      uint64_t FS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPVH0:1;
      uint64_t FPVH1:1;
      uint64_t FPVH2:1;
      uint64_t FPVH3:1;
      uint64_t FPVH4:1;
      uint64_t FPVH5:1;
      uint64_t FPVH6:1;
      uint64_t FPVH7:1;
      uint64_t reservedSpace0:8;
      uint64_t FPVL0:1;
      uint64_t FPVL1:1;
      uint64_t FPVL2:1;
      uint64_t FPVL3:1;
      uint64_t FPVL4:1;
      uint64_t FPVL5:1;
      uint64_t FPVL6:1;
      uint64_t FPVL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE0:8;
      uint64_t FPE1:8;
      uint64_t FPE2:8;
      uint64_t FPE3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPE4:8;
      uint64_t FPE5:8;
      uint64_t FPE6:8;
      uint64_t FPE7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_FPE2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSEL0:1;
      uint64_t CSEL1:1;
      uint64_t CSEL2:1;
      uint64_t CSEL3:1;
      uint64_t CSEL4:1;
      uint64_t CSEL5:1;
      uint64_t CSEL6:1;
      uint64_t CSEL7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_ELMR_1;

  uint8_t res2[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCEN0:1;
      uint64_t GCEN1:1;
      uint64_t GCEN2:1;
      uint64_t GCEN3:1;
      uint64_t reservedSpace0:12;
      uint64_t DOWN0:1;
      uint64_t DOWN1:1;
      uint64_t DOWN2:1;
      uint64_t DOWN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_SMMR;

  uint8_t res3[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPCMD:2;
      uint64_t WPRG0:1;
      uint64_t WPRG1:1;
      uint64_t WPRG2:1;
      uint64_t WPRG3:1;
      uint64_t WPRG4:1;
      uint64_t WPRG5:1;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPSWS0:1;
      uint64_t WPSWS1:1;
      uint64_t WPSWS2:1;
      uint64_t WPSWS3:1;
      uint64_t WPSWS4:1;
      uint64_t WPSWS5:1;
      uint64_t reservedSpace0:1;
      uint64_t WPVS:1;
      uint64_t WPHWS0:1;
      uint64_t WPHWS1:1;
      uint64_t WPHWS2:1;
      uint64_t WPHWS3:1;
      uint64_t WPHWS4:1;
      uint64_t WPHWS5:1;
      uint64_t reservedSpace1:2;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_PTSR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:24;
      uint64_t CVM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPV7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVUPD:24;
      uint64_t CVMUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPVUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t reservedSpace0:3;
      uint64_t CTR:4;
      uint64_t CPR:4;
      uint64_t CPRCNT:4;
      uint64_t CUPR:4;
      uint64_t CUPRCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENUPD:1;
      uint64_t reservedSpace0:3;
      uint64_t CTRUPD:4;
      uint64_t CPRUPD:4;
      uint64_t reservedSpace1:4;
      uint64_t CUPRUPD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMPMUPD7;

  uint8_t res7[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRE:4;
      uint64_t reservedSpace0:4;
      uint64_t CALG:1;
      uint64_t CPOL:1;
      uint64_t CES:1;
      uint64_t reservedSpace1:5;
      uint64_t DTE:1;
      uint64_t DTHI:1;
      uint64_t DTLI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTY7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDTYUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CDTYUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRDUPD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CPRDUPD7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CCNT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTH:16;
      uint64_t DTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DT7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTHUPD:16;
      uint64_t DTLUPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_DTUPD7;

};

#define PWM (*(volatile struct PWM_tag *) 0x40094000)

struct EMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LB:1;
      uint64_t LLB:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t MPE:1;
      uint64_t CLRSTAT:1;
      uint64_t INCSTAT:1;
      uint64_t WESTAT:1;
      uint64_t BP:1;
      uint64_t TSTART:1;
      uint64_t THALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPD:1;
      uint64_t FD:1;
      uint64_t reservedSpace0:1;
      uint64_t JFRAME:1;
      uint64_t CAF:1;
      uint64_t NBC:1;
      uint64_t MTI:1;
      uint64_t UNI:1;
      uint64_t BIG:1;
      uint64_t reservedSpace1:1;
      uint64_t CLK:2;
      uint64_t RTY:1;
      uint64_t PAE:1;
      uint64_t RBOF:2;
      uint64_t RLCE:1;
      uint64_t DRFCS:1;
      uint64_t EFRHD:1;
      uint64_t IRXFCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MDIO:1;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_NSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UBR:1;
      uint64_t COL:1;
      uint64_t RLES:1;
      uint64_t TGO:1;
      uint64_t BEX:1;
      uint64_t COMP:1;
      uint64_t UND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TBQP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNA:1;
      uint64_t REC:1;
      uint64_t OVR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLEX:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFRE:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:1;
      uint64_t RCOMP:1;
      uint64_t RXUBR:1;
      uint64_t TXUBR:1;
      uint64_t TUND:1;
      uint64_t RLE:1;
      uint64_t TXERR:1;
      uint64_t TCOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t ROVR:1;
      uint64_t HRESP:1;
      uint64_t PFR:1;
      uint64_t PTZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t CODE:2;
      uint64_t REGA:5;
      uint64_t PHYA:5;
      uint64_t RW:2;
      uint64_t SOF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_PFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTOK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_MCF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_FCSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_DTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_LCOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXCOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ECOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUND:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TUND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_CSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROVR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ROV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_ELE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RJB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RJA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_STE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_RLE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_HRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA1T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA2T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA3T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_SA4T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_TID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMII:1;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMAC_USRIO;

};

#define EMAC (*(volatile struct EMAC_tag *) 0x400b0000)

struct CAN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN0_MCR7;

};

#define CAN0 (*(volatile struct CAN0_tag *) 0x400b4000)

struct CAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANEN:1;
      uint64_t LPM:1;
      uint64_t ABM:1;
      uint64_t OVL:1;
      uint64_t TEOF:1;
      uint64_t TTM:1;
      uint64_t TIMFRZ:1;
      uint64_t DRPT:1;
      uint64_t reservedSpace0:16;
      uint64_t RXSYNC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:8;
      uint64_t ERRA:1;
      uint64_t WARN:1;
      uint64_t ERRP:1;
      uint64_t BOFF:1;
      uint64_t SLEEP:1;
      uint64_t WAKEUP:1;
      uint64_t TOVF:1;
      uint64_t TSTP:1;
      uint64_t CERR:1;
      uint64_t SERR:1;
      uint64_t AERR:1;
      uint64_t FERR:1;
      uint64_t BERR:1;
      uint64_t RBSY:1;
      uint64_t TBSY:1;
      uint64_t OVLSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE2:3;
      uint64_t reservedSpace0:1;
      uint64_t PHASE1:3;
      uint64_t reservedSpace1:1;
      uint64_t PROPAG:3;
      uint64_t reservedSpace2:1;
      uint64_t SJW:2;
      uint64_t reservedSpace3:2;
      uint64_t BRP:7;
      uint64_t reservedSpace4:1;
      uint64_t SMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TIMESTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REC:8;
      uint64_t reservedSpace0:8;
      uint64_t TEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
      uint64_t reservedSpace0:23;
      uint64_t TIMRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MB0:1;
      uint64_t MB1:1;
      uint64_t MB2:1;
      uint64_t MB3:1;
      uint64_t MB4:1;
      uint64_t MB5:1;
      uint64_t MB6:1;
      uint64_t MB7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_ACR;

  uint8_t res0[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_WPSR;

  uint8_t res1[276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMEMARK:16;
      uint64_t PRIOR:4;
      uint64_t reservedSpace0:4;
      uint64_t MOT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MAM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDvB:18;
      uint64_t MIDvA:11;
      uint64_t MIDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFID:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MFID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTIMESTAMP:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace0:1;
      uint64_t MABT:1;
      uint64_t MRDY:1;
      uint64_t MMI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MDH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MDLC:4;
      uint64_t MRTR:1;
      uint64_t reservedSpace1:1;
      uint64_t MACR:1;
      uint64_t MTCR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN1_MCR7;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x400b8000)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t KEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ISR;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ODATA;

};

#define TRNG (*(volatile struct TRNG_tag *) 0x400bc000)

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t SLEEP:1;
      uint64_t FWUP:1;
      uint64_t FREERUN:1;
      uint64_t PRESCAL:8;
      uint64_t STARTUP:4;
      uint64_t SETTLING:2;
      uint64_t reservedSpace1:1;
      uint64_t ANACH:1;
      uint64_t TRACKTIM:4;
      uint64_t TRANSFER:2;
      uint64_t reservedSpace2:1;
      uint64_t USEQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH1:4;
      uint64_t USCH2:4;
      uint64_t USCH3:4;
      uint64_t USCH4:4;
      uint64_t USCH5:4;
      uint64_t USCH6:4;
      uint64_t USCH7:4;
      uint64_t USCH8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USCH9:4;
      uint64_t USCH10:4;
      uint64_t USCH11:4;
      uint64_t USCH12:4;
      uint64_t USCH13:4;
      uint64_t USCH14:4;
      uint64_t USCH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_SEQR2;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHER;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHDR;

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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CHSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDATA:12;
      uint64_t CHNB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_LCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC0:1;
      uint64_t EOC1:1;
      uint64_t EOC2:1;
      uint64_t EOC3:1;
      uint64_t EOC4:1;
      uint64_t EOC5:1;
      uint64_t EOC6:1;
      uint64_t EOC7:1;
      uint64_t EOC8:1;
      uint64_t EOC9:1;
      uint64_t EOC10:1;
      uint64_t EOC11:1;
      uint64_t EOC12:1;
      uint64_t EOC13:1;
      uint64_t EOC14:1;
      uint64_t EOC15:1;
      uint64_t reservedSpace0:8;
      uint64_t DRDY:1;
      uint64_t GOVRE:1;
      uint64_t COMPE:1;
      uint64_t ENDRX:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ISR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVRE0:1;
      uint64_t OVRE1:1;
      uint64_t OVRE2:1;
      uint64_t OVRE3:1;
      uint64_t OVRE4:1;
      uint64_t OVRE5:1;
      uint64_t OVRE6:1;
      uint64_t OVRE7:1;
      uint64_t OVRE8:1;
      uint64_t OVRE9:1;
      uint64_t OVRE10:1;
      uint64_t OVRE11:1;
      uint64_t OVRE12:1;
      uint64_t OVRE13:1;
      uint64_t OVRE14:1;
      uint64_t OVRE15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_OVER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CMPSEL:4;
      uint64_t reservedSpace1:1;
      uint64_t CMPALL:1;
      uint64_t reservedSpace2:2;
      uint64_t CMPFILTER:2;
      uint64_t reservedSpace3:10;
      uint64_t TAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOWTHRES:12;
      uint64_t reservedSpace0:4;
      uint64_t HIGHTHRES:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN0:2;
      uint64_t GAIN1:2;
      uint64_t GAIN2:2;
      uint64_t GAIN3:2;
      uint64_t GAIN4:2;
      uint64_t GAIN5:2;
      uint64_t GAIN6:2;
      uint64_t GAIN7:2;
      uint64_t GAIN8:2;
      uint64_t GAIN9:2;
      uint64_t GAIN10:2;
      uint64_t GAIN11:2;
      uint64_t GAIN12:2;
      uint64_t GAIN13:2;
      uint64_t GAIN14:2;
      uint64_t GAIN15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF0:1;
      uint64_t OFF1:1;
      uint64_t OFF2:1;
      uint64_t OFF3:1;
      uint64_t OFF4:1;
      uint64_t OFF5:1;
      uint64_t OFF6:1;
      uint64_t OFF7:1;
      uint64_t OFF8:1;
      uint64_t OFF9:1;
      uint64_t OFF10:1;
      uint64_t OFF11:1;
      uint64_t OFF12:1;
      uint64_t OFF13:1;
      uint64_t OFF14:1;
      uint64_t OFF15:1;
      uint64_t DIFF0:1;
      uint64_t DIFF1:1;
      uint64_t DIFF2:1;
      uint64_t DIFF3:1;
      uint64_t DIFF4:1;
      uint64_t DIFF5:1;
      uint64_t DIFF6:1;
      uint64_t DIFF7:1;
      uint64_t DIFF8:1;
      uint64_t DIFF9:1;
      uint64_t DIFF10:1;
      uint64_t DIFF11:1;
      uint64_t DIFF12:1;
      uint64_t DIFF13:1;
      uint64_t DIFF14:1;
      uint64_t DIFF15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CDR_15;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TSON:1;
      uint64_t reservedSpace1:3;
      uint64_t IBCTL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_WPSR;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_RNCR;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_PTSR;

};

#define ADC (*(volatile struct ADC_tag *) 0x400c0000)

struct DMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ARB_CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_GCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSREQ0:1;
      uint64_t DSREQ0:1;
      uint64_t SSREQ1:1;
      uint64_t DSREQ1:1;
      uint64_t SSREQ2:1;
      uint64_t DSREQ2:1;
      uint64_t SSREQ3:1;
      uint64_t DSREQ3:1;
      uint64_t SSREQ4:1;
      uint64_t DSREQ4:1;
      uint64_t SSREQ5:1;
      uint64_t DSREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCREQ0:1;
      uint64_t DCREQ0:1;
      uint64_t SCREQ1:1;
      uint64_t DCREQ1:1;
      uint64_t SCREQ2:1;
      uint64_t DCREQ2:1;
      uint64_t SCREQ3:1;
      uint64_t DCREQ3:1;
      uint64_t SCREQ4:1;
      uint64_t DCREQ4:1;
      uint64_t SCREQ5:1;
      uint64_t DCREQ5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAST0:1;
      uint64_t DLAST0:1;
      uint64_t SLAST1:1;
      uint64_t DLAST1:1;
      uint64_t SLAST2:1;
      uint64_t DLAST2:1;
      uint64_t SLAST3:1;
      uint64_t DLAST3:1;
      uint64_t SLAST4:1;
      uint64_t DLAST4:1;
      uint64_t SLAST5:1;
      uint64_t DLAST5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_LAST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTC0:1;
      uint64_t BTC1:1;
      uint64_t BTC2:1;
      uint64_t BTC3:1;
      uint64_t BTC4:1;
      uint64_t BTC5:1;
      uint64_t reservedSpace0:2;
      uint64_t CBTC0:1;
      uint64_t CBTC1:1;
      uint64_t CBTC2:1;
      uint64_t CBTC3:1;
      uint64_t CBTC4:1;
      uint64_t CBTC5:1;
      uint64_t reservedSpace1:2;
      uint64_t ERR0:1;
      uint64_t ERR1:1;
      uint64_t ERR2:1;
      uint64_t ERR3:1;
      uint64_t ERR4:1;
      uint64_t ERR5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_EBCISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:10;
      uint64_t KEEP0:1;
      uint64_t KEEP1:1;
      uint64_t KEEP2:1;
      uint64_t KEEP3:1;
      uint64_t KEEP4:1;
      uint64_t KEEP5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS0:1;
      uint64_t DIS1:1;
      uint64_t DIS2:1;
      uint64_t DIS3:1;
      uint64_t DIS4:1;
      uint64_t DIS5:1;
      uint64_t reservedSpace0:2;
      uint64_t RES0:1;
      uint64_t RES1:1;
      uint64_t RES2:1;
      uint64_t RES3:1;
      uint64_t RES4:1;
      uint64_t RES5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA0:1;
      uint64_t ENA1:1;
      uint64_t ENA2:1;
      uint64_t ENA3:1;
      uint64_t ENA4:1;
      uint64_t ENA5:1;
      uint64_t reservedSpace0:2;
      uint64_t SUSP0:1;
      uint64_t SUSP1:1;
      uint64_t SUSP2:1;
      uint64_t SUSP3:1;
      uint64_t SUSP4:1;
      uint64_t SUSP5:1;
      uint64_t reservedSpace1:2;
      uint64_t EMPT0:1;
      uint64_t EMPT1:1;
      uint64_t EMPT2:1;
      uint64_t EMPT3:1;
      uint64_t EMPT4:1;
      uint64_t EMPT5:1;
      uint64_t reservedSpace2:2;
      uint64_t STAL0:1;
      uint64_t STAL1:1;
      uint64_t STAL2:1;
      uint64_t STAL3:1;
      uint64_t STAL4:1;
      uint64_t STAL5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CHSR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG0;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG1;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG2;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG4;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_SADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DSCR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_DSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTSIZE:16;
      uint64_t SCSIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t DCSIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WIDTH:2;
      uint64_t reservedSpace2:2;
      uint64_t DST_WIDTH:2;
      uint64_t reservedSpace3:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SRC_DSCR:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_DSCR:1;
      uint64_t FC:2;
      uint64_t reservedSpace2:1;
      uint64_t SRC_INCR:2;
      uint64_t reservedSpace3:2;
      uint64_t DST_INCR:2;
      uint64_t IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTRLB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_PER:4;
      uint64_t DST_PER:4;
      uint64_t reservedSpace0:1;
      uint64_t SRC_H2SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t DST_H2SEL:1;
      uint64_t reservedSpace2:2;
      uint64_t SOD:1;
      uint64_t reservedSpace3:3;
      uint64_t LOCK_IF:1;
      uint64_t LOCK_B:1;
      uint64_t LOCK_IF_L:1;
      uint64_t reservedSpace4:1;
      uint64_t AHB_PROT:3;
      uint64_t reservedSpace5:1;
      uint64_t FIFOCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CFG5;

  uint8_t res7[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_WPSR;

};

#define DMAC (*(volatile struct DMAC_tag *) 0x400c4000)

struct DACC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRGEN:1;
      uint64_t TRGSEL:3;
      uint64_t WORD:1;
      uint64_t SLEEP:1;
      uint64_t FASTWKUP:1;
      uint64_t reservedSpace0:1;
      uint64_t REFRESH:8;
      uint64_t USER_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t TAG:1;
      uint64_t MAXS:1;
      uint64_t reservedSpace2:2;
      uint64_t STARTUP:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_MR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CHSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_CDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRDY:1;
      uint64_t EOC:1;
      uint64_t ENDTX:1;
      uint64_t TXBUFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ISR;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBCTLCH0:2;
      uint64_t IBCTLCH1:2;
      uint64_t reservedSpace0:4;
      uint64_t IBCTLDACCORE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_ACR;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPROTERR:1;
      uint64_t reservedSpace0:7;
      uint64_t WPROTADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_WPSR;

  uint8_t res4[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TCR;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DACC_PTSR;

};

#define DACC (*(volatile struct DACC_tag *) 0x400c8000)

struct MATRIX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULBT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MCFG_5;

  uint8_t res0[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOT_CYCLE:8;
      uint64_t reservedSpace0:8;
      uint64_t DEFMSTR_TYPE:2;
      uint64_t FIXED_DEFMSTR:3;
      uint64_t reservedSpace1:3;
      uint64_t ARBT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_SCFG_8;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS2;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS4;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS5;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS6;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS7;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0PR:2;
      uint64_t reservedSpace0:2;
      uint64_t M1PR:2;
      uint64_t reservedSpace1:2;
      uint64_t M2PR:2;
      uint64_t reservedSpace2:2;
      uint64_t M3PR:2;
      uint64_t reservedSpace3:2;
      uint64_t M4PR:2;
      uint64_t reservedSpace4:2;
      uint64_t M5PR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_PRAS8;

  uint8_t res10[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCB0:1;
      uint64_t RCB1:1;
      uint64_t RCB2:1;
      uint64_t RCB3:1;
      uint64_t RCB4:2;
      uint64_t RCB5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_MRCR;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t SYSIO12:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_SYSIO;

  uint8_t res12[204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MATRIX_WPSR;

};

#define MATRIX (*(volatile struct MATRIX_tag *) 0x400e0400)

struct PMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UOTGCLK:1;
      uint64_t reservedSpace1:2;
      uint64_t PCK0:1;
      uint64_t PCK1:1;
      uint64_t PCK2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SCSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PID8:1;
      uint64_t PID9:1;
      uint64_t PID10:1;
      uint64_t PID11:1;
      uint64_t PID12:1;
      uint64_t PID13:1;
      uint64_t PID14:1;
      uint64_t PID15:1;
      uint64_t PID16:1;
      uint64_t PID17:1;
      uint64_t PID18:1;
      uint64_t PID19:1;
      uint64_t PID20:1;
      uint64_t PID21:1;
      uint64_t PID22:1;
      uint64_t PID23:1;
      uint64_t PID24:1;
      uint64_t PID25:1;
      uint64_t PID26:1;
      uint64_t PID27:1;
      uint64_t PID28:1;
      uint64_t PID29:1;
      uint64_t PID30:1;
      uint64_t PID31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t UPLLEN:1;
      uint64_t reservedSpace1:3;
      uint64_t UPLLCOUNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_UCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTEN:1;
      uint64_t MOSCXTBY:1;
      uint64_t reservedSpace0:1;
      uint64_t MOSCRCEN:1;
      uint64_t MOSCRCF:3;
      uint64_t reservedSpace1:1;
      uint64_t MOSCXTST:8;
      uint64_t KEY:8;
      uint64_t MOSCSEL:1;
      uint64_t CFDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAINF:16;
      uint64_t MAINFRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_MCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVA:8;
      uint64_t PLLACOUNT:6;
      uint64_t reservedSpace0:2;
      uint64_t MULA:11;
      uint64_t reservedSpace1:2;
      uint64_t ONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKGR_PLLAR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:2;
      uint64_t reservedSpace0:2;
      uint64_t PRES:3;
      uint64_t reservedSpace1:5;
      uint64_t PLLADIV2:1;
      uint64_t UPLLDIV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_MCKR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBS:1;
      uint64_t reservedSpace0:7;
      uint64_t USBDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_USB;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS:3;
      uint64_t reservedSpace0:1;
      uint64_t PRES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCK_2;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t OSCSELS:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace2:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
      uint64_t CFDS:1;
      uint64_t FOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCXTS:1;
      uint64_t LOCKA:1;
      uint64_t reservedSpace0:1;
      uint64_t MCKRDY:1;
      uint64_t reservedSpace1:2;
      uint64_t LOCKU:1;
      uint64_t reservedSpace2:1;
      uint64_t PCKRDY0:1;
      uint64_t PCKRDY1:1;
      uint64_t PCKRDY2:1;
      uint64_t reservedSpace3:5;
      uint64_t MOSCSELS:1;
      uint64_t MOSCRCS:1;
      uint64_t CFDEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTT0:1;
      uint64_t FSTT1:1;
      uint64_t FSTT2:1;
      uint64_t FSTT3:1;
      uint64_t FSTT4:1;
      uint64_t FSTT5:1;
      uint64_t FSTT6:1;
      uint64_t FSTT7:1;
      uint64_t FSTT8:1;
      uint64_t FSTT9:1;
      uint64_t FSTT10:1;
      uint64_t FSTT11:1;
      uint64_t FSTT12:1;
      uint64_t FSTT13:1;
      uint64_t FSTT14:1;
      uint64_t FSTT15:1;
      uint64_t RTTAL:1;
      uint64_t RTCAL:1;
      uint64_t USBAL:1;
      uint64_t reservedSpace0:1;
      uint64_t LPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSTP0:1;
      uint64_t FSTP1:1;
      uint64_t FSTP2:1;
      uint64_t FSTP3:1;
      uint64_t FSTP4:1;
      uint64_t FSTP5:1;
      uint64_t FSTP6:1;
      uint64_t FSTP7:1;
      uint64_t FSTP8:1;
      uint64_t FSTP9:1;
      uint64_t FSTP10:1;
      uint64_t FSTP11:1;
      uint64_t FSTP12:1;
      uint64_t FSTP13:1;
      uint64_t FSTP14:1;
      uint64_t FSTP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FSPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_FOCR;

  uint8_t res5[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_WPSR;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID32:1;
      uint64_t PID33:1;
      uint64_t PID34:1;
      uint64_t PID35:1;
      uint64_t PID36:1;
      uint64_t PID37:1;
      uint64_t PID38:1;
      uint64_t PID39:1;
      uint64_t PID40:1;
      uint64_t PID41:1;
      uint64_t PID42:1;
      uint64_t PID43:1;
      uint64_t PID44:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:6;
      uint64_t CMD:1;
      uint64_t reservedSpace1:3;
      uint64_t DIV:2;
      uint64_t reservedSpace2:10;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMC_PCR;

};

#define PMC (*(volatile struct PMC_tag *) 0x400e0600)

struct UART_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RSTRX:1;
      uint64_t RSTTX:1;
      uint64_t RXEN:1;
      uint64_t RXDIS:1;
      uint64_t TXEN:1;
      uint64_t TXDIS:1;
      uint64_t RSTSTA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t PAR:3;
      uint64_t reservedSpace1:2;
      uint64_t CHMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENDRX:1;
      uint64_t ENDTX:1;
      uint64_t OVRE:1;
      uint64_t FRAME:1;
      uint64_t PARE:1;
      uint64_t reservedSpace1:1;
      uint64_t TXEMPTY:1;
      uint64_t reservedSpace2:1;
      uint64_t TXBUFE:1;
      uint64_t RXBUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_BRGR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXNCTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TNCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t RXTDIS:1;
      uint64_t reservedSpace0:6;
      uint64_t TXTEN:1;
      uint64_t TXTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTEN:1;
      uint64_t reservedSpace0:7;
      uint64_t TXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_PTSR;

};

#define UART (*(volatile struct UART_tag *) 0x400e0800)

struct CHIPID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:5;
      uint64_t EPROC:3;
      uint64_t NVPSIZ:4;
      uint64_t NVPSIZ2:4;
      uint64_t SRAMSIZ:4;
      uint64_t ARCH:8;
      uint64_t NVPTYP:3;
      uint64_t EXT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_CIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID_EXID;

};

#define CHIPID (*(volatile struct CHIPID_tag *) 0x400e0940)

struct EFC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC0_FRR;

};

#define EFC0 (*(volatile struct EFC0_tag *) 0x400e0a00)

struct EFC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t reservedSpace0:7;
      uint64_t FWS:4;
      uint64_t reservedSpace1:4;
      uint64_t SCOD:1;
      uint64_t reservedSpace2:7;
      uint64_t FAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCMD:8;
      uint64_t FARG:16;
      uint64_t FKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRDY:1;
      uint64_t FCMDE:1;
      uint64_t FLOCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC1_FRR;

};

#define EFC1 (*(volatile struct EFC1_tag *) 0x400e0c00)

struct PIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOA_WPSR;

};

#define PIOA (*(volatile struct PIOA_tag *) 0x400e0e00)

struct PIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOB_WPSR;

};

#define PIOB (*(volatile struct PIOB_tag *) 0x400e1000)

struct PIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOC_WPSR;

};

#define PIOC (*(volatile struct PIOC_tag *) 0x400e1200)

struct PIOD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OSR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFSR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_CODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ODSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PDSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_MDSR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_PUSR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ABSR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_DIFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_IFDGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_SCDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_OWSR;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_AIMMR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_ELSR;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FELLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_REHLSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_FRLHSR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0:1;
      uint64_t P1:1;
      uint64_t P2:1;
      uint64_t P3:1;
      uint64_t P4:1;
      uint64_t P5:1;
      uint64_t P6:1;
      uint64_t P7:1;
      uint64_t P8:1;
      uint64_t P9:1;
      uint64_t P10:1;
      uint64_t P11:1;
      uint64_t P12:1;
      uint64_t P13:1;
      uint64_t P14:1;
      uint64_t P15:1;
      uint64_t P16:1;
      uint64_t P17:1;
      uint64_t P18:1;
      uint64_t P19:1;
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
      uint64_t P28:1;
      uint64_t P29:1;
      uint64_t P30:1;
      uint64_t P31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_LOCKSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPVS:1;
      uint64_t reservedSpace0:7;
      uint64_t WPVSRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIOD_WPSR;

};

#define PIOD (*(volatile struct PIOD_tag *) 0x400e1400)

struct RSTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROCRST:1;
      uint64_t reservedSpace0:1;
      uint64_t PERRST:1;
      uint64_t EXTRST:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTS:1;
      uint64_t reservedSpace0:7;
      uint64_t RSTTYP:3;
      uint64_t reservedSpace1:5;
      uint64_t NRSTL:1;
      uint64_t SRCMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t URSTEN:1;
      uint64_t reservedSpace0:3;
      uint64_t URSTIEN:1;
      uint64_t reservedSpace1:3;
      uint64_t ERSTL:4;
      uint64_t reservedSpace2:12;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTC_MR;

};

#define RSTC (*(volatile struct RSTC_tag *) 0x400e1a00)

struct SUPC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t VROFF:1;
      uint64_t XTALSEL:1;
      uint64_t reservedSpace1:20;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMTH:4;
      uint64_t reservedSpace0:4;
      uint64_t SMSMPL:3;
      uint64_t reservedSpace1:1;
      uint64_t SMRSTEN:1;
      uint64_t SMIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SMMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t BODRSTEN:1;
      uint64_t BODDIS:1;
      uint64_t VDDIORDY:1;
      uint64_t reservedSpace1:5;
      uint64_t OSCBYPASS:1;
      uint64_t reservedSpace2:3;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPEN:1;
      uint64_t SMEN:1;
      uint64_t RTTEN:1;
      uint64_t RTCEN:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPDBC:3;
      uint64_t reservedSpace1:1;
      uint64_t WKUPDBC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WKUPEN0:1;
      uint64_t WKUPEN1:1;
      uint64_t WKUPEN2:1;
      uint64_t WKUPEN3:1;
      uint64_t WKUPEN4:1;
      uint64_t WKUPEN5:1;
      uint64_t WKUPEN6:1;
      uint64_t WKUPEN7:1;
      uint64_t WKUPEN8:1;
      uint64_t WKUPEN9:1;
      uint64_t WKUPEN10:1;
      uint64_t WKUPEN11:1;
      uint64_t WKUPEN12:1;
      uint64_t WKUPEN13:1;
      uint64_t WKUPEN14:1;
      uint64_t WKUPEN15:1;
      uint64_t WKUPT0:1;
      uint64_t WKUPT1:1;
      uint64_t WKUPT2:1;
      uint64_t WKUPT3:1;
      uint64_t WKUPT4:1;
      uint64_t WKUPT5:1;
      uint64_t WKUPT6:1;
      uint64_t WKUPT7:1;
      uint64_t WKUPT8:1;
      uint64_t WKUPT9:1;
      uint64_t WKUPT10:1;
      uint64_t WKUPT11:1;
      uint64_t WKUPT12:1;
      uint64_t WKUPT13:1;
      uint64_t WKUPT14:1;
      uint64_t WKUPT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_WUIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWUPS:1;
      uint64_t WKUPS:1;
      uint64_t SMWS:1;
      uint64_t BODRSTS:1;
      uint64_t SMRSTS:1;
      uint64_t SMS:1;
      uint64_t SMOS:1;
      uint64_t OSCSEL:1;
      uint64_t reservedSpace0:4;
      uint64_t FWUPIS:1;
      uint64_t reservedSpace1:3;
      uint64_t WKUPIS0:1;
      uint64_t WKUPIS1:1;
      uint64_t WKUPIS2:1;
      uint64_t WKUPIS3:1;
      uint64_t WKUPIS4:1;
      uint64_t WKUPIS5:1;
      uint64_t WKUPIS6:1;
      uint64_t WKUPIS7:1;
      uint64_t WKUPIS8:1;
      uint64_t WKUPIS9:1;
      uint64_t WKUPIS10:1;
      uint64_t WKUPIS11:1;
      uint64_t WKUPIS12:1;
      uint64_t WKUPIS13:1;
      uint64_t WKUPIS14:1;
      uint64_t WKUPIS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUPC_SR;

};

#define SUPC (*(volatile struct SUPC_tag *) 0x400e1a10)

struct RTT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTPRES:16;
      uint64_t ALMIEN:1;
      uint64_t RTTINCIEN:1;
      uint64_t RTTRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRTV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_VR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALMS:1;
      uint64_t RTTINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTT_SR;

};

#define RTT (*(volatile struct RTT_tag *) 0x400e1a30)

struct WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTT:1;
      uint64_t reservedSpace0:23;
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDV:12;
      uint64_t WDFIEN:1;
      uint64_t WDRSTEN:1;
      uint64_t WDRPROC:1;
      uint64_t WDDIS:1;
      uint64_t WDD:12;
      uint64_t WDDBGHLT:1;
      uint64_t WDIDLEHLT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDUNF:1;
      uint64_t WDERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_SR;

};

#define WDT (*(volatile struct WDT_tag *) 0x400e1a50)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPDTIM:1;
      uint64_t UPDCAL:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMEVSEL:2;
      uint64_t reservedSpace1:6;
      uint64_t CALEVSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_MR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t reservedSpace0:1;
      uint64_t MIN:7;
      uint64_t reservedSpace1:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENT:7;
      uint64_t reservedSpace0:1;
      uint64_t YEAR:8;
      uint64_t MONTH:5;
      uint64_t DAY:3;
      uint64_t DATE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:7;
      uint64_t SECEN:1;
      uint64_t MIN:7;
      uint64_t MINEN:1;
      uint64_t HOUR:6;
      uint64_t AMPM:1;
      uint64_t HOUREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_TIMALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MONTH:5;
      uint64_t reservedSpace1:2;
      uint64_t MTHEN:1;
      uint64_t DATE:6;
      uint64_t reservedSpace2:1;
      uint64_t DATEEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_CALALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKUPD:1;
      uint64_t ALARM:1;
      uint64_t SEC:1;
      uint64_t TIMEV:1;
      uint64_t CALEV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKCLR:1;
      uint64_t ALRCLR:1;
      uint64_t SECCLR:1;
      uint64_t TIMCLR:1;
      uint64_t CALCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_SCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKEN:1;
      uint64_t ALREN:1;
      uint64_t SECEN:1;
      uint64_t TIMEN:1;
      uint64_t CALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKDIS:1;
      uint64_t ALRDIS:1;
      uint64_t SECDIS:1;
      uint64_t TIMDIS:1;
      uint64_t CALDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t ALR:1;
      uint64_t SEC:1;
      uint64_t TIM:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVTIM:1;
      uint64_t NVCAL:1;
      uint64_t NVTIMALR:1;
      uint64_t NVCALALR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_VER;

  uint8_t res0[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WPEN:1;
      uint64_t reservedSpace0:7;
      uint64_t WPKEY:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_WPMR;

};

#define RTC (*(volatile struct RTC_tag *) 0x400e1a60)

struct GPBR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPBR_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPBR_GPBR_7;

};

#define GPBR (*(volatile struct GPBR_tag *) 0x400e1a90)

