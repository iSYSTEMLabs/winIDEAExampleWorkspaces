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

struct GPDMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTSTAT0:1;
      uint64_t INTSTAT1:1;
      uint64_t INTSTAT2:1;
      uint64_t INTSTAT3:1;
      uint64_t INTSTAT4:1;
      uint64_t INTSTAT5:1;
      uint64_t INTSTAT6:1;
      uint64_t INTSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTCSTAT0:1;
      uint64_t INTTCSTAT1:1;
      uint64_t INTTCSTAT2:1;
      uint64_t INTTCSTAT3:1;
      uint64_t INTTCSTAT4:1;
      uint64_t INTTCSTAT5:1;
      uint64_t INTTCSTAT6:1;
      uint64_t INTTCSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTTCCLEAR0:1;
      uint64_t INTTCCLEAR1:1;
      uint64_t INTTCCLEAR2:1;
      uint64_t INTTCCLEAR3:1;
      uint64_t INTTCCLEAR4:1;
      uint64_t INTTCCLEAR5:1;
      uint64_t INTTCCLEAR6:1;
      uint64_t INTTCCLEAR7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTTCCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERRSTAT0:1;
      uint64_t INTERRSTAT1:1;
      uint64_t INTERRSTAT2:1;
      uint64_t INTERRSTAT3:1;
      uint64_t INTERRSTAT4:1;
      uint64_t INTERRSTAT5:1;
      uint64_t INTERRSTAT6:1;
      uint64_t INTERRSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERRCLR0:1;
      uint64_t INTERRCLR1:1;
      uint64_t INTERRCLR2:1;
      uint64_t INTERRCLR3:1;
      uint64_t INTERRCLR4:1;
      uint64_t INTERRCLR5:1;
      uint64_t INTERRCLR6:1;
      uint64_t INTERRCLR7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAWINTTCSTAT0:1;
      uint64_t RAWINTTCSTAT1:1;
      uint64_t RAWINTTCSTAT2:1;
      uint64_t RAWINTTCSTAT3:1;
      uint64_t RAWINTTCSTAT4:1;
      uint64_t RAWINTTCSTAT5:1;
      uint64_t RAWINTTCSTAT6:1;
      uint64_t RAWINTTCSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWINTTCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAWINTERRSTAT0:1;
      uint64_t RAWINTERRSTAT1:1;
      uint64_t RAWINTERRSTAT2:1;
      uint64_t RAWINTERRSTAT3:1;
      uint64_t RAWINTERRSTAT4:1;
      uint64_t RAWINTERRSTAT5:1;
      uint64_t RAWINTERRSTAT6:1;
      uint64_t RAWINTERRSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAWINTERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLEDCHANNELS0:1;
      uint64_t ENABLEDCHANNELS1:1;
      uint64_t ENABLEDCHANNELS2:1;
      uint64_t ENABLEDCHANNELS3:1;
      uint64_t ENABLEDCHANNELS4:1;
      uint64_t ENABLEDCHANNELS5:1;
      uint64_t ENABLEDCHANNELS6:1;
      uint64_t ENABLEDCHANNELS7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENBLDCHNS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTBREQ0:1;
      uint64_t SOFTBREQ1:1;
      uint64_t SOFTBREQ2:1;
      uint64_t SOFTBREQ3:1;
      uint64_t SOFTBREQ4:1;
      uint64_t SOFTBREQ5:1;
      uint64_t SOFTBREQ6:1;
      uint64_t SOFTBREQ7:1;
      uint64_t SOFTBREQ8:1;
      uint64_t SOFTBREQ9:1;
      uint64_t SOFTBREQ10:1;
      uint64_t SOFTBREQ11:1;
      uint64_t SOFTBREQ12:1;
      uint64_t SOFTBREQ13:1;
      uint64_t SOFTBREQ14:1;
      uint64_t SOFTBREQ15:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTBREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTSREQ0:1;
      uint64_t SOFTSREQ1:1;
      uint64_t SOFTSREQ2:1;
      uint64_t SOFTSREQ3:1;
      uint64_t SOFTSREQ4:1;
      uint64_t SOFTSREQ5:1;
      uint64_t SOFTSREQ6:1;
      uint64_t SOFTSREQ7:1;
      uint64_t SOFTSREQ8:1;
      uint64_t SOFTSREQ9:1;
      uint64_t SOFTSREQ10:1;
      uint64_t SOFTSREQ11:1;
      uint64_t SOFTSREQ12:1;
      uint64_t SOFTSREQ13:1;
      uint64_t SOFTSREQ14:1;
      uint64_t SOFTSREQ15:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTLBREQ0:1;
      uint64_t SOFTLBREQ1:1;
      uint64_t SOFTLBREQ2:1;
      uint64_t SOFTLBREQ3:1;
      uint64_t SOFTLBREQ4:1;
      uint64_t SOFTLBREQ5:1;
      uint64_t SOFTLBREQ6:1;
      uint64_t SOFTLBREQ7:1;
      uint64_t SOFTLBREQ8:1;
      uint64_t SOFTLBREQ9:1;
      uint64_t SOFTLBREQ10:1;
      uint64_t SOFTLBREQ11:1;
      uint64_t SOFTLBREQ12:1;
      uint64_t SOFTLBREQ13:1;
      uint64_t SOFTLBREQ14:1;
      uint64_t SOFTLBREQ15:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTLBREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTLSREQ0:1;
      uint64_t SOFTLSREQ1:1;
      uint64_t SOFTLSREQ2:1;
      uint64_t SOFTLSREQ3:1;
      uint64_t SOFTLSREQ4:1;
      uint64_t SOFTLSREQ5:1;
      uint64_t SOFTLSREQ6:1;
      uint64_t SOFTLSREQ7:1;
      uint64_t SOFTLSREQ8:1;
      uint64_t SOFTLSREQ9:1;
      uint64_t SOFTLSREQ10:1;
      uint64_t SOFTLSREQ11:1;
      uint64_t SOFTLSREQ12:1;
      uint64_t SOFTLSREQ13:1;
      uint64_t SOFTLSREQ14:1;
      uint64_t SOFTLSREQ15:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTLSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t M0:1;
      uint64_t M1:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMACSYNC0:1;
      uint64_t DMACSYNC1:1;
      uint64_t DMACSYNC2:1;
      uint64_t DMACSYNC3:1;
      uint64_t DMACSYNC4:1;
      uint64_t DMACSYNC5:1;
      uint64_t DMACSYNC6:1;
      uint64_t DMACSYNC7:1;
      uint64_t DMACSYNC8:1;
      uint64_t DMACSYNC9:1;
      uint64_t DMACSYNC10:1;
      uint64_t DMACSYNC11:1;
      uint64_t DMACSYNC12:1;
      uint64_t DMACSYNC13:1;
      uint64_t DMACSYNC14:1;
      uint64_t DMACSYNC15:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0CONFIG;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1CONFIG;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C2CONFIG;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C3CONFIG;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C4CONFIG;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C5CONFIG;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C6CONFIG;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7SRCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7DESTADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LM:1;
      uint64_t R:1;
      uint64_t LLI:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7LLI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFERSIZE:12;
      uint64_t SBSIZE:3;
      uint64_t DBSIZE:3;
      uint64_t SWIDTH:3;
      uint64_t DWIDTH:3;
      uint64_t S:1;
      uint64_t D:1;
      uint64_t SI:1;
      uint64_t DI:1;
      uint64_t PROT1:1;
      uint64_t PROT2:1;
      uint64_t PROT3:1;
      uint64_t I:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t SRCPERIPHERAL:5;
      uint64_t DESTPERIPHERAL:5;
      uint64_t FLOWCNTRL:3;
      uint64_t IE:1;
      uint64_t ITC:1;
      uint64_t L:1;
      uint64_t A:1;
      uint64_t H:1;
      uint64_t RESERVED:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C7CONFIG;

};

#define GPDMA (*(volatile struct GPDMA_tag *) 0x40002000)

struct SPIFI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT:16;
      uint64_t CSHIGH:4;
      uint64_t RESERVED_0:1;
      uint64_t D_PRFTCH_DIS:1;
      uint64_t INTEN:1;
      uint64_t MODE3:1;
      uint64_t RESERVED_1:3;
      uint64_t PRFTCH_DIS:1;
      uint64_t DUAL:1;
      uint64_t RFCLK:1;
      uint64_t FBCLK:1;
      uint64_t DMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALEN:14;
      uint64_t POLL:1;
      uint64_t DOUT:1;
      uint64_t INTLEN:3;
      uint64_t FIELDFORM:2;
      uint64_t FRAMEFORM:3;
      uint64_t OPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLIMIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLIMIT;

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
      uint64_t RESERVED:14;
      uint64_t POLL:1;
      uint64_t DOUT:1;
      uint64_t INTLEN:3;
      uint64_t FIELDFORM:2;
      uint64_t FRAMEFORM:3;
      uint64_t OPCODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCINIT:1;
      uint64_t CMD:1;
      uint64_t reservedSpace0:2;
      uint64_t RESET:1;
      uint64_t INTRQ:1;
      uint64_t RESERVED:18;
      uint64_t VERSION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define SPIFI (*(volatile struct SPIFI_tag *) 0x40003000)

struct SDMMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTROLLER_RESET:1;
      uint64_t FIFO_RESET:1;
      uint64_t DMA_RESET:1;
      uint64_t RESERVED_0:1;
      uint64_t INT_ENABLE:1;
      uint64_t RESERVED_1:1;
      uint64_t READ_WAIT:1;
      uint64_t SEND_IRQ_RESPONSE:1;
      uint64_t ABORT_READ_DATA:1;
      uint64_t SEND_CCSD:1;
      uint64_t SEND_AUTO_STOP:1;
      uint64_t CEATA_DEVICE_INTERRUPT_STATUS:1;
      uint64_t RESERVED_2:4;
      uint64_t CARD_VOLTAGE_A0:1;
      uint64_t CARD_VOLTAGE_A1:1;
      uint64_t CARD_VOLTAGE_A2:1;
      uint64_t RESERVED_3:5;
      uint64_t RESERVED_4:1;
      uint64_t USE_INTERNAL_DMAC:1;
      uint64_t RESERVED_5:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_ENABLE:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIVIDER0:8;
      uint64_t CLK_DIVIDER1:8;
      uint64_t CLK_DIVIDER2:8;
      uint64_t CLK_DIVIDER3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SOURCE:2;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCLK_ENABLE:1;
      uint64_t RESERVED_0:15;
      uint64_t CCLK_LOW_POWER:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE_TIMEOUT:8;
      uint64_t DATA_TIMEOUT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_WIDTH0:1;
      uint64_t RESERVED_0:15;
      uint64_t CARD_WIDTH1:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCK_SIZE:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLKSIZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BYTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO:1;
      uint64_t DRTO:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INT_MASK:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD_INDEX:6;
      uint64_t RESPONSE_EXPECT:1;
      uint64_t RESPONSE_LENGTH:1;
      uint64_t CHECK_RESPONSE_CRC:1;
      uint64_t DATA_EXPECTED:1;
      uint64_t READ_WRITE:1;
      uint64_t TRANSFER_MODE:1;
      uint64_t SEND_AUTO_STOP:1;
      uint64_t WAIT_PRVDATA_COMPLETE:1;
      uint64_t STOP_ABORT_CMD:1;
      uint64_t SEND_INITIALIZATION:1;
      uint64_t RESERVED_0:5;
      uint64_t UPDATE_CLOCK_REGISTERS_ONLY:1;
      uint64_t READ_CEATA_DEVICE:1;
      uint64_t CCS_EXPECTED:1;
      uint64_t ENABLE_BOOT:1;
      uint64_t EXPECT_BOOT_ACK:1;
      uint64_t DISABLE_BOOT:1;
      uint64_t BOOT_MODE:1;
      uint64_t VOLT_SWITCH:1;
      uint64_t RESERVED_1:2;
      uint64_t START_CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPONSE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO:1;
      uint64_t DRTO:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INTERRUPT:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDET:1;
      uint64_t RE:1;
      uint64_t CDONE:1;
      uint64_t DTO:1;
      uint64_t TXDR:1;
      uint64_t RXDR:1;
      uint64_t RCRC:1;
      uint64_t DCRC:1;
      uint64_t RTO_BAR:1;
      uint64_t DRTO_BDS:1;
      uint64_t HTO:1;
      uint64_t FRUN:1;
      uint64_t HLE:1;
      uint64_t SBE:1;
      uint64_t ACD:1;
      uint64_t EBE:1;
      uint64_t SDIO_INTERRUPT:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RINTSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO_RX_WATERMARK:1;
      uint64_t FIFO_TX_WATERMARK:1;
      uint64_t FIFO_EMPTY:1;
      uint64_t FIFO_FULL:1;
      uint64_t CMDFSMSTATES:4;
      uint64_t DATA_3_STATUS:1;
      uint64_t DATA_BUSY:1;
      uint64_t DATA_STATE_MC_BUSY:1;
      uint64_t RESPONSE_INDEX:6;
      uint64_t FIFO_COUNT:13;
      uint64_t DMA_ACK:1;
      uint64_t DMA_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_WMARK:12;
      uint64_t RESERVED_0:4;
      uint64_t RX_WMARK:12;
      uint64_t DMA_MTS:3;
      uint64_t RESERVED_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_DETECT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDETECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITE_PROTECT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRTPRT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANS_CARD_BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCBCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANS_FIFO_BYTE_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBBCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBOUNCE_COUNT:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBNCE;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARD_RESET:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_N;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t FB:1;
      uint64_t DSL:5;
      uint64_t DE:1;
      uint64_t PBL:3;
      uint64_t RESERVED:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLDMND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t RI:1;
      uint64_t FBE:1;
      uint64_t RESERVED_0:1;
      uint64_t DU:1;
      uint64_t CES:1;
      uint64_t RESERVED_1:2;
      uint64_t NIS:1;
      uint64_t AIS:1;
      uint64_t EB:3;
      uint64_t FSM:4;
      uint64_t RESERVED_2:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t RI:1;
      uint64_t FBE:1;
      uint64_t RESERVED_0:1;
      uint64_t DU:1;
      uint64_t CES:1;
      uint64_t RESERVED_1:2;
      uint64_t NIS:1;
      uint64_t AIS:1;
      uint64_t RESERVED_2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDINTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSCADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUFADDR;

};

