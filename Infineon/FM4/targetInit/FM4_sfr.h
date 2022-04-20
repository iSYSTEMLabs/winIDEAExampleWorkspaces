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

struct WORKFLASH_IF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WFSTR;

};

#define WORKFLASH_IF (*(volatile struct WORKFLASH_IF_tag *) 0x200e0000)

struct FLASH_IF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FASZR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RWT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t HNG:1;
      uint64_t ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSYNDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE:1;
      uint64_t BS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFCR;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIE:1;
      uint64_t HANGIE:1;
      uint64_t ERRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIF:1;
      uint64_t HANGIF:1;
      uint64_t ERRIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDYIC:1;
      uint64_t HANGIC:1;
      uint64_t ERRIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FICLR;

  uint8_t res2[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMM:10;
      uint64_t reservedSpace0:6;
      uint64_t TTRMM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRTRMM;

};

#define FLASH_IF (*(volatile struct FLASH_IF_tag *) 0x40000000)

struct UNIQUE_ID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t UID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDR1;

};

#define UNIQUE_ID (*(volatile struct UNIQUE_ID_tag *) 0x40000200)

struct ECC_CAPTURE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRAD:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERRAD;

};

#define ECC_CAPTURE (*(volatile struct ECC_CAPTURE_tag *) 0x40000300)

struct CRG_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MOSCE:1;
      uint64_t reservedSpace1:1;
      uint64_t SOSCE:1;
      uint64_t PLLE:1;
      uint64_t RCS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MORDY:1;
      uint64_t reservedSpace1:1;
      uint64_t SORDY:1;
      uint64_t PLRDY:1;
      uint64_t RCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCM_STR;

  uint8_t res1[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM:2;
      uint64_t DSTM:1;
      uint64_t reservedSpace0:1;
      uint64_t SPL:1;
      uint64_t reservedSpace1:11;
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STB_CTL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PONR:1;
      uint64_t INITX:1;
      uint64_t reservedSpace0:2;
      uint64_t SWDT:1;
      uint64_t HWDT:1;
      uint64_t CSVR:1;
      uint64_t FCSR:1;
      uint64_t SRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RST_STR;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BSC_PSR;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC0_PSR;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC1:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC1RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC1_PSR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t APBC2:2;
      uint64_t reservedSpace0:2;
      uint64_t APBC2RST:1;
      uint64_t reservedSpace1:2;
      uint64_t APBC2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) APBC2_PSR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWDS:2;
      uint64_t reservedSpace0:5;
      uint64_t TESTB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SWC_PSR;

  uint8_t res7[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TTC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) TTC_PSR;

  uint8_t res8[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MOWT:4;
      uint64_t SOWT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSW_TMR;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t POWT:3;
      uint64_t reservedSpace0:1;
      uint64_t PINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PSW_TMR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLM:4;
      uint64_t PLLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL1;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PLLN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PLL_CTL2;

  uint8_t res12[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MCSVE:1;
      uint64_t SCSVE:1;
      uint64_t reservedSpace0:6;
      uint64_t FCSDE:1;
      uint64_t FCSRE:1;
      uint64_t reservedSpace1:2;
      uint64_t FCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CSV_CTL;

  uint8_t res13[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCMF:1;
      uint64_t SCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CSV_STR;

  uint8_t res14[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWH_CTL;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWL_CTL;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FWD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCSWD_CTL;

  uint8_t res17[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DPSWBE:1;
      uint64_t reservedSpace1:1;
      uint64_t DPHWBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DBWDT_CTL;

  uint8_t res18[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSE:1;
      uint64_t SCSE:1;
      uint64_t PCSE:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_ENR;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSI:1;
      uint64_t SCSI:1;
      uint64_t PCSI:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_STR;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCSC:1;
      uint64_t SCSC:1;
      uint64_t PCSC:1;
      uint64_t reservedSpace0:2;
      uint64_t FCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) INT_CLR;

};

#define CRG (*(volatile struct CRG_tag *) 0x40010000)

struct CRTRIM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_PSR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCR_FTRM;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MCR_TTRM;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRMLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR_RLR;

};

#define CRTRIM (*(volatile struct CRTRIM_tag *) 0x4002e000)

struct SWWDT_tag
{
  uint32_t WDOGLOAD;
  uint32_t WDOGVALUE;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t TWD:2;
      uint64_t SPM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGCONTROL;

  uint8_t res0[3];

  uint32_t WDOGINTCLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGRIS;

  uint8_t res1[7];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDOGSPMC;

  uint8_t res2[3047];

  uint32_t WDOGLOCK;
};

#define SWWDT (*(volatile struct SWWDT_tag *) 0x40012000)

struct HWWDT_tag
{
  uint32_t WDG_LDR;
  uint32_t WDG_VLR;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_CTL;

  uint8_t res0[3];

  uint8_t WDG_ICL;
  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WDG_RIS;

  uint8_t res2[3055];

  uint32_t WDG_LCK;
};

#define HWWDT (*(volatile struct HWWDT_tag *) 0x40011000)

struct DTIM_tag
{
  uint32_t TIMER1LOAD;
  uint32_t TIMER1VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1CONTROL;

  uint32_t TIMER1INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER1MIS;

  uint32_t TIMER1BGLOAD;
  uint8_t res0[4];

  uint32_t TIMER2LOAD;
  uint32_t TIMER2VALUE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OneShot:1;
      uint64_t TimerSize:1;
      uint64_t TimerPre:2;
      uint64_t reservedSpace0:1;
      uint64_t IntEnable:1;
      uint64_t TimerMode:1;
      uint64_t TimerEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2CONTROL;

  uint32_t TIMER2INTCLR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1RIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER1MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER2MIS;

  uint32_t TIMER2BGLOAD;
};

#define DTIM (*(volatile struct DTIM_tag *) 0x40015000)

struct BTIOSEL03_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL01:4;
      uint64_t SEL23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL0123;

};

#define BTIOSEL03 (*(volatile struct BTIOSEL03_tag *) 0x40025100)

struct BTIOSEL47_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL45:4;
      uint64_t SEL67:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL4567;

};

#define BTIOSEL47 (*(volatile struct BTIOSEL47_tag *) 0x40025300)

struct BTIOSEL8B_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SEL89:4;
      uint64_t SELAB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSEL89AB;

};

#define BTIOSEL8B (*(volatile struct BTIOSEL8B_tag *) 0x40025500)

struct BTIOSELCF_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SELCD:4;
      uint64_t SELEF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSELCDEF;

};

#define BTIOSELCF (*(volatile struct BTIOSELCF_tag *) 0x40025700)

struct SBSSR_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SSSR0:1;
      uint64_t SSSR1:1;
      uint64_t SSSR2:1;
      uint64_t SSSR3:1;
      uint64_t SSSR4:1;
      uint64_t SSSR5:1;
      uint64_t SSSR6:1;
      uint64_t SSSR7:1;
      uint64_t SSSR8:1;
      uint64_t SSSR9:1;
      uint64_t SSSR10:1;
      uint64_t SSSR11:1;
      uint64_t SSSR12:1;
      uint64_t SSSR13:1;
      uint64_t SSSR14:1;
      uint64_t SSSR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTSSSR;

};

#define SBSSR (*(volatile struct SBSSR_tag *) 0x40025ffc)

struct QPRC0_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC0 (*(volatile struct QPRC0_tag *) 0x40026000)

struct QPRC1_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC1 (*(volatile struct QPRC1_tag *) 0x40026040)

struct QPRC2_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC2 (*(volatile struct QPRC2_tag *) 0x40026080)

struct QPRC3_tag
{
  uint16_t QPCR;
  uint8_t res0[2];

  uint16_t QRCR;
  uint8_t res1[2];

  uint16_t QPCCR;
  uint8_t res2[2];

  uint16_t QPRCR;
  uint8_t res3[2];

  uint16_t QMPR;
  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t QPCMIE:1;
      uint64_t QPCMF:1;
      uint64_t QPRCMIE:1;
      uint64_t QPRCMF:1;
      uint64_t OUZIE:1;
      uint64_t UFDF:1;
      uint64_t OFDF:1;
      uint64_t ZIIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CDCIE:1;
      uint64_t CDCF:1;
      uint64_t DIRPC:1;
      uint64_t DIROU:1;
      uint64_t QPCNRCMIE:1;
      uint64_t QPCNRCMF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) QICRH;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM:2;
      uint64_t RCM:2;
      uint64_t PSTP:1;
      uint64_t CGSC:1;
      uint64_t RSEL:1;
      uint64_t SWAP:1;
      uint64_t PCRM:2;
      uint64_t AES:2;
      uint64_t BES:2;
      uint64_t CGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QCR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORNGMD:1;
      uint64_t ORNGF:1;
      uint64_t ORNGIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QECR;

  uint8_t res7[30];

  uint16_t QRCRR;
  uint16_t QPCRR;
};

#define QPRC3 (*(volatile struct QPRC3_tag *) 0x400260c0)

struct QPRC0_NF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC0_NF (*(volatile struct QPRC0_NF_tag *) 0x40026100)

struct QPRC1_NF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC1_NF (*(volatile struct QPRC1_NF_tag *) 0x40026110)

struct QPRC2_NF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC2_NF (*(volatile struct QPRC2_NF_tag *) 0x40026120)

struct QPRC3_NF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t AINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t AINLV:1;
      uint64_t AINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLA;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t BINLV:1;
      uint64_t BINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLB;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ZINNWS:3;
      uint64_t reservedSpace0:1;
      uint64_t ZINLV:1;
      uint64_t ZINMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NFCTLZ;

};

#define QPRC3_NF (*(volatile struct QPRC3_NF_tag *) 0x40026130)

struct ADC0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x40027000)

struct ADC1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40027100)