#define SDMMC (*(volatile struct SDMMC_tag *) 0x40004000)

struct EMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t E:1;
      uint64_t M:1;
      uint64_t L:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B:1;
      uint64_t S:1;
      uint64_t SA:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM:1;
      uint64_t RESERVED_0:7;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CE:1;
      uint64_t CS:1;
      uint64_t SR:1;
      uint64_t RESERVED_0:2;
      uint64_t MMC:1;
      uint64_t RESERVED_1:1;
      uint64_t I:2;
      uint64_t RESERVED_2:5;
      uint64_t RESERVED_3:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFRESH:11;
      uint64_t RESERVED:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICREFRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:2;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICREADCONFIG;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRP:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRAS:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRAS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSREX:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICSREX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPR:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDAL:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICDAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWR:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICWR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRC:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRFC:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXSR:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICXSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRRD:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMRD:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICMRD;

  uint8_t res2[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTENDEDWAIT:10;
      uint64_t RESERVED:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICEXTENDEDWAIT;

  uint8_t res3[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MD:2;
      uint64_t RESERVED_1:2;
      uint64_t AM0:6;
      uint64_t RESERVED_2:1;
      uint64_t AM1:1;
      uint64_t RESERVED_3:4;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_4:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t RESERVED_0:6;
      uint64_t CAS:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS0;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MD:2;
      uint64_t RESERVED_1:2;
      uint64_t AM0:6;
      uint64_t RESERVED_2:1;
      uint64_t AM1:1;
      uint64_t RESERVED_3:4;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_4:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t RESERVED_0:6;
      uint64_t CAS:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS1;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MD:2;
      uint64_t RESERVED_1:2;
      uint64_t AM0:6;
      uint64_t RESERVED_2:1;
      uint64_t AM1:1;
      uint64_t RESERVED_3:4;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_4:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t RESERVED_0:6;
      uint64_t CAS:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS2;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MD:2;
      uint64_t RESERVED_1:2;
      uint64_t AM0:6;
      uint64_t RESERVED_2:1;
      uint64_t AM1:1;
      uint64_t RESERVED_3:4;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_4:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICCONFIG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAS:2;
      uint64_t RESERVED_0:6;
      uint64_t CAS:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYNAMICRASCAS3;

  uint8_t res7[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t RESERVED_0:1;
      uint64_t PM:1;
      uint64_t RESERVED_1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t RESERVED_2:10;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN0;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t RESERVED_0:1;
      uint64_t PM:1;
      uint64_t RESERVED_1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t RESERVED_2:10;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN1;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t RESERVED_0:1;
      uint64_t PM:1;
      uint64_t RESERVED_1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t RESERVED_2:10;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN2;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MW:2;
      uint64_t RESERVED_0:1;
      uint64_t PM:1;
      uint64_t RESERVED_1:2;
      uint64_t PC:1;
      uint64_t PB:1;
      uint64_t EW:1;
      uint64_t RESERVED_2:10;
      uint64_t B:1;
      uint64_t P:1;
      uint64_t RESERVED_3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICCONFIG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITOEN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITOEN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITRD:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITRD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITPAGE:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITPAGE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITWR:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITWR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITTURN:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATICWAITTURN3;

};

#define EMC (*(volatile struct EMC_tag *) 0x40005000)

struct LCD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:2;
      uint64_t PPL:6;
      uint64_t HSW:8;
      uint64_t HFP:8;
      uint64_t HBP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPP:10;
      uint64_t VSW:6;
      uint64_t VFP:8;
      uint64_t VBP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCD_LO:5;
      uint64_t CLKSEL:1;
      uint64_t ACB:5;
      uint64_t IVS:1;
      uint64_t IHS:1;
      uint64_t IPC:1;
      uint64_t IOE:1;
      uint64_t RESERVED:1;
      uint64_t CPL:10;
      uint64_t BCD:1;
      uint64_t PCD_HI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LED:7;
      uint64_t RESERVED_0:9;
      uint64_t LEE:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:3;
      uint64_t LCDUPBASE:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:3;
      uint64_t LCDLPBASE:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDEN:1;
      uint64_t LCDBPP:3;
      uint64_t LCDBW:1;
      uint64_t LCDTFT:1;
      uint64_t LCDMONO8:1;
      uint64_t LCDDUAL:1;
      uint64_t BGR:1;
      uint64_t BEBO:1;
      uint64_t BEPO:1;
      uint64_t LCDPWR:1;
      uint64_t LCDVCOMP:2;
      uint64_t RESERVED_0:2;
      uint64_t WATERMARK:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t FUFIM:1;
      uint64_t LNBUIM:1;
      uint64_t VCOMPIM:1;
      uint64_t BERIM:1;
      uint64_t RESERVED_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t FUFRIS:1;
      uint64_t LNBURIS:1;
      uint64_t VCOMPRIS:1;
      uint64_t BERRAW:1;
      uint64_t RESERVED_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t FUFMIS:1;
      uint64_t LNBUMIS:1;
      uint64_t VCOMPMIS:1;
      uint64_t BERMIS:1;
      uint64_t RESERVED_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t FUFIC:1;
      uint64_t LNBUIC:1;
      uint64_t VCOMPIC:1;
      uint64_t BERIC:1;
      uint64_t RESERVED_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDUPCURR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UPCURR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDLPCURR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPCURR;

  uint8_t res0[460];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R04_0:5;
      uint64_t G04_0:5;
      uint64_t B04_0:5;
      uint64_t I0:1;
      uint64_t R14_0:5;
      uint64_t G14_0:5;
      uint64_t B14_0:5;
      uint64_t I1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAL_255;

  uint8_t res1[512];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSR_IMG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_IMG_255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CrsrOn:1;
      uint64_t RESERVED_0:3;
      uint64_t CRSRNUM1_0:2;
      uint64_t RESERVED_1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CrsrSize:1;
      uint64_t FRAMESYNC:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RED:8;
      uint64_t GREEN:8;
      uint64_t BLUE:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_PAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RED:8;
      uint64_t GREEN:8;
      uint64_t BLUE:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_PAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRX:10;
      uint64_t RESERVED_0:6;
      uint64_t CRSRY:10;
      uint64_t RESERVED_1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_XY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRCLIPX:6;
      uint64_t RESERVED_0:2;
      uint64_t CRSRCLIPY:6;
      uint64_t RESERVED_1:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_CLIP;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRIM:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRIC:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRRIS:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRSRMIS:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRSR_INTSTAT;

};

#define LCD (*(volatile struct LCD_tag *) 0x40008000)

struct EEPROM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPHASE2:8;
      uint64_t RPHASE1:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOPROG:2;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOPROG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE3:8;
      uint64_t PHASE2:8;
      uint64_t PHASE1:8;
      uint64_t RESERVED:7;
      uint64_t LCK_PARWEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WSTATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRDWN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWN;

  uint8_t res1[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PROG_CLR_EN:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PROG_SET_EN:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTENSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t END_OF_PROG:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t EE_PROG_DONE:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PROG_CLR_ST:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PROG_SET_ST:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTATSET;

};

#define EEPROM (*(volatile struct EEPROM_tag *) 0x4000e000)

struct ETHERNET_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t DF:1;
      uint64_t BL:2;
      uint64_t ACS:1;
      uint64_t RESERVED_1:1;
      uint64_t DR:1;
      uint64_t RESERVED_2:1;
      uint64_t DM:1;
      uint64_t LM:1;
      uint64_t DO:1;
      uint64_t FES:1;
      uint64_t PS:1;
      uint64_t DCRS:1;
      uint64_t IFG:3;
      uint64_t JE:1;
      uint64_t RESERVED_3:1;
      uint64_t JD:1;
      uint64_t WD:1;
      uint64_t RESERVED_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_CONFIG;

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
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t HPF:1;
      uint64_t RESERVED_2:20;
      uint64_t RA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FRAME_FILTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HASHTABLE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_HASHTABLE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GB:1;
      uint64_t W:1;
      uint64_t CR:4;
      uint64_t GR:5;
      uint64_t PA:5;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MII_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GD:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_MII_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCB:1;
      uint64_t TFE:1;
      uint64_t RFE:1;
      uint64_t UP:1;
      uint64_t PLT:2;
      uint64_t RESERVED_0:1;
      uint64_t DZPQ:1;
      uint64_t RESERVED_1:8;
      uint64_t PT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_FLOW_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VL:16;
      uint64_t ETV:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_VLAN_TAG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXIDLESTAT:1;
      uint64_t FIFOSTAT0:2;
      uint64_t RESERVED_0:1;
      uint64_t RXFIFOSTAT1:1;
      uint64_t RXFIFOSTAT:2;
      uint64_t RESERVED_1:1;
      uint64_t RXFIFOLVL:2;
      uint64_t RESERVED_2:6;
      uint64_t TXIDLESTAT:1;
      uint64_t TXSTAT:2;
      uint64_t PAUSE:1;
      uint64_t TXFIFOSTAT:2;
      uint64_t TXFIFOSTAT1:1;
      uint64_t RESERVED_3:1;
      uint64_t TXFIFOLVL:1;
      uint64_t TXFIFOFULL:1;
      uint64_t RESERVED_4:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_DEBUG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_RWAKE_FRFLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t MPE:1;
      uint64_t WFE:1;
      uint64_t RESERVED_0:2;
      uint64_t MPR:1;
      uint64_t WFR:1;
      uint64_t RESERVED_1:2;
      uint64_t GU:1;
      uint64_t RESERVED_2:21;
      uint64_t WFFRPR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_PMT_CTRL_STAT;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t PMT:1;
      uint64_t RESERVED_1:5;
      uint64_t TS:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t PMTIM:1;
      uint64_t RESERVED_1:5;
      uint64_t TSIM:1;
      uint64_t RESERVED_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A47_32:16;
      uint64_t RESERVED:15;
      uint64_t MO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR0_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_ADDR0_LOW;

  uint8_t res2[1720];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSENA:1;
      uint64_t TSCFUPDT:1;
      uint64_t TSINIT:1;
      uint64_t TSUPDT:1;
      uint64_t TSTRIG:1;
      uint64_t TSADDREG:1;
      uint64_t RESERVED:2;
      uint64_t TSENALL:1;
      uint64_t TSCTRLSSR:1;
      uint64_t TSVER2ENA:1;
      uint64_t TSIPENA:1;
      uint64_t TSIPV6ENA:1;
      uint64_t TSIPV4ENA:1;
      uint64_t TSEVNTENA:1;
      uint64_t TSMSTRENA:1;
      uint64_t TSCLKTYPE:2;
      uint64_t TSENMACADDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_TIMESTP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSINC:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSECOND_INCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
      uint64_t PSNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NANOSECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECONDSUPDATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSS:31;
      uint64_t ADDSUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NANOSECONDSUPDATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGETSECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTR:31;
      uint64_t RESERVED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGETNANOSECONDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSHWR:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIGHWORD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSSOVF:1;
      uint64_t TSTARGT:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMESTAMPSTAT;

  uint8_t res3[2260];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t DA:1;
      uint64_t DSL:5;
      uint64_t ATDS:1;
      uint64_t PBL:6;
      uint64_t PR:2;
      uint64_t FB:1;
      uint64_t RPBL:6;
      uint64_t USP:1;
      uint64_t PBL8X:1;
      uint64_t AAL:1;
      uint64_t MB:1;
      uint64_t TXPR:1;
      uint64_t RESERVED:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_BUS_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TRANS_POLL_DEMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_REC_POLL_DEMAND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_REC_DES_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_TRANS_DES_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI:1;
      uint64_t TPS:1;
      uint64_t TU:1;
      uint64_t TJT:1;
      uint64_t OVF:1;
      uint64_t UNF:1;
      uint64_t RI:1;
      uint64_t RU:1;
      uint64_t RPS:1;
      uint64_t RWT:1;
      uint64_t ETI:1;
      uint64_t RESERVED_0:2;
      uint64_t FBI:1;
      uint64_t ERI:1;
      uint64_t AIE:1;
      uint64_t NIS:1;
      uint64_t RS:3;
      uint64_t TS:3;
      uint64_t EB1:1;
      uint64_t EB2:1;
      uint64_t EB3:1;
      uint64_t RESERVED_1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t SR:1;
      uint64_t OSF:1;
      uint64_t RTC_bitfield:2;
      uint64_t RESERVED_1:1;
      uint64_t FUF:1;
      uint64_t FEF:1;
      uint64_t RESERVED_2:5;
      uint64_t ST:1;
      uint64_t TTC:3;
      uint64_t RESERVED_3:3;
      uint64_t FTF:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:2;
      uint64_t DFF:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_OP_MODE;

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
      uint64_t RESERVED_0:2;
      uint64_t FBE:1;
      uint64_t ERE:1;
      uint64_t AIE:1;
      uint64_t NIE:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_INT_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMC:16;
      uint64_t OC:1;
      uint64_t FMA:11;
      uint64_t OF:1;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_MFRM_BUFOF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIWT:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_REC_INT_WDT;

  uint8_t res4[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CURHOST_TRANS_DES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CURHOST_REC_DES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CURHOST_TRANS_BUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CURHOST_REC_BUF;

};

#define ETHERNET (*(volatile struct ETHERNET_tag *) 0x40010000)

struct ATIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOWNCOUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESETVAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRESET;

  uint8_t res0[4048];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_EN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_EN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSTAT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_STAT;

};

#define ATIMER (*(volatile struct ATIMER_tag *) 0x40040000)

struct REGFILE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REGFILE_63;

};

#define REGFILE (*(volatile struct REGFILE_tag *) 0x40041000)

struct PMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_EVENT0:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD0_SLEEP0_HW_ENA;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_STATE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PD0_SLEEP0_MODE;

};

#define PMC (*(volatile struct PMC_tag *) 0x40042000)

struct CREG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1KHZ:1;
      uint64_t EN32KHZ:1;
      uint64_t RESET32KHZ:1;
      uint64_t PD32KHZ:1;
      uint64_t RESERVED_0:1;
      uint64_t USB0PHY:1;
      uint64_t ALARMCTRL:2;
      uint64_t BODLVL1:2;
      uint64_t BODLVL2:2;
      uint64_t SAMPLECTRL:2;
      uint64_t WAKEUP0CTRL:2;
      uint64_t WAKEUP1CTRL:2;
      uint64_t RESERVED_1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREG0;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t M3MAP:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) M3MEMMAP;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:11;
      uint64_t M3TAPSEL:1;
      uint64_t RESERVED_1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAMUXPER0:2;
      uint64_t DMAMUXPER1:2;
      uint64_t DMAMUXPER2:2;
      uint64_t DMAMUXPER3:2;
      uint64_t DMAMUXPER4:2;
      uint64_t DMAMUXPER5:2;
      uint64_t DMAMUXPER6:2;
      uint64_t DMAMUXPER7:2;
      uint64_t DMAMUXPER8:2;
      uint64_t DMAMUXPER9:2;
      uint64_t DMAMUXPER10:2;
      uint64_t DMAMUXPER11:2;
      uint64_t DMAMUXPER12:2;
      uint64_t DMAMUXPER13:2;
      uint64_t DMAMUXPER14:2;
      uint64_t DMAMUXPER15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:12;
      uint64_t FLASHTIM:4;
      uint64_t RESERVED_1:15;
      uint64_t POW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCFGA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:12;
      uint64_t FLASHTIM:4;
      uint64_t RESERVED_1:15;
      uint64_t POW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHCFGB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETB:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETBCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETHMODE:3;
      uint64_t RESERVED_0:1;
      uint64_t CTOUTCTRL:1;
      uint64_t RESERVED_1:7;
      uint64_t I2S0_TX_SCK_IN_SEL:1;
      uint64_t I2S0_RX_SCK_IN_SEL:1;
      uint64_t I2S1_TX_SCK_IN_SEL:1;
      uint64_t I2S1_RX_SCK_IN_SEL:1;
      uint64_t EMC_CLK_SEL:1;
      uint64_t RESERVED_2:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREG6;

  uint8_t res2[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHIPID;

  uint8_t res3[764];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTV:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB0FLADJ;

  uint8_t res4[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTV:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB1FLADJ;

};

#define CREG (*(volatile struct CREG_tag *) 0x40043004)

struct EVENTROUTER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_L:1;
      uint64_t WAKEUP1_L:1;
      uint64_t WAKEUP2_L:1;
      uint64_t WAKEUP3_L:1;
      uint64_t ATIMER_L:1;
      uint64_t RTC_L:1;
      uint64_t BOD_L:1;
      uint64_t WWDT_L:1;
      uint64_t ETH_L:1;
      uint64_t USB0_L:1;
      uint64_t USB1_L:1;
      uint64_t SDMMC_L:1;
      uint64_t CAN_L:1;
      uint64_t TIM2_L:1;
      uint64_t TIM6_L:1;
      uint64_t QEI_L:1;
      uint64_t TIM14_L:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_L:1;
      uint64_t BODRESET_L:1;
      uint64_t DPDRESET_L:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HILO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_E:1;
      uint64_t WAKEUP1_E:1;
      uint64_t WAKEUP2_E:1;
      uint64_t WAKEUP3_E:1;
      uint64_t ATIMER_E:1;
      uint64_t RTC_E:1;
      uint64_t BOD_E:1;
      uint64_t WWDT_E:1;
      uint64_t ETH_E:1;
      uint64_t USB0_E:1;
      uint64_t USB1_E:1;
      uint64_t SDMMC_E:1;
      uint64_t CAN_E:1;
      uint64_t TIM2_E:1;
      uint64_t TIM6_E:1;
      uint64_t QEI_E:1;
      uint64_t TIM14_E:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_E:1;
      uint64_t BODRESET_E:1;
      uint64_t DPDRESET_E:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDGE;

  uint8_t res0[4048];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_CLREN:1;
      uint64_t WAKEUP1_CLREN:1;
      uint64_t WAKEUP2_CLREN:1;
      uint64_t WAKEUP3_CLREN:1;
      uint64_t ATIMER_CLREN:1;
      uint64_t RTC_CLREN:1;
      uint64_t BOD_CLREN:1;
      uint64_t WWDT_CLREN:1;
      uint64_t ETH_CLREN:1;
      uint64_t USB0_CLREN:1;
      uint64_t USB1_CLREN:1;
      uint64_t SDMMC_CLREN:1;
      uint64_t CAN_CLREN:1;
      uint64_t TIM2_CLREN:1;
      uint64_t TIM6_CLREN:1;
      uint64_t QEI_CLREN:1;
      uint64_t TIM14_CLREN:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_CLREN:1;
      uint64_t BODRESET_CLREN:1;
      uint64_t DPDRESET_CLREN:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_SETEN:1;
      uint64_t WAKEUP1_SETEN:1;
      uint64_t WAKEUP2_SETEN:1;
      uint64_t WAKEUP3_SETEN:1;
      uint64_t ATIMER_SETEN:1;
      uint64_t RTC_SETEN:1;
      uint64_t BOD_SETEN:1;
      uint64_t WWDT_SETEN:1;
      uint64_t ETH_SETEN:1;
      uint64_t USB0_SETEN:1;
      uint64_t USB1_SETEN:1;
      uint64_t SDMMC_SETEN:1;
      uint64_t CAN_SETEN:1;
      uint64_t TIM2_SETEN:1;
      uint64_t TIM6_SETEN:1;
      uint64_t QEI_SETEN:1;
      uint64_t TIM14_SETEN:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_SETEN:1;
      uint64_t BODRESET_SETEN:1;
      uint64_t DPDRESET_SETEN:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_ST:1;
      uint64_t WAKEUP1_ST:1;
      uint64_t WAKEUP2_ST:1;
      uint64_t WAKEUP3_ST:1;
      uint64_t ATIMER_ST:1;
      uint64_t RTC_ST:1;
      uint64_t BOD_ST:1;
      uint64_t WWDT_ST:1;
      uint64_t ETH_ST:1;
      uint64_t USB0_ST:1;
      uint64_t USB1_ST:1;
      uint64_t SDMMC_ST:1;
      uint64_t CAN_ST:1;
      uint64_t TIM2_ST:1;
      uint64_t TIM6_ST:1;
      uint64_t QEI_ST:1;
      uint64_t TIM14_ST:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_ST:1;
      uint64_t BODRESET_ST:1;
      uint64_t DPDRESET_ST:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_EN:1;
      uint64_t WAKEUP1_EN:1;
      uint64_t WAKEUP2_EN:1;
      uint64_t WAKEUP3_EN:1;
      uint64_t ATIMER_EN:1;
      uint64_t RTC_EN:1;
      uint64_t BOD_EN:1;
      uint64_t WWDT_EN:1;
      uint64_t ETH_EN:1;
      uint64_t USB0_EN:1;
      uint64_t USB1_EN:1;
      uint64_t SDMMC_EN:1;
      uint64_t CAN_EN:1;
      uint64_t TIM2_EN:1;
      uint64_t TIM6_EN:1;
      uint64_t QEI_EN:1;
      uint64_t TIM14_EN:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_EN:1;
      uint64_t BODRESET_EN:1;
      uint64_t DPDRESET_EN:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_CLRST:1;
      uint64_t WAKEUP1_CLRST:1;
      uint64_t WAKEUP2_CLRST:1;
      uint64_t WAKEUP3_CLRST:1;
      uint64_t ATIMER_CLRST:1;
      uint64_t RTC_CLRST:1;
      uint64_t BOD_CLRST:1;
      uint64_t WWDT_CLRST:1;
      uint64_t ETH_CLRST:1;
      uint64_t USB0_CLRST:1;
      uint64_t USB1_CLRST:1;
      uint64_t SDMMC_CLRST:1;
      uint64_t CAN_CLRST:1;
      uint64_t TIM2_CLRST:1;
      uint64_t TIM6_CLRST:1;
      uint64_t QEI_CLRST:1;
      uint64_t TIM14_CLRST:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_CLRST:1;
      uint64_t BODRESET_CLRST:1;
      uint64_t DPDRESET_CLRST:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP0_SETST:1;
      uint64_t WAKEUP1_SETST:1;
      uint64_t WAKEUP2_SETST:1;
      uint64_t WAKEUP3_SETST:1;
      uint64_t ATIMER_SETST:1;
      uint64_t RTC_SETST:1;
      uint64_t BOD_SETST:1;
      uint64_t WWDT_SETST:1;
      uint64_t ETH_SETST:1;
      uint64_t USB0_SETST:1;
      uint64_t USB1_SETST:1;
      uint64_t SDMMC_SETST:1;
      uint64_t CAN_SETST:1;
      uint64_t TIM2_SETST:1;
      uint64_t TIM6_SETST:1;
      uint64_t QEI_SETST:1;
      uint64_t TIM14_SETST:1;
      uint64_t RESERVED_0:2;
      uint64_t RESET_SETST:1;
      uint64_t BODRESET_SETST:1;
      uint64_t DPDRESET_SETST:1;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET_STAT;

};