struct ADC2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCS:1;
      uint64_t PCS:1;
      uint64_t PCNS:1;
      uint64_t reservedSpace0:3;
      uint64_t FDAS:1;
      uint64_t ADSTP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OVRIE:1;
      uint64_t CMPIE:1;
      uint64_t PCIE:1;
      uint64_t SCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CMPIF:1;
      uint64_t PCIF:1;
      uint64_t SCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCR;

  uint8_t res0[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SFS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSTR:1;
      uint64_t SHEN:1;
      uint64_t RPT:1;
      uint64_t reservedSpace0:1;
      uint64_t SFCLR:1;
      uint64_t SOVR:1;
      uint64_t SFUL:1;
      uint64_t SEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCCR;

  uint8_t res1[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:2;
      uint64_t reservedSpace1:2;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t SD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS3;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN0:1;
      uint64_t AN1:1;
      uint64_t AN2:1;
      uint64_t AN3:1;
      uint64_t AN4:1;
      uint64_t AN5:1;
      uint64_t AN6:1;
      uint64_t AN7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AN8:1;
      uint64_t AN9:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCIS1;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PFS:2;
      uint64_t reservedSpace0:2;
      uint64_t TEST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PFNS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PSTR:1;
      uint64_t PHEN:1;
      uint64_t PEEN:1;
      uint64_t ESCE:1;
      uint64_t PFCLR:1;
      uint64_t POVR:1;
      uint64_t PFUL:1;
      uint64_t PEMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCCR;

  uint8_t res4[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:5;
      uint64_t reservedSpace0:3;
      uint64_t RS:3;
      uint64_t reservedSpace1:1;
      uint64_t INVL:1;
      uint64_t reservedSpace2:7;
      uint64_t PD:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t P1A:3;
      uint64_t P2A:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCIS;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCH:5;
      uint64_t CMD0:1;
      uint64_t CMD1:1;
      uint64_t CMPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CMPCR;

  uint8_t res6[1];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMAD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CMPD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS16:1;
      uint64_t TS17:1;
      uint64_t TS18:1;
      uint64_t TS19:1;
      uint64_t TS20:1;
      uint64_t TS21:1;
      uint64_t TS22:1;
      uint64_t TS23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS24:1;
      uint64_t TS25:1;
      uint64_t TS26:1;
      uint64_t TS27:1;
      uint64_t TS28:1;
      uint64_t TS29:1;
      uint64_t TS30:1;
      uint64_t TS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS3;

  uint8_t res7[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS0:1;
      uint64_t TS1:1;
      uint64_t TS2:1;
      uint64_t TS3:1;
      uint64_t TS4:1;
      uint64_t TS5:1;
      uint64_t TS6:1;
      uint64_t TS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TS8:1;
      uint64_t TS9:1;
      uint64_t TS10:1;
      uint64_t TS11:1;
      uint64_t TS12:1;
      uint64_t TS13:1;
      uint64_t TS14:1;
      uint64_t TS15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADSS1;

  uint8_t res8[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST1:5;
      uint64_t STX1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST0:5;
      uint64_t STX0:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADST0;

  uint8_t res9[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCT;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PRTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PRTSL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTSL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCTSL;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:6;
      uint64_t ENBLTIME:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ADCEN;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCOOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCOT;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMRCIF;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RCOE:1;
      uint64_t RCOIE:1;
      uint64_t RCOIRS:1;
      uint64_t RCOCD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCCH:5;
      uint64_t WCMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCMPSR;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMLD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t CMHD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WCMPDH;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x40027200)

struct DAC0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC0 (*(volatile struct DAC0_tag *) 0x40033000)

struct DAC1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t DAE:1;
      uint64_t DRDY:1;
      uint64_t reservedSpace0:2;
      uint64_t DAC10:1;
      uint64_t DDAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACR;

  uint8_t res0[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DADR;

};

#define DAC1 (*(volatile struct DAC1_tag *) 0x40033008)

struct EXTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN0:1;
      uint64_t EN1:1;
      uint64_t EN2:1;
      uint64_t EN3:1;
      uint64_t EN4:1;
      uint64_t EN5:1;
      uint64_t EN6:1;
      uint64_t EN7:1;
      uint64_t EN8:1;
      uint64_t EN9:1;
      uint64_t EN10:1;
      uint64_t EN11:1;
      uint64_t EN12:1;
      uint64_t EN13:1;
      uint64_t EN14:1;
      uint64_t EN15:1;
      uint64_t EN16:1;
      uint64_t EN17:1;
      uint64_t EN18:1;
      uint64_t EN19:1;
      uint64_t EN20:1;
      uint64_t EN21:1;
      uint64_t EN22:1;
      uint64_t EN23:1;
      uint64_t EN24:1;
      uint64_t EN25:1;
      uint64_t EN26:1;
      uint64_t EN27:1;
      uint64_t EN28:1;
      uint64_t EN29:1;
      uint64_t EN30:1;
      uint64_t EN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ER0:1;
      uint64_t ER1:1;
      uint64_t ER2:1;
      uint64_t ER3:1;
      uint64_t ER4:1;
      uint64_t ER5:1;
      uint64_t ER6:1;
      uint64_t ER7:1;
      uint64_t ER8:1;
      uint64_t ER9:1;
      uint64_t ER10:1;
      uint64_t ER11:1;
      uint64_t ER12:1;
      uint64_t ER13:1;
      uint64_t ER14:1;
      uint64_t ER15:1;
      uint64_t ER16:1;
      uint64_t ER17:1;
      uint64_t ER18:1;
      uint64_t ER19:1;
      uint64_t ER20:1;
      uint64_t ER21:1;
      uint64_t ER22:1;
      uint64_t ER23:1;
      uint64_t ER24:1;
      uint64_t ER25:1;
      uint64_t ER26:1;
      uint64_t ER27:1;
      uint64_t ER28:1;
      uint64_t ER29:1;
      uint64_t ER30:1;
      uint64_t ER31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECL0:1;
      uint64_t ECL1:1;
      uint64_t ECL2:1;
      uint64_t ECL3:1;
      uint64_t ECL4:1;
      uint64_t ECL5:1;
      uint64_t ECL6:1;
      uint64_t ECL7:1;
      uint64_t ECL8:1;
      uint64_t ECL9:1;
      uint64_t ECL10:1;
      uint64_t ECL11:1;
      uint64_t ECL12:1;
      uint64_t ECL13:1;
      uint64_t ECL14:1;
      uint64_t ECL15:1;
      uint64_t ECL16:1;
      uint64_t ECL17:1;
      uint64_t ECL18:1;
      uint64_t ECL19:1;
      uint64_t ECL20:1;
      uint64_t ECL21:1;
      uint64_t ECL22:1;
      uint64_t ECL23:1;
      uint64_t ECL24:1;
      uint64_t ECL25:1;
      uint64_t ECL26:1;
      uint64_t ECL27:1;
      uint64_t ECL28:1;
      uint64_t ECL29:1;
      uint64_t ECL30:1;
      uint64_t ECL31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA0:1;
      uint64_t LB0:1;
      uint64_t LA1:1;
      uint64_t LB1:1;
      uint64_t LA2:1;
      uint64_t LB2:1;
      uint64_t LA3:1;
      uint64_t LB3:1;
      uint64_t LA4:1;
      uint64_t LB4:1;
      uint64_t LA5:1;
      uint64_t LB5:1;
      uint64_t LA6:1;
      uint64_t LB6:1;
      uint64_t LA7:1;
      uint64_t LB7:1;
      uint64_t LA8:1;
      uint64_t LB8:1;
      uint64_t LA9:1;
      uint64_t LB9:1;
      uint64_t LA10:1;
      uint64_t LB10:1;
      uint64_t LA11:1;
      uint64_t LB11:1;
      uint64_t LA12:1;
      uint64_t LB12:1;
      uint64_t LA13:1;
      uint64_t LB13:1;
      uint64_t LA14:1;
      uint64_t LB14:1;
      uint64_t LA15:1;
      uint64_t LB15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LA16:1;
      uint64_t LB16:1;
      uint64_t LA17:1;
      uint64_t LB17:1;
      uint64_t LA18:1;
      uint64_t LB18:1;
      uint64_t LA19:1;
      uint64_t LB19:1;
      uint64_t LA20:1;
      uint64_t LB20:1;
      uint64_t LA21:1;
      uint64_t LB21:1;
      uint64_t LA22:1;
      uint64_t LB22:1;
      uint64_t LA23:1;
      uint64_t LB23:1;
      uint64_t LA24:1;
      uint64_t LB24:1;
      uint64_t LA25:1;
      uint64_t LB25:1;
      uint64_t LA26:1;
      uint64_t LB26:1;
      uint64_t LA27:1;
      uint64_t LB27:1;
      uint64_t LA28:1;
      uint64_t LB28:1;
      uint64_t LA29:1;
      uint64_t LB29:1;
      uint64_t LA30:1;
      uint64_t LB30:1;
      uint64_t LA31:1;
      uint64_t LB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ELVR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMIRR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NMICL;

};

#define EXTI (*(volatile struct EXTI_tag *) 0x40030000)

struct INTREQ_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBEP1:1;
      uint64_t USBEP2:1;
      uint64_t USBEP3:1;
      uint64_t USBEP4:1;
      uint64_t USBEP5:1;
      uint64_t ADCSCAN0:1;
      uint64_t ADCSCAN1:1;
      uint64_t ADCSCAN2:1;
      uint64_t IRQ0BT0:1;
      uint64_t IRQ0BT2:1;
      uint64_t IRQ0BT4:1;
      uint64_t IRQ0BT6:1;
      uint64_t MFS0RX:1;
      uint64_t MFS0TX:1;
      uint64_t MFS1RX:1;
      uint64_t MFS1TX:1;
      uint64_t MFS2RX:1;
      uint64_t MFS2TX:1;
      uint64_t MFS3RX:1;
      uint64_t MFS3TX:1;
      uint64_t MFS4RX:1;
      uint64_t MFS4TX:1;
      uint64_t MFS5RX:1;
      uint64_t MFS5TX:1;
      uint64_t MFS6RX:1;
      uint64_t MFS6TX:1;
      uint64_t MFS7RX:1;
      uint64_t MFS7TX:1;
      uint64_t EXINT0:1;
      uint64_t EXINT1:1;
      uint64_t EXINT2:1;
      uint64_t EXINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRQSEL;

  uint8_t res0[12];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ODDPKS0:1;
      uint64_t ODDPKS1:1;
      uint64_t ODDPKS2:1;
      uint64_t ODDPKS3:1;
      uint64_t ODDPKS4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ODDPKS;

  uint8_t res1[255];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SELIRQ:8;
      uint64_t reservedSpace0:8;
      uint64_t SELBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010SEL;

  uint8_t res2[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:1;
      uint64_t HWINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXC02MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCSINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ000MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWWDTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ001MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ002MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ003MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ004MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ005MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ006MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ007MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ008MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ009MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQBIT0:1;
      uint64_t IRQBIT1:1;
      uint64_t IRQBIT2:1;
      uint64_t IRQBIT3:1;
      uint64_t IRQBIT4:1;
      uint64_t IRQBIT5:1;
      uint64_t IRQBIT6:1;
      uint64_t IRQBIT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ010MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ011MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ012MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ013MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ014MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ015MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ016MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ017MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ018MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ019MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ020MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ021MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ022MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAVEINT0:1;
      uint64_t WAVEINT1:1;
      uint64_t WAVEINT2:1;
      uint64_t WAVEINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ023MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ024MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ025MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ026MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ027MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ028MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ029MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ030MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ031MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_PEAK_INT0:1;
      uint64_t FRT_PEAK_INT1:1;
      uint64_t FRT_PEAK_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ032MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRT_ZERO_INT0:1;
      uint64_t FRT_ZERO_INT1:1;
      uint64_t FRT_ZERO_INT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ033MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICUINT0:1;
      uint64_t ICUINT1:1;
      uint64_t ICUINT2:1;
      uint64_t ICUINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ034MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCUINT0:1;
      uint64_t OCUINT1:1;
      uint64_t OCUINT2:1;
      uint64_t OCUINT3:1;
      uint64_t OCUINT4:1;
      uint64_t OCUINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ035MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ036MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ037MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPGINT0:1;
      uint64_t PPGINT1:1;
      uint64_t PPGINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ038MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ039MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ040MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ041MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ042MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ043MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ044MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ045MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ046MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMINT1:1;
      uint64_t TIMINT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ047MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ048MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BMEMCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ049MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ050MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ051MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ052MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ053MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ054MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ055MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ056MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ057MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ058MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSCINT:1;
      uint64_t SOSCINT:1;
      uint64_t MPLLINT:1;
      uint64_t UPLLINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ059MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ060MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ061MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ062MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ063MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ064MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ065MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ066MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ067MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ068MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ069MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ070MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ071MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ072MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ073MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ074MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ075MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ076MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ077MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_DRQ_INT0:1;
      uint64_t USB_DRQ_INT1:1;
      uint64_t USB_DRQ_INT2:1;
      uint64_t USB_DRQ_INT3:1;
      uint64_t USB_DRQ_INT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ078MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_INT0:1;
      uint64_t USB_INT1:1;
      uint64_t USB_INT2:1;
      uint64_t USB_INT3:1;
      uint64_t USB_INT4:1;
      uint64_t USB_INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ079MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ080MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CANINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ081MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSBD:1;
      uint64_t MACPMT:1;
      uint64_t MACLPI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ082MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ083MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ084MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ085MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ086MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ087MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ088MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ089MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ090MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTCINT0:1;
      uint64_t DSTCINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ091MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ092MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ093MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ094MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTINT0:1;
      uint64_t EXTINT1:1;
      uint64_t EXTINT2:1;
      uint64_t EXTINT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ095MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ096MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUDINT0:1;
      uint64_t QUDINT1:1;
      uint64_t QUDINT2:1;
      uint64_t QUDINT3:1;
      uint64_t QUDINT4:1;
      uint64_t QUDINT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ097MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ098MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ099MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ100MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ101MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTINT0:1;
      uint64_t BTINT1:1;
      uint64_t BTINT2:1;
      uint64_t BTINT3:1;
      uint64_t BTINT4:1;
      uint64_t BTINT5:1;
      uint64_t BTINT6:1;
      uint64_t BTINT7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ102MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ103MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ104MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ105MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ106MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ107MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ108MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ109MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ110MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCINT0:1;
      uint64_t ADCINT1:1;
      uint64_t ADCINT2:1;
      uint64_t ADCINT3:1;
      uint64_t ADCINT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ111MON;

  uint32_t IRQ112MON;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_DRQ_INT0:1;
      uint64_t USB_DRQ_INT1:1;
      uint64_t USB_DRQ_INT2:1;
      uint64_t USB_DRQ_INT3:1;
      uint64_t USB_DRQ_INT4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ113MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_INT0:1;
      uint64_t USB_INT1:1;
      uint64_t USB_INT2:1;
      uint64_t USB_INT3:1;
      uint64_t USB_INT4:1;
      uint64_t USB_INT5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ114MON;

  uint32_t IRQ115MON;
  uint32_t IRQ116MON;
  uint32_t IRQ117MON;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDINT0:1;
      uint64_t SDINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ118MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ119MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ120MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ121MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ122MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ123MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ124MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ125MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ126MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSINT0:1;
      uint64_t MFSINT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ127MON;

};

#define INTREQ (*(volatile struct INTREQ_tag *) 0x40031000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFR8;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFRE;

  uint8_t res1[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCRE;

  uint8_t res3[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDR8;

  uint8_t res4[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRE;

  uint8_t res5[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIR8;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDIRE;

  uint8_t res7[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDOR8;

  uint8_t res8[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDORE;

  uint8_t res9[196];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AN00:1;
      uint64_t AN01:1;
      uint64_t AN02:1;
      uint64_t AN03:1;
      uint64_t AN04:1;
      uint64_t AN05:1;
      uint64_t AN06:1;
      uint64_t AN07:1;
      uint64_t AN08:1;
      uint64_t AN09:1;
      uint64_t AN10:1;
      uint64_t AN11:1;
      uint64_t AN12:1;
      uint64_t AN13:1;
      uint64_t AN14:1;
      uint64_t AN15:1;
      uint64_t AN16:1;
      uint64_t AN17:1;
      uint64_t AN18:1;
      uint64_t AN19:1;
      uint64_t AN20:1;
      uint64_t AN21:1;
      uint64_t AN22:1;
      uint64_t AN23:1;
      uint64_t AN24:1;
      uint64_t AN25:1;
      uint64_t AN26:1;
      uint64_t AN27:1;
      uint64_t AN28:1;
      uint64_t AN29:1;
      uint64_t AN30:1;
      uint64_t AN31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADE;

  uint8_t res10[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MAINXC:2;
      uint64_t USB0C:1;
      uint64_t USB1C:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPSR;

  uint8_t res11[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIS:1;
      uint64_t CROUTE:2;
      uint64_t reservedSpace0:1;
      uint64_t RTCCOE:2;
      uint64_t SUBOUTE:2;
      uint64_t reservedSpace1:1;
      uint64_t USBP0E:1;
      uint64_t reservedSpace2:3;
      uint64_t USBP1E:1;
      uint64_t reservedSpace3:2;
      uint64_t JTAGEN0B:1;
      uint64_t JTAGEN1S:1;
      uint64_t reservedSpace4:6;
      uint64_t TRC0E:1;
      uint64_t TRC1E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO00E:2;
      uint64_t RTO01E:2;
      uint64_t RTO02E:2;
      uint64_t RTO03E:2;
      uint64_t RTO04E:2;
      uint64_t RTO05E:2;
      uint64_t DTTI0C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI0S:2;
      uint64_t FRCK0S:2;
      uint64_t IC00S:3;
      uint64_t IC01S:3;
      uint64_t IC02S:3;
      uint64_t IC03S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO10E:2;
      uint64_t RTO11E:2;
      uint64_t RTO12E:2;
      uint64_t RTO13E:2;
      uint64_t RTO14E:2;
      uint64_t RTO15E:2;
      uint64_t DTTI1C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI1S:2;
      uint64_t FRCK1S:2;
      uint64_t IC10S:3;
      uint64_t IC11S:3;
      uint64_t IC12S:3;
      uint64_t IC13S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO20E:2;
      uint64_t RTO21E:2;
      uint64_t RTO22E:2;
      uint64_t RTO23E:2;
      uint64_t RTO24E:2;
      uint64_t RTO25E:2;
      uint64_t DTTI2C:1;
      uint64_t reservedSpace0:3;
      uint64_t DTTI2S:2;
      uint64_t FRCK2S:2;
      uint64_t IC20S:3;
      uint64_t IC21S:3;
      uint64_t IC22S:3;
      uint64_t IC23S:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA0E:2;
      uint64_t TIOB0S:3;
      uint64_t reservedSpace1:1;
      uint64_t TIOA1S:2;
      uint64_t TIOA1E:2;
      uint64_t TIOB1S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA2E:2;
      uint64_t TIOB2S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA3S:2;
      uint64_t TIOA3E:2;
      uint64_t TIOB3S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA4E:2;
      uint64_t TIOB4S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA5S:2;
      uint64_t TIOA5E:2;
      uint64_t TIOB5S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA6E:2;
      uint64_t TIOB6S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA7S:2;
      uint64_t TIOA7E:2;
      uint64_t TIOB7S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT00S:2;
      uint64_t EINT01S:2;
      uint64_t EINT02S:2;
      uint64_t EINT03S:2;
      uint64_t EINT04S:2;
      uint64_t EINT05S:2;
      uint64_t EINT06S:2;
      uint64_t EINT07S:2;
      uint64_t EINT08S:2;
      uint64_t EINT09S:2;
      uint64_t EINT10S:2;
      uint64_t EINT11S:2;
      uint64_t EINT12S:2;
      uint64_t EINT13S:2;
      uint64_t EINT14S:2;
      uint64_t EINT15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN0S:2;
      uint64_t SOT0B:2;
      uint64_t SCK0B:2;
      uint64_t SIN1S:2;
      uint64_t SOT1B:2;
      uint64_t SCK1B:2;
      uint64_t SIN2S:2;
      uint64_t SOT2B:2;
      uint64_t SCK2B:2;
      uint64_t SIN3S:2;
      uint64_t SOT3B:2;
      uint64_t SCK3B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTS4E:2;
      uint64_t CTS4S:2;
      uint64_t SIN4S:2;
      uint64_t SOT4B:2;
      uint64_t SCK4B:2;
      uint64_t SIN5S:2;
      uint64_t SOT5B:2;
      uint64_t SCK5B:2;
      uint64_t SIN6S:2;
      uint64_t SOT6B:2;
      uint64_t SCK6B:2;
      uint64_t SIN7S:2;
      uint64_t SOT7B:2;
      uint64_t SCK7B:2;
      uint64_t RTS5E:2;
      uint64_t CTS5S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN0S:2;
      uint64_t QBIN0S:2;
      uint64_t QZIN0S:2;
      uint64_t QAIN1S:2;
      uint64_t QBIN1S:2;
      uint64_t QZIN1S:2;
      uint64_t ADTRG0S:4;
      uint64_t ADTRG1S:4;
      uint64_t ADTRG2S:4;
      uint64_t CRX0S:2;
      uint64_t CTX0E:2;
      uint64_t CRX1S:2;
      uint64_t CTX1E:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UEDEFB:1;
      uint64_t UEDTHB:1;
      uint64_t UECLKE:1;
      uint64_t UEWEXE:1;
      uint64_t UEDQME:1;
      uint64_t UEOEXE:1;
      uint64_t UEFLSE:1;
      uint64_t UECS1E:1;
      uint64_t UECS2E:1;
      uint64_t UECS3E:1;
      uint64_t UECS4E:1;
      uint64_t UECS5E:1;
      uint64_t UECS6E:1;
      uint64_t UECS7E:1;
      uint64_t UEAOOE:1;
      uint64_t UEA08E:1;
      uint64_t UEA09E:1;
      uint64_t UEA10E:1;
      uint64_t UEA11E:1;
      uint64_t UEA12E:1;
      uint64_t UEA13E:1;
      uint64_t UEA14E:1;
      uint64_t UEA15E:1;
      uint64_t UEA16E:1;
      uint64_t UEA17E:1;
      uint64_t UEA18E:1;
      uint64_t UEA19E:1;
      uint64_t UEA20E:1;
      uint64_t UEA21E:1;
      uint64_t UEA22E:1;
      uint64_t UEA23E:1;
      uint64_t UEA24E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UEALEE:1;
      uint64_t UECS0E:1;
      uint64_t UEA01E:1;
      uint64_t UEA02E:1;
      uint64_t UEA03E:1;
      uint64_t UEA04E:1;
      uint64_t UEA05E:1;
      uint64_t UEA06E:1;
      uint64_t UEA07E:1;
      uint64_t UED00B:1;
      uint64_t UED01B:1;
      uint64_t UED02B:1;
      uint64_t UED03B:1;
      uint64_t UED04B:1;
      uint64_t UED05B:1;
      uint64_t UED06B:1;
      uint64_t UED07B:1;
      uint64_t UED08B:1;
      uint64_t UED09B:1;
      uint64_t UED10B:1;
      uint64_t UED11B:1;
      uint64_t UED12B:1;
      uint64_t UED13B:1;
      uint64_t UED14B:1;
      uint64_t UED15B:1;
      uint64_t UERLC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA8E:2;
      uint64_t TIOB8S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA9S:2;
      uint64_t TIOA9E:2;
      uint64_t TIOB9S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA10E:2;
      uint64_t TIOB10S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA11S:2;
      uint64_t TIOA11E:2;
      uint64_t TIOB11S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TIOA12E:2;
      uint64_t TIOB12S:2;
      uint64_t reservedSpace1:2;
      uint64_t TIOA13S:2;
      uint64_t TIOA13E:2;
      uint64_t TIOB13S:2;
      uint64_t reservedSpace2:4;
      uint64_t TIOA14E:2;
      uint64_t TIOB14S:2;
      uint64_t reservedSpace3:2;
      uint64_t TIOA15S:2;
      uint64_t TIOA15E:2;
      uint64_t TIOB15S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QAIN2S:2;
      uint64_t QBIN2S:2;
      uint64_t QZIN2S:2;
      uint64_t reservedSpace0:12;
      uint64_t E_TD0E:1;
      uint64_t E_TD1E:1;
      uint64_t E_TE0E:1;
      uint64_t E_TE1E:1;
      uint64_t E_MC0E:1;
      uint64_t E_MC1B:1;
      uint64_t E_MD0B:1;
      uint64_t E_MD1B:1;
      uint64_t E_CKE:1;
      uint64_t E_PSE:1;
      uint64_t E_SPLC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT16S:2;
      uint64_t EINT17S:2;
      uint64_t EINT18S:2;
      uint64_t EINT19S:2;
      uint64_t EINT20S:2;
      uint64_t EINT21S:2;
      uint64_t EINT22S:2;
      uint64_t EINT23S:2;
      uint64_t EINT24S:2;
      uint64_t EINT25S:2;
      uint64_t EINT26S:2;
      uint64_t EINT27S:2;
      uint64_t EINT28S:2;
      uint64_t EINT29S:2;
      uint64_t EINT30S:2;
      uint64_t EINT31S:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCS6B:2;
      uint64_t SCS7B:2;
      uint64_t SIN8S:2;
      uint64_t SOT8B:2;
      uint64_t SCK8B:2;
      uint64_t SIN9S:2;
      uint64_t SOT9B:2;
      uint64_t SCK9B:2;
      uint64_t SIN10S:2;
      uint64_t SOT10B:2;
      uint64_t SCK10B:2;
      uint64_t SIN11S:2;
      uint64_t SOT11B:2;
      uint64_t SCK11B:2;
      uint64_t SFMPAC:1;
      uint64_t SFMPBC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t SIN12S:2;
      uint64_t SOT12B:2;
      uint64_t SCK12B:2;
      uint64_t SIN13S:2;
      uint64_t SOT13B:2;
      uint64_t SCK13B:2;
      uint64_t SIN14S:2;
      uint64_t SOT14B:2;
      uint64_t SCK14B:2;
      uint64_t SIN15S:2;
      uint64_t SOT15B:2;
      uint64_t SCK15B:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t QAIN3S:2;
      uint64_t QBIN3S:2;
      uint64_t QZIN3S:2;
      uint64_t reservedSpace1:4;
      uint64_t SDCLKE:2;
      uint64_t SDCMDB:2;
      uint64_t SDDATA0B:2;
      uint64_t SDDATA1B:2;
      uint64_t SDDATA2B:2;
      uint64_t SDDATA3B:2;
      uint64_t SDCDS:2;
      uint64_t SDWPS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR18;

  uint32_t EPFR19;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UESMCKE:1;
      uint64_t UESMCEE:1;
      uint64_t UERASE:1;
      uint64_t UECASE:1;
      uint64_t UEDWEXE:1;
      uint64_t UECSXE:1;
      uint64_t UEDQM2E:1;
      uint64_t UEDQM3E:1;
      uint64_t UEDTHHB:1;
      uint64_t UED16B:1;
      uint64_t UED17B:1;
      uint64_t UED18B:1;
      uint64_t UED19B:1;
      uint64_t UED20B:1;
      uint64_t UED21B:1;
      uint64_t UED22B:1;
      uint64_t UED23B:1;
      uint64_t UED24B:1;
      uint64_t UED25B:1;
      uint64_t UED26B:1;
      uint64_t UED27B:1;
      uint64_t UED28B:1;
      uint64_t UED29B:1;
      uint64_t UED30B:1;
      uint64_t UED31B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPFR20;

  uint8_t res12[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P00:1;
      uint64_t P01:1;
      uint64_t P02:1;
      uint64_t P03:1;
      uint64_t P04:1;
      uint64_t P05:1;
      uint64_t P06:1;
      uint64_t P07:1;
      uint64_t P08:1;
      uint64_t P09:1;
      uint64_t P0A:1;
      uint64_t P0B:1;
      uint64_t P0C:1;
      uint64_t P0D:1;
      uint64_t P0E:1;
      uint64_t P0F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR0;

  union
  {
    uint32_t R;
    struct
    {
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
      uint64_t P1A:1;
      uint64_t P1B:1;
      uint64_t P1C:1;
      uint64_t P1D:1;
      uint64_t P1E:1;
      uint64_t P1F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P20:1;
      uint64_t P21:1;
      uint64_t P22:1;
      uint64_t P23:1;
      uint64_t P24:1;
      uint64_t P25:1;
      uint64_t P26:1;
      uint64_t P27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P30:1;
      uint64_t P31:1;
      uint64_t P32:1;
      uint64_t P33:1;
      uint64_t P34:1;
      uint64_t P35:1;
      uint64_t P36:1;
      uint64_t P37:1;
      uint64_t P38:1;
      uint64_t P39:1;
      uint64_t P3A:1;
      uint64_t P3B:1;
      uint64_t P3C:1;
      uint64_t P3D:1;
      uint64_t P3E:1;
      uint64_t P3F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P40:1;
      uint64_t P41:1;
      uint64_t P42:1;
      uint64_t P43:1;
      uint64_t P44:1;
      uint64_t P45:1;
      uint64_t P46:1;
      uint64_t P47:1;
      uint64_t P48:1;
      uint64_t P49:1;
      uint64_t P4A:1;
      uint64_t P4B:1;
      uint64_t P4C:1;
      uint64_t P4D:1;
      uint64_t P4E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P50:1;
      uint64_t P51:1;
      uint64_t P52:1;
      uint64_t P53:1;
      uint64_t P54:1;
      uint64_t P55:1;
      uint64_t P56:1;
      uint64_t P57:1;
      uint64_t P58:1;
      uint64_t P59:1;
      uint64_t P5A:1;
      uint64_t P5B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P60:1;
      uint64_t P61:1;
      uint64_t P62:1;
      uint64_t P63:1;
      uint64_t P64:1;
      uint64_t P65:1;
      uint64_t P66:1;
      uint64_t P67:1;
      uint64_t P68:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P70:1;
      uint64_t P71:1;
      uint64_t P72:1;
      uint64_t P73:1;
      uint64_t P74:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P80:1;
      uint64_t P81:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZR8;

  uint8_t res13[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE0:1;
      uint64_t reservedSpace0:1;
      uint64_t PE2:1;
      uint64_t PE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PZRE;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x4006f000)

struct LVD_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SVHI:4;
      uint64_t reservedSpace1:1;
      uint64_t LVDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_CTL;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_CLR;

  uint8_t res2[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDLCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVD_RLR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t LVDIRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVD_STR2;

};

#define LVD (*(volatile struct LVD_tag *) 0x40035000)

struct DS_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCCKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RCK_CTL;

  uint8_t res0[1787];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMD_CTL;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WINITX:1;
      uint64_t WLVDH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WRFSR;

  uint8_t res2[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCI:1;
      uint64_t WLVDI:1;
      uint64_t WUI0:1;
      uint64_t WUI1:1;
      uint64_t WUI2:1;
      uint64_t WUI3:1;
      uint64_t WUI4:1;
      uint64_t WUI5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIFSR;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WRTCE:1;
      uint64_t WLVDE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUI1E:1;
      uint64_t WUI2E:1;
      uint64_t WUI3E:1;
      uint64_t WUI4E:1;
      uint64_t WUI5E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WIER;

  uint8_t res4[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUI1LV:1;
      uint64_t WUI2LV:1;
      uint64_t WUI3LV:1;
      uint64_t WUI4LV:1;
      uint64_t WUI5LV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WILVR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SRAMR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DSRAMR;

  uint8_t res6[235];

  uint8_t BUR01;
  uint8_t BUR02;
  uint8_t BUR03;
  uint8_t BUR04;
  uint8_t BUR05;
  uint8_t BUR06;
  uint8_t BUR07;
  uint8_t BUR08;
  uint8_t BUR09;
  uint8_t BUR10;
  uint8_t BUR11;
  uint8_t BUR12;
  uint8_t BUR13;
  uint8_t BUR14;
  uint8_t BUR15;
  uint8_t BUR16;
};

#define DS (*(volatile struct DS_tag *) 0x40035104)

struct CRC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t CRC32:1;
      uint64_t LTLEND:1;
      uint64_t LSBFST:1;
      uint64_t CRCLTE:1;
      uint64_t CRCLSF:1;
      uint64_t FXOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CRCCR;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

};

#define CRC (*(volatile struct CRC_tag *) 0x40039000)

struct WC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CTR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RLC:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WCIF:1;
      uint64_t WCIE:1;
      uint64_t CS:2;
      uint64_t reservedSpace0:2;
      uint64_t WCOP:1;
      uint64_t WCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WCCR;

  uint8_t res0[13];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SEL_IN:2;
      uint64_t reservedSpace0:6;
      uint64_t SEL_OUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_SEL;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t CLK_EN_R:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CLK_EN;

};

#define WC (*(volatile struct WC_tag *) 0x4003a000)

struct RTC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t ST:1;
      uint64_t reservedSpace0:1;
      uint64_t RUN:1;
      uint64_t SRST:1;
      uint64_t SCST:1;
      uint64_t SCRST:1;
      uint64_t BUSY:1;
      uint64_t TRANS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR10;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MIEN:1;
      uint64_t HEN:1;
      uint64_t DEN:1;
      uint64_t MOEN:1;
      uint64_t YEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR11;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTSSI:1;
      uint64_t INTSI:1;
      uint64_t INTMI:1;
      uint64_t INTHI:1;
      uint64_t INTTMI:1;
      uint64_t INTALI:1;
      uint64_t INTERI:1;
      uint64_t INTCRI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR12;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t INTSSIE:1;
      uint64_t INTSIE:1;
      uint64_t INTMIE:1;
      uint64_t INTHIE:1;
      uint64_t INTTMIE:1;
      uint64_t INTALIE:1;
      uint64_t INTERIE:1;
      uint64_t INTCRIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCR13;

  uint8_t res3[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CREAD:1;
      uint64_t CWRITE:1;
      uint64_t BREAD:1;
      uint64_t BWRITE:1;
      uint64_t PREAD:1;
      uint64_t PWRITE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMST:1;
      uint64_t TMEN:1;
      uint64_t TMRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTCR21;

  uint8_t res4[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t S:4;
      uint64_t TS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTSR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MI:4;
      uint64_t TMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMIR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t H:4;
      uint64_t TH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTHR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t D:4;
      uint64_t TD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDR;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DW:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDW;

  uint8_t res9[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MO:4;
      uint64_t TMO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTMOR;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Y:4;
      uint64_t TY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTYR;

  uint8_t res11[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMI:4;
      uint64_t TAMI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMIR;

  uint8_t res12[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AH:4;
      uint64_t TAH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALHR;

  uint8_t res13[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:4;
      uint64_t TAD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALDR;

  uint8_t res14[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AMO:4;
      uint64_t TAMO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALMOR;

  uint8_t res15[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AY:4;
      uint64_t TAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ALYR;

  uint8_t res16[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM0:1;
      uint64_t TM1:1;
      uint64_t TM2:1;
      uint64_t TM3:1;
      uint64_t TM4:1;
      uint64_t TM5:1;
      uint64_t TM6:1;
      uint64_t TM7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR0;

  uint8_t res17[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM8:1;
      uint64_t TM9:1;
      uint64_t TM10:1;
      uint64_t TM11:1;
      uint64_t TM12:1;
      uint64_t TM13:1;
      uint64_t TM14:1;
      uint64_t TM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR1;

  uint8_t res18[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t TM16:1;
      uint64_t TM17:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTTR2;

  uint8_t res19[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCAL0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCAL0;

  uint8_t res20[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCAL1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCAL1;

  uint8_t res21[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALEN;

  uint8_t res22[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIV;

  uint8_t res23[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTDIVEN:1;
      uint64_t WTDIVRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTDIVEN;

  uint8_t res24[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCALPRD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCALPRD;

  uint8_t res25[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WTCOSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTCOSEL;

  uint8_t res26[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VB_CLKDIV;

  uint8_t res27[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOSCEX:1;
      uint64_t SOSCNTL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) WTOSCCNT;

  uint8_t res28[3];

  uint8_t CCS;
  uint8_t res29[3];

  uint8_t CCB;
  uint8_t res30[3];

  uint8_t TRIM;
  uint8_t res31[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BOOST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BOOST;

  uint8_t res32[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) EWKUP;

  uint8_t res33[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t PON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VDET;

  uint8_t res34[3];

  uint8_t FDET;
  uint8_t res35[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HIBRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIBRST;

  uint8_t res36[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPFR0:1;
      uint64_t VPFR1:1;
      uint64_t VPFR2:1;
      uint64_t VPFR3:1;
      uint64_t SPSR0:1;
      uint64_t SPSR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPFR;

  uint8_t res37[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPCR0:1;
      uint64_t VPCR1:1;
      uint64_t VPCR2:1;
      uint64_t VPCR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPCR;

  uint8_t res38[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDDR0:1;
      uint64_t VDDR1:1;
      uint64_t VDDR2:1;
      uint64_t VDDR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDDR;

  uint8_t res39[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDIR0:1;
      uint64_t VDIR1:1;
      uint64_t VDIR2:1;
      uint64_t VDIR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDIR;

  uint8_t res40[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VDOR0:1;
      uint64_t VDOR1:1;
      uint64_t VDOR2:1;
      uint64_t VDOR3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBDOR;

  uint8_t res41[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VPZR0:1;
      uint64_t VPZR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) VBPZR;

  uint8_t res42[79];

  uint8_t BREG00;
  uint8_t BREG01;
  uint8_t BREG02;
  uint8_t BREG03;
  uint8_t BREG04;
  uint8_t BREG05;
  uint8_t BREG06;
  uint8_t BREG07;
  uint8_t BREG08;
  uint8_t BREG09;
  uint8_t BREG0A;
  uint8_t BREG0B;
  uint8_t BREG0C;
  uint8_t BREG0D;
  uint8_t BREG0E;
  uint8_t BREG0F;
  uint8_t BREG10;
  uint8_t BREG11;
  uint8_t BREG12;
  uint8_t BREG13;
  uint8_t BREG14;
  uint8_t BREG15;
  uint8_t BREG16;
  uint8_t BREG17;
  uint8_t BREG18;
  uint8_t BREG19;
  uint8_t BREG1A;
  uint8_t BREG1B;
  uint8_t BREG1C;
  uint8_t BREG1D;
  uint8_t BREG1E;
  uint8_t BREG1F;
  uint8_t BREG20;
  uint8_t BREG21;
  uint8_t BREG22;
  uint8_t BREG23;
  uint8_t BREG24;
  uint8_t BREG25;
  uint8_t BREG26;
  uint8_t BREG27;
  uint8_t BREG28;
  uint8_t BREG29;
  uint8_t BREG2A;
  uint8_t BREG2B;
  uint8_t BREG2C;
  uint8_t BREG2D;
  uint8_t BREG2E;
  uint8_t BREG2F;
  uint8_t BREG30;
  uint8_t BREG31;
  uint8_t BREG32;
  uint8_t BREG33;
  uint8_t BREG34;
  uint8_t BREG35;
  uint8_t BREG36;
  uint8_t BREG37;
  uint8_t BREG38;
  uint8_t BREG39;
  uint8_t BREG3A;
  uint8_t BREG3B;
  uint8_t BREG3C;
  uint8_t BREG3D;
  uint8_t BREG3E;
  uint8_t BREG3F;
  uint8_t BREG40;
  uint8_t BREG41;
  uint8_t BREG42;
  uint8_t BREG43;
  uint8_t BREG44;
  uint8_t BREG45;
  uint8_t BREG46;
  uint8_t BREG47;
  uint8_t BREG48;
  uint8_t BREG49;
  uint8_t BREG4A;
  uint8_t BREG4B;
  uint8_t BREG4C;
  uint8_t BREG4D;
  uint8_t BREG4E;
  uint8_t BREG4F;
  uint8_t BREG50;
  uint8_t BREG51;
  uint8_t BREG52;
  uint8_t BREG53;
  uint8_t BREG54;
  uint8_t BREG55;
  uint8_t BREG56;
  uint8_t BREG57;
  uint8_t BREG58;
  uint8_t BREG59;
  uint8_t BREG5A;
  uint8_t BREG5B;
  uint8_t BREG5C;
  uint8_t BREG5D;
  uint8_t BREG5E;
  uint8_t BREG5F;
  uint8_t BREG60;
  uint8_t BREG61;
  uint8_t BREG62;
  uint8_t BREG63;
  uint8_t BREG64;
  uint8_t BREG65;
  uint8_t BREG66;
  uint8_t BREG67;
  uint8_t BREG68;
  uint8_t BREG69;
  uint8_t BREG6A;
  uint8_t BREG6B;
  uint8_t BREG6C;
  uint8_t BREG6D;
  uint8_t BREG6E;
  uint8_t BREG6F;
  uint8_t BREG70;
  uint8_t BREG71;
  uint8_t BREG72;
  uint8_t BREG73;
  uint8_t BREG74;
  uint8_t BREG75;
  uint8_t BREG76;
  uint8_t BREG77;
  uint8_t BREG78;
  uint8_t BREG79;
  uint8_t BREG7A;
  uint8_t BREG7B;
  uint8_t BREG7C;
  uint8_t BREG7D;
  uint8_t BREG7E;
  uint8_t BREG7F;
};

#define RTC (*(volatile struct RTC_tag *) 0x4003b100)

struct LCR_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LCR_PRSLD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LCR_PRSLD;

};

#define LCR (*(volatile struct LCR_tag *) 0x4003c000)

struct CLK_GATING_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSCK0:1;
      uint64_t MFSCK1:1;
      uint64_t MFSCK2:1;
      uint64_t MFSCK3:1;
      uint64_t MFSCK4:1;
      uint64_t MFSCK5:1;
      uint64_t MFSCK6:1;
      uint64_t MFSCK7:1;
      uint64_t MFSCK8:1;
      uint64_t MFSCK9:1;
      uint64_t MFSCK10:1;
      uint64_t MFSCK11:1;
      uint64_t MFSCK12:1;
      uint64_t MFSCK13:1;
      uint64_t MFSCK14:1;
      uint64_t MFSCK15:1;
      uint64_t ADCCK0:1;
      uint64_t ADCCK1:1;
      uint64_t ADCCK2:1;
      uint64_t ADCCK3:1;
      uint64_t reservedSpace0:4;
      uint64_t DMACK:1;
      uint64_t reservedSpace1:1;
      uint64_t EXBCK:1;
      uint64_t reservedSpace2:1;
      uint64_t GIOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFSRST0:1;
      uint64_t MFSRST1:1;
      uint64_t MFSRST2:1;
      uint64_t MFSRST3:1;
      uint64_t MFSRST4:1;
      uint64_t MFSRST5:1;
      uint64_t MFSRST6:1;
      uint64_t MFSRST7:1;
      uint64_t MFSRST8:1;
      uint64_t MFSRST9:1;
      uint64_t MFSRST10:1;
      uint64_t MFSRST11:1;
      uint64_t MFSRST12:1;
      uint64_t MFSRST13:1;
      uint64_t MFSRST14:1;
      uint64_t MFSRST15:1;
      uint64_t ADCRST0:1;
      uint64_t ADCRST1:1;
      uint64_t ADCRST2:1;
      uint64_t ADCRST3:1;
      uint64_t reservedSpace0:4;
      uint64_t DMARST:1;
      uint64_t reservedSpace1:1;
      uint64_t EXBRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST0;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMCK0:1;
      uint64_t BTMCK1:1;
      uint64_t BTMCK2:1;
      uint64_t BTMCK3:1;
      uint64_t reservedSpace0:4;
      uint64_t MFTCK0:1;
      uint64_t MFTCK1:1;
      uint64_t MFTCK2:1;
      uint64_t MFTCK3:1;
      uint64_t reservedSpace1:4;
      uint64_t QDUCK0:1;
      uint64_t QDUCK1:1;
      uint64_t QDUCK2:1;
      uint64_t QDUCK3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTMRST0:1;
      uint64_t BTMRST1:1;
      uint64_t BTMRST2:1;
      uint64_t BTMRST3:1;
      uint64_t reservedSpace0:4;
      uint64_t MFTRST0:1;
      uint64_t MFTRST1:1;
      uint64_t MFTRST2:1;
      uint64_t MFTRST3:1;
      uint64_t reservedSpace1:4;
      uint64_t QDURST0:1;
      uint64_t QDURST1:1;
      uint64_t QDURST2:1;
      uint64_t QDURST3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBCK0:1;
      uint64_t USBCK1:1;
      uint64_t reservedSpace0:2;
      uint64_t CANCK0:1;
      uint64_t CANCK1:1;
      uint64_t reservedSpace1:2;
      uint64_t SDCCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USBRST0:1;
      uint64_t USBRST1:1;
      uint64_t reservedSpace0:2;
      uint64_t CANRST0:1;
      uint64_t CANRST1:1;
      uint64_t reservedSpace1:2;
      uint64_t SDCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRST2;

};

#define CLK_GATING (*(volatile struct CLK_GATING_tag *) 0x4003c100)

struct PLL_CONTROL_tag
{
  uint32_t SSCTL1;
  uint32_t SSCTL2;
};

#define PLL_CONTROL (*(volatile struct PLL_CONTROL_tag *) 0x4003c800)

struct EXBUS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTH:2;
      uint64_t RBMON:1;
      uint64_t WEOFF:1;
      uint64_t NAND:1;
      uint64_t PAGE:1;
      uint64_t RDY:1;
      uint64_t SHRTDOUT:1;
      uint64_t MPXMODE:1;
      uint64_t ALEINV:1;
      uint64_t reservedSpace0:1;
      uint64_t MPXDOFF:1;
      uint64_t MPXCSOF:1;
      uint64_t MOEXEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RACC:4;
      uint64_t RADC:4;
      uint64_t FRADC:4;
      uint64_t RIDLC:4;
      uint64_t WACC:4;
      uint64_t WADC:4;
      uint64_t WWEC:4;
      uint64_t WIDLC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALC:4;
      uint64_t ALES:4;
      uint64_t ALEW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATIM7;

  uint8_t res0[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDON:1;
      uint64_t PDON:1;
      uint64_t ROFF:1;
      uint64_t reservedSpace0:1;
      uint64_t CASEL:2;
      uint64_t reservedSpace1:2;
      uint64_t RASEL:4;
      uint64_t BASEL:4;
      uint64_t MSDCLKOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFC:16;
      uint64_t NREF:8;
      uint64_t PREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CL:2;
      uint64_t reservedSpace0:2;
      uint64_t TRC:4;
      uint64_t TRP:4;
      uint64_t TRCD:4;
      uint64_t TRAS:4;
      uint64_t TREFC:4;
      uint64_t TDPL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDAD:16;
      uint64_t SDWE:1;
      uint64_t SDCAS:1;
      uint64_t SDRAS:1;
      uint64_t SDCS:1;
      uint64_t SDCKE:1;
      uint64_t reservedSpace0:10;
      uint64_t PEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCMD;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFER:1;
      uint64_t SDER:1;
      uint64_t SFION:1;
      uint64_t SDION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMCERR;

  uint8_t res2[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:4;
      uint64_t MCLKON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCLKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WEAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMODE;

};

#define EXBUS (*(volatile struct EXBUS_tag *) 0x4003f000)

struct USBCLK_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t UCEN0:1;
      uint64_t UCSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t UCEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UCCR;

  uint8_t res0[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLEN:1;
      uint64_t UPINC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR1;

  uint8_t res1[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPOWT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR2;

  uint8_t res2[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR3;

  uint8_t res3[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR4;

  uint8_t res4[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UP_STR;

  uint8_t res5[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_ENR;

  uint8_t res6[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_CLR;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPCSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPINT_STR;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t UPLLM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UPCR5;

  uint8_t res9[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t USBEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) USBEN0;

  uint8_t res10[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t USBEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) USBEN1;

};

#define USBCLK (*(volatile struct USBCLK_tag *) 0x40036000)

struct USB0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOST:1;
      uint64_t URST:1;
      uint64_t SOFIRE:1;
      uint64_t DIRE:1;
      uint64_t CNNIRE:1;
      uint64_t CMPIRE:1;
      uint64_t URIRE:1;
      uint64_t RWKIRE:1;
      uint64_t RETRY:1;
      uint64_t CANCEL:1;
      uint64_t SOFSTEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HCNT;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOFIRQ:1;
      uint64_t DIRQ:1;
      uint64_t CNNIRQ:1;
      uint64_t CMPIRQ:1;
      uint64_t URIRQ:1;
      uint64_t RWKIRQ:1;
      uint64_t reservedSpace0:1;
      uint64_t TCAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HIRQ;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t HS:2;
      uint64_t STUFF:1;
      uint64_t TGERR:1;
      uint64_t CRC_bitfield:1;
      uint64_t TOUT:1;
      uint64_t RERR:1;
      uint64_t LSTSOF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HERR;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CSTAT:1;
      uint64_t TMODE:1;
      uint64_t SUSP:1;
      uint64_t SOFBUSY:1;
      uint64_t CLKSEL:1;
      uint64_t ALIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HSTATE;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FRAMECOMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HFCOMP;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RTIMER0:8;
      uint64_t RTIMER1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HRTIMER;

  uint8_t res3[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RTIMER2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HRTIMER2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADDRESS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HADR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EOF0:8;
      uint64_t EOF1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HEOF;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FRAME0:8;
      uint64_t FRAME1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) HFRAME;

  uint8_t res6[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ENDPT:4;
      uint64_t TKNEN:3;
      uint64_t TGGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) HTOKEN;

  uint8_t res7[3];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWC:1;
      uint64_t RFBK:1;
      uint64_t reservedSpace0:1;
      uint64_t STALCLREN:1;
      uint64_t USTP:1;
      uint64_t HCONX:1;
      uint64_t RESUM:1;
      uint64_t RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UDCC;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS0:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0C;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS:9;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP1C;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP2C;

  uint8_t res11[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKS:7;
      uint64_t reservedSpace0:2;
      uint64_t STAL:1;
      uint64_t NULE:1;
      uint64_t DMAE:1;
      uint64_t DIR:1;
      uint64_t TYPE:2;
      uint64_t EPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5C;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TMSP:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TMSP;

  uint8_t res12[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CONF:1;
      uint64_t SETP:1;
      uint64_t WKUP:1;
      uint64_t BRST:1;
      uint64_t SOF:1;
      uint64_t SUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UDCS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CONFIE:1;
      uint64_t CONFN:1;
      uint64_t WKUPIE:1;
      uint64_t BRSTIE:1;
      uint64_t SOFIE:1;
      uint64_t SUSPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) UDCIE;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t DRQI:1;
      uint64_t reservedSpace1:3;
      uint64_t DRQIIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0IS;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQO:1;
      uint64_t reservedSpace1:2;
      uint64_t SPKIE:1;
      uint64_t DRQOIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0OS;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:9;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace0:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP1S;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP2S;

  uint8_t res17[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:7;
      uint64_t reservedSpace0:2;
      uint64_t SPK:1;
      uint64_t DRQ:1;
      uint64_t BUSY:1;
      uint64_t reservedSpace1:1;
      uint64_t SPKIE:1;
      uint64_t DRQIE:1;
      uint64_t BFINI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5S;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EP0DT;

  uint8_t res18[2];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP1DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP2DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5DT;

};

#define USB0 (*(volatile struct USB0_tag *) 0x40042100)

struct DMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t DH:4;
      uint64_t PR:1;
      uint64_t reservedSpace1:1;
      uint64_t DS_bitfield:1;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB0;

  uint32_t DMACSA0;
  uint32_t DMACDA0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB1;

  uint32_t DMACSA1;
  uint32_t DMACDA1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB2;

  uint32_t DMACSA2;
  uint32_t DMACDA2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB3;

  uint32_t DMACSA3;
  uint32_t DMACDA3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB4;

  uint32_t DMACSA4;
  uint32_t DMACDA4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB5;

  uint32_t DMACSA5;
  uint32_t DMACDA5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB6;

  uint32_t DMACSA6;
  uint32_t DMACDA6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:16;
      uint64_t BC:4;
      uint64_t reservedSpace0:3;
      uint64_t IS:6;
      uint64_t ST:1;
      uint64_t PB:1;
      uint64_t EB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACA7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t reservedSpace0:15;
      uint64_t SS:3;
      uint64_t CI:1;
      uint64_t EI:1;
      uint64_t RD:1;
      uint64_t RS:1;
      uint64_t RC:1;
      uint64_t FD:1;
      uint64_t FS:1;
      uint64_t TW:2;
      uint64_t MS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACB7;

  uint32_t DMACSA7;
  uint32_t DMACDA7;
};

#define DMAC (*(volatile struct DMAC_tag *) 0x40060000)

struct DSTC_tag
{
  uint32_t DESTP;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL:8;
      uint64_t reservedSpace0:8;
      uint64_t HWDESP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWDESP;

  uint8_t CMD;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SWINTE:1;
      uint64_t ERINTE:1;
      uint64_t RBDIS:1;
      uint64_t ESTE:1;
      uint64_t SWPR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CFG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SWDESP:14;
      uint64_t SWREQ:1;
      uint64_t SWST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SWTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EST:3;
      uint64_t DER:1;
      uint64_t ESTOP:1;
      uint64_t reservedSpace0:1;
      uint64_t EHS:1;
      uint64_t reservedSpace1:1;
      uint64_t ECH:8;
      uint64_t EDESP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONERS;

  uint32_t DREQENB0;
  uint32_t DREQENB1;
  uint32_t DREQENB2;
  uint32_t DREQENB3;
  uint32_t DREQENB4;
  uint32_t DREQENB5;
  uint32_t DREQENB6;
  uint32_t DREQENB7;
  uint32_t HWINT0;
  uint32_t HWINT1;
  uint32_t HWINT2;
  uint32_t HWINT3;
  uint32_t HWINT4;
  uint32_t HWINT5;
  uint32_t HWINT6;
  uint32_t HWINT7;
  uint8_t res0[32];

  uint32_t DQMSK0;
  uint32_t DQMSK1;
  uint32_t DQMSK2;
  uint32_t DQMSK3;
  uint32_t DQMSK4;
  uint32_t DQMSK5;
  uint32_t DQMSK6;
  uint32_t DQMSK7;
  uint32_t DQMSKCLR0;
  uint32_t DQMSKCLR1;
  uint32_t DQMSKCLR2;
  uint32_t DQMSKCLR3;
  uint32_t DQMSKCLR4;
  uint32_t DQMSKCLR5;
  uint32_t DQMSKCLR6;
  uint32_t DQMSKCLR7;
};

#define DSTC (*(volatile struct DSTC_tag *) 0x40061000)

struct CANPRES_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CANPRE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CANPRE;

};

#define CANPRES (*(volatile struct CANPRES_tag *) 0x40037000)

struct CAN0_tag
{
  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) CTRLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRCNT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRPER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK2;

  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) IF1ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB2;

  union
  {
    uint16_t R;
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
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MCTR;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_L;

  uint8_t res2[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_B;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK2;

  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) IF2ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB2;

  union
  {
    uint16_t R;
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
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MCTR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_L;

  uint8_t res5[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_B;

  uint8_t res6[24];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST1:1;
      uint64_t TXRQST2:1;
      uint64_t TXRQST3:1;
      uint64_t TXRQST4:1;
      uint64_t TXRQST5:1;
      uint64_t TXRQST6:1;
      uint64_t TXRQST7:1;
      uint64_t TXRQST8:1;
      uint64_t TXRQST9:1;
      uint64_t TXRQST10:1;
      uint64_t TXRQST11:1;
      uint64_t TXRQST12:1;
      uint64_t TXRQST13:1;
      uint64_t TXRQST14:1;
      uint64_t TXRQST15:1;
      uint64_t TXRQST16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST17:1;
      uint64_t TXRQST18:1;
      uint64_t TXRQST19:1;
      uint64_t TXRQST20:1;
      uint64_t TXRQST21:1;
      uint64_t TXRQST22:1;
      uint64_t TXRQST23:1;
      uint64_t TXRQST24:1;
      uint64_t TXRQST25:1;
      uint64_t TXRQST26:1;
      uint64_t TXRQST27:1;
      uint64_t TXRQST28:1;
      uint64_t TXRQST29:1;
      uint64_t TXRQST30:1;
      uint64_t TXRQST31:1;
      uint64_t TXRQST32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR2;

  uint8_t res7[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT1:1;
      uint64_t NEWDAT2:1;
      uint64_t NEWDAT3:1;
      uint64_t NEWDAT4:1;
      uint64_t NEWDAT5:1;
      uint64_t NEWDAT6:1;
      uint64_t NEWDAT7:1;
      uint64_t NEWDAT8:1;
      uint64_t NEWDAT9:1;
      uint64_t NEWDAT10:1;
      uint64_t NEWDAT11:1;
      uint64_t NEWDAT12:1;
      uint64_t NEWDAT13:1;
      uint64_t NEWDAT14:1;
      uint64_t NEWDAT15:1;
      uint64_t NEWDAT16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT17:1;
      uint64_t NEWDAT18:1;
      uint64_t NEWDAT19:1;
      uint64_t NEWDAT20:1;
      uint64_t NEWDAT21:1;
      uint64_t NEWDAT22:1;
      uint64_t NEWDAT23:1;
      uint64_t NEWDAT24:1;
      uint64_t NEWDAT25:1;
      uint64_t NEWDAT26:1;
      uint64_t NEWDAT27:1;
      uint64_t NEWDAT28:1;
      uint64_t NEWDAT29:1;
      uint64_t NEWDAT30:1;
      uint64_t NEWDAT31:1;
      uint64_t NEWDAT32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT2;

  uint8_t res8[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND1:1;
      uint64_t INTPND2:1;
      uint64_t INTPND3:1;
      uint64_t INTPND4:1;
      uint64_t INTPND5:1;
      uint64_t INTPND6:1;
      uint64_t INTPND7:1;
      uint64_t INTPND8:1;
      uint64_t INTPND9:1;
      uint64_t INTPND10:1;
      uint64_t INTPND11:1;
      uint64_t INTPND12:1;
      uint64_t INTPND13:1;
      uint64_t INTPND14:1;
      uint64_t INTPND15:1;
      uint64_t INTPND16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND17:1;
      uint64_t INTPND18:1;
      uint64_t INTPND19:1;
      uint64_t INTPND20:1;
      uint64_t INTPND21:1;
      uint64_t INTPND22:1;
      uint64_t INTPND23:1;
      uint64_t INTPND24:1;
      uint64_t INTPND25:1;
      uint64_t INTPND26:1;
      uint64_t INTPND27:1;
      uint64_t INTPND28:1;
      uint64_t INTPND29:1;
      uint64_t INTPND30:1;
      uint64_t INTPND31:1;
      uint64_t INTPND32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND2;

  uint8_t res9[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL1:1;
      uint64_t MSGVAL2:1;
      uint64_t MSGVAL3:1;
      uint64_t MSGVAL4:1;
      uint64_t MSGVAL5:1;
      uint64_t MSGVAL6:1;
      uint64_t MSGVAL7:1;
      uint64_t MSGVAL8:1;
      uint64_t MSGVAL9:1;
      uint64_t MSGVAL10:1;
      uint64_t MSGVAL11:1;
      uint64_t MSGVAL12:1;
      uint64_t MSGVAL13:1;
      uint64_t MSGVAL14:1;
      uint64_t MSGVAL15:1;
      uint64_t MSGVAL16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL17:1;
      uint64_t MSGVAL18:1;
      uint64_t MSGVAL19:1;
      uint64_t MSGVAL20:1;
      uint64_t MSGVAL21:1;
      uint64_t MSGVAL22:1;
      uint64_t MSGVAL23:1;
      uint64_t MSGVAL24:1;
      uint64_t MSGVAL25:1;
      uint64_t MSGVAL26:1;
      uint64_t MSGVAL27:1;
      uint64_t MSGVAL28:1;
      uint64_t MSGVAL29:1;
      uint64_t MSGVAL30:1;
      uint64_t MSGVAL31:1;
      uint64_t MSGVAL32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL2;

};

#define CAN0 (*(volatile struct CAN0_tag *) 0x40062000)

struct CAN1_tag
{
  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) CTRLR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TXOK:1;
      uint64_t RXOK:1;
      uint64_t EPASS:1;
      uint64_t EWARN:1;
      uint64_t BOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERRCNT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSEG1:4;
      uint64_t TSEG2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t BASIC:1;
      uint64_t SILENT:1;
      uint64_t LBACK:1;
      uint64_t TX:2;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TESTR;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BRPER;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MSK2;

  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) IF1ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1ARB2;

  union
  {
    uint16_t R;
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
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1MCTR;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_L;

  uint8_t res2[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF1DTB1_B;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MESSAGENUMBER:8;
      uint64_t reservedSpace0:7;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CREQ;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATAB:1;
      uint64_t DATAA:1;
      uint64_t NEWDAT:1;
      uint64_t CIP:1;
      uint64_t CONTROL:1;
      uint64_t ARB:1;
      uint64_t MASK:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2CMSK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK0:1;
      uint64_t MSK1:1;
      uint64_t MSK2:1;
      uint64_t MSK3:1;
      uint64_t MSK4:1;
      uint64_t MSK5:1;
      uint64_t MSK6:1;
      uint64_t MSK7:1;
      uint64_t MSK8:1;
      uint64_t MSK9:1;
      uint64_t MSK10:1;
      uint64_t MSK11:1;
      uint64_t MSK12:1;
      uint64_t MSK13:1;
      uint64_t MSK14:1;
      uint64_t MSK15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK16:1;
      uint64_t MSK17:1;
      uint64_t MSK18:1;
      uint64_t MSK19:1;
      uint64_t MSK20:1;
      uint64_t MSK21:1;
      uint64_t MSK22:1;
      uint64_t MSK23:1;
      uint64_t MSK24:1;
      uint64_t MSK25:1;
      uint64_t MSK26:1;
      uint64_t MSK27:1;
      uint64_t MSK28:1;
      uint64_t reservedSpace0:1;
      uint64_t MDIR:1;
      uint64_t MXTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MSK2;

  union
  {
    uint16_t R;
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
  } __attribute__((aligned(2))) IF2ARB1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ID16:1;
      uint64_t ID17:1;
      uint64_t ID18:1;
      uint64_t ID19:1;
      uint64_t ID20:1;
      uint64_t ID21:1;
      uint64_t ID22:1;
      uint64_t ID23:1;
      uint64_t ID24:1;
      uint64_t ID25:1;
      uint64_t ID26:1;
      uint64_t ID27:1;
      uint64_t ID28:1;
      uint64_t DIR:1;
      uint64_t XTD:1;
      uint64_t MSGVAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2ARB2;

  union
  {
    uint16_t R;
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
      uint64_t MSGLST:1;
      uint64_t NEWDAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2MCTR;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_0:8;
      uint64_t DATA_1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_2:8;
      uint64_t DATA_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_4:8;
      uint64_t DATA_5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_L;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_6:8;
      uint64_t DATA_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_L;

  uint8_t res5[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_3:8;
      uint64_t DATA_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_1:8;
      uint64_t DATA_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTA1_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_7:8;
      uint64_t DATA_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB2_B;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATA_5:8;
      uint64_t DATA_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IF2DTB1_B;

  uint8_t res6[24];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST1:1;
      uint64_t TXRQST2:1;
      uint64_t TXRQST3:1;
      uint64_t TXRQST4:1;
      uint64_t TXRQST5:1;
      uint64_t TXRQST6:1;
      uint64_t TXRQST7:1;
      uint64_t TXRQST8:1;
      uint64_t TXRQST9:1;
      uint64_t TXRQST10:1;
      uint64_t TXRQST11:1;
      uint64_t TXRQST12:1;
      uint64_t TXRQST13:1;
      uint64_t TXRQST14:1;
      uint64_t TXRQST15:1;
      uint64_t TXRQST16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXRQST17:1;
      uint64_t TXRQST18:1;
      uint64_t TXRQST19:1;
      uint64_t TXRQST20:1;
      uint64_t TXRQST21:1;
      uint64_t TXRQST22:1;
      uint64_t TXRQST23:1;
      uint64_t TXRQST24:1;
      uint64_t TXRQST25:1;
      uint64_t TXRQST26:1;
      uint64_t TXRQST27:1;
      uint64_t TXRQST28:1;
      uint64_t TXRQST29:1;
      uint64_t TXRQST30:1;
      uint64_t TXRQST31:1;
      uint64_t TXRQST32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TREQR2;

  uint8_t res7[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT1:1;
      uint64_t NEWDAT2:1;
      uint64_t NEWDAT3:1;
      uint64_t NEWDAT4:1;
      uint64_t NEWDAT5:1;
      uint64_t NEWDAT6:1;
      uint64_t NEWDAT7:1;
      uint64_t NEWDAT8:1;
      uint64_t NEWDAT9:1;
      uint64_t NEWDAT10:1;
      uint64_t NEWDAT11:1;
      uint64_t NEWDAT12:1;
      uint64_t NEWDAT13:1;
      uint64_t NEWDAT14:1;
      uint64_t NEWDAT15:1;
      uint64_t NEWDAT16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NEWDAT17:1;
      uint64_t NEWDAT18:1;
      uint64_t NEWDAT19:1;
      uint64_t NEWDAT20:1;
      uint64_t NEWDAT21:1;
      uint64_t NEWDAT22:1;
      uint64_t NEWDAT23:1;
      uint64_t NEWDAT24:1;
      uint64_t NEWDAT25:1;
      uint64_t NEWDAT26:1;
      uint64_t NEWDAT27:1;
      uint64_t NEWDAT28:1;
      uint64_t NEWDAT29:1;
      uint64_t NEWDAT30:1;
      uint64_t NEWDAT31:1;
      uint64_t NEWDAT32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) NEWDT2;

  uint8_t res8[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND1:1;
      uint64_t INTPND2:1;
      uint64_t INTPND3:1;
      uint64_t INTPND4:1;
      uint64_t INTPND5:1;
      uint64_t INTPND6:1;
      uint64_t INTPND7:1;
      uint64_t INTPND8:1;
      uint64_t INTPND9:1;
      uint64_t INTPND10:1;
      uint64_t INTPND11:1;
      uint64_t INTPND12:1;
      uint64_t INTPND13:1;
      uint64_t INTPND14:1;
      uint64_t INTPND15:1;
      uint64_t INTPND16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTPND17:1;
      uint64_t INTPND18:1;
      uint64_t INTPND19:1;
      uint64_t INTPND20:1;
      uint64_t INTPND21:1;
      uint64_t INTPND22:1;
      uint64_t INTPND23:1;
      uint64_t INTPND24:1;
      uint64_t INTPND25:1;
      uint64_t INTPND26:1;
      uint64_t INTPND27:1;
      uint64_t INTPND28:1;
      uint64_t INTPND29:1;
      uint64_t INTPND30:1;
      uint64_t INTPND31:1;
      uint64_t INTPND32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) INTPND2;

  uint8_t res9[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL1:1;
      uint64_t MSGVAL2:1;
      uint64_t MSGVAL3:1;
      uint64_t MSGVAL4:1;
      uint64_t MSGVAL5:1;
      uint64_t MSGVAL6:1;
      uint64_t MSGVAL7:1;
      uint64_t MSGVAL8:1;
      uint64_t MSGVAL9:1;
      uint64_t MSGVAL10:1;
      uint64_t MSGVAL11:1;
      uint64_t MSGVAL12:1;
      uint64_t MSGVAL13:1;
      uint64_t MSGVAL14:1;
      uint64_t MSGVAL15:1;
      uint64_t MSGVAL16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSGVAL17:1;
      uint64_t MSGVAL18:1;
      uint64_t MSGVAL19:1;
      uint64_t MSGVAL20:1;
      uint64_t MSGVAL21:1;
      uint64_t MSGVAL22:1;
      uint64_t MSGVAL23:1;
      uint64_t MSGVAL24:1;
      uint64_t MSGVAL25:1;
      uint64_t MSGVAL26:1;
      uint64_t MSGVAL27:1;
      uint64_t MSGVAL28:1;
      uint64_t MSGVAL29:1;
      uint64_t MSGVAL30:1;
      uint64_t MSGVAL31:1;
      uint64_t MSGVAL32:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MSGVAL2;

};

#define CAN1 (*(volatile struct CAN1_tag *) 0x40063000)

struct SDIF_tag
{
  uint32_t DUMMY;
};

#define SDIF (*(volatile struct SDIF_tag *) 0x4006e000)