#define EVENTROUTER (*(volatile struct EVENTROUTER_tag *) 0x40044000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCCIF:1;
      uint64_t RTCALF:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKEN:1;
      uint64_t CTCRST:1;
      uint64_t RESERVED_0:2;
      uint64_t CCALEN:1;
      uint64_t RESERVED_1:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMSEC:1;
      uint64_t IMMIN:1;
      uint64_t IMHOUR:1;
      uint64_t IMDOM:1;
      uint64_t IMDOW:1;
      uint64_t IMDOY:1;
      uint64_t IMMON:1;
      uint64_t IMYEAR:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AMRSEC:1;
      uint64_t AMRMIN:1;
      uint64_t AMRHOUR:1;
      uint64_t AMRDOM:1;
      uint64_t AMRDOW:1;
      uint64_t AMRDOY:1;
      uint64_t AMRMON:1;
      uint64_t AMRYEAR:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECONDS:6;
      uint64_t RESERVED_0:2;
      uint64_t MINUTES:6;
      uint64_t RESERVED_1:2;
      uint64_t HOURS:5;
      uint64_t RESERVED_2:3;
      uint64_t DOW:3;
      uint64_t RESERVED_3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIME0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOM:5;
      uint64_t RESERVED_0:3;
      uint64_t MONTH:4;
      uint64_t RESERVED_1:4;
      uint64_t YEAR:12;
      uint64_t RESERVED_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIME1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOY:12;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIME2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECONDS:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINUTES:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HOURS:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOM:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOW:3;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOY:9;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONTH:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MONTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YEAR:12;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) YEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALVAL:17;
      uint64_t CALDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALIBRATION;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECONDS:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINUTES:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HOURS:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOM:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOW:3;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOY:9;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MONTH:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YEAR:12;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AYRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV0:1;
      uint64_t EV1:1;
      uint64_t EV2:1;
      uint64_t GP_CLEARED:1;
      uint64_t RESERVED:27;
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTWAKE_EN0:1;
      uint64_t GPCLEAR_EN0:1;
      uint64_t POL0:1;
      uint64_t EV0_INPUT_EN:1;
      uint64_t RESERVED_0:6;
      uint64_t INTWAKE_EN1:1;
      uint64_t GPCLEAR_EN1:1;
      uint64_t POL1:1;
      uint64_t EV1_INPUT_EN:1;
      uint64_t RESERVED_1:6;
      uint64_t INTWAKE_EN2:1;
      uint64_t GPCLEAR_EN2:1;
      uint64_t POL2:1;
      uint64_t EV2_INPUT_EN:1;
      uint64_t RESERVED_2:6;
      uint64_t ERMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERCONTRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER0:3;
      uint64_t RESERVED_0:5;
      uint64_t COUNTER1:3;
      uint64_t RESERVED_1:5;
      uint64_t COUNTER2:3;
      uint64_t RESERVED_2:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERCOUNTERS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERFIRSTSTAMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERFIRSTSTAMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERFIRSTSTAMP2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERLASTSTAMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERLASTSTAMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC:6;
      uint64_t MIN:6;
      uint64_t HOUR:5;
      uint64_t DOY:9;
      uint64_t RESERVED:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERLASTSTAMP2;

};

#define RTC (*(volatile struct RTC_tag *) 0x40046000)

struct CGU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCNT:9;
      uint64_t FCNT:14;
      uint64_t MEAS:1;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQ_MON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t BYPASS:1;
      uint64_t HF:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XTAL_OSC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t FR:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0USB_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t BYPASS:1;
      uint64_t DIRECTI:1;
      uint64_t DIRECTO:1;
      uint64_t CLKEN:1;
      uint64_t RESERVED_0:1;
      uint64_t FRM:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_5:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0USB_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDEC:17;
      uint64_t SELP:5;
      uint64_t SELI:6;
      uint64_t SELR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0USB_MDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDEC:7;
      uint64_t RESERVED_0:5;
      uint64_t NDEC:10;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0USB_NP_DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t FR:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0AUDIO_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t BYPASS:1;
      uint64_t DIRECTI:1;
      uint64_t DIRECTO:1;
      uint64_t CLKEN:1;
      uint64_t RESERVED_0:1;
      uint64_t FRM:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t AUTOBLOCK:1;
      uint64_t PLLFRACT_REQ:1;
      uint64_t SEL_EXT:1;
      uint64_t MOD_PD:1;
      uint64_t RESERVED_5:9;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0AUDIO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDEC:17;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0AUDIO_MDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDEC:7;
      uint64_t RESERVED_0:5;
      uint64_t NDEC:10;
      uint64_t RESERVED_1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0AUDIO_NP_DIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLFRACT_CTRL:22;
      uint64_t RESERVED:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0AUDIO_FRAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t BYPASS:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:3;
      uint64_t FBSEL:1;
      uint64_t DIRECT:1;
      uint64_t PSEL:2;
      uint64_t RESERVED_2:1;
      uint64_t AUTOBLOCK:1;
      uint64_t NSEL:2;
      uint64_t RESERVED_3:2;
      uint64_t MSEL:8;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:1;
      uint64_t IDIV:2;
      uint64_t RESERVED_1:7;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_2:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDIVA_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:1;
      uint64_t IDIV:4;
      uint64_t RESERVED_1:5;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_2:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDIVB_CTRL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:1;
      uint64_t IDIV:8;
      uint64_t RESERVED_1:1;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_2:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDIVE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_SAFE_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_USB0_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_PERIPH_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_USB1_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_M3_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_SPIFI_CLK;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_PHY_RX_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_PHY_TX_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_APB1_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_APB3_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_LCD_CLK;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_SDIO_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_SSP0_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_SSP1_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_UART0_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_UART1_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_UART2_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_UART3_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_OUT_CLK;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_AUDIO_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_CGU_OUT0_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED_0:10;
      uint64_t AUTOBLOCK:1;
      uint64_t RESERVED_1:12;
      uint64_t CLK_SEL:5;
      uint64_t RESERVED_2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_CGU_OUT1_CLK;

};

#define CGU (*(volatile struct CGU_tag *) 0x40050014)

struct CCU1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASE_APB3_CLK_IND:1;
      uint64_t BASE_APB1_CLK_IND:1;
      uint64_t BASE_SPIFI_CLK_IND:1;
      uint64_t BASE_M3_CLK_IND:1;
      uint64_t RESERVED_0:3;
      uint64_t BASE_USB0_CLK_IND:1;
      uint64_t BASE_USB1_CLK_IND:1;
      uint64_t RESERVED_1:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_STAT;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_BUS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_BUS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_I2C1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_I2C1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_DAC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_DAC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_ADC0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_ADC0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_ADC1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_ADC1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_CAN0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB3_CAN0_STAT;

  uint8_t res1[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_BUS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_BUS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_MOTOCONPWM_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_MOTOCONPWM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_I2C0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_I2C0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_I2S_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_I2S_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_CAN1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB1_CAN1_STAT;

  uint8_t res2[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SPIFI_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SPIFI_STAT;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_BUS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_BUS_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SPIFI_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SPIFI_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_GPIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_GPIO_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_LCD_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_LCD_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_ETHERNET_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_ETHERNET_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USB0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USB0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EMC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EMC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SDIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SDIO_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_DMA_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_DMA_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_M3CORE_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_M3CORE_STAT;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SCT_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SCT_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USB1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USB1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EMCDIV_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EMCDIV_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_FLASHA_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_FLASHA_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_FLASHB_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_FLASHB_STAT;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EEPROM_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_EEPROM_STAT;

  uint8_t res6[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_WWDT_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_WWDT_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_UART1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_UART1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SSP0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SSP0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SCU_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SCU_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_CREG_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_CREG_STAT;

  uint8_t res7[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_RITIMER_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_RITIMER_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART2_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART3_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_USART3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER2_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER3_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_TIMER3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SSP1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_SSP1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_QEI_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_M3_QEI_STAT;

  uint8_t res8[456];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_USB0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_USB0_STAT;

  uint8_t res9[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_USB1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_USB1_STAT;

};

#define CCU1 (*(volatile struct CCU1_tag *) 0x40051000)

struct CCU2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PD:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t BASE_UART3_CLK:1;
      uint64_t BASE_UART2_CLK:1;
      uint64_t BASE_UART1_CLK:1;
      uint64_t BASE_UART0_CLK:1;
      uint64_t BASE_SSP1_CLK:1;
      uint64_t BASE_SSP0_CLK:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE_STAT;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_AUDIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_AUDIO_STAT;

  uint8_t res1[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_USART3_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_USART3_STAT;

  uint8_t res2[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_USART2_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_USART2_STAT;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_UART1_BUS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_UART1_STAT;

  uint8_t res4[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_USART0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_USART0_STAT;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_SSP1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB2_SSP1_STAT;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_SSP0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_APB0_SSP0_STAT;

  uint8_t res7[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SDIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t AUTO:1;
      uint64_t WAKEUP:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SDIO_STAT;

};

#define CCU2 (*(volatile struct CCU2_tag *) 0x40052000)

struct RGU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_RST:1;
      uint64_t PERIPH_RST:1;
      uint64_t MASTER_RST:1;
      uint64_t RESERVED_0:1;
      uint64_t WWDT_RST:1;
      uint64_t CREG_RST:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t BUS_RST:1;
      uint64_t SCU_RST:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t M0_SUB_RST:1;
      uint64_t M3_RST:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t LCD_RST:1;
      uint64_t USB0_RST:1;
      uint64_t USB1_RST:1;
      uint64_t DMA_RST:1;
      uint64_t SDIO_RST:1;
      uint64_t EMC_RST:1;
      uint64_t ETHERNET_RST:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t FLASHA_RST:1;
      uint64_t RESERVED_9:1;
      uint64_t EEPROM_RST:1;
      uint64_t GPIO_RST:1;
      uint64_t FLASHB_RST:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0_RST:1;
      uint64_t TIMER1_RST:1;
      uint64_t TIMER2_RST:1;
      uint64_t TIMER3_RST:1;
      uint64_t RITIMER_RST:1;
      uint64_t SCT_RST:1;
      uint64_t MOTOCONPWM_RST:1;
      uint64_t QEI_RST:1;
      uint64_t ADC0_RST:1;
      uint64_t ADC1_RST:1;
      uint64_t DAC_RST:1;
      uint64_t RESERVED_0:1;
      uint64_t UART0_RST:1;
      uint64_t UART1_RST:1;
      uint64_t UART2_RST:1;
      uint64_t UART3_RST:1;
      uint64_t I2C0_RST:1;
      uint64_t I2C1_RST:1;
      uint64_t SSP0_RST:1;
      uint64_t SSP1_RST:1;
      uint64_t I2S_RST:1;
      uint64_t SPIFI_RST:1;
      uint64_t CAN1_RST:1;
      uint64_t CAN0_RST:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:3;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_CTRL1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPH_RST:2;
      uint64_t MASTER_RST:2;
      uint64_t RESERVED_1:2;
      uint64_t WWDT_RST:2;
      uint64_t CREG_RST:2;
      uint64_t RESERVED_2:2;
      uint64_t RESERVED_3:2;
      uint64_t BUS_RST:2;
      uint64_t SCU_RST:2;
      uint64_t RESERVED_4:2;
      uint64_t RESERVED_5:2;
      uint64_t M0SUB_RST:2;
      uint64_t M3_RST:2;
      uint64_t RESERVED_6:2;
      uint64_t RESERVED_7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCD_RST:2;
      uint64_t USB0_RST:2;
      uint64_t USB1_RST:2;
      uint64_t DMA_RST:2;
      uint64_t SDIO_RST:2;
      uint64_t EMC_RST:2;
      uint64_t ETHERNET_RST:2;
      uint64_t RESERVED_0:2;
      uint64_t RESERVED_1:2;
      uint64_t FLASHA_RST:2;
      uint64_t RESERVED_2:2;
      uint64_t EEPROM_RST:2;
      uint64_t GPIO_RST:2;
      uint64_t FLASHB_RST:2;
      uint64_t RESERVED_3:2;
      uint64_t RESERVED_4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_STATUS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0_RST:2;
      uint64_t TIMER1_RST:2;
      uint64_t TIMER2_RST:2;
      uint64_t TIMER3_RST:2;
      uint64_t RITIMER_RST:2;
      uint64_t SCT_RST:2;
      uint64_t MOTOCONPWM_RST:2;
      uint64_t QEI_RST:2;
      uint64_t ADC0_RST:2;
      uint64_t ADC1_RST:2;
      uint64_t DAC_RST:2;
      uint64_t RESERVED:2;
      uint64_t UART0_RST:2;
      uint64_t UART1_RST:2;
      uint64_t UART2_RST:2;
      uint64_t UART3_RST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_STATUS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C0_RST:2;
      uint64_t I2C1_RST:2;
      uint64_t SSP0_RST:2;
      uint64_t SSP1_RST:2;
      uint64_t I2S_RST:2;
      uint64_t SPIFI_RST:2;
      uint64_t CAN1_RST:2;
      uint64_t CAN0_RST:2;
      uint64_t RESERVED_0:2;
      uint64_t RESERVED_1:6;
      uint64_t RESERVED_2:2;
      uint64_t RESERVED_3:2;
      uint64_t RESERVED_4:2;
      uint64_t RESERVED_5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_STATUS3;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CORE_RST:1;
      uint64_t PERIPH_RST:1;
      uint64_t MASTER_RST:1;
      uint64_t RESERVED_0:1;
      uint64_t WWDT_RST:1;
      uint64_t CREG_RST:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t BUS_RST:1;
      uint64_t SCU_RST:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t M0SUB_RST:1;
      uint64_t M3_RST:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t LCD_RST:1;
      uint64_t USB0_RST:1;
      uint64_t USB1_RST:1;
      uint64_t DMA_RST:1;
      uint64_t SDIO_RST:1;
      uint64_t EMC_RST:1;
      uint64_t ETHERNET_RST:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t FLASHA_RST:1;
      uint64_t RESERVED_9:1;
      uint64_t EEPROM_RST:1;
      uint64_t GPIO_RST:1;
      uint64_t FLASHB_RST:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_ACTIVE_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER0_RST:1;
      uint64_t TIMER1_RST:1;
      uint64_t TIMER2_RST:1;
      uint64_t TIMER3_RST:1;
      uint64_t RITIMER_RST:1;
      uint64_t SCT_RST:1;
      uint64_t MOTOCONPWM_RST:1;
      uint64_t QEI_RST:1;
      uint64_t ADC0_RST:1;
      uint64_t ADC1_RST:1;
      uint64_t DAC_RST:1;
      uint64_t RESERVED_0:1;
      uint64_t UART0_RST:1;
      uint64_t UART1_RST:1;
      uint64_t UART2_RST:1;
      uint64_t UART3_RST:1;
      uint64_t I2C0_RST:1;
      uint64_t I2C1_RST:1;
      uint64_t SSP0_RST:1;
      uint64_t SSP1_RST:1;
      uint64_t I2S_RST:1;
      uint64_t SPIFI_RST:1;
      uint64_t CAN1_RST:1;
      uint64_t CAN0_RST:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:3;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_ACTIVE_STATUS1;

  uint8_t res2[684];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t CORE_RESET:1;
      uint64_t RESERVED_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t CORE_RESET:1;
      uint64_t RESERVED_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT5;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT9;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT13;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT22;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT25;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t MASTER_RESET:1;
      uint64_t RESERVED_1:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT29;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT42;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t PERIPHERAL_RESET:1;
      uint64_t RESERVED_1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_EXT_STAT55;

};

#define RGU (*(volatile struct RGU_tag *) 0x40053100)

struct WWDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDEN:1;
      uint64_t WDRESET:1;
      uint64_t WDTOF:1;
      uint64_t WDINT:1;
      uint64_t WDPROTECT:1;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTC:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Feed:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Count:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TV;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDWARNINT:10;
      uint64_t RESERVED:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARNINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDWINDOW:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINDOW;

};

#define WWDT (*(volatile struct WWDT_tag *) 0x40080000)

struct SSP0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t CPOL:1;
      uint64_t CPHA:1;
      uint64_t SCR:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSP0 (*(volatile struct SSP0_tag *) 0x40083000)

struct SSP1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t CPOL:1;
      uint64_t CPHA:1;
      uint64_t SCR:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t SSE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BSY:1;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIM:1;
      uint64_t RTIM:1;
      uint64_t RXIM:1;
      uint64_t TXIM:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORRIS:1;
      uint64_t RTRIS:1;
      uint64_t RXRIS:1;
      uint64_t TXRIS:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORMIS:1;
      uint64_t RTMIS:1;
      uint64_t RXMIS:1;
      uint64_t TXMIS:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSP1 (*(volatile struct SSP1_tag *) 0x400c5000)

struct TIMER0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

};

#define TIMER0 (*(volatile struct TIMER0_tag *) 0x40084000)

struct TIMER1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

};

#define TIMER1 (*(volatile struct TIMER1_tag *) 0x40085000)

struct TIMER2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

};

#define TIMER2 (*(volatile struct TIMER2_tag *) 0x400c3000)

struct TIMER3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0INT:1;
      uint64_t MR1INT:1;
      uint64_t MR2INT:1;
      uint64_t MR3INT:1;
      uint64_t CR0INT:1;
      uint64_t CR1INT:1;
      uint64_t CR2INT:1;
      uint64_t CR3INT:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t CRST:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0I:1;
      uint64_t MR0R:1;
      uint64_t MR0S:1;
      uint64_t MR1I:1;
      uint64_t MR1R:1;
      uint64_t MR1S:1;
      uint64_t MR2I:1;
      uint64_t MR2R:1;
      uint64_t MR2S:1;
      uint64_t MR3I:1;
      uint64_t MR3R:1;
      uint64_t MR3S:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0RE:1;
      uint64_t CAP0FE:1;
      uint64_t CAP0I:1;
      uint64_t CAP1RE:1;
      uint64_t CAP1FE:1;
      uint64_t CAP1I:1;
      uint64_t CAP2RE:1;
      uint64_t CAP2FE:1;
      uint64_t CAP2I:1;
      uint64_t CAP3RE:1;
      uint64_t CAP3FE:1;
      uint64_t CAP3I:1;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM0:1;
      uint64_t EM1:1;
      uint64_t EM2:1;
      uint64_t EM3:1;
      uint64_t EMC0:2;
      uint64_t EMC1:2;
      uint64_t EMC2:2;
      uint64_t EMC3:2;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTMODE:2;
      uint64_t CINSEL:2;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCR;

};

#define TIMER3 (*(volatile struct TIMER3_tag *) 0x400c4000)

struct SCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP0_1;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP1_20;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP2_12;

  uint8_t res2[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP3_8;

  uint8_t res3[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP4_10;

  uint8_t res4[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP5_7;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP6_12;

  uint8_t res6[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP7_7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP8_8;

  uint8_t res8[92];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t RESERVED_0:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSP9_6;

  uint8_t res9[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t RESERVED_0:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t EHD:2;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPA_4;

  uint8_t res10[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPB_6;

  uint8_t res11[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPC_14;

  uint8_t res12[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPD_16;

  uint8_t res13[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPE_15;

  uint8_t res14[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSPF_11;

  uint8_t res15[1104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSCLK_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSCLK_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSCLK_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
      uint64_t EPD:1;
      uint64_t EPUN:1;
      uint64_t EHS:1;
      uint64_t EZI:1;
      uint64_t ZIF:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSCLK_3;

  uint8_t res16[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USB_AIM:1;
      uint64_t USB_ESEA:1;
      uint64_t USB_EPD:1;
      uint64_t RESERVED_0:1;
      uint64_t USB_EPWR:1;
      uint64_t USB_VBUS:1;
      uint64_t RESERVED_1:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSUSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCL_EFP:1;
      uint64_t RESERVED_0:1;
      uint64_t SCL_EHD:1;
      uint64_t SCL_EZI:1;
      uint64_t RESERVED_1:3;
      uint64_t SCL_ZIF:1;
      uint64_t SDA_EFP:1;
      uint64_t RESERVED_2:1;
      uint64_t SDA_EHD:1;
      uint64_t SDA_EZI:1;
      uint64_t RESERVED_3:3;
      uint64_t SDA_ZIF:1;
      uint64_t RESERVED_4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFSI2C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC0_0:1;
      uint64_t ADC0_1:1;
      uint64_t ADC0_2:1;
      uint64_t ADC0_3:1;
      uint64_t ADC0_4:1;
      uint64_t ADC0_5:1;
      uint64_t ADC0_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENAIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC1_0:1;
      uint64_t ADC1_1:1;
      uint64_t ADC1_2:1;
      uint64_t ADC1_3:1;
      uint64_t ADC1_4:1;
      uint64_t ADC1_5:1;
      uint64_t ADC1_6:1;
      uint64_t ADC1_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENAIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC_bitfield:1;
      uint64_t reservedSpace0:3;
      uint64_t BG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENAIO2;

  uint8_t res17[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DELAY:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCDELAYCLK;

  uint8_t res18[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLE_DELAY:4;
      uint64_t RESERVED_0:4;
      uint64_t DRV_DELAY:4;
      uint64_t RESERVED_1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDDELAY;

  uint8_t res19[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN0:5;
      uint64_t PORTSEL0:3;
      uint64_t INTPIN1:5;
      uint64_t PORTSEL1:3;
      uint64_t INTPIN2:5;
      uint64_t PORTSEL2:3;
      uint64_t INTPIN3:5;
      uint64_t PORTSEL3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPIN4:5;
      uint64_t PORTSEL4:3;
      uint64_t INTPIN5:5;
      uint64_t PORTSEL5:3;
      uint64_t INTPIN6:5;
      uint64_t PORTSEL6:3;
      uint64_t INTPIN7:5;
      uint64_t PORTSEL7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PINTSEL1;

};

#define SCU (*(volatile struct SCU_tag *) 0x40086000)

struct GPIO_PIN_INT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE0:1;
      uint64_t PMODE1:1;
      uint64_t PMODE2:1;
      uint64_t PMODE3:1;
      uint64_t PMODE4:1;
      uint64_t PMODE5:1;
      uint64_t PMODE6:1;
      uint64_t PMODE7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENRL0:1;
      uint64_t ENRL1:1;
      uint64_t ENRL2:1;
      uint64_t ENRL3:1;
      uint64_t ENRL4:1;
      uint64_t ENRL5:1;
      uint64_t ENRL6:1;
      uint64_t ENRL7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENRL0:1;
      uint64_t SETENRL1:1;
      uint64_t SETENRL2:1;
      uint64_t SETENRL3:1;
      uint64_t SETENRL4:1;
      uint64_t SETENRL5:1;
      uint64_t SETENRL6:1;
      uint64_t SETENRL7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENRL0:1;
      uint64_t CENRL1:1;
      uint64_t CENRL2:1;
      uint64_t CENRL3:1;
      uint64_t CENRL4:1;
      uint64_t CENRL5:1;
      uint64_t CENRL6:1;
      uint64_t CENRL7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENAF0:1;
      uint64_t ENAF1:1;
      uint64_t ENAF2:1;
      uint64_t ENAF3:1;
      uint64_t ENAF4:1;
      uint64_t ENAF5:1;
      uint64_t ENAF6:1;
      uint64_t ENAF7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENAF0:1;
      uint64_t SETENAF1:1;
      uint64_t SETENAF2:1;
      uint64_t SETENAF3:1;
      uint64_t SETENAF4:1;
      uint64_t SETENAF5:1;
      uint64_t SETENAF6:1;
      uint64_t SETENAF7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENAF0:1;
      uint64_t CENAF1:1;
      uint64_t CENAF2:1;
      uint64_t CENAF3:1;
      uint64_t CENAF4:1;
      uint64_t CENAF5:1;
      uint64_t CENAF6:1;
      uint64_t CENAF7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIENF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDET0:1;
      uint64_t RDET1:1;
      uint64_t RDET2:1;
      uint64_t RDET3:1;
      uint64_t RDET4:1;
      uint64_t RDET5:1;
      uint64_t RDET6:1;
      uint64_t RDET7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDET0:1;
      uint64_t FDET1:1;
      uint64_t FDET2:1;
      uint64_t FDET3:1;
      uint64_t FDET4:1;
      uint64_t FDET5:1;
      uint64_t FDET6:1;
      uint64_t FDET7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSTAT0:1;
      uint64_t PSTAT1:1;
      uint64_t PSTAT2:1;
      uint64_t PSTAT3:1;
      uint64_t PSTAT4:1;
      uint64_t PSTAT5:1;
      uint64_t PSTAT6:1;
      uint64_t PSTAT7:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IST;

};

#define GPIO_PIN_INT (*(volatile struct GPIO_PIN_INT_tag *) 0x40087000)

struct GPIO_GROUP_INT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t COMB:1;
      uint64_t TRIG:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA7;

};

#define GPIO_GROUP_INT0 (*(volatile struct GPIO_GROUP_INT0_tag *) 0x40088000)

struct GPIO_GROUP_INT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:1;
      uint64_t COMB:1;
      uint64_t TRIG:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL_0:1;
      uint64_t POL_1:1;
      uint64_t POL_2:1;
      uint64_t POL_3:1;
      uint64_t POL_4:1;
      uint64_t POL_5:1;
      uint64_t POL_6:1;
      uint64_t POL_7:1;
      uint64_t POL_8:1;
      uint64_t POL_9:1;
      uint64_t POL_10:1;
      uint64_t POL_11:1;
      uint64_t POL_12:1;
      uint64_t POL_13:1;
      uint64_t POL_14:1;
      uint64_t POL_15:1;
      uint64_t POL_16:1;
      uint64_t POL_17:1;
      uint64_t POL_18:1;
      uint64_t POL_19:1;
      uint64_t POL_20:1;
      uint64_t POL_21:1;
      uint64_t POL_22:1;
      uint64_t POL_23:1;
      uint64_t POL_24:1;
      uint64_t POL_25:1;
      uint64_t POL_26:1;
      uint64_t POL_27:1;
      uint64_t POL_28:1;
      uint64_t POL_29:1;
      uint64_t POL_30:1;
      uint64_t POL_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_POL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA_0:1;
      uint64_t ENA_1:1;
      uint64_t ENA_2:1;
      uint64_t ENA_3:1;
      uint64_t ENA_4:1;
      uint64_t ENA_5:1;
      uint64_t ENA_6:1;
      uint64_t ENA_7:1;
      uint64_t ENA_8:1;
      uint64_t ENA_9:1;
      uint64_t ENA_10:1;
      uint64_t ENA_11:1;
      uint64_t ENA_12:1;
      uint64_t ENA_13:1;
      uint64_t ENA_14:1;
      uint64_t ENA_15:1;
      uint64_t ENA_16:1;
      uint64_t ENA_17:1;
      uint64_t ENA_18:1;
      uint64_t ENA_19:1;
      uint64_t ENA_20:1;
      uint64_t ENA_21:1;
      uint64_t ENA_22:1;
      uint64_t ENA_23:1;
      uint64_t ENA_24:1;
      uint64_t ENA_25:1;
      uint64_t ENA_26:1;
      uint64_t ENA_27:1;
      uint64_t ENA_28:1;
      uint64_t ENA_29:1;
      uint64_t ENA_30:1;
      uint64_t ENA_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_ENA7;

};

#define GPIO_GROUP_INT1 (*(volatile struct GPIO_GROUP_INT1_tag *) 0x40089000)

struct MCPWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN0:1;
      uint64_t CENTER0:1;
      uint64_t POLA0:1;
      uint64_t DTE0:1;
      uint64_t DISUP0:1;
      uint64_t RESERVED_0:3;
      uint64_t RUN1:1;
      uint64_t CENTER1:1;
      uint64_t POLA1:1;
      uint64_t DTE1:1;
      uint64_t DISUP1:1;
      uint64_t RESERVED_1:3;
      uint64_t RUN2:1;
      uint64_t CENTER2:1;
      uint64_t POLA2:1;
      uint64_t DTE2:1;
      uint64_t DISUP2:1;
      uint64_t RESERVED_2:8;
      uint64_t INVBDC:1;
      uint64_t ACMODE:1;
      uint64_t DCMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN0_SET:1;
      uint64_t CENTER0_SET:1;
      uint64_t POLA0_SET:1;
      uint64_t DTE0_SET:1;
      uint64_t DISUP0_SET:1;
      uint64_t RESERVED_0:3;
      uint64_t RUN1_SET:1;
      uint64_t CENTER1_SET:1;
      uint64_t POLA1_SET:1;
      uint64_t DTE1_SET:1;
      uint64_t DISUP1_SET:1;
      uint64_t RESERVED_1:3;
      uint64_t RUN2_SET:1;
      uint64_t CENTER2_SET:1;
      uint64_t POLA2_SET:1;
      uint64_t DTE2_SET:1;
      uint64_t DISUP2_SET:1;
      uint64_t RESERVED_2:8;
      uint64_t INVBDC_SET:1;
      uint64_t ACMODE_SET:1;
      uint64_t DCMODE_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CON_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN0_CLR:1;
      uint64_t CENTER0_CLR:1;
      uint64_t POLA0_CLR:1;
      uint64_t DTE0_CLR:1;
      uint64_t DISUP0_CLR:1;
      uint64_t RESERVED_0:3;
      uint64_t RUN1_CLR:1;
      uint64_t CENTER1_CLR:1;
      uint64_t POLA1_CLR:1;
      uint64_t DTE1_CLR:1;
      uint64_t DISUP1_CLR:1;
      uint64_t RESERVED_1:3;
      uint64_t RUN2_CLR:1;
      uint64_t CENTER2_CLR:1;
      uint64_t POLA2_CLR:1;
      uint64_t DTE2_CLR:1;
      uint64_t DISUP2_CLR:1;
      uint64_t RESERVED_2:8;
      uint64_t INVBDC_CLR:1;
      uint64_t ACMOD_CLR:1;
      uint64_t DCMODE_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CON_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0MCI0_RE:1;
      uint64_t CAP0MCI0_FE:1;
      uint64_t CAP0MCI1_RE:1;
      uint64_t CAP0MCI1_FE:1;
      uint64_t CAP0MCI2_RE:1;
      uint64_t CAP0MCI2_FE:1;
      uint64_t CAP1MCI0_RE:1;
      uint64_t CAP1MCI0_FE:1;
      uint64_t CAP1MCI1_RE:1;
      uint64_t CAP1MCI1_FE:1;
      uint64_t CAP1MCI2_RE:1;
      uint64_t CAP1MCI2_FE:1;
      uint64_t CAP2MCI0_RE:1;
      uint64_t CAP2MCI0_FE:1;
      uint64_t CAP2MCI1_RE:1;
      uint64_t CAP2MCI1_FE:1;
      uint64_t CAP2MCI2_RE:1;
      uint64_t CAP2MCI2_FE:1;
      uint64_t RT0:1;
      uint64_t RT1:1;
      uint64_t RT2:1;
      uint64_t RESERVED:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0MCI0_RE_SET:1;
      uint64_t CAP0MCI0_FE_SET:1;
      uint64_t CAP0MCI1_RE_SET:1;
      uint64_t CAP0MCI1_FE_SET:1;
      uint64_t CAP0MCI2_RE_SET:1;
      uint64_t CAP0MCI2_FE_SET:1;
      uint64_t CAP1MCI0_RE_SET:1;
      uint64_t CAP1MCI0_FE_SET:1;
      uint64_t CAP1MCI1_RE_SET:1;
      uint64_t CAP1MCI1_FE_SET:1;
      uint64_t CAP1MCI2_RE_SET:1;
      uint64_t CAP1MCI2_FE_SET:1;
      uint64_t CAP2MCI0_RE_SET:1;
      uint64_t CAP2MCI0_FE_SET:1;
      uint64_t CAP2MCI1_RE_SET:1;
      uint64_t CAP2MCI1_FE_SET:1;
      uint64_t CAP2MCI2_RE_SET:1;
      uint64_t CAP2MCI2_FE_SET:1;
      uint64_t RT0_SET:1;
      uint64_t RT1_SET:1;
      uint64_t RT2_SET:1;
      uint64_t RESERVED:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPCON_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP0MCI0_RE_CLR:1;
      uint64_t CAP0MCI0_FE_CLR:1;
      uint64_t CAP0MCI1_RE_CLR:1;
      uint64_t CAP0MCI1_FE_CLR:1;
      uint64_t CAP0MCI2_RE_CLR:1;
      uint64_t CAP0MCI2_FE_CLR:1;
      uint64_t CAP1MCI0_RE_CLR:1;
      uint64_t CAP1MCI0_FE_CLR:1;
      uint64_t CAP1MCI1_RE_CLR:1;
      uint64_t CAP1MCI1_FE_CLR:1;
      uint64_t CAP1MCI2_RE_CLR:1;
      uint64_t CAP1MCI2_FE_CLR:1;
      uint64_t CAP2MCI0_RE_CLR:1;
      uint64_t CAP2MCI0_FE_CLR:1;
      uint64_t CAP2MCI1_RE_CLR:1;
      uint64_t CAP2MCI1_FE_CLR:1;
      uint64_t CAP2MCI2_RE_CLR:1;
      uint64_t CAP2MCI2_FE_CLR:1;
      uint64_t RT0_CLR:1;
      uint64_t RT1_CLR:1;
      uint64_t RT2_CLR:1;
      uint64_t RESERVED:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPCON_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCLIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCLIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCLIM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCMAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DT0:10;
      uint64_t DT1:10;
      uint64_t DT2:10;
      uint64_t RESERVED:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCPA0:1;
      uint64_t CCPB0:1;
      uint64_t CCPA1:1;
      uint64_t CCPB1:1;
      uint64_t CCPA2:1;
      uint64_t CCPB2:1;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0:1;
      uint64_t IMAT0:1;
      uint64_t ICAP0:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1:1;
      uint64_t IMAT1:1;
      uint64_t ICAP1:1;
      uint64_t RESERVED_1:1;
      uint64_t ILIM2:1;
      uint64_t IMAT2:1;
      uint64_t ICAP2:1;
      uint64_t RESERVED_2:4;
      uint64_t ABORT:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0_SET:1;
      uint64_t IMAT0_SET:1;
      uint64_t ICAP0_SET:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1_SET:1;
      uint64_t IMAT1_SET:1;
      uint64_t ICAP1_SET:1;
      uint64_t RESERVED_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ILIM2_SET:1;
      uint64_t IMAT2_SET:1;
      uint64_t ICAP2_SET:1;
      uint64_t RESERVED_2:3;
      uint64_t ABORT_SET:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0_CLR:1;
      uint64_t IMAT0_CLR:1;
      uint64_t ICAP0_CLR:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1_CLR:1;
      uint64_t IMAT1_CLR:1;
      uint64_t ICAP1_CLR:1;
      uint64_t RESERVED_1:1;
      uint64_t ILIM2_CLR:1;
      uint64_t IMAT2_CLR:1;
      uint64_t ICAP2_CLR:1;
      uint64_t RESERVED_2:4;
      uint64_t ABORT_CLR:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0MCI0_RE:1;
      uint64_t TC0MCI0_FE:1;
      uint64_t TC0MCI1_RE:1;
      uint64_t TC0MCI1_FE:1;
      uint64_t TC0MCI2_RE:1;
      uint64_t TC0MCI2_FE:1;
      uint64_t TC1MCI0_RE:1;
      uint64_t TC1MCI0_FE:1;
      uint64_t TC1MCI1_RE:1;
      uint64_t TC1MCI1_FE:1;
      uint64_t TC1MCI2_RE:1;
      uint64_t TC1MCI2_FE:1;
      uint64_t TC2MCI0_RE:1;
      uint64_t TC2MCI0_FE:1;
      uint64_t TC2MCI1_RE:1;
      uint64_t TC2MCI1_FE:1;
      uint64_t TC2MCI2_RE:1;
      uint64_t TC2MCI2_FE:1;
      uint64_t RESERVED:11;
      uint64_t CNTR0:1;
      uint64_t CNTR1:1;
      uint64_t CNTR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTCON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0MCI0_RE_SET:1;
      uint64_t TC0MCI0_FE_SET:1;
      uint64_t TC0MCI1_RE_SET:1;
      uint64_t TC0MCI1_FE_SET:1;
      uint64_t TC0MCI2_RE_SET:1;
      uint64_t TC0MCI2_FE_SET:1;
      uint64_t TC1MCI0_RE_SET:1;
      uint64_t TC1MCI0_FE_SET:1;
      uint64_t TC1MCI1_RE_SET:1;
      uint64_t TC1MCI1_FE_SET:1;
      uint64_t TC1MCI2_RE_SET:1;
      uint64_t TC1MCI2_FE_SET:1;
      uint64_t TC2MCI0_RE_SET:1;
      uint64_t TC2MCI0_FE_SET:1;
      uint64_t TC2MCI1_RE_SET:1;
      uint64_t TC2MCI1_FE_SET:1;
      uint64_t TC2MCI2_RE_SET:1;
      uint64_t TC2MCI2_FE_SET:1;
      uint64_t RESERVED:11;
      uint64_t CNTR0_SET:1;
      uint64_t CNTR1_SET:1;
      uint64_t CNTR2_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTCON_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC0MCI0_RE_CLR:1;
      uint64_t TC0MCI0_FE_CLR:1;
      uint64_t TC0MCI1_RE_CLR:1;
      uint64_t TC0MCI1_FE_CLR:1;
      uint64_t TC0MCI2_RE:1;
      uint64_t TC0MCI2_FE_CLR:1;
      uint64_t TC1MCI0_RE_CLR:1;
      uint64_t TC1MCI0_FE_CLR:1;
      uint64_t TC1MCI1_RE_CLR:1;
      uint64_t TC1MCI1_FE_CLR:1;
      uint64_t TC1MCI2_RE_CLR:1;
      uint64_t TC1MCI2_FE_CLR:1;
      uint64_t TC2MCI0_RE_CLR:1;
      uint64_t TC2MCI0_FE_CLR:1;
      uint64_t TC2MCI1_RE_CLR:1;
      uint64_t TC2MCI1_FE_CLR:1;
      uint64_t TC2MCI2_RE_CLR:1;
      uint64_t TC2MCI2_FE_CLR:1;
      uint64_t RESERVED:11;
      uint64_t CNTR0_CLR:1;
      uint64_t CNTR1_CLR:1;
      uint64_t CNTR2_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTCON_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0_F:1;
      uint64_t IMAT0_F:1;
      uint64_t ICAP0_F:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1_F:1;
      uint64_t IMAT1_F:1;
      uint64_t ICAP1_F:1;
      uint64_t RESERVED_1:1;
      uint64_t ILIM2_F:1;
      uint64_t IMAT2_F:1;
      uint64_t ICAP2_F:1;
      uint64_t RESERVED_2:4;
      uint64_t ABORT_F:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0_F_SET:1;
      uint64_t IMAT0_F_SET:1;
      uint64_t ICAP0_F_SET:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1_F_SET:1;
      uint64_t IMAT1_F_SET:1;
      uint64_t ICAP1_F_SET:1;
      uint64_t RESERVED_1:1;
      uint64_t ILIM2_F_SET:1;
      uint64_t IMAT2_F_SET:1;
      uint64_t ICAP2_F_SET:1;
      uint64_t RESERVED_2:4;
      uint64_t ABORT_F_SET:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILIM0_F_CLR:1;
      uint64_t IMAT0_F_CLR:1;
      uint64_t ICAP0_F_CLR:1;
      uint64_t RESERVED_0:1;
      uint64_t ILIM1_F_CLR:1;
      uint64_t IMAT1_F_CLR:1;
      uint64_t ICAP1_F_CLR:1;
      uint64_t RESERVED_1:1;
      uint64_t ILIM2_F_CLR:1;
      uint64_t IMAT2_F_CLR:1;
      uint64_t ICAP2_F_CLR:1;
      uint64_t RESERVED_2:4;
      uint64_t ABORT_F_CLR:1;
      uint64_t RESERVED_3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTF_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP_CLR0:1;
      uint64_t CAP_CLR1:1;
      uint64_t CAP_CLR2:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CLR;

};

#define MCPWM (*(volatile struct MCPWM_tag *) 0x400a0000)

struct I2C0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t AA:1;
      uint64_t SI:1;
      uint64_t STO:1;
      uint64_t STA:1;
      uint64_t I2EN:1;
      uint64_t RESERVED_1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t Status:5;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLH:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t AAC:1;
      uint64_t SIC:1;
      uint64_t RESERVED_1:1;
      uint64_t STAC:1;
      uint64_t I2ENC:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM_ENA:1;
      uint64_t ENA_SCL:1;
      uint64_t MATCH_ALL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_BUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK3;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x400a1000)

struct I2C1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t AA:1;
      uint64_t SI:1;
      uint64_t STO:1;
      uint64_t STA:1;
      uint64_t I2EN:1;
      uint64_t RESERVED_1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t Status:5;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLH:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:2;
      uint64_t AAC:1;
      uint64_t SIC:1;
      uint64_t RESERVED_1:1;
      uint64_t STAC:1;
      uint64_t I2ENC:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM_ENA:1;
      uint64_t ENA_SCL:1;
      uint64_t MATCH_ALL:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GC:1;
      uint64_t Address:7;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA_BUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t MASK:7;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK3;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x400e0000)

struct I2S0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORDWIDTH:2;
      uint64_t MONO:1;
      uint64_t STOP:1;
      uint64_t RESET:1;
      uint64_t WS_SEL:1;
      uint64_t WS_HALFPERIOD:9;
      uint64_t MUTE:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORDWIDTH:2;
      uint64_t MONO:1;
      uint64_t STOP:1;
      uint64_t RESET:1;
      uint64_t WS_SEL:1;
      uint64_t WS_HALFPERIOD:9;
      uint64_t RESERVED:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2STXFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SRXFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:1;
      uint64_t DMAREQ1:1;
      uint64_t DMAREQ2:1;
      uint64_t RESERVED_0:5;
      uint64_t RX_LEVEL:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_LEVEL:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_DMA1_ENABLE:1;
      uint64_t TX_DMA1_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_DMA1:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_DMA1:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_DMA2_ENABLE:1;
      uint64_t TX_DMA2_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_DMA2:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_DMA2:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_IRQ_ENABLE:1;
      uint64_t TX_IRQ_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_IRQ:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_IRQ:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_DIVIDER:8;
      uint64_t X_DIVIDER:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_DIVIDER:8;
      uint64_t X_DIVIDER:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_BITRATE:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BITRATE:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCLKSEL:2;
      uint64_t TX4PIN:1;
      uint64_t TXMCENA:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCLKSEL:2;
      uint64_t RX4PIN:1;
      uint64_t RXMCENA:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODE;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x400a2000)

struct I2S1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORDWIDTH:2;
      uint64_t MONO:1;
      uint64_t STOP:1;
      uint64_t RESET:1;
      uint64_t WS_SEL:1;
      uint64_t WS_HALFPERIOD:9;
      uint64_t MUTE:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORDWIDTH:2;
      uint64_t MONO:1;
      uint64_t STOP:1;
      uint64_t RESET:1;
      uint64_t WS_SEL:1;
      uint64_t WS_HALFPERIOD:9;
      uint64_t RESERVED:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DAI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2STXFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SRXFIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:1;
      uint64_t DMAREQ1:1;
      uint64_t DMAREQ2:1;
      uint64_t RESERVED_0:5;
      uint64_t RX_LEVEL:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_LEVEL:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_DMA1_ENABLE:1;
      uint64_t TX_DMA1_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_DMA1:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_DMA1:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_DMA2_ENABLE:1;
      uint64_t TX_DMA2_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_DMA2:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_DMA2:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_IRQ_ENABLE:1;
      uint64_t TX_IRQ_ENABLE:1;
      uint64_t RESERVED_0:6;
      uint64_t RX_DEPTH_IRQ:4;
      uint64_t RESERVED_1:4;
      uint64_t TX_DEPTH_IRQ:4;
      uint64_t RESERVED_2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_DIVIDER:8;
      uint64_t X_DIVIDER:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_DIVIDER:8;
      uint64_t X_DIVIDER:8;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_BITRATE:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BITRATE:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCLKSEL:2;
      uint64_t TX4PIN:1;
      uint64_t TXMCENA:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCLKSEL:2;
      uint64_t RX4PIN:1;
      uint64_t RXMCENA:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMODE;

};

#define I2S1 (*(volatile struct I2S1_tag *) 0x400a3000)

struct RITIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RIMASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RITINT:1;
      uint64_t RITENCLR:1;
      uint64_t RITENBR:1;
      uint64_t RITEN:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RICOUNTER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

};

#define RITIMER (*(volatile struct RITIMER_tag *) 0x400c0000)

struct QEI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESP:1;
      uint64_t RESPI:1;
      uint64_t RESV:1;
      uint64_t RESI:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CON;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIR:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRINV:1;
      uint64_t SIGMODE:1;
      uint64_t CAPMODE:1;
      uint64_t INVINX:1;
      uint64_t CRESPI:1;
      uint64_t RESERVED_0:11;
      uint64_t INXGATE:4;
      uint64_t RESERVED_1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXPOS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAXPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPOS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPOS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPOS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCPOS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INXCMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VELLOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VELVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VELPC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VELCAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VELCMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VELCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTERPHA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTERPHB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FITLINX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILTERINX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WINDOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINDOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INXCMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INXCMP2;

  uint8_t res0[3972];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_EN:1;
      uint64_t TIM_EN:1;
      uint64_t VELC_EN:1;
      uint64_t DIR_EN:1;
      uint64_t ERR_EN:1;
      uint64_t ENCLK_EN:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t POS2REV_Int:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_EN:1;
      uint64_t TIM_EN:1;
      uint64_t VELC_EN:1;
      uint64_t DIR_EN:1;
      uint64_t ERR_EN:1;
      uint64_t ENCLK_EN:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t POS2REV_Int:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_Int:1;
      uint64_t TIM_Int:1;
      uint64_t VELC_Int:1;
      uint64_t DIR_Int:1;
      uint64_t ERR_Int:1;
      uint64_t ENCLK_Int:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t POS2REV_Int:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_Int:1;
      uint64_t TIM_Int:1;
      uint64_t VELC_Int:1;
      uint64_t DIR_Int:1;
      uint64_t ERR_Int:1;
      uint64_t ENCLK_Int:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t POS2REV_Int:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_Int:1;
      uint64_t TIM_Int:1;
      uint64_t VELC_Int:1;
      uint64_t DIR_Int:1;
      uint64_t ERR_Int:1;
      uint64_t ENCLK_Int:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t reservedSpace0:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INX_Int:1;
      uint64_t TIM_Int:1;
      uint64_t VELC_Int:1;
      uint64_t DIR_Int:1;
      uint64_t ERR_Int:1;
      uint64_t ENCLK_Int:1;
      uint64_t POS0_Int:1;
      uint64_t POS1_Int:1;
      uint64_t POS2_Int:1;
      uint64_t REV_Int:1;
      uint64_t POS0REV_Int:1;
      uint64_t POS1REV_Int:1;
      uint64_t POS2REV_Int:1;
      uint64_t REV1_Int:1;
      uint64_t REV2_Int:1;
      uint64_t MAXPOS_Int:1;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET;

};

#define QEI (*(volatile struct QEI_tag *) 0x400c6000)

struct GIMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0_0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0_1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0_2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0_3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1_0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1_1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1_2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1_3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2_0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2_1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2_2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2_3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP3_0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP3_1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP3_2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP3_3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_4_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_5_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_6_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTIN_7_IN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVENTROUTER_13_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVENTROUTER_14_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVENTROUTER_16_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCSTART0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t EDGE:1;
      uint64_t SYNCH:1;
      uint64_t PULSE:1;
      uint64_t SELECT:4;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCSTART1_IN;

};

#define GIMA (*(volatile struct GIMA_tag *) 0x400c7000)

struct DAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t VALUE:10;
      uint64_t BIAS:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT_DMA_REQ:1;
      uint64_t DBLBUF_ENA:1;
      uint64_t CNT_ENA:1;
      uint64_t DMA_ENA:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTVAL;

};

#define DAC (*(volatile struct DAC_tag *) 0x400e1000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:8;
      uint64_t CLKDIV:8;
      uint64_t BURST:1;
      uint64_t CLKS:3;
      uint64_t RESERVED_0:1;
      uint64_t PDN:1;
      uint64_t RESERVED_1:2;
      uint64_t START:3;
      uint64_t EDGE:1;
      uint64_t RESERVED_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:8;
      uint64_t CHN:3;
      uint64_t RESERVED_2:3;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GDR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADINTEN:8;
      uint64_t ADGINTEN:1;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:8;
      uint64_t OVERUN:8;
      uint64_t ADINT:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x400e3000)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:8;
      uint64_t CLKDIV:8;
      uint64_t BURST:1;
      uint64_t CLKS:3;
      uint64_t RESERVED_0:1;
      uint64_t PDN:1;
      uint64_t RESERVED_1:2;
      uint64_t START:3;
      uint64_t EDGE:1;
      uint64_t RESERVED_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:8;
      uint64_t CHN:3;
      uint64_t RESERVED_2:3;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GDR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADINTEN:8;
      uint64_t ADGINTEN:1;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:6;
      uint64_t V_VREF:10;
      uint64_t RESERVED_1:14;
      uint64_t OVERRUN:1;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DONE:8;
      uint64_t OVERUN:8;
      uint64_t ADINT:1;
      uint64_t RESERVED:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x400e4000)

struct GPIO_PORT_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_15;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_16;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_17;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_18;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_19;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_20;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_21;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_22;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_23;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_24;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_25;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_26;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_27;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_28;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_29;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_31;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_32;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_33;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_34;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_35;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_36;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_37;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_38;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_39;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_40;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_41;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_42;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_43;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_44;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_45;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_46;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_47;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_48;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_49;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_50;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_51;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_52;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_53;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_54;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_55;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_56;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_57;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_58;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_59;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_60;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_61;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_62;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_63;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_64;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_65;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_66;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_67;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_68;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_69;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_70;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_71;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_72;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_73;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_74;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_75;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_76;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_77;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_78;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_79;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_80;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_81;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_82;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_83;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_84;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_85;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_86;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_87;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_88;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_89;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_90;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_91;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_92;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_93;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_94;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_95;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_96;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_97;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_98;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_99;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_100;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_101;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_102;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_103;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_104;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_105;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_106;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_107;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_108;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_109;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_110;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_111;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_112;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_113;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_114;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_115;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_116;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_117;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_118;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_119;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_120;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_121;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_122;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_123;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_124;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_125;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_126;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_127;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_128;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_129;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_130;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_131;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_132;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_133;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_134;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_135;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_136;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_137;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_138;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_139;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_140;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_141;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_142;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_143;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_144;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_145;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_146;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_147;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_148;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_149;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_150;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_151;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_152;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_153;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_154;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_155;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_156;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_157;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_158;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_159;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_160;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_161;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_162;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_163;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_164;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_165;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_166;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_167;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_168;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_169;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_170;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_171;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_172;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_173;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_174;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_175;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_176;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_177;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_178;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_179;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_180;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_181;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_182;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_183;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_184;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_185;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_186;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_187;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_188;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_189;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_190;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_191;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_192;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_193;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_194;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_195;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_196;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_197;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_198;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_199;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_200;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_201;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_202;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_203;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_204;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_205;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_206;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_207;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_208;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_209;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_210;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_211;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_212;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_213;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_214;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_215;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_216;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_217;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_218;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_219;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_220;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_221;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_222;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_223;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_224;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_225;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_226;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_227;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_228;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_229;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_230;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_231;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_232;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_233;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_234;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_235;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_236;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_237;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_238;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_239;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_240;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_241;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_242;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_243;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_244;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_245;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_246;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_247;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_248;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_249;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_250;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_251;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_252;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_253;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_254;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) B_255;

  uint8_t res0[3840];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_198;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_199;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_200;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_201;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_202;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_203;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_204;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_205;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_206;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_207;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_208;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_209;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_216;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_217;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_218;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_219;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_220;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_221;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_222;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_223;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_224;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_225;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_226;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_227;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_228;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_229;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_230;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_231;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_232;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_233;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_234;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_235;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_236;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_237;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_238;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_239;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_240;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_241;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_242;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_243;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_244;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_245;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_246;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_247;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_248;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_249;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_250;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_251;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_252;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_253;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_254;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWORD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) W_255;

  uint8_t res1[3072];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRP0:1;
      uint64_t DIRP1:1;
      uint64_t DIRP2:1;
      uint64_t DIRP3:1;
      uint64_t DIRP4:1;
      uint64_t DIRP5:1;
      uint64_t DIRP6:1;
      uint64_t DIRP7:1;
      uint64_t DIRP8:1;
      uint64_t DIRP9:1;
      uint64_t DIRP10:1;
      uint64_t DIRP11:1;
      uint64_t DIRP12:1;
      uint64_t DIRP13:1;
      uint64_t DIRP14:1;
      uint64_t DIRP15:1;
      uint64_t DIRP16:1;
      uint64_t DIRP17:1;
      uint64_t DIRP18:1;
      uint64_t DIRP19:1;
      uint64_t DIRP20:1;
      uint64_t DIRP21:1;
      uint64_t DIRP22:1;
      uint64_t DIRP23:1;
      uint64_t DIRP24:1;
      uint64_t DIRP25:1;
      uint64_t DIRP26:1;
      uint64_t DIRP27:1;
      uint64_t DIRP28:1;
      uint64_t DIRP29:1;
      uint64_t DIRP30:1;
      uint64_t DIRP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR7;

  uint8_t res2[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKP0:1;
      uint64_t MASKP1:1;
      uint64_t MASKP2:1;
      uint64_t MASKP3:1;
      uint64_t MASKP4:1;
      uint64_t MASKP5:1;
      uint64_t MASKP6:1;
      uint64_t MASKP7:1;
      uint64_t MASKP8:1;
      uint64_t MASKP9:1;
      uint64_t MASKP10:1;
      uint64_t MASKP11:1;
      uint64_t MASKP12:1;
      uint64_t MASKP13:1;
      uint64_t MASKP14:1;
      uint64_t MASKP15:1;
      uint64_t MASKP16:1;
      uint64_t MASKP17:1;
      uint64_t MASKP18:1;
      uint64_t MASKP19:1;
      uint64_t MASKP20:1;
      uint64_t MASKP21:1;
      uint64_t MASKP22:1;
      uint64_t MASKP23:1;
      uint64_t MASKP24:1;
      uint64_t MASKP25:1;
      uint64_t MASKP26:1;
      uint64_t MASKP27:1;
      uint64_t MASKP28:1;
      uint64_t MASKP29:1;
      uint64_t MASKP30:1;
      uint64_t MASKP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK7;

  uint8_t res3[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT0:1;
      uint64_t PORT1:1;
      uint64_t PORT2:1;
      uint64_t PORT3:1;
      uint64_t PORT4:1;
      uint64_t PORT5:1;
      uint64_t PORT6:1;
      uint64_t PORT7:1;
      uint64_t PORT8:1;
      uint64_t PORT9:1;
      uint64_t PORT10:1;
      uint64_t PORT11:1;
      uint64_t PORT12:1;
      uint64_t PORT13:1;
      uint64_t PORT14:1;
      uint64_t PORT15:1;
      uint64_t PORT16:1;
      uint64_t PORT17:1;
      uint64_t PORT18:1;
      uint64_t PORT19:1;
      uint64_t PORT20:1;
      uint64_t PORT21:1;
      uint64_t PORT22:1;
      uint64_t PORT23:1;
      uint64_t PORT24:1;
      uint64_t PORT25:1;
      uint64_t PORT26:1;
      uint64_t PORT27:1;
      uint64_t PORT28:1;
      uint64_t PORT29:1;
      uint64_t PORT30:1;
      uint64_t PORT31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIN7;

  uint8_t res4[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPORTP0:1;
      uint64_t MPORTP1:1;
      uint64_t MPORTP2:1;
      uint64_t MPORTP3:1;
      uint64_t MPORTP4:1;
      uint64_t MPORTP5:1;
      uint64_t MPORTP6:1;
      uint64_t MPORTP7:1;
      uint64_t MPORTP8:1;
      uint64_t MPORTP9:1;
      uint64_t MPORTP10:1;
      uint64_t MPORTP11:1;
      uint64_t MPORTP12:1;
      uint64_t MPORTP13:1;
      uint64_t MPORTP14:1;
      uint64_t MPORTP15:1;
      uint64_t MPORTP16:1;
      uint64_t MPORTP17:1;
      uint64_t MPORTP18:1;
      uint64_t MPORTP19:1;
      uint64_t MPORTP20:1;
      uint64_t MPORTP21:1;
      uint64_t MPORTP22:1;
      uint64_t MPORTP23:1;
      uint64_t MPORTP24:1;
      uint64_t MPORTP25:1;
      uint64_t MPORTP26:1;
      uint64_t MPORTP27:1;
      uint64_t MPORTP28:1;
      uint64_t MPORTP29:1;
      uint64_t MPORTP30:1;
      uint64_t MPORTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPIN7;

  uint8_t res5[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETP0:1;
      uint64_t SETP1:1;
      uint64_t SETP2:1;
      uint64_t SETP3:1;
      uint64_t SETP4:1;
      uint64_t SETP5:1;
      uint64_t SETP6:1;
      uint64_t SETP7:1;
      uint64_t SETP8:1;
      uint64_t SETP9:1;
      uint64_t SETP10:1;
      uint64_t SETP11:1;
      uint64_t SETP12:1;
      uint64_t SETP13:1;
      uint64_t SETP14:1;
      uint64_t SETP15:1;
      uint64_t SETP16:1;
      uint64_t SETP17:1;
      uint64_t SETP18:1;
      uint64_t SETP19:1;
      uint64_t SETP20:1;
      uint64_t SETP21:1;
      uint64_t SETP22:1;
      uint64_t SETP23:1;
      uint64_t SETP24:1;
      uint64_t SETP25:1;
      uint64_t SETP26:1;
      uint64_t SETP27:1;
      uint64_t SETP28:1;
      uint64_t SETP29:1;
      uint64_t SETP30:1;
      uint64_t SETP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SET7;

  uint8_t res6[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRP00:1;
      uint64_t CLRP01:1;
      uint64_t CLRP02:1;
      uint64_t CLRP03:1;
      uint64_t CLRP04:1;
      uint64_t CLRP05:1;
      uint64_t CLRP06:1;
      uint64_t CLRP07:1;
      uint64_t CLRP08:1;
      uint64_t CLRP09:1;
      uint64_t CLRP010:1;
      uint64_t CLRP011:1;
      uint64_t CLRP012:1;
      uint64_t CLRP013:1;
      uint64_t CLRP014:1;
      uint64_t CLRP015:1;
      uint64_t CLRP016:1;
      uint64_t CLRP017:1;
      uint64_t CLRP018:1;
      uint64_t CLRP019:1;
      uint64_t CLRP020:1;
      uint64_t CLRP021:1;
      uint64_t CLRP022:1;
      uint64_t CLRP023:1;
      uint64_t CLRP024:1;
      uint64_t CLRP025:1;
      uint64_t CLRP026:1;
      uint64_t CLRP027:1;
      uint64_t CLRP028:1;
      uint64_t CLRP029:1;
      uint64_t CLRP030:1;
      uint64_t CLRP031:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR7;

  uint8_t res7[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOTP0:1;
      uint64_t NOTP1:1;
      uint64_t NOTP2:1;
      uint64_t NOTP3:1;
      uint64_t NOTP4:1;
      uint64_t NOTP5:1;
      uint64_t NOTP6:1;
      uint64_t NOTP7:1;
      uint64_t NOTP8:1;
      uint64_t NOTP9:1;
      uint64_t NOTP10:1;
      uint64_t NOTP11:1;
      uint64_t NOTP12:1;
      uint64_t NOTP13:1;
      uint64_t NOTP14:1;
      uint64_t NOTP15:1;
      uint64_t NOTP16:1;
      uint64_t NOTP17:1;
      uint64_t NOTP18:1;
      uint64_t NOTP19:1;
      uint64_t NOTP20:1;
      uint64_t NOTP21:1;
      uint64_t NOTP22:1;
      uint64_t NOTP23:1;
      uint64_t NOTP24:1;
      uint64_t NOTP25:1;
      uint64_t NOTP26:1;
      uint64_t NOTP27:1;
      uint64_t NOTP28:1;
      uint64_t NOTP29:1;
      uint64_t NOTP30:1;
      uint64_t NOTP31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NOT7;

};

#define GPIO_PORT (*(volatile struct GPIO_PORT_tag *) 0x400f4000)

