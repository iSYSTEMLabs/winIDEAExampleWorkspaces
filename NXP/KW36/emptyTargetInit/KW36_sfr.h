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
  } CPUID;

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
  } ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:22;
      uint64_t TBLBASE:1;
    } __attribute__((packed)) B;
  } VTOR;

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
  } AIRCR;

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
  } SCR;

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
  } CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } SHPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } SHPR3;

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
  } SHCRS;

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
  } CFSR;

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
  } HFSR;

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
  } DFSR;

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
  } CPACR;

} __attribute__((packed));

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
  } ICTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } ACTLR;

  uint8_t res0[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } STIR;

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
} __attribute__((packed));

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
  } INT_0_3_PRI;

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
  } INT_4_7_PRI;

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
  } INT_8_11_PRI;

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
  } INT_12_15_PRI;

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
  } INT_16_19_PRI;

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
  } INT_20_23_PRI;

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
  } INT_24_27_PRI;

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
  } INT_28_31_PRI;

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
  } INT_32_35_PRI;

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
  } INT_36_39_PRI;

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
  } INT_40_43_PRI;

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
  } INT_44_47_PRI;

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
  } INT_48_51_PRI;

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
  } INT_52_55_PRI;

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
  } INT_56_59_PRI;

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
  } INT_60_63_PRI;

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
  } INT_64_67_PRI;

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
  } INT_68_71_PRI;

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
  } INT_72_75_PRI;

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
  } INT_76_79_PRI;

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
  } INT_80_83_PRI;

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
  } INT_84_87_PRI;

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
  } INT_88_91_PRI;

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
  } INT_92_95_PRI;

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
  } INT_96_99_PRI;

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
  } INT_100_103_PRI;

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
  } INT_104_107_PRI;

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
  } INT_108_111_PRI;

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
  } INT_112_115_PRI;

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
  } INT_116_119_PRI;

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
  } INT_120_123_PRI;

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
  } INT_124_127_PRI;

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
  } INT_128_131_PRI;

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
  } INT_132_135_PRI;

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
  } INT_136_139_PRI;

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
  } INT_140_143_PRI;

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
  } INT_144_147_PRI;

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
  } INT_148_151_PRI;

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
  } INT_152_155_PRI;

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
  } INT_156_159_PRI;

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
  } INT_160_163_PRI;

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
  } INT_164_167_PRI;

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
  } INT_168_171_PRI;

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
  } INT_172_175_PRI;

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
  } INT_176_179_PRI;

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
  } INT_180_183_PRI;

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
  } INT_184_187_PRI;

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
  } INT_188_191_PRI;

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
  } INT_192_195_PRI;

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
  } INT_196_199_PRI;

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
  } INT_200_203_PRI;

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
  } INT_204_207_PRI;

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
  } INT_208_211_PRI;

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
  } INT_212_215_PRI;

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
  } INT_216_219_PRI;

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
  } INT_220_223_PRI;

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
  } INT_224_227_PRI;

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
  } INT_228_231_PRI;

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
  } INT_232_235_PRI;

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
  } INT_236_239_PRI;

} __attribute__((packed));

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
  } SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } SYST_CVR;

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
  } SYST_CALIB;

} __attribute__((packed));

#define System_Control_Space_SysTick (*(volatile struct System_Control_Space_SysTick_tag *) 0xe000e010)

struct FTFE_FlashConfig_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } NV_BACKKEY4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } NV_FPROT3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } NV_FPROT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } NV_FPROT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } NV_FPROT0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEC:2;
      uint64_t FSLACC:2;
      uint64_t MEEN:2;
      uint64_t KEYEN:2;
    } __attribute__((packed)) B;
  } NV_FSEC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LPBOOT0:1;
      uint64_t reservedSpace0:1;
      uint64_t NMI_DIS:1;
      uint64_t RESET_PIN_CFG:1;
      uint64_t LPBOOT1:1;
    } __attribute__((packed)) B;
  } NV_FOPT;

} __attribute__((packed));

#define FTFE_FlashConfig (*(volatile struct FTFE_FlashConfig_tag *) 0x400)

struct FTFE_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MGSTAT0:1;
      uint64_t reservedSpace0:3;
      uint64_t FPVIOL:1;
      uint64_t ACCERR:1;
      uint64_t RDCOLERR:1;
      uint64_t CCIF:1;
    } __attribute__((packed)) B;
  } FTFE_FSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EEERDY:1;
      uint64_t RAMRDY:1;
      uint64_t PFLSH:1;
      uint64_t SWAP:1;
      uint64_t ERSSUSP:1;
      uint64_t ERSAREQ:1;
      uint64_t RDCOLLIE:1;
      uint64_t CCIE:1;
    } __attribute__((packed)) B;
  } FTFE_FCNFG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SEC:2;
      uint64_t FSLACC:2;
      uint64_t MEEN:2;
      uint64_t KEYEN:2;
    } __attribute__((packed)) B;
  } FTFE_FSEC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPT:8;
    } __attribute__((packed)) B;
  } FTFE_FOPT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOBB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOBA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } FTFE_FCCOB8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } FTFE_FPROT3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } FTFE_FPROT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } FTFE_FPROT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } FTFE_FPROT0;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EPROT:8;
    } __attribute__((packed)) B;
  } FTFE_FEPROT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DPROT:8;
    } __attribute__((packed)) B;
  } FTFE_FDPROT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCH3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCH2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCH1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCH0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCL3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCL2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCL1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t XA:8;
    } __attribute__((packed)) B;
  } FTFE_XACCL0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCH3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCH2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCH1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCH0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCL3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCL2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCL1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SA:8;
    } __attribute__((packed)) B;
  } FTFE_SACCL0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SGSIZE:8;
    } __attribute__((packed)) B;
  } FTFE_FACSS;

  uint8_t res1[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t NUMSG:8;
    } __attribute__((packed)) B;
  } FTFE_FACSN;

  uint8_t res2[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFDIF:1;
    } __attribute__((packed)) B;
  } FTFE_FERSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DFDIE:1;
      uint64_t reservedSpace1:3;
      uint64_t FDFD:1;
    } __attribute__((packed)) B;
  } FTFE_FERCNFG;

} __attribute__((packed));

#define FTFE (*(volatile struct FTFE_tag *) 0x40020000)

struct DMAMUX0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } CHCFG0;

} __attribute__((packed));

#define DMAMUX0 (*(volatile struct DMAMUX0_tag *) 0x40021000)

struct PIT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } LTMR64L;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } LDVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } CVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } TCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } TFLG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } LDVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } CVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } TCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } TFLG1;

} __attribute__((packed));

#define PIT (*(volatile struct PIT_tag *) 0x40037000)

struct TPM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } TPM0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } TPM0_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } TPM0_MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM0_C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM0_C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM0_C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM0_C1V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM0_C2SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM0_C2V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM0_C3SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM0_C3V;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t reservedSpace0:4;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } TPM0_STATUS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
    } __attribute__((packed)) B;
  } TPM0_COMBINE;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
    } __attribute__((packed)) B;
  } TPM0_POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } TPM0_FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } TPM0_QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } TPM0_CONF;

} __attribute__((packed));

#define TPM0 (*(volatile struct TPM0_tag *) 0x40038000)

struct TPM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } TPM1_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } TPM1_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } TPM1_MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM1_C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM1_C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM1_C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM1_C1V;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t reservedSpace0:4;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } TPM1_STATUS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
    } __attribute__((packed)) B;
  } TPM1_COMBINE;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
    } __attribute__((packed)) B;
  } TPM1_POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } TPM1_FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } TPM1_QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } TPM1_CONF;

} __attribute__((packed));

#define TPM1 (*(volatile struct TPM1_tag *) 0x40039000)

struct TPM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:3;
      uint64_t CMOD:2;
      uint64_t CPWMS:1;
      uint64_t TOIE:1;
      uint64_t TOF:1;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } TPM2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
    } __attribute__((packed)) B;
  } TPM2_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
    } __attribute__((packed)) B;
  } TPM2_MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM2_C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM2_C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t reservedSpace0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
    } __attribute__((packed)) B;
  } TPM2_C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
    } __attribute__((packed)) B;
  } TPM2_C1V;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t CH2F:1;
      uint64_t CH3F:1;
      uint64_t reservedSpace0:4;
      uint64_t TOF:1;
    } __attribute__((packed)) B;
  } TPM2_STATUS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMBINE0:1;
      uint64_t COMSWAP0:1;
      uint64_t reservedSpace0:6;
      uint64_t COMBINE1:1;
      uint64_t COMSWAP1:1;
    } __attribute__((packed)) B;
  } TPM2_COMBINE;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POL0:1;
      uint64_t POL1:1;
      uint64_t POL2:1;
      uint64_t POL3:1;
    } __attribute__((packed)) B;
  } TPM2_POL;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0FVAL:4;
      uint64_t CH1FVAL:4;
      uint64_t CH2FVAL:4;
      uint64_t CH3FVAL:4;
    } __attribute__((packed)) B;
  } TPM2_FILTER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEN:1;
      uint64_t TOFDIR:1;
      uint64_t QUADIR:1;
      uint64_t QUADMODE:1;
    } __attribute__((packed)) B;
  } TPM2_QDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t GTBSYNC:1;
      uint64_t GTBEEN:1;
      uint64_t reservedSpace1:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t CPOT:1;
      uint64_t reservedSpace2:2;
      uint64_t TRGPOL:1;
      uint64_t TRGSRC:1;
      uint64_t TRGSEL:4;
    } __attribute__((packed)) B;
  } TPM2_CONF;

} __attribute__((packed));

#define TPM2 (*(volatile struct TPM2_tag *) 0x4003a000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t DIFF:1;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } ADC0_SC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t DIFF:1;
      uint64_t AIEN:1;
      uint64_t COCO:1;
    } __attribute__((packed)) B;
  } ADC0_SC1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADICLK:2;
      uint64_t MODE:2;
      uint64_t ADLSMP:1;
      uint64_t ADIV:2;
      uint64_t ADLPC:1;
    } __attribute__((packed)) B;
  } ADC0_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADLSTS:2;
      uint64_t ADHSC:1;
      uint64_t ADACKEN:1;
      uint64_t MUXSEL:1;
    } __attribute__((packed)) B;
  } ADC0_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
    } __attribute__((packed)) B;
  } ADC0_RA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
    } __attribute__((packed)) B;
  } ADC0_RB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } ADC0_CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
    } __attribute__((packed)) B;
  } ADC0_CV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFSEL:2;
      uint64_t DMAEN:1;
      uint64_t ACREN:1;
      uint64_t ACFGT:1;
      uint64_t ACFE:1;
      uint64_t ADTRG:1;
      uint64_t ADACT:1;
    } __attribute__((packed)) B;
  } ADC0_SC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVGS:2;
      uint64_t AVGE:1;
      uint64_t ADCO:1;
      uint64_t reservedSpace0:2;
      uint64_t CALF:1;
      uint64_t CAL:1;
    } __attribute__((packed)) B;
  } ADC0_SC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFS:16;
    } __attribute__((packed)) B;
  } ADC0_OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:16;
    } __attribute__((packed)) B;
  } ADC0_PG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:16;
    } __attribute__((packed)) B;
  } ADC0_MG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPD:6;
    } __attribute__((packed)) B;
  } ADC0_CLPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS:6;
    } __attribute__((packed)) B;
  } ADC0_CLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP4:10;
    } __attribute__((packed)) B;
  } ADC0_CLP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3:9;
    } __attribute__((packed)) B;
  } ADC0_CLP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2:8;
    } __attribute__((packed)) B;
  } ADC0_CLP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1:7;
    } __attribute__((packed)) B;
  } ADC0_CLP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0:6;
    } __attribute__((packed)) B;
  } ADC0_CLP0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLMD:6;
    } __attribute__((packed)) B;
  } ADC0_CLMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLMS:6;
    } __attribute__((packed)) B;
  } ADC0_CLMS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLM4:10;
    } __attribute__((packed)) B;
  } ADC0_CLM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLM3:9;
    } __attribute__((packed)) B;
  } ADC0_CLM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLM2:8;
    } __attribute__((packed)) B;
  } ADC0_CLM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLM1:7;
    } __attribute__((packed)) B;
  } ADC0_CLM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLM0:6;
    } __attribute__((packed)) B;
  } ADC0_CLM0;

} __attribute__((packed));

#define ADC0 (*(volatile struct ADC0_tag *) 0x4003b000)

struct RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSR:32;
    } __attribute__((packed)) B;
  } RTC_TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPR:16;
    } __attribute__((packed)) B;
  } RTC_TPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } RTC_TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:8;
      uint64_t CIR:8;
      uint64_t TCV:8;
      uint64_t CIC:8;
    } __attribute__((packed)) B;
  } RTC_TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWR:1;
      uint64_t WPE:1;
      uint64_t SUP:1;
      uint64_t UM:1;
      uint64_t WPS:1;
      uint64_t reservedSpace0:3;
      uint64_t OSCE:1;
      uint64_t reservedSpace1:1;
      uint64_t SC16P:1;
      uint64_t SC8P:1;
      uint64_t SC4P:1;
      uint64_t SC2P:1;
    } __attribute__((packed)) B;
  } RTC_CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
      uint64_t TOF:1;
      uint64_t TAF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCE:1;
    } __attribute__((packed)) B;
  } RTC_SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t TCL:1;
      uint64_t CRL:1;
      uint64_t SRL:1;
      uint64_t LRL:1;
    } __attribute__((packed)) B;
  } RTC_LR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIIE:1;
      uint64_t TOIE:1;
      uint64_t TAIE:1;
      uint64_t reservedSpace0:1;
      uint64_t TSIE:1;
      uint64_t reservedSpace1:2;
      uint64_t WPON:1;
    } __attribute__((packed)) B;
  } RTC_IER;

} __attribute__((packed));

#define RTC (*(volatile struct RTC_tag *) 0x4003d000)

struct LPTMR0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TMS:1;
      uint64_t TFC:1;
      uint64_t TPP:1;
      uint64_t TPS:2;
      uint64_t TIE:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } LPTMR0_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:2;
      uint64_t PBYP:1;
      uint64_t PRESCALE:4;
    } __attribute__((packed)) B;
  } LPTMR0_PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPARE:16;
    } __attribute__((packed)) B;
  } LPTMR0_CMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } LPTMR0_CNR;

} __attribute__((packed));

#define LPTMR0 (*(volatile struct LPTMR0_tag *) 0x40040000)

struct RFSYS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL:8;
      uint64_t LH:8;
      uint64_t HL:8;
      uint64_t HH:8;
    } __attribute__((packed)) B;
  } RFSYS_REG7;

} __attribute__((packed));

#define RFSYS (*(volatile struct RFSYS_tag *) 0x40041000)

struct SIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t OSC32KOUT:2;
      uint64_t OSC32KSEL:2;
      uint64_t SIM_MISCTL:1;
    } __attribute__((packed)) B;
  } SIM_SOPT1;

  uint8_t res0[4096];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CLKOUTSEL:3;
      uint64_t reservedSpace1:16;
      uint64_t TPMSRC:2;
      uint64_t LPUART0SRC:2;
      uint64_t LPUART1SRC:2;
    } __attribute__((packed)) B;
  } SIM_SOPT2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t TPM1CH0SRC:1;
      uint64_t reservedSpace1:1;
      uint64_t TPM2CH0SRC:1;
      uint64_t reservedSpace2:3;
      uint64_t TPM0CLKSEL:1;
      uint64_t TPM1CLKSEL:1;
      uint64_t TPM2CLKSEL:1;
    } __attribute__((packed)) B;
  } SIM_SOPT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPUART0TXSRC:2;
      uint64_t LPUART0RXSRC:1;
      uint64_t reservedSpace0:1;
      uint64_t LPUART1TXSRC:2;
      uint64_t LPUART1RXSRC:1;
      uint64_t reservedSpace1:9;
      uint64_t LPUART0ODE:1;
      uint64_t LPUART1ODE:1;
    } __attribute__((packed)) B;
  } SIM_SOPT5;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC0TRGSEL:4;
      uint64_t ADC0PRETRGSEL:1;
      uint64_t reservedSpace0:2;
      uint64_t ADC0ALTTRGEN:1;
    } __attribute__((packed)) B;
  } SIM_SOPT7;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINID:4;
      uint64_t reservedSpace0:3;
      uint64_t DIEID:5;
      uint64_t REVID:4;
      uint64_t SRAMSIZE:4;
      uint64_t SERIESID:4;
      uint64_t SUBFAMID:3;
      uint64_t reservedSpace1:1;
      uint64_t FAMID:4;
    } __attribute__((packed)) B;
  } SIM_SDID;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t CMT_bitfield:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C0_bitfield:1;
      uint64_t I2C1_bitfield:1;
      uint64_t reservedSpace2:11;
      uint64_t CMP:1;
      uint64_t VREF_bitfield:1;
    } __attribute__((packed)) B;
  } SIM_SCGC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPTMR:1;
      uint64_t reservedSpace0:8;
      uint64_t PORTA_bitfield:1;
      uint64_t PORTB_bitfield:1;
      uint64_t PORTC_bitfield:1;
      uint64_t reservedSpace1:8;
      uint64_t LPUART0_bitfield:1;
      uint64_t LPUART1:1;
      uint64_t reservedSpace2:2;
      uint64_t LTC:1;
      uint64_t RSIM_bitfield:1;
      uint64_t DCDC_bitfield:1;
      uint64_t BTLL:1;
      uint64_t PHYDIG:1;
      uint64_t reservedSpace3:2;
      uint64_t GEN_FSK:1;
    } __attribute__((packed)) B;
  } SIM_SCGC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTF:1;
      uint64_t DMAMUX:1;
      uint64_t reservedSpace0:2;
      uint64_t FLEXCAN0:1;
      uint64_t reservedSpace1:4;
      uint64_t TRNG:1;
      uint64_t reservedSpace2:2;
      uint64_t SPI0:1;
      uint64_t SPI1:1;
      uint64_t reservedSpace3:9;
      uint64_t PIT_bitfield:1;
      uint64_t TPM0_bitfield:1;
      uint64_t TPM1_bitfield:1;
      uint64_t TPM2_bitfield:1;
      uint64_t ADC0_bitfield:1;
      uint64_t reservedSpace4:1;
      uint64_t RTC_bitfield:1;
    } __attribute__((packed)) B;
  } SIM_SCGC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } SIM_SCGC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t OUTDIV4:3;
      uint64_t reservedSpace1:9;
      uint64_t OUTDIV1:4;
    } __attribute__((packed)) B;
  } SIM_CLKDIV1;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASHDIS:1;
      uint64_t FLASHDOZE:1;
      uint64_t reservedSpace0:6;
      uint64_t DEPART:4;
      uint64_t reservedSpace1:4;
      uint64_t EESIZE:4;
      uint64_t reservedSpace2:4;
      uint64_t PFSIZE:4;
      uint64_t NVMSIZE:4;
    } __attribute__((packed)) B;
  } SIM_FCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t MAXADDR1:7;
      uint64_t PFLSH:1;
      uint64_t MAXADDR0:7;
      uint64_t SWAPPFLSH:1;
    } __attribute__((packed)) B;
  } SIM_FCFG2;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:16;
    } __attribute__((packed)) B;
  } SIM_UIDMH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:32;
    } __attribute__((packed)) B;
  } SIM_UIDML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:32;
    } __attribute__((packed)) B;
  } SIM_UIDL;

  uint8_t res7[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COPW:1;
      uint64_t COPCLKS:1;
      uint64_t COPT:2;
      uint64_t COPSTPEN:1;
      uint64_t COPDBGEN:1;
      uint64_t COPCLKSEL:2;
    } __attribute__((packed)) B;
  } SIM_COPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRVCOP:8;
    } __attribute__((packed)) B;
  } SIM_SRVCOP;

} __attribute__((packed));

#define SIM (*(volatile struct SIM_tag *) 0x40047000)

struct PORTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR2;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR19;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICHR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } ISFR;

} __attribute__((packed));

#define PORTA (*(volatile struct PORTA_tag *) 0x40049000)

struct PORTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR3;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:1;
      uint64_t PFE:1;
      uint64_t reservedSpace1:3;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR18;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICHR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } ISFR;

} __attribute__((packed));

#define PORTB (*(volatile struct PORTB_tag *) 0x4004a000)

struct PORTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR7;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:3;
      uint64_t DSE:1;
      uint64_t reservedSpace1:1;
      uint64_t MUX:4;
      uint64_t reservedSpace2:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace3:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t reservedSpace0:5;
      uint64_t MUX:4;
      uint64_t reservedSpace1:4;
      uint64_t IRQC:4;
      uint64_t reservedSpace2:4;
      uint64_t ISF:1;
    } __attribute__((packed)) B;
  } PCR19;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } GPCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIWE:16;
      uint64_t GIWD:16;
    } __attribute__((packed)) B;
  } GICHR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } ISFR;

} __attribute__((packed));

#define PORTC (*(volatile struct PORTC_tag *) 0x4004b000)

struct LPUART0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBR:13;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t MATCFG:2;
      uint64_t reservedSpace0:1;
      uint64_t RDMAE:1;
      uint64_t reservedSpace1:1;
      uint64_t TDMAE:1;
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } LPUART0_BAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t MA2F:1;
      uint64_t MA1F:1;
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } LPUART0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PT:1;
      uint64_t PE:1;
      uint64_t ILT:1;
      uint64_t WAKE:1;
      uint64_t M:1;
      uint64_t RSRC:1;
      uint64_t DOZEEN:1;
      uint64_t LOOPS:1;
      uint64_t IDLECFG:3;
      uint64_t reservedSpace0:3;
      uint64_t MA2IE:1;
      uint64_t MA1IE:1;
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } LPUART0_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t R0T0:1;
      uint64_t R1T1:1;
      uint64_t R2T2:1;
      uint64_t R3T3:1;
      uint64_t R4T4:1;
      uint64_t R5T5:1;
      uint64_t R6T6:1;
      uint64_t R7T7:1;
      uint64_t R8T8:1;
      uint64_t R9T9:1;
      uint64_t reservedSpace0:1;
      uint64_t IDLINE:1;
      uint64_t RXEMPT:1;
      uint64_t FRETSC:1;
      uint64_t PARITYE:1;
      uint64_t NOISY:1;
    } __attribute__((packed)) B;
  } LPUART0_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA1:10;
      uint64_t reservedSpace0:6;
      uint64_t MA2:10;
    } __attribute__((packed)) B;
  } LPUART0_MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCTSE:1;
      uint64_t TXRTSE:1;
      uint64_t TXRTSPOL:1;
      uint64_t RXRTSE:1;
      uint64_t TXCTSC:1;
      uint64_t TXCTSSRC:1;
      uint64_t reservedSpace0:2;
      uint64_t RTSWATER:8;
      uint64_t TNP:2;
      uint64_t IREN:1;
    } __attribute__((packed)) B;
  } LPUART0_MODIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFOSIZE:3;
      uint64_t RXFE:1;
      uint64_t TXFIFOSIZE:3;
      uint64_t TXFE:1;
      uint64_t RXUFE:1;
      uint64_t TXOFE:1;
      uint64_t RXIDEN:3;
      uint64_t reservedSpace0:1;
      uint64_t RXFLUSH:1;
      uint64_t TXFLUSH:1;
      uint64_t RXUF:1;
      uint64_t TXOF:1;
      uint64_t reservedSpace1:4;
      uint64_t RXEMPT:1;
      uint64_t TXEMPT:1;
    } __attribute__((packed)) B;
  } LPUART0_FIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXWATER:8;
      uint64_t TXCOUNT:8;
      uint64_t RXWATER:8;
      uint64_t RXCOUNT:8;
    } __attribute__((packed)) B;
  } LPUART0_WATER;

} __attribute__((packed));

#define LPUART0 (*(volatile struct LPUART0_tag *) 0x40054000)

struct LTC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENC:1;
      uint64_t ICV_TEST:1;
      uint64_t AS:2;
      uint64_t AAI:9;
      uint64_t reservedSpace0:3;
      uint64_t ALG:8;
    } __attribute__((packed)) B;
  } MD;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KS:5;
    } __attribute__((packed)) B;
  } KS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS:12;
    } __attribute__((packed)) B;
  } DS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICVS:5;
    } __attribute__((packed)) B;
  } ICVS;

  uint8_t res3[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALL:1;
      uint64_t AES:1;
    } __attribute__((packed)) B;
  } COM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM:1;
      uint64_t reservedSpace0:7;
      uint64_t IFE:1;
      uint64_t IFR:1;
      uint64_t reservedSpace1:2;
      uint64_t OFE:1;
      uint64_t OFR:1;
      uint64_t reservedSpace2:2;
      uint64_t IFS:1;
      uint64_t OFS:1;
      uint64_t reservedSpace3:2;
      uint64_t KIS:1;
      uint64_t KOS:1;
      uint64_t CIS:1;
      uint64_t COS:1;
      uint64_t reservedSpace4:7;
      uint64_t KAL:1;
    } __attribute__((packed)) B;
  } CTL;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM:1;
      uint64_t reservedSpace0:1;
      uint64_t CDS:1;
      uint64_t CICV:1;
      uint64_t reservedSpace1:1;
      uint64_t CCR:1;
      uint64_t CKR:1;
      uint64_t reservedSpace2:23;
      uint64_t COF:1;
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } CW;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AB:1;
      uint64_t reservedSpace1:14;
      uint64_t DI:1;
      uint64_t reservedSpace2:3;
      uint64_t EI:1;
    } __attribute__((packed)) B;
  } STA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRID1:4;
      uint64_t reservedSpace0:4;
      uint64_t CL1:4;
    } __attribute__((packed)) B;
  } ESTA;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AADSZ:4;
      uint64_t reservedSpace0:27;
      uint64_t AL:1;
    } __attribute__((packed)) B;
  } AADSZ;

  uint8_t res7[164];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTX:32;
    } __attribute__((packed)) B;
  } CTX_13;

  uint8_t res8[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } KEY_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } KEY_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } KEY_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } KEY_3;

  uint8_t res9[736];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REV:8;
      uint64_t MAJ_REV:8;
      uint64_t IP_ID:16;
    } __attribute__((packed)) B;
  } VID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECO_REV:8;
      uint64_t ARCH_ERA:8;
    } __attribute__((packed)) B;
  } VID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESREV:4;
      uint64_t AESVID:4;
    } __attribute__((packed)) B;
  } CHAVID;

  uint8_t res10[708];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFL:7;
      uint64_t reservedSpace0:8;
      uint64_t IFF:1;
      uint64_t OFL:7;
      uint64_t reservedSpace1:8;
      uint64_t OFF:1;
    } __attribute__((packed)) B;
  } FIFOSTA;

  uint8_t res11[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFIFO:32;
    } __attribute__((packed)) B;
  } IFIFO;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFIFO:32;
    } __attribute__((packed)) B;
  } OFIFO;

} __attribute__((packed));

#define LTC0 (*(volatile struct LTC0_tag *) 0x40058000)

struct RSIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_RF_OSC_REQ_EN:1;
      uint64_t BLE_RF_OSC_REQ_STAT:1;
      uint64_t reservedSpace0:2;
      uint64_t BLE_RF_OSC_REQ_INT_EN:1;
      uint64_t BLE_RF_OSC_REQ_INT:1;
      uint64_t reservedSpace1:2;
      uint64_t RF_OSC_EN:4;
      uint64_t RADIO_GASKET_BYPASS_OVRD_EN:1;
      uint64_t RADIO_GASKET_BYPASS_OVRD:1;
      uint64_t reservedSpace2:4;
      uint64_t RADIO_RAM_ACCESS_OVRD_EN:1;
      uint64_t RADIO_RAM_ACCESS_OVRD:1;
      uint64_t RSIM_DSM_EXIT:1;
      uint64_t reservedSpace3:1;
      uint64_t RSIM_STOP_ACK_OVRD_EN:1;
      uint64_t RSIM_STOP_ACK_OVRD:1;
      uint64_t RF_OSC_READY:1;
      uint64_t RF_OSC_READY_OVRD_EN:1;
      uint64_t RF_OSC_READY_OVRD:1;
      uint64_t reservedSpace4:1;
      uint64_t BLOCK_SOC_RESETS:1;
      uint64_t BLOCK_RADIO_OUTPUTS:1;
      uint64_t ALLOW_DFT_RESETS:1;
      uint64_t RADIO_RESET_BIT:1;
    } __attribute__((packed)) B;
  } CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINE_DELAY:6;
      uint64_t reservedSpace0:10;
      uint64_t COARSE_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t ACTIVE_WARNING:6;
    } __attribute__((packed)) B;
  } DSM_WAKEUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAC_ADDR_MSB:8;
    } __attribute__((packed)) B;
  } MAC_MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAC_ADDR_LSB:32;
    } __attribute__((packed)) B;
  } MAC_LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t RADIO_VERSION:8;
    } __attribute__((packed)) B;
  } MISC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADIO_CONFIGURED_POR_RESET:1;
      uint64_t RADIO_CONFIGURED_SYS_RESET:1;
      uint64_t reservedSpace0:2;
      uint64_t RSIM_RF_ACTIVE_OVRD:1;
      uint64_t RSIM_RF_ACTIVE_OVRD_EN:1;
      uint64_t RF_OSC_EN_OVRD:1;
      uint64_t RF_OSC_EN_OVRD_EN:1;
      uint64_t IPP_IBE_RF_NOT_ALLOWED:1;
      uint64_t IPP_IBE_RF_EXT_OSC_EN:1;
      uint64_t IPP_IBE_DFT_RESET:1;
      uint64_t IPP_OBE_RF_OSC_EN:1;
      uint64_t RADIO_RF_NOT_ALLOWED_SEL:1;
      uint64_t RADIO_DFT_RESET_SEL:1;
      uint64_t RADIO_BLE_EARLY_WARNING_SEL:1;
      uint64_t reservedSpace1:1;
      uint64_t WIFI_COEXIST_1:1;
      uint64_t WIFI_COEXIST_2:1;
      uint64_t WIFI_COEXIST_3:1;
      uint64_t reservedSpace2:1;
      uint64_t RF_ACTIVE_ENDS_WITH_TSM:1;
      uint64_t SW_RF_ACTIVE_ENDS_WITH_TSM:1;
      uint64_t SW_RF_ACTIVE_BIT:1;
      uint64_t SW_RF_ACTIVE_EN:1;
      uint64_t IPP_OBE_RF_PRIORITY:1;
      uint64_t IPP_OBE_RF_STATUS:1;
      uint64_t IPP_OBE_RF_ACTIVE:1;
      uint64_t IPP_OBE_BLE_EARLY_WARNING:1;
      uint64_t reservedSpace3:3;
      uint64_t BLOCK_EXT_OSC_PWR_REQ:1;
    } __attribute__((packed)) B;
  } SW_CONFIG;

  uint8_t res1[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSM_TIMER:24;
    } __attribute__((packed)) B;
  } DSM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DSM_GEN_READY:1;
      uint64_t GEN_DEEP_SLEEP_STATUS:1;
      uint64_t DSM_GEN_FINISHED:1;
      uint64_t GEN_SYSCLK_REQUEST_EN:1;
      uint64_t GEN_SLEEP_REQUEST:1;
      uint64_t GEN_SYSCLK_REQ:1;
      uint64_t GEN_SYSCLK_INTERRUPT_EN:1;
      uint64_t GEN_SYSCLK_REQ_INT:1;
      uint64_t GEN_FSM_STATE:5;
      uint64_t reservedSpace1:6;
      uint64_t DSM_TIMER_CLR:1;
      uint64_t reservedSpace2:3;
      uint64_t DSM_TIMER_EN:1;
    } __attribute__((packed)) B;
  } DSM_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSM_OSC_STABILIZE_TIME:10;
    } __attribute__((packed)) B;
  } DSM_OSC_OFFSET;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN_SLEEP_TIME:24;
    } __attribute__((packed)) B;
  } GEN_SLEEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN_WAKE_TIME:24;
    } __attribute__((packed)) B;
  } GEN_WAKE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_XTAL_ALC_COUNT_SEL:2;
      uint64_t BB_XTAL_ALC_ON:1;
      uint64_t RF_OSC_BYPASS_EN:1;
      uint64_t BB_XTAL_COMP_BIAS:5;
      uint64_t BB_XTAL_DC_COUP_MODE_EN:1;
      uint64_t BB_XTAL_DIAGSEL:1;
      uint64_t BB_XTAL_DIG_CLK_ON:1;
      uint64_t BB_XTAL_GM:5;
      uint64_t BB_XTAL_ON_OVRD:1;
      uint64_t BB_XTAL_ON_OVRD_ON:1;
      uint64_t reservedSpace0:1;
      uint64_t BB_XTAL_READY_COUNT_SEL:2;
      uint64_t reservedSpace1:5;
      uint64_t RADIO_EXT_OSC_RF_EN_SEL:1;
      uint64_t RADIO_EXT_OSC_OVRD:1;
      uint64_t RADIO_EXT_OSC_OVRD_EN:1;
      uint64_t RF_NOT_ALLOWED_OVRD:1;
      uint64_t RF_NOT_ALLOWED_OVRD_EN:1;
    } __attribute__((packed)) B;
  } RF_OSC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t XTAL_OUT_BUF_EN:1;
    } __attribute__((packed)) B;
  } ANA_TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_LS_SPARE:2;
      uint64_t reservedSpace0:1;
      uint64_t BB_LDO_LS_TRIM:3;
      uint64_t BB_LDO_XO_SPARE:2;
      uint64_t BB_LDO_XO_TRIM:3;
      uint64_t BB_XTAL_SPARE:5;
      uint64_t BB_XTAL_TRIM:8;
      uint64_t BG_1V_TRIM:4;
      uint64_t BG_IBIAS_5U_TRIM:4;
    } __attribute__((packed)) B;
  } ANA_TRIM;

} __attribute__((packed));

#define RSIM (*(volatile struct RSIM_tag *) 0x40059000)

struct DCDC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DCDC_DISABLE_AUTO_CLK_SWITCH:1;
      uint64_t DCDC_SEL_CLK:1;
      uint64_t DCDC_PWD_OSC_INT:1;
      uint64_t reservedSpace1:5;
      uint64_t DCDC_LP_DF_CMP_ENABLE:1;
      uint64_t DCDC_IN_DIV_CTRL:2;
      uint64_t reservedSpace2:5;
      uint64_t DCDC_LP_STATE_HYS_L:2;
      uint64_t DCDC_LP_STATE_HYS_H:2;
      uint64_t HYST_LP_COMP_ADJ:1;
      uint64_t HYST_LP_CMP_DISABLE:1;
      uint64_t OFFSET_RSNS_LP_ADJ:1;
      uint64_t OFFSET_RSNS_LP_DISABLE:1;
      uint64_t DCDC_LESS_I:1;
      uint64_t PWD_CMP_OFFSET:1;
      uint64_t DCDC_XTALOK_DISABLE:1;
      uint64_t PSWITCH_STATUS:1;
      uint64_t VLPS_CONFIG_DCDC_HP:1;
      uint64_t VLPR_VLPW_CONFIG_DCDC_HP:1;
      uint64_t DCDC_STS_DC_OK:1;
    } __attribute__((packed)) B;
  } DCDC_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POSLIMIT_BUCK_IN:7;
      uint64_t reservedSpace0:14;
      uint64_t DCDC_LOOPCTRL_CM_HST_THRESH:1;
      uint64_t DCDC_LOOPCTRL_DF_HST_THRESH:1;
      uint64_t DCDC_LOOPCTRL_EN_CM_HYST:1;
      uint64_t DCDC_LOOPCTRL_EN_DF_HYST:1;
    } __attribute__((packed)) B;
  } DCDC_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t DCDC_LOOPCTRL_EN_RCSCALE:2;
      uint64_t reservedSpace1:2;
      uint64_t DCDC_LOOPCTRL_HYST_SIGN:1;
      uint64_t reservedSpace2:1;
      uint64_t DCDC_BATTMONITOR_EN_BATADJ:1;
      uint64_t DCDC_BATTMONITOR_BATT_VAL:10;
    } __attribute__((packed)) B;
  } DCDC_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_VDD1P8CTRL_TRG:6;
      uint64_t DCDC_VDD1P5CTRL_TRG_BUCK:5;
      uint64_t reservedSpace0:6;
      uint64_t DCDC_VDD1P5CTRL_ADJTN:4;
      uint64_t DCDC_MINPWR_DC_HALFCLK_PULSED:1;
      uint64_t DCDC_MINPWR_DOUBLE_FETS_PULSED:1;
      uint64_t DCDC_MINPWR_HALF_FETS_PULSED:1;
      uint64_t DCDC_MINPWR_DC_HALFCLK:1;
      uint64_t DCDC_MINPWR_DOUBLE_FETS:1;
      uint64_t DCDC_MINPWR_HALF_FETS:1;
      uint64_t reservedSpace1:2;
      uint64_t DCDC_VDD1P5CTRL_DISABLE_STEP:1;
      uint64_t DCDC_VDD1P8CTRL_DISABLE_STEP:1;
    } __attribute__((packed)) B;
  } DCDC_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_SW_SHUTDOWN:1;
      uint64_t reservedSpace0:15;
      uint64_t UNLOCK:16;
    } __attribute__((packed)) B;
  } DCDC_REG4;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSWITCH_INT_RISE_EN:1;
      uint64_t PSWITCH_INT_FALL_EN:1;
      uint64_t PSWITCH_INT_CLEAR:1;
      uint64_t PSWITCH_INT_MUTE:1;
      uint64_t reservedSpace0:27;
      uint64_t PSWITCH_INT_STS:1;
    } __attribute__((packed)) B;
  } DCDC_REG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEGRATOR_VALUE:19;
      uint64_t INTEGRATOR_VALUE_SEL:1;
      uint64_t PULSE_RUN_SPEEDUP:1;
    } __attribute__((packed)) B;
  } DCDC_REG7;

} __attribute__((packed));

#define DCDC (*(volatile struct DCDC_tag *) 0x4005a000)

struct BTLE_RF_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLE_PART_ID:16;
    } __attribute__((packed)) B;
  } BLE_PART_ID;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ORF_SYSCLK_REQ:1;
      uint64_t RIF_LL_ACTIVE:1;
      uint64_t XCVR_BUSY:1;
    } __attribute__((packed)) B;
  } DSM_STATUS;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSM_INTR_EN:1;
      uint64_t BLE_FSM_SEL:3;
    } __attribute__((packed)) B;
  } MISC_CTRL;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAR_CS:5;
      uint64_t BTLE_TX_EN:1;
      uint64_t BTLE_RX_EN:1;
      uint64_t TX_CS:5;
      uint64_t RX_CS:4;
    } __attribute__((packed)) B;
  } BLE_FSM;

} __attribute__((packed));

#define BTLE_RF (*(volatile struct BTLE_RF_tag *) 0x4005b600)

struct XCVR_RX_DIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_ADC_NEGEDGE:1;
      uint64_t RX_CH_FILT_BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t RX_ADC_POL:1;
      uint64_t RX_DEC_FILT_OSR:3;
      uint64_t reservedSpace1:1;
      uint64_t RX_FSK_ZB_SEL:1;
      uint64_t RX_NORM_EN:1;
      uint64_t RX_RSSI_EN:1;
      uint64_t RX_AGC_EN:1;
      uint64_t RX_DCOC_EN:1;
      uint64_t RX_DCOC_CAL_EN:1;
      uint64_t RX_IQ_SWAP:1;
      uint64_t RX_DC_RESID_EN:1;
      uint64_t RX_SRC_EN:1;
      uint64_t RX_SRC_RATE:1;
      uint64_t RX_DMA_DTEST_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t RX_DEC_FILT_GAIN:5;
      uint64_t RX_DEC_FILT_HZD_CORR_DIS:1;
      uint64_t reservedSpace3:2;
      uint64_t RX_DEC_FILT_HAZARD:1;
      uint64_t RX_RSSI_FILT_HAZARD:1;
      uint64_t RX_DEC_FILT_SAT_I:1;
      uint64_t RX_DEC_FILT_SAT_Q:1;
    } __attribute__((packed)) B;
  } RX_DIG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOW_AGC_EN:1;
      uint64_t SLOW_AGC_SRC:2;
      uint64_t AGC_FREEZE_EN:1;
      uint64_t AGC_FREEZE_PRE_OR_AA:1;
      uint64_t reservedSpace0:1;
      uint64_t AGC_UP_EN:1;
      uint64_t AGC_UP_SRC:1;
      uint64_t AGC_DOWN_BBA_STEP_SZ:4;
      uint64_t AGC_DOWN_LNA_STEP_SZ:4;
      uint64_t AGC_UP_RSSI_THRESH:8;
      uint64_t AGC_DOWN_RSSI_THRESH:8;
    } __attribute__((packed)) B;
  } AGC_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRESLOW_UP_THRESH:4;
      uint64_t PRESLOW_DOWN_THRESH:4;
      uint64_t reservedSpace0:4;
      uint64_t LNA_USER_GAIN:4;
      uint64_t BBA_USER_GAIN:4;
      uint64_t USER_LNA_GAIN_EN:1;
      uint64_t USER_BBA_GAIN_EN:1;
      uint64_t PRESLOW_EN:1;
      uint64_t PDET_HI_SEL_HOLD:1;
      uint64_t LNA_GAIN_SETTLE_TIME:8;
    } __attribute__((packed)) B;
  } AGC_CTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_PDET_RST:1;
      uint64_t TZA_PDET_RST:1;
      uint64_t MAN_PDET_RST:1;
      uint64_t reservedSpace0:1;
      uint64_t BBA_GAIN_SETTLE_TIME:8;
      uint64_t BBA_PDET_SEL_LO:3;
      uint64_t BBA_PDET_SEL_HI:3;
      uint64_t TZA_PDET_SEL_LO:3;
      uint64_t TZA_PDET_SEL_HI:3;
      uint64_t AGC_FAST_EXPIRE:6;
      uint64_t LNA_LG_ON_OVR:1;
      uint64_t LNA_HG_ON_OVR:1;
    } __attribute__((packed)) B;
  } AGC_CTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_UNFREEZE_TIME:13;
      uint64_t AGC_PDET_LO_DLY:3;
      uint64_t AGC_RSSI_DELT_H2S:7;
      uint64_t AGC_H2S_STEP_SZ:5;
      uint64_t AGC_UP_STEP_SZ:4;
    } __attribute__((packed)) B;
  } AGC_CTRL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_PDET_LO_STAT:1;
      uint64_t BBA_PDET_HI_STAT:1;
      uint64_t TZA_PDET_LO_STAT:1;
      uint64_t TZA_PDET_HI_STAT:1;
      uint64_t CURR_AGC_IDX:5;
      uint64_t AGC_FROZEN:1;
      uint64_t AGC_IDX_AA_MATCH:5;
      uint64_t reservedSpace0:1;
      uint64_t RSSI_ADC_RAW:8;
    } __attribute__((packed)) B;
  } AGC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSI_USE_VALS:1;
      uint64_t RSSI_HOLD_SRC:2;
      uint64_t RSSI_HOLD_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RSSI_IIR_CW_WEIGHT:2;
      uint64_t RSSI_N_WINDOW_NB:3;
      uint64_t RSSI_HOLD_DELAY:6;
      uint64_t RSSI_IIR_WEIGHT:4;
      uint64_t RSSI_VLD_SETTLE:3;
      uint64_t reservedSpace1:1;
      uint64_t RSSI_ADJ:8;
    } __attribute__((packed)) B;
  } RSSI_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t RSSI_OUT:8;
    } __attribute__((packed)) B;
  } RSSI_CTRL_1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_MIDPWR_TRK_DIS:1;
      uint64_t DCOC_MAN:1;
      uint64_t DCOC_TRK_EST_OVR:1;
      uint64_t DCOC_CORRECT_SRC:1;
      uint64_t DCOC_CORRECT_EN:1;
      uint64_t TRACK_FROM_ZERO:1;
      uint64_t BBA_CORR_POL:1;
      uint64_t TZA_CORR_POL:1;
      uint64_t DCOC_CAL_DURATION:5;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_CAL_CHECK_EN:1;
      uint64_t DCOC_CORR_DLY:5;
      uint64_t reservedSpace1:3;
      uint64_t DCOC_CORR_HOLD_TIME:7;
    } __attribute__((packed)) B;
  } DCOC_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_SIGN_SCALE_IDX:2;
      uint64_t DCOC_ALPHAC_SCALE_IDX:3;
      uint64_t DCOC_ALPHA_RADIUS_IDX:3;
      uint64_t reservedSpace0:4;
      uint64_t DCOC_TRK_EST_GS_CNT:3;
      uint64_t reservedSpace1:1;
      uint64_t DCOC_SIGN_SCALE_GS_IDX:2;
      uint64_t DCOC_ALPHAC_SCALE_GS_IDX:3;
      uint64_t DCOC_ALPHA_RADIUS_GS_IDX:3;
      uint64_t DCOC_TRK_MIN_AGC_IDX:5;
    } __attribute__((packed)) B;
  } DCOC_CTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_DCOC_INIT_I:6;
      uint64_t reservedSpace0:2;
      uint64_t BBA_DCOC_INIT_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t TZA_DCOC_INIT_I:8;
      uint64_t TZA_DCOC_INIT_Q:8;
    } __attribute__((packed)) B;
  } DCOC_DAC_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIG_DCOC_INIT_I:12;
      uint64_t reservedSpace0:4;
      uint64_t DIG_DCOC_INIT_Q:12;
    } __attribute__((packed)) B;
  } DCOC_DIG_MAN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DCOC_BBA_CAL_GAIN1:4;
      uint64_t DCOC_LNA_CAL_GAIN1:4;
      uint64_t DCOC_BBA_CAL_GAIN2:4;
      uint64_t DCOC_LNA_CAL_GAIN2:4;
      uint64_t DCOC_BBA_CAL_GAIN3:4;
      uint64_t DCOC_LNA_CAL_GAIN3:4;
    } __attribute__((packed)) B;
  } DCOC_CAL_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_DCOC_I:6;
      uint64_t reservedSpace0:1;
      uint64_t DCOC_CAL_GTWSR:1;
      uint64_t BBA_DCOC_Q:6;
      uint64_t DCOC_CAL_RESULT:2;
      uint64_t TZA_DCOC_I:8;
      uint64_t TZA_DCOC_Q:8;
    } __attribute__((packed)) B;
  } DCOC_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC_EST_I:12;
      uint64_t reservedSpace0:4;
      uint64_t DC_EST_Q:12;
    } __attribute__((packed)) B;
  } DCOC_DC_EST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TMP_CALC_RECIP:11;
      uint64_t reservedSpace0:5;
      uint64_t ALPHA_CALC_RECIP:11;
    } __attribute__((packed)) B;
  } DCOC_CAL_RCP;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IQMC_CAL_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t IQMC_NUM_ITER:8;
      uint64_t IQMC_DC_GAIN_ADJ:11;
    } __attribute__((packed)) B;
  } IQMC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IQMC_GAIN_ADJ:11;
      uint64_t reservedSpace0:5;
      uint64_t IQMC_PHASE_ADJ:12;
    } __attribute__((packed)) B;
  } IQMC_CAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_VAL_0:8;
      uint64_t LNA_GAIN_VAL_1:8;
      uint64_t LNA_GAIN_VAL_2:8;
      uint64_t LNA_GAIN_VAL_3:8;
    } __attribute__((packed)) B;
  } LNA_GAIN_VAL_3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_VAL_4:8;
      uint64_t LNA_GAIN_VAL_5:8;
      uint64_t LNA_GAIN_VAL_6:8;
      uint64_t LNA_GAIN_VAL_7:8;
    } __attribute__((packed)) B;
  } LNA_GAIN_VAL_7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_VAL_8:8;
      uint64_t LNA_GAIN_VAL_9:8;
    } __attribute__((packed)) B;
  } LNA_GAIN_VAL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RES_TUNE_VAL_0:4;
      uint64_t BBA_RES_TUNE_VAL_1:4;
      uint64_t BBA_RES_TUNE_VAL_2:4;
      uint64_t BBA_RES_TUNE_VAL_3:4;
      uint64_t BBA_RES_TUNE_VAL_4:4;
      uint64_t BBA_RES_TUNE_VAL_5:4;
      uint64_t BBA_RES_TUNE_VAL_6:4;
      uint64_t BBA_RES_TUNE_VAL_7:4;
    } __attribute__((packed)) B;
  } BBA_RES_TUNE_VAL_7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RES_TUNE_VAL_8:4;
      uint64_t BBA_RES_TUNE_VAL_9:4;
      uint64_t BBA_RES_TUNE_VAL_10:4;
    } __attribute__((packed)) B;
  } BBA_RES_TUNE_VAL_10_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_LIN_VAL_0:10;
      uint64_t LNA_GAIN_LIN_VAL_1:10;
      uint64_t LNA_GAIN_LIN_VAL_2:10;
    } __attribute__((packed)) B;
  } LNA_GAIN_LIN_VAL_2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_LIN_VAL_3:10;
      uint64_t LNA_GAIN_LIN_VAL_4:10;
      uint64_t LNA_GAIN_LIN_VAL_5:10;
    } __attribute__((packed)) B;
  } LNA_GAIN_LIN_VAL_5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_LIN_VAL_6:10;
      uint64_t LNA_GAIN_LIN_VAL_7:10;
      uint64_t LNA_GAIN_LIN_VAL_8:10;
    } __attribute__((packed)) B;
  } LNA_GAIN_LIN_VAL_8_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LNA_GAIN_LIN_VAL_9:10;
    } __attribute__((packed)) B;
  } LNA_GAIN_LIN_VAL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RES_TUNE_LIN_VAL_0:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_1:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_2:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_3:8;
    } __attribute__((packed)) B;
  } BBA_RES_TUNE_LIN_VAL_3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RES_TUNE_LIN_VAL_4:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_5:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_6:8;
      uint64_t BBA_RES_TUNE_LIN_VAL_7:8;
    } __attribute__((packed)) B;
  } BBA_RES_TUNE_LIN_VAL_7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RES_TUNE_LIN_VAL_8:10;
      uint64_t BBA_RES_TUNE_LIN_VAL_9:10;
      uint64_t BBA_RES_TUNE_LIN_VAL_10:10;
    } __attribute__((packed)) B;
  } BBA_RES_TUNE_LIN_VAL_10_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_00:4;
      uint64_t LNA_GAIN_00:4;
      uint64_t BBA_GAIN_01:4;
      uint64_t LNA_GAIN_01:4;
      uint64_t BBA_GAIN_02:4;
      uint64_t LNA_GAIN_02:4;
      uint64_t BBA_GAIN_03:4;
      uint64_t LNA_GAIN_03:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_03_00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_04:4;
      uint64_t LNA_GAIN_04:4;
      uint64_t BBA_GAIN_05:4;
      uint64_t LNA_GAIN_05:4;
      uint64_t BBA_GAIN_06:4;
      uint64_t LNA_GAIN_06:4;
      uint64_t BBA_GAIN_07:4;
      uint64_t LNA_GAIN_07:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_07_04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_08:4;
      uint64_t LNA_GAIN_08:4;
      uint64_t BBA_GAIN_09:4;
      uint64_t LNA_GAIN_09:4;
      uint64_t BBA_GAIN_10:4;
      uint64_t LNA_GAIN_10:4;
      uint64_t BBA_GAIN_11:4;
      uint64_t LNA_GAIN_11:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_11_08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_12:4;
      uint64_t LNA_GAIN_12:4;
      uint64_t BBA_GAIN_13:4;
      uint64_t LNA_GAIN_13:4;
      uint64_t BBA_GAIN_14:4;
      uint64_t LNA_GAIN_14:4;
      uint64_t BBA_GAIN_15:4;
      uint64_t LNA_GAIN_15:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_15_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_16:4;
      uint64_t LNA_GAIN_16:4;
      uint64_t BBA_GAIN_17:4;
      uint64_t LNA_GAIN_17:4;
      uint64_t BBA_GAIN_18:4;
      uint64_t LNA_GAIN_18:4;
      uint64_t BBA_GAIN_19:4;
      uint64_t LNA_GAIN_19:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_19_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_20:4;
      uint64_t LNA_GAIN_20:4;
      uint64_t BBA_GAIN_21:4;
      uint64_t LNA_GAIN_21:4;
      uint64_t BBA_GAIN_22:4;
      uint64_t LNA_GAIN_22:4;
      uint64_t BBA_GAIN_23:4;
      uint64_t LNA_GAIN_23:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_23_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_GAIN_24:4;
      uint64_t LNA_GAIN_24:4;
      uint64_t BBA_GAIN_25:4;
      uint64_t LNA_GAIN_25:4;
      uint64_t BBA_GAIN_26:4;
      uint64_t LNA_GAIN_26:4;
    } __attribute__((packed)) B;
  } AGC_GAIN_TBL_26_24;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_BBA_OFFSET_I:6;
      uint64_t reservedSpace0:2;
      uint64_t DCOC_BBA_OFFSET_Q:6;
      uint64_t reservedSpace1:2;
      uint64_t DCOC_TZA_OFFSET_I:8;
      uint64_t DCOC_TZA_OFFSET_Q:8;
    } __attribute__((packed)) B;
  } DCOC_OFFSET_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_DCOC_STEP_RECIP:13;
      uint64_t reservedSpace0:3;
      uint64_t BBA_DCOC_STEP:9;
    } __attribute__((packed)) B;
  } DCOC_BBA_STEP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_0:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_0:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_1:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_1:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_2:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_2:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_3:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_3:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_4:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_4:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_5:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_5:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_6:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_6:12;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_7:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_7:13;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_8:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_8:13;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_9:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_9:14;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_TZA_STEP_RCP_10:13;
      uint64_t reservedSpace0:3;
      uint64_t DCOC_TZA_STEP_GAIN_10:14;
    } __attribute__((packed)) B;
  } DCOC_TZA_STEP_10;

  uint8_t res3[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_BETA_F_TH:11;
      uint64_t reservedSpace0:5;
      uint64_t DCOC_CAL_ALPHA_F_TH:10;
    } __attribute__((packed)) B;
  } DCOC_CAL_FAIL_TH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_BETA_P_TH:11;
      uint64_t reservedSpace0:5;
      uint64_t DCOC_CAL_ALPHA_P_TH:10;
    } __attribute__((packed)) B;
  } DCOC_CAL_PASS_TH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_ALPHA_I:11;
      uint64_t reservedSpace0:5;
      uint64_t DCOC_CAL_ALPHA_Q:11;
    } __attribute__((packed)) B;
  } DCOC_CAL_ALPHA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_BETA_Q:17;
    } __attribute__((packed)) B;
  } DCOC_CAL_BETA_Q;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_BETA_I:17;
    } __attribute__((packed)) B;
  } DCOC_CAL_BETA_I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_GAMMA_I:16;
      uint64_t DCOC_CAL_GAMMA_Q:16;
    } __attribute__((packed)) B;
  } DCOC_CAL_GAMMA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_IIR1A_IDX:2;
      uint64_t DCOC_CAL_IIR2A_IDX:2;
      uint64_t DCOC_CAL_IIR3A_IDX:2;
    } __attribute__((packed)) B;
  } DCOC_CAL_IIR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_RES_I:12;
      uint64_t reservedSpace0:4;
      uint64_t DCOC_CAL_RES_Q:12;
    } __attribute__((packed)) B;
  } DCOC_CAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_RES_I:12;
      uint64_t reservedSpace0:4;
      uint64_t DCOC_CAL_RES_Q:12;
    } __attribute__((packed)) B;
  } DCOC_CAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCOC_CAL_RES_I:12;
      uint64_t reservedSpace0:4;
      uint64_t DCOC_CAL_RES_Q:12;
    } __attribute__((packed)) B;
  } DCOC_CAL3;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LQI_CORR_THRESH:8;
      uint64_t CORR_CNTR_THRESH:8;
      uint64_t LQI_CNTR:8;
      uint64_t SNR_ADJ:6;
    } __attribute__((packed)) B;
  } CCA_ED_LQI_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSI_NOISE_AVG_DELAY:6;
      uint64_t RSSI_NOISE_AVG_FACTOR:3;
      uint64_t LQI_RSSI_WEIGHT:3;
      uint64_t LQI_RSSI_SENS:4;
      uint64_t SNR_LQI_DIS:1;
      uint64_t reservedSpace0:1;
      uint64_t MEAS_TRANS_TO_IDLE:1;
      uint64_t CCA1_ED_EN_DIS:1;
      uint64_t MAN_MEAS_COMPLETE:1;
      uint64_t MAN_AA_MATCH:1;
      uint64_t reservedSpace1:2;
      uint64_t SNR_LQI_WEIGHT:4;
      uint64_t LQI_BIAS:4;
    } __attribute__((packed)) B;
  } CCA_ED_LQI_CTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LQI_OUT:8;
      uint64_t ED_OUT:8;
      uint64_t SNR_OUT:8;
      uint64_t CCA1_STATE:1;
      uint64_t MEAS_COMPLETE:1;
    } __attribute__((packed)) B;
  } CCA_ED_LQI_STAT_0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H0:6;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H1:6;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H2:7;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H3:7;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H4:7;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H5:7;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H6:8;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H7:8;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H8:9;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H9:9;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H10:10;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_CH_FILT_H11:10;
    } __attribute__((packed)) B;
  } RX_CHF_COEF_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t AGC_MAN_IDX:5;
      uint64_t reservedSpace1:3;
      uint64_t AGC_MAN_IDX_EN:1;
      uint64_t AGC_DCOC_START_PT:1;
    } __attribute__((packed)) B;
  } AGC_MAN_AGC_IDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC_RESID_NWIN:7;
      uint64_t reservedSpace0:1;
      uint64_t DC_RESID_ITER_FREEZE:4;
      uint64_t DC_RESID_ALPHA:3;
      uint64_t reservedSpace1:1;
      uint64_t DC_RESID_DLY:3;
      uint64_t reservedSpace2:1;
      uint64_t DC_RESID_EXT_DC_EN:1;
      uint64_t reservedSpace3:3;
      uint64_t DC_RESID_MIN_AGC_IDX:5;
    } __attribute__((packed)) B;
  } DC_RESID_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DC_RESID_OFFSET_I:13;
      uint64_t reservedSpace0:3;
      uint64_t DC_RESID_OFFSET_Q:13;
    } __attribute__((packed)) B;
  } DC_RESID_EST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBA_RCCAL_OFFSET:4;
      uint64_t BBA_RCCAL_MANUAL:5;
      uint64_t BBA_RCCAL_DIS:1;
      uint64_t reservedSpace0:2;
      uint64_t RCCAL_SMP_DLY:2;
      uint64_t reservedSpace1:1;
      uint64_t RCCAL_COMP_INV:1;
      uint64_t TZA_RCCAL_OFFSET:4;
      uint64_t TZA_RCCAL_MANUAL:5;
      uint64_t TZA_RCCAL_DIS:1;
    } __attribute__((packed)) B;
  } RX_RCCAL_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_RCCAL_OFFSET:4;
      uint64_t ADC_RCCAL_MANUAL:5;
      uint64_t ADC_RCCAL_DIS:1;
      uint64_t reservedSpace0:6;
      uint64_t BBA2_RCCAL_OFFSET:4;
      uint64_t BBA2_RCCAL_MANUAL:5;
      uint64_t BBA2_RCCAL_DIS:1;
    } __attribute__((packed)) B;
  } RX_RCCAL_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCCAL_CODE:5;
      uint64_t ADC_RCCAL:5;
      uint64_t BBA2_RCCAL:5;
      uint64_t reservedSpace0:1;
      uint64_t BBA_RCCAL:5;
      uint64_t TZA_RCCAL:5;
    } __attribute__((packed)) B;
  } RX_RCCAL_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAC_CAL_ADJUST_MANUAL:7;
      uint64_t AUXPLL_DAC_CAL_ADJUST_DIS:1;
      uint64_t FCAL_RUN_CNT:1;
      uint64_t FCAL_COMP_INV:1;
      uint64_t FCAL_SMP_DLY:2;
      uint64_t reservedSpace0:4;
      uint64_t DAC_CAL_ADJUST:7;
    } __attribute__((packed)) B;
  } AUXPLL_FCAL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAL_COUNT_6:10;
      uint64_t reservedSpace0:6;
      uint64_t FCAL_BESTDIFF:10;
    } __attribute__((packed)) B;
  } AUXPLL_FCAL_CNT6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAL_COUNT_4:10;
      uint64_t reservedSpace0:6;
      uint64_t FCAL_COUNT_5:10;
    } __attribute__((packed)) B;
  } AUXPLL_FCAL_CNT5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAL_COUNT_2:10;
      uint64_t reservedSpace0:6;
      uint64_t FCAL_COUNT_3:10;
    } __attribute__((packed)) B;
  } AUXPLL_FCAL_CNT3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAL_COUNT_0:10;
      uint64_t reservedSpace0:6;
      uint64_t FCAL_COUNT_1:10;
    } __attribute__((packed)) B;
  } AUXPLL_FCAL_CNT1_0;

} __attribute__((packed));

#define XCVR_RX_DIG (*(volatile struct XCVR_RX_DIG_tag *) 0x4005c000)

struct XCVR_TX_DIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADIO_DFT_MODE:4;
      uint64_t LFSR_LENGTH:3;
      uint64_t LFSR_EN:1;
      uint64_t DFT_CLK_SEL:3;
      uint64_t TX_DFT_EN:1;
      uint64_t SOC_TEST_SEL:2;
      uint64_t reservedSpace0:2;
      uint64_t TX_CAPTURE_POL:1;
      uint64_t reservedSpace1:2;
      uint64_t ZERO_FDEV:1;
      uint64_t reservedSpace2:2;
      uint64_t FREQ_WORD_ADJ:10;
    } __attribute__((packed)) B;
  } CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_PADDING_PAT_0:8;
      uint64_t DATA_PADDING_PAT_1:8;
      uint64_t DFT_LFSR_OUT:15;
      uint64_t LRM:1;
    } __attribute__((packed)) B;
  } DATA_PADDING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GFSK_MULTIPLY_TABLE_MANUAL:16;
      uint64_t GFSK_MI:2;
      uint64_t reservedSpace0:2;
      uint64_t GFSK_MLD:1;
      uint64_t GFSK_FLD:1;
      uint64_t reservedSpace1:2;
      uint64_t GFSK_MOD_INDEX_SCALING:3;
      uint64_t reservedSpace2:1;
      uint64_t TX_IMAGE_FILTER_OVRD_EN:1;
      uint64_t TX_IMAGE_FILTER_0_OVRD:1;
      uint64_t TX_IMAGE_FILTER_1_OVRD:1;
      uint64_t TX_IMAGE_FILTER_2_OVRD:1;
    } __attribute__((packed)) B;
  } GFSK_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GFSK_FILTER_COEFF_MANUAL2:32;
    } __attribute__((packed)) B;
  } GFSK_COEFF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GFSK_FILTER_COEFF_MANUAL1:32;
    } __attribute__((packed)) B;
  } GFSK_COEFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSK_MODULATION_SCALE_0:13;
      uint64_t reservedSpace0:3;
      uint64_t FSK_MODULATION_SCALE_1:13;
      uint64_t reservedSpace1:2;
      uint64_t FSK_BITRATE_SCALE_DISABLE:1;
    } __attribute__((packed)) B;
  } FSK_SCALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_MOD_PATTERN:32;
    } __attribute__((packed)) B;
  } DFT_PATTERN;

} __attribute__((packed));

#define XCVR_TX_DIG (*(volatile struct XCVR_TX_DIG_tag *) 0x4005c200)

struct XCVR_PLL_DIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPM_VCM_TX:3;
      uint64_t reservedSpace0:1;
      uint64_t HPM_VCM_CAL:3;
      uint64_t reservedSpace1:1;
      uint64_t HPM_FDB_RES_TX:2;
      uint64_t reservedSpace2:2;
      uint64_t HPM_FDB_RES_CAL:2;
    } __attribute__((packed)) B;
  } HPM_BUMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODULATION_WORD_MANUAL:13;
      uint64_t reservedSpace0:2;
      uint64_t MOD_DISABLE:1;
      uint64_t HPM_MOD_MANUAL:8;
      uint64_t reservedSpace1:3;
      uint64_t HPM_MOD_DISABLE:1;
      uint64_t HPM_SDM_OUT_MANUAL:2;
      uint64_t reservedSpace2:1;
      uint64_t HPM_SDM_OUT_DISABLE:1;
    } __attribute__((packed)) B;
  } MOD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_NUM:7;
      uint64_t reservedSpace0:1;
      uint64_t BOC:1;
      uint64_t BMR:1;
      uint64_t reservedSpace1:6;
      uint64_t HOP_TBL_CFG_OVRD:3;
      uint64_t HOP_TBL_CFG_OVRD_EN:1;
    } __attribute__((packed)) B;
  } CHAN_MAP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CT_FAIL:1;
      uint64_t CTFF:1;
      uint64_t CS_FAIL:1;
      uint64_t CSFF:1;
      uint64_t FT_FAIL:1;
      uint64_t FTFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TAFF:1;
      uint64_t CTUNE_LDF_LEV:4;
      uint64_t FTF_RX_THRSH:6;
      uint64_t reservedSpace1:1;
      uint64_t FTW_RX:1;
      uint64_t FTF_TX_THRSH:6;
      uint64_t reservedSpace2:1;
      uint64_t FTW_TX:1;
      uint64_t FREQ_COUNT_GO:1;
      uint64_t FREQ_COUNT_FINISHED:1;
      uint64_t FREQ_COUNT_TIME:2;
    } __attribute__((packed)) B;
  } LOCK_DETECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPM_SDM_IN_MANUAL:10;
      uint64_t reservedSpace0:3;
      uint64_t HPFF:1;
      uint64_t HPM_SDM_OUT_INVERT:1;
      uint64_t HPM_SDM_IN_DISABLE:1;
      uint64_t HPM_LFSR_SIZE:3;
      uint64_t reservedSpace1:1;
      uint64_t HPM_DTH_SCL:1;
      uint64_t reservedSpace2:2;
      uint64_t HPM_DTH_EN:1;
      uint64_t HPM_INTEGER_SCALE:2;
      uint64_t reservedSpace3:1;
      uint64_t HPM_INTEGER_INVERT:1;
      uint64_t HPM_CAL_INVERT:1;
      uint64_t reservedSpace4:2;
      uint64_t HPM_MOD_IN_INVERT:1;
    } __attribute__((packed)) B;
  } HPM_CTRL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPM_NUM_SELECTED:10;
      uint64_t reservedSpace0:6;
      uint64_t HPM_DENOM:10;
      uint64_t reservedSpace1:2;
      uint64_t HPM_COUNT_ADJUST:4;
    } __attribute__((packed)) B;
  } HPM_SDM_RES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL_LD_MANUAL:5;
      uint64_t reservedSpace0:6;
      uint64_t PLL_LD_DISABLE:1;
      uint64_t reservedSpace1:1;
      uint64_t LPFF:1;
      uint64_t LPM_SDM_INV:1;
      uint64_t LPM_DISABLE:1;
      uint64_t LPM_DTH_SCL:4;
      uint64_t reservedSpace2:2;
      uint64_t LPM_D_CTRL:1;
      uint64_t LPM_D_OVRD:1;
      uint64_t LPM_SCALE:4;
      uint64_t reservedSpace3:3;
      uint64_t LPM_SDM_USE_NEG:1;
    } __attribute__((packed)) B;
  } LPM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_INTG_SELECTED:7;
      uint64_t reservedSpace0:1;
      uint64_t HPM_ARRAY_BIAS:7;
      uint64_t reservedSpace1:1;
      uint64_t LPM_INTG:7;
      uint64_t reservedSpace2:8;
      uint64_t SDM_MAP_DISABLE:1;
    } __attribute__((packed)) B;
  } LPM_SDM_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_NUM:28;
    } __attribute__((packed)) B;
  } LPM_SDM_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_DENOM:28;
    } __attribute__((packed)) B;
  } LPM_SDM_CTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_NUM_SELECTED:28;
    } __attribute__((packed)) B;
  } LPM_SDM_RES1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_DENOM_SELECTED:28;
    } __attribute__((packed)) B;
  } LPM_SDM_RES2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPM_SDM_DELAY:4;
      uint64_t reservedSpace0:4;
      uint64_t HPM_SDM_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t HPM_INTEGER_DELAY:4;
    } __attribute__((packed)) B;
  } DELAY_MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTUNE_TARGET_MANUAL:12;
      uint64_t reservedSpace0:3;
      uint64_t CTUNE_TARGET_DISABLE:1;
      uint64_t CTUNE_ADJUST:4;
      uint64_t reservedSpace1:4;
      uint64_t CTUNE_MANUAL:7;
      uint64_t CTUNE_DISABLE:1;
    } __attribute__((packed)) B;
  } CTUNE_CTRL;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTUNE_SELECTED:7;
      uint64_t reservedSpace0:1;
      uint64_t CTUNE_BEST_DIFF:8;
      uint64_t CTUNE_FREQ_SELECTED:12;
    } __attribute__((packed)) B;
  } CTUNE_RES;

} __attribute__((packed));

#define XCVR_PLL_DIG (*(volatile struct XCVR_PLL_DIG_tag *) 0x4005c224)

struct XCVR_MISC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTOCOL:4;
      uint64_t TGT_PWR_SRC:3;
      uint64_t reservedSpace0:1;
      uint64_t REF_CLK_FREQ:2;
      uint64_t reservedSpace1:1;
      uint64_t SOC_RF_OSC_CLK_GATE_EN:1;
      uint64_t DEMOD_SEL:2;
      uint64_t reservedSpace2:2;
      uint64_t RADIO0_IRQ_SEL:3;
      uint64_t reservedSpace3:1;
      uint64_t RADIO1_IRQ_SEL:3;
      uint64_t reservedSpace4:1;
      uint64_t TSM_LL_INHIBIT:4;
    } __attribute__((packed)) B;
  } XCVR_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_COUNT:8;
      uint64_t PLL_SEQ_STATE:4;
      uint64_t RX_MODE:1;
      uint64_t TX_MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t BTLE_SYSCLK_REQ:1;
      uint64_t RIF_LL_ACTIVE:1;
      uint64_t XTAL_READY:1;
      uint64_t SOC_USING_RF_OSC_CLK:1;
      uint64_t reservedSpace1:4;
      uint64_t TSM_IRQ0:1;
      uint64_t TSM_IRQ1:1;
    } __attribute__((packed)) B;
  } XCVR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_RELINQUISH:1;
      uint64_t XCVR_BUSY:1;
    } __attribute__((packed)) B;
  } BLE_ARB_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERWRITE_VER:8;
    } __attribute__((packed)) B;
  } OVERWRITE_VER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_PAGE:4;
      uint64_t DMA_EN:1;
      uint64_t BYPASS_DMA_SYNC:1;
      uint64_t DMA_AA_TRIGGERED:1;
      uint64_t DMA_TIMED_OUT:1;
      uint64_t DMA_TIMEOUT:4;
      uint64_t DMA_START_TRG:3;
      uint64_t DMA_START_EDGE:1;
      uint64_t DMA_START_TRIGGERED:1;
      uint64_t SINGLE_REQ_MODE:1;
    } __attribute__((packed)) B;
  } DMA_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DATA:32;
    } __attribute__((packed)) B;
  } DMA_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_PAGE:4;
      uint64_t DBG_EN:1;
      uint64_t XCVR_RAM_PAGE:1;
      uint64_t XCVR_RAM_ALLOW:1;
      uint64_t ALL_PROTOCOLS_ALLOW:1;
      uint64_t DBG_RAM_FULL:2;
      uint64_t DBG_AA_TRIGGERED:1;
      uint64_t DBG_SOFT_INFO_SEL:1;
      uint64_t DBG_START_TRG:3;
      uint64_t DBG_START_EDGE:1;
      uint64_t DBG_STOP_TRG:4;
      uint64_t DBG_STOP_EDGE:1;
      uint64_t DBG_START_TRIGGERED:1;
      uint64_t DBG_STOP_TRIGGERED:1;
      uint64_t PB_PROTECT:1;
      uint64_t RAM0_CLK_ON_OVRD_EN:1;
      uint64_t RAM0_CLK_ON_OVRD:1;
      uint64_t RAM1_CLK_ON_OVRD_EN:1;
      uint64_t RAM1_CLK_ON_OVRD:1;
      uint64_t RAM0_CE_ON_OVRD_EN:1;
      uint64_t RAM0_CE_ON_OVRD:1;
      uint64_t RAM1_CE_ON_OVRD_EN:1;
      uint64_t RAM1_CE_ON_OVRD:1;
    } __attribute__((packed)) B;
  } PACKET_RAM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM0_STOP_ADDR:11;
      uint64_t reservedSpace0:5;
      uint64_t RAM1_STOP_ADDR:11;
    } __attribute__((packed)) B;
  } RAM_STOP_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAD_EN:1;
      uint64_t ANTX:1;
      uint64_t reservedSpace0:2;
      uint64_t ANTX_EN:2;
      uint64_t ANTX_HZ:1;
      uint64_t ANTX_CTRLMODE:1;
      uint64_t ANTX_POL:4;
      uint64_t FAD_NOT_GPIO:4;
    } __attribute__((packed)) B;
  } FAD_CTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF_NOT_ALLOWED_EN:4;
      uint64_t RF_NOT_ALLOWED_NO_TX:1;
      uint64_t RF_NOT_ALLOWED_NO_RX:1;
      uint64_t RF_NOT_ALLOWED_ASSERTED:1;
      uint64_t RF_NOT_ALLOWED_TX_ABORT:1;
      uint64_t RF_NOT_ALLOWED_RX_ABORT:1;
      uint64_t RF_NOT_ALLOWED:1;
      uint64_t reservedSpace0:6;
      uint64_t TSM_SPARE1_EXTEND:8;
    } __attribute__((packed)) B;
  } COEX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCW_EN:1;
      uint64_t CRCW_EC_EN:1;
      uint64_t CRC_ZERO:1;
      uint64_t CRC_EARLY_FAIL:1;
      uint64_t CRC_RES_OUT_VLD:1;
      uint64_t reservedSpace0:11;
      uint64_t CRC_EC_OFFSET:11;
      uint64_t reservedSpace1:1;
      uint64_t CRC_EC_DONE:1;
      uint64_t CRC_EC_FAIL:1;
    } __attribute__((packed)) B;
  } CRCW_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_EC_MASK:32;
    } __attribute__((packed)) B;
  } CRC_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_RES_OUT:32;
    } __attribute__((packed)) B;
  } CRC_RES_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_EC_SPKT_BYTES:8;
      uint64_t CRC_EC_SPKT_WND:4;
      uint64_t CRC_EC_LPKT_WND:4;
    } __attribute__((packed)) B;
  } CRCW_CFG2;

} __attribute__((packed));

#define XCVR_MISC (*(volatile struct XCVR_MISC_tag *) 0x4005c280)

struct XCVR_TSM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TSM_SOFT_RESET:1;
      uint64_t FORCE_TX_EN:1;
      uint64_t FORCE_RX_EN:1;
      uint64_t PA_RAMP_SEL:2;
      uint64_t DATA_PADDING_EN:2;
      uint64_t TSM_IRQ0_EN:1;
      uint64_t TSM_IRQ1_EN:1;
      uint64_t reservedSpace1:2;
      uint64_t RAMP_DN_DELAY:4;
      uint64_t TX_ABORT_DIS:1;
      uint64_t RX_ABORT_DIS:1;
      uint64_t ABORT_ON_CTUNE:1;
      uint64_t ABORT_ON_CYCLE_SLIP:1;
      uint64_t ABORT_ON_FREQ_TARG:1;
      uint64_t reservedSpace2:3;
      uint64_t BKPT:8;
    } __attribute__((packed)) B;
  } CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END_OF_TX_WU:8;
      uint64_t END_OF_TX_WD:8;
      uint64_t END_OF_RX_WU:8;
      uint64_t END_OF_RX_WD:8;
    } __attribute__((packed)) B;
  } END_OF_SEQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_POWER:6;
    } __attribute__((packed)) B;
  } PA_POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_RAMP0:6;
      uint64_t reservedSpace0:2;
      uint64_t PA_RAMP1:6;
      uint64_t reservedSpace1:2;
      uint64_t PA_RAMP2:6;
      uint64_t reservedSpace2:2;
      uint64_t PA_RAMP3:6;
    } __attribute__((packed)) B;
  } PA_RAMP_TBL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_RAMP4:6;
      uint64_t reservedSpace0:2;
      uint64_t PA_RAMP5:6;
      uint64_t reservedSpace1:2;
      uint64_t PA_RAMP6:6;
      uint64_t reservedSpace2:2;
      uint64_t PA_RAMP7:6;
    } __attribute__((packed)) B;
  } PA_RAMP_TBL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_RAMP8:6;
      uint64_t reservedSpace0:2;
      uint64_t PA_RAMP9:6;
      uint64_t reservedSpace1:2;
      uint64_t PA_RAMP10:6;
      uint64_t reservedSpace2:2;
      uint64_t PA_RAMP11:6;
    } __attribute__((packed)) B;
  } PA_RAMP_TBL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_RAMP12:6;
      uint64_t reservedSpace0:2;
      uint64_t PA_RAMP13:6;
      uint64_t reservedSpace1:2;
      uint64_t PA_RAMP14:6;
      uint64_t reservedSpace2:2;
      uint64_t PA_RAMP15:6;
    } __attribute__((packed)) B;
  } PA_RAMP_TBL3;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RECYCLE_COUNT0:8;
      uint64_t RECYCLE_COUNT1:8;
      uint64_t RECYCLE_COUNT2:8;
    } __attribute__((packed)) B;
  } RECYCLE_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAST_TX_WU_EN:1;
      uint64_t FAST_RX_WU_EN:1;
      uint64_t FAST_RX2TX_EN:1;
      uint64_t FAST_WU_CLEAR:1;
      uint64_t reservedSpace0:4;
      uint64_t FAST_RX2TX_START:8;
    } __attribute__((packed)) B;
  } FAST_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAST_START_TX:8;
      uint64_t FAST_DEST_TX:8;
      uint64_t FAST_START_RX:8;
      uint64_t FAST_DEST_RX:8;
    } __attribute__((packed)) B;
  } FAST_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_HF_EN_TX_HI:8;
      uint64_t BB_LDO_HF_EN_TX_LO:8;
      uint64_t BB_LDO_HF_EN_RX_HI:8;
      uint64_t BB_LDO_HF_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_ADCDAC_EN_TX_HI:8;
      uint64_t BB_LDO_ADCDAC_EN_TX_LO:8;
      uint64_t BB_LDO_ADCDAC_EN_RX_HI:8;
      uint64_t BB_LDO_ADCDAC_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t BB_LDO_BBA_EN_RX_HI:8;
      uint64_t BB_LDO_BBA_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_PD_EN_TX_HI:8;
      uint64_t BB_LDO_PD_EN_TX_LO:8;
      uint64_t BB_LDO_PD_EN_RX_HI:8;
      uint64_t BB_LDO_PD_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_FDBK_EN_TX_HI:8;
      uint64_t BB_LDO_FDBK_EN_TX_LO:8;
      uint64_t BB_LDO_FDBK_EN_RX_HI:8;
      uint64_t BB_LDO_FDBK_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_VCOLO_EN_TX_HI:8;
      uint64_t BB_LDO_VCOLO_EN_TX_LO:8;
      uint64_t BB_LDO_VCOLO_EN_RX_HI:8;
      uint64_t BB_LDO_VCOLO_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_VTREF_EN_TX_HI:8;
      uint64_t BB_LDO_VTREF_EN_TX_LO:8;
      uint64_t BB_LDO_VTREF_EN_RX_HI:8;
      uint64_t BB_LDO_VTREF_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_FDBK_BLEED_EN_TX_HI:8;
      uint64_t BB_LDO_FDBK_BLEED_EN_TX_LO:8;
      uint64_t BB_LDO_FDBK_BLEED_EN_RX_HI:8;
      uint64_t BB_LDO_FDBK_BLEED_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_VCOLO_BLEED_EN_TX_HI:8;
      uint64_t BB_LDO_VCOLO_BLEED_EN_TX_LO:8;
      uint64_t BB_LDO_VCOLO_BLEED_EN_RX_HI:8;
      uint64_t BB_LDO_VCOLO_BLEED_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_TX_HI:8;
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_TX_LO:8;
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_RX_HI:8;
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_XTAL_PLL_REF_CLK_EN_TX_HI:8;
      uint64_t BB_XTAL_PLL_REF_CLK_EN_TX_LO:8;
      uint64_t BB_XTAL_PLL_REF_CLK_EN_RX_HI:8;
      uint64_t BB_XTAL_PLL_REF_CLK_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_XTAL_DAC_REF_CLK_EN_TX_HI:8;
      uint64_t BB_XTAL_DAC_REF_CLK_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_VCO_REF_CLK_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_VCO_REF_CLK_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL_LOOP_IS_OPEN_TX_HI:8;
      uint64_t PLL_LOOP_IS_OPEN_TX_LO:8;
      uint64_t PLL_LOOP_IS_OPEN_RX_HI:8;
      uint64_t PLL_LOOP_IS_OPEN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_PD_CYCLE_SLIP_LD_FT_EN_TX_HI:8;
      uint64_t SY_PD_CYCLE_SLIP_LD_FT_EN_TX_LO:8;
      uint64_t SY_PD_CYCLE_SLIP_LD_FT_EN_RX_HI:8;
      uint64_t SY_PD_CYCLE_SLIP_LD_FT_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_VCO_EN_TX_HI:8;
      uint64_t SY_VCO_EN_TX_LO:8;
      uint64_t SY_VCO_EN_RX_HI:8;
      uint64_t SY_VCO_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SY_LO_RX_BUF_EN_RX_HI:8;
      uint64_t SY_LO_RX_BUF_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_LO_TX_BUF_EN_TX_HI:8;
      uint64_t SY_LO_TX_BUF_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_DIVN_EN_TX_HI:8;
      uint64_t SY_DIVN_EN_TX_LO:8;
      uint64_t SY_DIVN_EN_RX_HI:8;
      uint64_t SY_DIVN_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_PD_FILTER_CHARGE_EN_TX_HI:8;
      uint64_t SY_PD_FILTER_CHARGE_EN_TX_LO:8;
      uint64_t SY_PD_FILTER_CHARGE_EN_RX_HI:8;
      uint64_t SY_PD_FILTER_CHARGE_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_PD_EN_TX_HI:8;
      uint64_t SY_PD_EN_TX_LO:8;
      uint64_t SY_PD_EN_RX_HI:8;
      uint64_t SY_PD_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_LO_DIVN_EN_TX_HI:8;
      uint64_t SY_LO_DIVN_EN_TX_LO:8;
      uint64_t SY_LO_DIVN_EN_RX_HI:8;
      uint64_t SY_LO_DIVN_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SY_LO_RX_EN_RX_HI:8;
      uint64_t SY_LO_RX_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_LO_TX_EN_TX_HI:8;
      uint64_t SY_LO_TX_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_DIVN_CAL_EN_TX_HI:8;
      uint64_t SY_DIVN_CAL_EN_TX_LO:8;
      uint64_t SY_DIVN_CAL_EN_RX_HI:8;
      uint64_t SY_DIVN_CAL_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_LNA_MIXER_EN_RX_HI:8;
      uint64_t RX_LNA_MIXER_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PA_EN_TX_HI:8;
      uint64_t TX_PA_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_ADC_I_Q_EN_RX_HI:8;
      uint64_t RX_ADC_I_Q_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_ADC_RESET_EN_RX_HI:8;
      uint64_t RX_ADC_RESET_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_BBA_I_Q_EN_RX_HI:8;
      uint64_t RX_BBA_I_Q_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_BBA_PDET_EN_RX_HI:8;
      uint64_t RX_BBA_PDET_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_BBA_TZA_DCOC_EN_RX_HI:8;
      uint64_t RX_BBA_TZA_DCOC_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_TZA_I_Q_EN_RX_HI:8;
      uint64_t RX_TZA_I_Q_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_TZA_PDET_EN_RX_HI:8;
      uint64_t RX_TZA_PDET_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL_DIG_EN_TX_HI:8;
      uint64_t PLL_DIG_EN_TX_LO:8;
      uint64_t PLL_DIG_EN_RX_HI:8;
      uint64_t PLL_DIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_DIG_EN_TX_HI:8;
      uint64_t TX_DIG_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_DIG_EN_RX_HI:8;
      uint64_t RX_DIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_INIT_RX_HI:8;
      uint64_t RX_INIT_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGMA_DELTA_EN_TX_HI:8;
      uint64_t SIGMA_DELTA_EN_TX_LO:8;
      uint64_t SIGMA_DELTA_EN_RX_HI:8;
      uint64_t SIGMA_DELTA_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RX_PHY_EN_RX_HI:8;
      uint64_t RX_PHY_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DCOC_EN_RX_HI:8;
      uint64_t DCOC_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DCOC_INIT_RX_HI:8;
      uint64_t DCOC_INIT_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAR_ADC_TRIG_EN_TX_HI:8;
      uint64_t SAR_ADC_TRIG_EN_TX_LO:8;
      uint64_t SAR_ADC_TRIG_EN_RX_HI:8;
      uint64_t SAR_ADC_TRIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_SPARE0_EN_TX_HI:8;
      uint64_t TSM_SPARE0_EN_TX_LO:8;
      uint64_t TSM_SPARE0_EN_RX_HI:8;
      uint64_t TSM_SPARE0_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_SPARE1_EN_TX_HI:8;
      uint64_t TSM_SPARE1_EN_TX_LO:8;
      uint64_t TSM_SPARE1_EN_RX_HI:8;
      uint64_t TSM_SPARE1_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_SPARE2_EN_TX_HI:8;
      uint64_t TSM_SPARE2_EN_TX_LO:8;
      uint64_t TSM_SPARE2_EN_RX_HI:8;
      uint64_t TSM_SPARE2_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_SPARE3_EN_TX_HI:8;
      uint64_t TSM_SPARE3_EN_TX_LO:8;
      uint64_t TSM_SPARE3_EN_RX_HI:8;
      uint64_t TSM_SPARE3_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0_TRIG_EN_TX_HI:8;
      uint64_t GPIO0_TRIG_EN_TX_LO:8;
      uint64_t GPIO0_TRIG_EN_RX_HI:8;
      uint64_t GPIO0_TRIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO1_TRIG_EN_TX_HI:8;
      uint64_t GPIO1_TRIG_EN_TX_LO:8;
      uint64_t GPIO1_TRIG_EN_RX_HI:8;
      uint64_t GPIO1_TRIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO2_TRIG_EN_TX_HI:8;
      uint64_t GPIO2_TRIG_EN_TX_LO:8;
      uint64_t GPIO2_TRIG_EN_RX_HI:8;
      uint64_t GPIO2_TRIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO3_TRIG_EN_TX_HI:8;
      uint64_t GPIO3_TRIG_EN_TX_LO:8;
      uint64_t GPIO3_TRIG_EN_RX_HI:8;
      uint64_t GPIO3_TRIG_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_BIAS_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_BIAS_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_FCAL_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_FCAL_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_LF_PD_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_LF_PD_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_ADC_BUF_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_ADC_BUF_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_AUXPLL_DIG_BUF_EN_RX_HI:8;
      uint64_t RXTX_AUXPLL_DIG_BUF_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RXTX_RCCAL_EN_RX_HI:8;
      uint64_t RXTX_RCCAL_EN_RX_LO:8;
    } __attribute__((packed)) B;
  } TIMING57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HPM_DAC_EN_TX_HI:8;
      uint64_t TX_HPM_DAC_EN_TX_LO:8;
    } __attribute__((packed)) B;
  } TIMING58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_HF_EN_OVRD_EN:1;
      uint64_t BB_LDO_HF_EN_OVRD:1;
      uint64_t BB_LDO_ADCDAC_EN_OVRD_EN:1;
      uint64_t BB_LDO_ADCDAC_EN_OVRD:1;
      uint64_t BB_LDO_BBA_EN_OVRD_EN:1;
      uint64_t BB_LDO_BBA_EN_OVRD:1;
      uint64_t BB_LDO_PD_EN_OVRD_EN:1;
      uint64_t BB_LDO_PD_EN_OVRD:1;
      uint64_t BB_LDO_FDBK_EN_OVRD_EN:1;
      uint64_t BB_LDO_FDBK_EN_OVRD:1;
      uint64_t BB_LDO_VCOLO_EN_OVRD_EN:1;
      uint64_t BB_LDO_VCOLO_EN_OVRD:1;
      uint64_t BB_LDO_VTREF_EN_OVRD_EN:1;
      uint64_t BB_LDO_VTREF_EN_OVRD:1;
      uint64_t BB_LDO_FDBK_BLEED_EN_OVRD_EN:1;
      uint64_t BB_LDO_FDBK_BLEED_EN_OVRD:1;
      uint64_t BB_LDO_VCOLO_BLEED_EN_OVRD_EN:1;
      uint64_t BB_LDO_VCOLO_BLEED_EN_OVRD:1;
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_OVRD_EN:1;
      uint64_t BB_LDO_VCOLO_FASTCHARGE_EN_OVRD:1;
      uint64_t BB_XTAL_PLL_REF_CLK_EN_OVRD_EN:1;
      uint64_t BB_XTAL_PLL_REF_CLK_EN_OVRD:1;
      uint64_t BB_XTAL_DAC_REF_CLK_EN_OVRD_EN:1;
      uint64_t BB_XTAL_DAC_REF_CLK_EN_OVRD:1;
      uint64_t BB_XTAL_AUXPLL_REF_CLK_EN_OVRD_EN:1;
      uint64_t BB_XTAL_AUXPLL_REF_CLK_EN_OVRD:1;
      uint64_t PLL_LOOP_IS_OPEN_OVRD_EN:1;
      uint64_t PLL_LOOP_IS_OPEN_OVRD:1;
      uint64_t SY_PD_CYCLE_SLIP_LD_EN_OVRD_EN:1;
      uint64_t SY_PD_CYCLE_SLIP_LD_EN_OVRD:1;
      uint64_t SY_VCO_EN_OVRD_EN:1;
      uint64_t SY_VCO_EN_OVRD:1;
    } __attribute__((packed)) B;
  } OVRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_LO_RX_BUF_EN_OVRD_EN:1;
      uint64_t SY_LO_RX_BUF_EN_OVRD:1;
      uint64_t SY_LO_TX_BUF_EN_OVRD_EN:1;
      uint64_t SY_LO_TX_BUF_EN_OVRD:1;
      uint64_t SY_DIVN_EN_OVRD_EN:1;
      uint64_t SY_DIVN_EN_OVRD:1;
      uint64_t SY_PD_FILTER_CHARGE_EN_OVRD_EN:1;
      uint64_t SY_PD_FILTER_CHARGE_EN_OVRD:1;
      uint64_t SY_PD_EN_OVRD_EN:1;
      uint64_t SY_PD_EN_OVRD:1;
      uint64_t SY_LO_DIVN_EN_OVRD_EN:1;
      uint64_t SY_LO_DIVN_EN_OVRD:1;
      uint64_t SY_LO_RX_EN_OVRD_EN:1;
      uint64_t SY_LO_RX_EN_OVRD:1;
      uint64_t SY_LO_TX_EN_OVRD_EN:1;
      uint64_t SY_LO_TX_EN_OVRD:1;
      uint64_t SY_DIVN_CAL_EN_OVRD_EN:1;
      uint64_t SY_DIVN_CAL_EN_OVRD:1;
      uint64_t RX_MIXER_EN_OVRD_EN:1;
      uint64_t RX_MIXER_EN_OVRD:1;
      uint64_t TX_PA_EN_OVRD_EN:1;
      uint64_t TX_PA_EN_OVRD:1;
      uint64_t RX_ADC_I_EN_OVRD_EN:1;
      uint64_t RX_ADC_I_EN_OVRD:1;
      uint64_t RX_ADC_Q_EN_OVRD_EN:1;
      uint64_t RX_ADC_Q_EN_OVRD:1;
      uint64_t RX_ADC_RESET_EN_OVRD_EN:1;
      uint64_t RX_ADC_RESET_EN_OVRD:1;
      uint64_t RX_BBA_I_EN_OVRD_EN:1;
      uint64_t RX_BBA_I_EN_OVRD:1;
      uint64_t RX_BBA_Q_EN_OVRD_EN:1;
      uint64_t RX_BBA_Q_EN_OVRD:1;
    } __attribute__((packed)) B;
  } OVRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BBA_PDET_EN_OVRD_EN:1;
      uint64_t RX_BBA_PDET_EN_OVRD:1;
      uint64_t RX_BBA_DCOC_EN_OVRD_EN:1;
      uint64_t RX_BBA_DCOC_EN_OVRD:1;
      uint64_t RX_LNA_EN_OVRD_EN:1;
      uint64_t RX_LNA_EN_OVRD:1;
      uint64_t RX_TZA_I_EN_OVRD_EN:1;
      uint64_t RX_TZA_I_EN_OVRD:1;
      uint64_t RX_TZA_Q_EN_OVRD_EN:1;
      uint64_t RX_TZA_Q_EN_OVRD:1;
      uint64_t RX_TZA_PDET_EN_OVRD_EN:1;
      uint64_t RX_TZA_PDET_EN_OVRD:1;
      uint64_t RX_TZA_DCOC_EN_OVRD_EN:1;
      uint64_t RX_TZA_DCOC_EN_OVRD:1;
      uint64_t PLL_DIG_EN_OVRD_EN:1;
      uint64_t PLL_DIG_EN_OVRD:1;
      uint64_t TX_DIG_EN_OVRD_EN:1;
      uint64_t TX_DIG_EN_OVRD:1;
      uint64_t RX_DIG_EN_OVRD_EN:1;
      uint64_t RX_DIG_EN_OVRD:1;
      uint64_t RX_INIT_OVRD_EN:1;
      uint64_t RX_INIT_OVRD:1;
      uint64_t SIGMA_DELTA_EN_OVRD_EN:1;
      uint64_t SIGMA_DELTA_EN_OVRD:1;
      uint64_t RX_PHY_EN_OVRD_EN:1;
      uint64_t RX_PHY_EN_OVRD:1;
      uint64_t DCOC_EN_OVRD_EN:1;
      uint64_t DCOC_EN_OVRD:1;
      uint64_t DCOC_INIT_OVRD_EN:1;
      uint64_t DCOC_INIT_OVRD:1;
      uint64_t FREQ_TARG_LD_EN_OVRD_EN:1;
      uint64_t FREQ_TARG_LD_EN_OVRD:1;
    } __attribute__((packed)) B;
  } OVRD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSM_SPARE0_EN_OVRD_EN:1;
      uint64_t TSM_SPARE0_EN_OVRD:1;
      uint64_t TSM_SPARE1_EN_OVRD_EN:1;
      uint64_t TSM_SPARE1_EN_OVRD:1;
      uint64_t TSM_SPARE2_EN_OVRD_EN:1;
      uint64_t TSM_SPARE2_EN_OVRD:1;
      uint64_t TSM_SPARE3_EN_OVRD_EN:1;
      uint64_t TSM_SPARE3_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_BIAS_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_BIAS_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_VCO_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_VCO_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_FCAL_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_FCAL_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_LF_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_LF_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_PD_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_PD_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_PD_LF_FILTER_CHARGE_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_ADC_BUF_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_ADC_BUF_EN_OVRD:1;
      uint64_t RXTX_AUXPLL_DIG_BUF_EN_OVRD_EN:1;
      uint64_t RXTX_AUXPLL_DIG_BUF_EN_OVRD:1;
      uint64_t RXTX_RCCAL_EN_OVRD_EN:1;
      uint64_t RXTX_RCCAL_EN_OVRD:1;
      uint64_t TX_HPM_DAC_EN_OVRD_EN:1;
      uint64_t TX_HPM_DAC_EN_OVRD:1;
      uint64_t TX_MODE_OVRD_EN:1;
      uint64_t TX_MODE_OVRD:1;
      uint64_t RX_MODE_OVRD_EN:1;
      uint64_t RX_MODE_OVRD:1;
    } __attribute__((packed)) B;
  } OVRD3;

} __attribute__((packed));

#define XCVR_TSM (*(volatile struct XCVR_TSM_tag *) 0x4005c2c0)

struct XCVR_PHY_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSK_PREAMBLE_REF0:32;
    } __attribute__((packed)) B;
  } PRE_REF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSK_PREAMBLE_REF1:32;
    } __attribute__((packed)) B;
  } PRE_REF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSK_PREAMBLE_REF2:16;
    } __attribute__((packed)) B;
  } PRE_REF2;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AA_PLAYBACK:1;
      uint64_t AA_OUTPUT_SEL:1;
      uint64_t FSK_BIT_INVERT:1;
      uint64_t RFU00:1;
      uint64_t BSM_EN_BLE:1;
      uint64_t DEMOD_CLK_MODE:2;
      uint64_t CTS_THRESH:8;
      uint64_t reservedSpace1:4;
      uint64_t FSK_FTS_TIMEOUT:3;
      uint64_t reservedSpace2:1;
      uint64_t RFU01:1;
      uint64_t RFU02:1;
      uint64_t reservedSpace3:2;
      uint64_t BLE_NTW_ADR_THR:3;
    } __attribute__((packed)) B;
  } CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHY_FIFO_PRECHG:4;
      uint64_t RFU03:1;
      uint64_t RFU04:1;
      uint64_t RFU05:1;
      uint64_t RFU06:1;
      uint64_t X2_DEMOD_GAIN:4;
      uint64_t reservedSpace0:4;
      uint64_t RFU07:1;
      uint64_t RFU08:1;
      uint64_t RFU09:1;
      uint64_t RFU10:1;
      uint64_t RFU11:1;
      uint64_t RFU12:1;
      uint64_t RFU13:1;
      uint64_t RFU14:1;
      uint64_t RFU15:1;
      uint64_t RFU16:1;
      uint64_t reservedSpace1:5;
      uint64_t PHY_CLK_ON:1;
    } __attribute__((packed)) B;
  } CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EL_ENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t EL_WIN_SIZE:4;
      uint64_t reservedSpace1:4;
      uint64_t EL_INTERVAL:6;
    } __attribute__((packed)) B;
  } EL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_BSM:32;
    } __attribute__((packed)) B;
  } NTW_ADR_BSM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREAMBLE_FOUND:1;
      uint64_t AA_SFD_MATCHED:1;
      uint64_t reservedSpace0:2;
      uint64_t AA_MATCHED:4;
      uint64_t HAMMING_DISTANCE:3;
      uint64_t reservedSpace1:1;
      uint64_t DATA_FIFO_DEPTH:4;
      uint64_t CFO_ESTIMATE:8;
    } __attribute__((packed)) B;
  } STATUS;

} __attribute__((packed));

#define XCVR_PHY (*(volatile struct XCVR_PHY_tag *) 0x4005c400)

struct XCVR_ANALOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_ADCDAC_BYP:1;
      uint64_t BB_LDO_ADCDAC_DIAGSEL:1;
      uint64_t BB_LDO_ADCDAC_SPARE:2;
      uint64_t BB_LDO_ADCDAC_TRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BB_LDO_BBA_BYP:1;
      uint64_t BB_LDO_BBA_DIAGSEL:1;
      uint64_t BB_LDO_BBA_SPARE:2;
      uint64_t BB_LDO_BBA_TRIM:3;
      uint64_t reservedSpace1:1;
      uint64_t BB_LDO_FDBK_BYP:1;
      uint64_t BB_LDO_FDBK_DIAGSEL:1;
      uint64_t BB_LDO_FDBK_SPARE:2;
      uint64_t BB_LDO_FDBK_TRIM:3;
      uint64_t reservedSpace2:1;
      uint64_t BB_LDO_HF_BYP:1;
      uint64_t BB_LDO_HF_DIAGSEL:1;
      uint64_t BB_LDO_HF_SPARE:2;
      uint64_t BB_LDO_HF_TRIM:3;
    } __attribute__((packed)) B;
  } BB_LDO_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_LDO_PD_BYP:1;
      uint64_t BB_LDO_PD_DIAGSEL:1;
      uint64_t BB_LDO_PD_SPARE:2;
      uint64_t BB_LDO_PD_TRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BB_LDO_VCO_SPARE:2;
      uint64_t BB_LDO_VCOLO_BYP:1;
      uint64_t BB_LDO_VCOLO_DIAGSEL:1;
      uint64_t BB_LDO_VCOLO_TRIM:3;
      uint64_t reservedSpace1:1;
      uint64_t BB_LDO_VTREF_DIAGSEL:1;
      uint64_t BB_LDO_VTREF_TC:2;
    } __attribute__((packed)) B;
  } BB_LDO_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_ADC_BUMP:8;
      uint64_t RX_ADC_FS_SEL:2;
      uint64_t RX_ADC_I_DIAGSEL:1;
      uint64_t RX_ADC_Q_DIAGSEL:1;
      uint64_t RX_ADC_SPARE:4;
    } __attribute__((packed)) B;
  } RX_ADC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BBA_BW_SEL:3;
      uint64_t RX_BBA_CUR_BUMP:1;
      uint64_t RX_BBA_DIAGSEL1:1;
      uint64_t RX_BBA_DIAGSEL2:1;
      uint64_t RX_BBA_DIAGSEL3:1;
      uint64_t RX_BBA_DIAGSEL4:1;
      uint64_t reservedSpace0:8;
      uint64_t RX_BBA_SPARE:6;
      uint64_t reservedSpace1:2;
      uint64_t RX_BBA2_BW_SEL:3;
      uint64_t reservedSpace2:1;
      uint64_t RX_BBA2_SPARE:3;
    } __attribute__((packed)) B;
  } RX_BBA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_LNA_BUMP:4;
      uint64_t RX_LNA_HG_DIAGSEL:1;
      uint64_t RX_LNA_HIZ_ENABLE:1;
      uint64_t RX_LNA_LG_DIAGSEL:1;
      uint64_t reservedSpace0:1;
      uint64_t RX_LNA_SPARE:2;
      uint64_t reservedSpace1:6;
      uint64_t RX_MIXER_BUMP:4;
      uint64_t RX_MIXER_SPARE:1;
    } __attribute__((packed)) B;
  } RX_LNA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TZA_BW_SEL:3;
      uint64_t RX_TZA_CUR_BUMP:1;
      uint64_t RX_TZA_GAIN_BUMP:1;
      uint64_t reservedSpace0:11;
      uint64_t RX_TZA_SPARE:6;
      uint64_t reservedSpace1:2;
      uint64_t RX_TZA1_DIAGSEL:1;
      uint64_t RX_TZA2_DIAGSEL:1;
      uint64_t RX_TZA3_DIAGSEL:1;
      uint64_t RX_TZA4_DIAGSEL:1;
    } __attribute__((packed)) B;
  } RX_TZA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIAS_TRIM:3;
      uint64_t DIAGSEL1:1;
      uint64_t DIAGSEL2:1;
      uint64_t LF_CNTL:3;
      uint64_t SPARE:4;
      uint64_t VCO_DAC_REF_ADJUST:4;
      uint64_t VTUNE_TESTMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t RXTX_BAL_BIAST:2;
      uint64_t reservedSpace1:2;
      uint64_t RXTX_BAL_SPARE:3;
      uint64_t reservedSpace2:1;
      uint64_t RXTX_RCCAL_DIAGSEL:1;
    } __attribute__((packed)) B;
  } RX_AUXPLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_DIVN_SPARE:1;
      uint64_t SY_FCAL_SPARE:1;
      uint64_t reservedSpace0:2;
      uint64_t SY_LO_BUMP_RTLO_FDBK:2;
      uint64_t SY_LO_BUMP_RTLO_RX:2;
      uint64_t SY_LO_BUMP_RTLO_TX:2;
      uint64_t SY_LO_DIAGSEL:1;
      uint64_t reservedSpace1:1;
      uint64_t SY_LO_SPARE:3;
      uint64_t reservedSpace2:1;
      uint64_t SY_LPF_FILT_CTRL:3;
      uint64_t SY_LPF_SPARE:1;
      uint64_t SY_PD_DIAGSEL:1;
      uint64_t SY_PD_PCH_TUNE:2;
      uint64_t SY_PD_PCH_SEL:1;
      uint64_t SY_PD_SPARE:2;
      uint64_t reservedSpace3:2;
      uint64_t SY_PD_VTUNE_OVERRIDE_TEST_MODE:1;
    } __attribute__((packed)) B;
  } SY_CTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SY_VCO_BIAS:3;
      uint64_t SY_VCO_DIAGSEL:1;
      uint64_t SY_VCO_KV:3;
      uint64_t reservedSpace0:1;
      uint64_t SY_VCO_KVM:3;
      uint64_t reservedSpace1:1;
      uint64_t SY_VCO_PK_DET_ON:1;
      uint64_t reservedSpace2:1;
      uint64_t SY_VCO_SPARE:3;
    } __attribute__((packed)) B;
  } SY_CTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_DAC_BUMP_CAP:2;
      uint64_t reservedSpace0:1;
      uint64_t TX_DAC_BUMP_IDAC:2;
      uint64_t reservedSpace1:1;
      uint64_t TX_DAC_BUMP_RLOAD:2;
      uint64_t reservedSpace2:1;
      uint64_t TX_DAC_DIAGSEL:1;
      uint64_t TX_DAC_INVERT_CLK:1;
      uint64_t TX_DAC_OPAMP_DIAGSEL:1;
      uint64_t reservedSpace3:1;
      uint64_t TX_DAC_SPARE:3;
      uint64_t reservedSpace4:1;
      uint64_t TX_PA_BUMP_VBIAS:3;
      uint64_t reservedSpace5:1;
      uint64_t TX_PA_DIAGSEL:1;
      uint64_t reservedSpace6:1;
      uint64_t TX_PA_SPARE:3;
    } __attribute__((packed)) B;
  } TX_DAC_PA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTX_BAL_TX_CODE:24;
    } __attribute__((packed)) B;
  } BALUN_TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTX_BAL_RX_CODE:24;
    } __attribute__((packed)) B;
  } BALUN_RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_FREQ_COUNTER:19;
      uint64_t reservedSpace0:1;
      uint64_t CTUNE_MAX_DIFF:12;
    } __attribute__((packed)) B;
  } DFT_OBSV_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYN_BIST_MAX_DIFF:17;
      uint64_t reservedSpace0:7;
      uint64_t SYN_BIST_MAX_DIFF_CH:7;
      uint64_t SYN_BIST_IGNORE_FAILS:1;
    } __attribute__((packed)) B;
  } DFT_OBSV_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPM_BIST_INCREMENT:3;
      uint64_t reservedSpace0:5;
      uint64_t HPM_BIST_STOP:8;
      uint64_t HPM_BIST_START:8;
    } __attribute__((packed)) B;
  } DFT_OBSV_3;

} __attribute__((packed));

#define XCVR_ANALOG (*(volatile struct XCVR_ANALOG_tag *) 0x4005c500)

struct XCVR_PKT_RAM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_239;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_240;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_241;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_242;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_243;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_244;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_245;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_246;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_247;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_248;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_249;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_250;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_251;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_252;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_253;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_254;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_255;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_256;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_257;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_258;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_259;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_260;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_261;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_262;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_263;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_264;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_265;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_266;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_267;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_268;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_269;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_270;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_271;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_272;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_273;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_274;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_275;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_276;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_277;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_278;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_279;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_280;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_281;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_282;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_283;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_284;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_285;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_286;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_287;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_288;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_289;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_290;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_291;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_292;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_293;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_294;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_295;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_296;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_297;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_298;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_299;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_300;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_301;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_302;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_303;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_304;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_305;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_306;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_307;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_308;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_309;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_310;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_311;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_312;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_313;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_314;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_315;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_316;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_317;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_318;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_319;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_320;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_321;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_322;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_323;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_324;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_325;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_326;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_327;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_328;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_329;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_330;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_331;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_332;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_333;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_334;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_335;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_336;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_337;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_338;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_339;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_340;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_341;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_342;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_343;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_344;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_345;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_346;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_347;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_348;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_349;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_350;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_351;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_352;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_353;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_354;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_355;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_356;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_357;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_358;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_359;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_360;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_361;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_362;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_363;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_364;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_365;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_366;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_367;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_368;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_369;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_370;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_371;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_372;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_373;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_374;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_375;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_376;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_377;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_378;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_379;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_380;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_381;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_382;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_383;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_384;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_385;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_386;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_387;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_388;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_389;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_390;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_391;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_392;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_393;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_394;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_395;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_396;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_397;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_398;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_399;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_400;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_401;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_402;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_403;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_404;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_405;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_406;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_407;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_408;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_409;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_410;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_411;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_412;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_413;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_414;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_415;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_416;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_417;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_418;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_419;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_420;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_421;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_422;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_423;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_424;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_425;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_426;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_427;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_428;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_429;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_430;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_431;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_432;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_433;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_434;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_435;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_436;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_437;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_438;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_439;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_440;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_441;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_442;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_443;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_444;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_445;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_446;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_447;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_448;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_449;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_450;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_451;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_452;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_453;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_454;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_455;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_456;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_457;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_458;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_459;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_460;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_461;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_462;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_463;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_464;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_465;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_466;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_467;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_468;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_469;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_470;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_471;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_472;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_473;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_474;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_475;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_476;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_477;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_478;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_479;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_480;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_481;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_482;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_483;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_484;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_485;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_486;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_487;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_488;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_489;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_490;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_491;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_492;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_493;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_494;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_495;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_496;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_497;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_498;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_499;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_500;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_501;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_502;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_503;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_504;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_505;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_506;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_507;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_508;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_509;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_510;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_511;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_512;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_513;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_514;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_515;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_516;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_517;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_518;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_519;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_520;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_521;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_522;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_523;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_524;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_525;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_526;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_527;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_528;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_529;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_530;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_531;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_532;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_533;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_534;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_535;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_536;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_537;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_538;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_539;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_540;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_541;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_542;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_543;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_544;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_545;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_546;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_547;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_548;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_549;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_550;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_551;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_552;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_553;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_554;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_555;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_556;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_557;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_558;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_559;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_560;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_561;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_562;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_563;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_564;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_565;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_566;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_567;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_568;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_569;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_570;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_571;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_572;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_573;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_574;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_575;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_576;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_577;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_578;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_579;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_580;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_581;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_582;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_583;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_584;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_585;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_586;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_587;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_588;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_589;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_590;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_591;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_592;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_593;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_594;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_595;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_596;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_597;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_598;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_599;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_600;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_601;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_602;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_603;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_604;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_605;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_606;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_607;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_608;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_609;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_610;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_611;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_612;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_613;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_614;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_615;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_616;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_617;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_618;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_619;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_620;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_621;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_622;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_623;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_624;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_625;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_626;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_627;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_628;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_629;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_630;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_631;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_632;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_633;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_634;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_635;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_636;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_637;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_638;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_639;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_640;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_641;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_642;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_643;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_644;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_645;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_646;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_647;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_648;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_649;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_650;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_651;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_652;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_653;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_654;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_655;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_656;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_657;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_658;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_659;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_660;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_661;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_662;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_663;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_664;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_665;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_666;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_667;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_668;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_669;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_670;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_671;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_672;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_673;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_674;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_675;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_676;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_677;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_678;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_679;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_680;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_681;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_682;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_683;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_684;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_685;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_686;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_687;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_688;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_689;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_690;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_691;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_692;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_693;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_694;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_695;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_696;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_697;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_698;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_699;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_700;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_701;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_702;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_703;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_704;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_705;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_706;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_707;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_708;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_709;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_710;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_711;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_712;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_713;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_714;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_715;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_716;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_717;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_718;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_719;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_720;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_721;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_722;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_723;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_724;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_725;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_726;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_727;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_728;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_729;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_730;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_731;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_732;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_733;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_734;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_735;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_736;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_737;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_738;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_739;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_740;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_741;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_742;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_743;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_744;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_745;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_746;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_747;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_748;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_749;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_750;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_751;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_752;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_753;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_754;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_755;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_756;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_757;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_758;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_759;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_760;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_761;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_762;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_763;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_764;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_765;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_766;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_767;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_768;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_769;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_770;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_771;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_772;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_773;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_774;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_775;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_776;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_777;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_778;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_779;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_780;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_781;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_782;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_783;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_784;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_785;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_786;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_787;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_788;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_789;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_790;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_791;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_792;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_793;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_794;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_795;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_796;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_797;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_798;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_799;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_800;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_801;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_802;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_803;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_804;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_805;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_806;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_807;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_808;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_809;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_810;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_811;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_812;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_813;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_814;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_815;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_816;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_817;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_818;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_819;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_820;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_821;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_822;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_823;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_824;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_825;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_826;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_827;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_828;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_829;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_830;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_831;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_832;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_833;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_834;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_835;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_836;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_837;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_838;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_839;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_840;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_841;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_842;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_843;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_844;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_845;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_846;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_847;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_848;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_849;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_850;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_851;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_852;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_853;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_854;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_855;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_856;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_857;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_858;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_859;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_860;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_861;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_862;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_863;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_864;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_865;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_866;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_867;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_868;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_869;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_870;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_871;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_872;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_873;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_874;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_875;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_876;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_877;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_878;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_879;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_880;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_881;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_882;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_883;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_884;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_885;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_886;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_887;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_888;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_889;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_890;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_891;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_892;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_893;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_894;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_895;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_896;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_897;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_898;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_899;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_900;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_901;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_902;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_903;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_904;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_905;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_906;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_907;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_908;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_909;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_910;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_911;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_912;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_913;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_914;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_915;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_916;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_917;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_918;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_919;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_920;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_921;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_922;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_923;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_924;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_925;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_926;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_927;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_928;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_929;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_930;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_931;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_932;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_933;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_934;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_935;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_936;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_937;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_938;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_939;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_940;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_941;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_942;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_943;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_944;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_945;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_946;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_947;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_948;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_949;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_950;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_951;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_952;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_953;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_954;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_955;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_956;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_957;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_958;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_959;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_960;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_961;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_962;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_963;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_964;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_965;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_966;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_967;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_968;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_969;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_970;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_971;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_972;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_973;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_974;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_975;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_976;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_977;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_978;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_979;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_980;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_981;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_982;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_983;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_984;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_985;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_986;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_987;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_988;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_989;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_990;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_991;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_992;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_993;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_994;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_995;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_996;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_997;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_998;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_999;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1000;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1001;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1002;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1003;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1004;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1005;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1006;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1007;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1008;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1009;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1010;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1011;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1012;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1013;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1014;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1015;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1016;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1017;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1018;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1019;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1020;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1021;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1022;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1023;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1024;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1025;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1026;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1027;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1028;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1029;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1030;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1031;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1032;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1033;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1034;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1035;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1036;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1037;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1038;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1039;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1040;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1041;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1042;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1043;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1044;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1045;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1046;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1047;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1048;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1049;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1050;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1051;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1052;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1053;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1054;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1055;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1056;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1057;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1058;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1059;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1060;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1061;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1062;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1063;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1064;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1065;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1066;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1067;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1068;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1069;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1070;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1071;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1072;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1073;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1074;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1075;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1076;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1077;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1078;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1079;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1080;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1081;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1082;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1083;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1084;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1085;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1086;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1087;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1088;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1089;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1090;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1091;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1092;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1093;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1094;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1095;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1096;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1097;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1098;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1099;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LSBYTE:8;
      uint64_t MSBYTE:8;
    } __attribute__((packed)) B;
  } PACKET_RAM_1151;

} __attribute__((packed));

#define XCVR_PKT_RAM (*(volatile struct XCVR_PKT_RAM_tag *) 0x4005c700)

struct GENFSK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQ_END_IRQ:1;
      uint64_t TX_IRQ:1;
      uint64_t RX_IRQ:1;
      uint64_t NTW_ADR_IRQ:1;
      uint64_t T1_IRQ:1;
      uint64_t T2_IRQ:1;
      uint64_t PLL_UNLOCK_IRQ:1;
      uint64_t WAKE_IRQ:1;
      uint64_t RX_WATERMARK_IRQ:1;
      uint64_t TSM_IRQ:1;
      uint64_t reservedSpace0:6;
      uint64_t SEQ_END_IRQ_EN:1;
      uint64_t TX_IRQ_EN:1;
      uint64_t RX_IRQ_EN:1;
      uint64_t NTW_ADR_IRQ_EN:1;
      uint64_t T1_IRQ_EN:1;
      uint64_t T2_IRQ_EN:1;
      uint64_t PLL_UNLOCK_IRQ_EN:1;
      uint64_t WAKE_IRQ_EN:1;
      uint64_t RX_WATERMARK_IRQ_EN:1;
      uint64_t TSM_IRQ_EN:1;
      uint64_t GENERIC_FSK_IRQ_EN:1;
      uint64_t CRC_IGNORE:1;
      uint64_t reservedSpace1:3;
      uint64_t CRC_VALID:1;
    } __attribute__((packed)) B;
  } IRQ_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENT_TMR:24;
      uint64_t EVENT_TMR_LD:1;
      uint64_t EVENT_TMR_ADD:1;
    } __attribute__((packed)) B;
  } EVENT_TMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T1_CMP:24;
      uint64_t T1_CMP_EN:1;
    } __attribute__((packed)) B;
  } T1_CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T2_CMP:24;
      uint64_t T2_CMP_EN:1;
    } __attribute__((packed)) B;
  } T2_CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMESTAMP:24;
    } __attribute__((packed)) B;
  } TIMESTAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQCMD:4;
      uint64_t reservedSpace0:4;
      uint64_t LENGTH_EXT:11;
      uint64_t reservedSpace1:5;
      uint64_t CMDDEC_CS:3;
      uint64_t reservedSpace2:4;
      uint64_t XCVR_BUSY:1;
    } __attribute__((packed)) B;
  } XCVR_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_START_T1_PEND:1;
      uint64_t TX_START_T2_PEND:1;
      uint64_t TX_IN_WARMUP:1;
      uint64_t TX_IN_PROGRESS:1;
      uint64_t TX_IN_WARMDN:1;
      uint64_t RX_START_T1_PEND:1;
      uint64_t RX_START_T2_PEND:1;
      uint64_t RX_STOP_T1_PEND:1;
      uint64_t RX_STOP_T2_PEND:1;
      uint64_t RX_IN_WARMUP:1;
      uint64_t RX_IN_SEARCH:1;
      uint64_t RX_IN_PROGRESS:1;
      uint64_t RX_IN_WARMDN:1;
      uint64_t reservedSpace0:1;
      uint64_t LQI_VALID:1;
      uint64_t CRC_VALID:1;
      uint64_t RSSI:8;
      uint64_t LQI:8;
    } __attribute__((packed)) B;
  } XCVR_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_WHITEN_DIS:1;
      uint64_t RX_DEWHITEN_DIS:1;
      uint64_t SW_CRC_EN:1;
      uint64_t STOP_POSTPONE_ON_AA:1;
      uint64_t PREAMBLE_SZ:3;
      uint64_t reservedSpace0:1;
      uint64_t TX_WARMUP:8;
      uint64_t RX_WARMUP:8;
    } __attribute__((packed)) B;
  } XCVR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNEL_NUM:7;
    } __attribute__((packed)) B;
  } CHANNEL_NUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_POWER:6;
    } __attribute__((packed)) B;
  } TX_POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_EN:4;
      uint64_t NTW_ADR_MCH:4;
      uint64_t NTW_ADR0_SZ:2;
      uint64_t NTW_ADR1_SZ:2;
      uint64_t NTW_ADR2_SZ:2;
      uint64_t NTW_ADR3_SZ:2;
      uint64_t NTW_ADR_THR0:3;
      uint64_t reservedSpace0:1;
      uint64_t NTW_ADR_THR1:3;
      uint64_t reservedSpace1:1;
      uint64_t NTW_ADR_THR2:3;
      uint64_t reservedSpace2:1;
      uint64_t NTW_ADR_THR3:3;
    } __attribute__((packed)) B;
  } NTW_ADR_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_0:32;
    } __attribute__((packed)) B;
  } NTW_ADR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_1:32;
    } __attribute__((packed)) B;
  } NTW_ADR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_2:32;
    } __attribute__((packed)) B;
  } NTW_ADR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NTW_ADR_3:32;
    } __attribute__((packed)) B;
  } NTW_ADR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_WATERMARK:13;
      uint64_t reservedSpace0:3;
      uint64_t BYTE_COUNTER:13;
    } __attribute__((packed)) B;
  } RX_WATERMARK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEN_SLEEP_REQUEST:1;
    } __attribute__((packed)) B;
  } DSM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_ID:8;
    } __attribute__((packed)) B;
  } PART_ID;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH_SZ:5;
      uint64_t LENGTH_BIT_ORD:1;
      uint64_t SYNC_ADDR_SZ:2;
      uint64_t LENGTH_ADJ:8;
      uint64_t H0_SZ:5;
      uint64_t LENGTH_ADJ_UNSIGNED:1;
      uint64_t reservedSpace0:2;
      uint64_t H1_SZ:5;
      uint64_t H1_FAIL:1;
      uint64_t H0_FAIL:1;
      uint64_t LENGTH_FAIL:1;
    } __attribute__((packed)) B;
  } PACKET_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H0_MATCH:16;
      uint64_t H0_MASK:16;
    } __attribute__((packed)) B;
  } H0_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t H1_MATCH:16;
      uint64_t H1_MASK:16;
    } __attribute__((packed)) B;
  } H1_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SZ:3;
      uint64_t reservedSpace0:5;
      uint64_t CRC_START_BYTE:4;
      uint64_t reservedSpace1:4;
      uint64_t CRC_REF_IN:1;
      uint64_t CRC_REF_OUT:1;
      uint64_t CRC_BYTE_ORD:1;
    } __attribute__((packed)) B;
  } CRC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEED:32;
    } __attribute__((packed)) B;
  } CRC_INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_POLY:32;
    } __attribute__((packed)) B;
  } CRC_POLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_XOR_OUT:32;
    } __attribute__((packed)) B;
  } CRC_XOR_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHITEN_START:2;
      uint64_t WHITEN_END:1;
      uint64_t WHITEN_B4_CRC:1;
      uint64_t WHITEN_POLY_TYPE:1;
      uint64_t WHITEN_REF_IN:1;
      uint64_t WHITEN_PAYLOAD_REINIT:1;
      uint64_t reservedSpace0:1;
      uint64_t WHITEN_SIZE:4;
      uint64_t MANCHESTER_EN:1;
      uint64_t MANCHESTER_INV:1;
      uint64_t MANCHESTER_START:1;
      uint64_t reservedSpace1:1;
      uint64_t WHITEN_INIT:9;
    } __attribute__((packed)) B;
  } WHITEN_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHITEN_POLY:9;
    } __attribute__((packed)) B;
  } WHITEN_POLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WHITEN_SZ_THR:12;
      uint64_t reservedSpace0:4;
      uint64_t LENGTH_MAX:7;
      uint64_t REC_BAD_PKT:1;
    } __attribute__((packed)) B;
  } WHITEN_SZ_THR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BITRATE:2;
    } __attribute__((packed)) B;
  } BITRATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PB_PARTITION:11;
    } __attribute__((packed)) B;
  } PB_PARTITION;

  uint8_t res1[1648];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_239;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_240;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_241;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_242;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_243;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_244;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_245;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_246;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_247;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_248;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_249;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_250;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_251;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_252;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_253;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_254;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_255;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_256;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_257;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_258;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_259;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_260;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_261;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_262;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_263;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_264;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_265;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_266;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_267;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_268;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_269;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_270;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_271;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_272;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_273;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_274;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_275;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_276;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_277;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_278;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_279;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_280;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_281;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_282;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_283;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_284;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_285;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_286;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_287;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_288;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_289;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_290;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_291;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_292;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_293;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_294;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_295;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_296;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_297;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_298;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_299;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_300;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_301;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_302;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_303;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_304;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_305;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_306;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_307;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_308;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_309;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_310;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_311;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_312;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_313;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_314;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_315;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_316;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_317;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_318;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_319;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_320;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_321;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_322;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_323;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_324;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_325;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_326;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_327;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_328;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_329;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_330;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_331;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_332;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_333;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_334;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_335;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_336;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_337;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_338;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_339;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_340;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_341;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_342;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_343;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_344;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_345;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_346;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_347;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_348;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_349;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_350;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_351;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_352;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_353;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_354;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_355;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_356;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_357;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_358;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_359;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_360;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_361;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_362;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_363;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_364;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_365;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_366;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_367;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_368;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_369;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_370;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_371;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_372;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_373;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_374;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_375;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_376;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_377;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_378;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_379;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_380;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_381;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_382;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_383;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_384;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_385;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_386;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_387;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_388;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_389;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_390;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_391;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_392;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_393;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_394;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_395;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_396;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_397;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_398;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_399;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_400;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_401;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_402;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_403;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_404;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_405;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_406;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_407;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_408;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_409;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_410;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_411;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_412;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_413;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_414;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_415;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_416;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_417;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_418;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_419;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_420;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_421;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_422;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_423;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_424;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_425;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_426;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_427;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_428;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_429;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_430;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_431;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_432;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_433;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_434;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_435;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_436;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_437;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_438;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_439;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_440;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_441;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_442;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_443;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_444;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_445;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_446;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_447;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_448;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_449;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_450;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_451;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_452;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_453;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_454;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_455;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_456;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_457;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_458;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_459;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_460;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_461;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_462;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_463;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_464;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_465;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_466;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_467;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_468;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_469;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_470;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_471;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_472;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_473;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_474;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_475;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_476;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_477;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_478;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_479;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_480;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_481;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_482;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_483;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_484;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_485;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_486;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_487;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_488;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_489;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_490;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_491;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_492;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_493;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_494;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_495;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_496;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_497;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_498;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_499;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_500;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_501;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_502;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_503;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_504;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_505;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_506;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_507;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_508;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_509;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_510;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_511;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_512;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_513;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_514;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_515;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_516;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_517;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_518;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_519;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_520;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_521;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_522;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_523;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_524;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_525;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_526;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_527;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_528;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_529;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_530;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_531;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_532;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_533;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_534;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_535;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_536;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_537;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_538;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_539;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_540;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_541;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_542;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_543;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_544;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_545;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_546;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_547;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_548;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_549;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_550;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_551;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_552;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_553;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_554;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_555;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_556;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_557;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_558;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_559;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_560;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_561;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_562;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_563;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_564;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_565;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_566;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_567;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_568;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_569;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_570;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_571;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_572;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_573;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_574;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_575;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_576;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_577;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_578;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_579;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_580;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_581;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_582;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_583;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_584;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_585;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_586;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_587;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_588;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_589;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_590;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_591;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_592;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_593;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_594;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_595;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_596;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_597;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_598;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_599;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_600;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_601;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_602;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_603;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_604;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_605;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_606;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_607;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_608;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_609;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_610;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_611;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_612;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_613;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_614;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_615;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_616;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_617;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_618;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_619;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_620;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_621;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_622;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_623;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_624;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_625;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_626;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_627;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_628;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_629;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_630;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_631;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_632;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_633;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_634;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_635;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_636;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_637;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_638;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_639;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_640;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_641;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_642;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_643;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_644;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_645;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_646;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_647;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_648;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_649;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_650;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_651;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_652;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_653;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_654;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_655;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_656;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_657;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_658;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_659;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_660;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_661;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_662;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_663;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_664;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_665;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_666;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_667;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_668;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_669;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_670;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_671;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_672;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_673;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_674;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_675;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_676;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_677;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_678;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_679;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_680;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_681;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_682;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_683;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_684;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_685;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_686;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_687;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_688;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_689;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_690;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_691;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_692;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_693;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_694;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_695;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_696;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_697;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_698;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_699;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_700;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_701;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_702;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_703;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_704;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_705;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_706;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_707;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_708;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_709;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_710;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_711;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_712;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_713;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_714;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_715;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_716;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_717;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_718;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_719;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_720;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_721;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_722;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_723;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_724;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_725;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_726;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_727;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_728;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_729;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_730;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_731;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_732;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_733;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_734;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_735;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_736;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_737;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_738;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_739;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_740;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_741;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_742;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_743;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_744;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_745;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_746;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_747;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_748;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_749;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_750;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_751;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_752;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_753;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_754;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_755;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_756;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_757;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_758;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_759;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_760;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_761;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_762;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_763;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_764;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_765;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_766;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_767;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_768;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_769;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_770;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_771;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_772;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_773;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_774;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_775;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_776;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_777;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_778;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_779;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_780;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_781;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_782;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_783;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_784;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_785;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_786;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_787;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_788;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_789;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_790;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_791;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_792;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_793;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_794;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_795;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_796;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_797;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_798;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_799;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_800;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_801;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_802;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_803;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_804;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_805;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_806;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_807;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_808;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_809;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_810;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_811;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_812;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_813;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_814;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_815;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_816;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_817;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_818;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_819;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_820;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_821;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_822;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_823;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_824;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_825;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_826;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_827;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_828;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_829;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_830;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_831;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_832;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_833;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_834;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_835;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_836;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_837;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_838;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_839;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_840;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_841;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_842;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_843;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_844;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_845;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_846;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_847;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_848;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_849;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_850;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_851;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_852;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_853;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_854;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_855;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_856;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_857;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_858;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_859;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_860;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_861;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_862;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_863;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_864;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_865;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_866;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_867;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_868;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_869;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_870;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_871;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_872;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_873;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_874;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_875;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_876;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_877;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_878;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_879;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_880;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_881;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_882;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_883;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_884;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_885;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_886;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_887;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_888;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_889;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_890;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_891;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_892;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_893;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_894;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_895;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_896;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_897;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_898;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_899;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_900;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_901;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_902;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_903;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_904;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_905;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_906;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_907;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_908;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_909;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_910;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_911;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_912;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_913;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_914;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_915;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_916;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_917;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_918;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_919;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_920;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_921;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_922;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_923;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_924;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_925;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_926;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_927;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_928;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_929;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_930;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_931;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_932;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_933;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_934;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_935;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_936;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_937;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_938;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_939;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_940;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_941;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_942;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_943;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_944;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_945;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_946;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_947;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_948;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_949;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_950;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_951;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_952;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_953;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_954;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_955;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_956;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_957;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_958;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_959;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_960;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_961;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_962;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_963;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_964;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_965;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_966;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_967;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_968;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_969;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_970;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_971;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_972;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_973;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_974;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_975;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_976;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_977;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_978;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_979;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_980;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_981;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_982;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_983;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_984;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_985;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_986;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_987;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_988;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_989;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_990;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_991;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_992;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_993;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_994;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_995;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_996;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_997;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_998;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_999;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1000;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1001;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1002;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1003;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1004;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1005;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1006;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1007;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1008;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1009;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1010;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1011;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1012;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1013;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1014;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1015;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1016;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1017;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1018;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1019;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1020;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1021;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1022;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1023;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1024;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1025;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1026;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1027;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1028;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1029;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1030;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1031;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1032;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1033;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1034;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1035;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1036;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1037;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1038;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1039;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1040;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1041;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1042;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1043;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1044;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1045;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1046;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1047;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1048;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1049;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1050;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1051;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1052;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1053;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1054;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1055;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1056;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1057;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1058;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1059;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1060;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1061;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1062;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1063;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1064;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1065;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1066;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1067;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1068;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1069;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1070;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1071;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1072;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1073;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1074;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1075;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1076;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1077;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1078;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1079;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1080;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1081;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1082;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1083;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1084;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1085;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1086;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PACKET_BUFFER:16;
    } __attribute__((packed)) B;
  } PACKET_BUFFER_1087;

} __attribute__((packed));

#define GENFSK (*(volatile struct GENFSK_tag *) 0x4005f000)

struct CMT_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t PH:8;
    } __attribute__((packed)) B;
  } CMT_CGH1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PL:8;
    } __attribute__((packed)) B;
  } CMT_CGL1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SH:8;
    } __attribute__((packed)) B;
  } CMT_CGH2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SL:8;
    } __attribute__((packed)) B;
  } CMT_CGL2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t IROPEN:1;
      uint64_t CMTPOL:1;
      uint64_t IROL:1;
    } __attribute__((packed)) B;
  } CMT_OC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MCGEN:1;
      uint64_t EOCIE:1;
      uint64_t FSK:1;
      uint64_t BASE:1;
      uint64_t EXSPC:1;
      uint64_t CMTDIV:2;
      uint64_t EOCF:1;
    } __attribute__((packed)) B;
  } CMT_MSC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:8;
    } __attribute__((packed)) B;
  } CMT_CMD1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MB:8;
    } __attribute__((packed)) B;
  } CMT_CMD2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SB:8;
    } __attribute__((packed)) B;
  } CMT_CMD3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SB:8;
    } __attribute__((packed)) B;
  } CMT_CMD4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PPSDIV:4;
    } __attribute__((packed)) B;
  } CMT_PPS;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DMA:1;
    } __attribute__((packed)) B;
  } CMT_DMA;

} __attribute__((packed));

#define CMT (*(volatile struct CMT_tag *) 0x40062000)

struct MCG_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t IREFSTEN:1;
      uint64_t IRCLKEN:1;
      uint64_t IREFS:1;
      uint64_t FRDIV:3;
      uint64_t CLKS:2;
    } __attribute__((packed)) B;
  } MCG_C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRCS:1;
      uint64_t LP:1;
      uint64_t EREFS:1;
      uint64_t HGO:1;
      uint64_t RANGE:2;
      uint64_t FCFTRIM:1;
      uint64_t LOCRE0:1;
    } __attribute__((packed)) B;
  } MCG_C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTRIM:8;
    } __attribute__((packed)) B;
  } MCG_C3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCFTRIM:1;
      uint64_t FCTRIM:4;
      uint64_t DRST_DRS:2;
      uint64_t DMX32:1;
    } __attribute__((packed)) B;
  } MCG_C4;

  uint8_t MCG_C5;
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t CME0:1;
    } __attribute__((packed)) B;
  } MCG_C6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRCST:1;
      uint64_t OSCINIT0:1;
      uint64_t CLKST:2;
      uint64_t IREFST:1;
    } __attribute__((packed)) B;
  } MCG_S;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOCS0:1;
      uint64_t FCRDIV:3;
      uint64_t FLTPRSRV:1;
      uint64_t ATMF:1;
      uint64_t ATMS:1;
      uint64_t ATME:1;
    } __attribute__((packed)) B;
  } MCG_SC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATCVH:8;
    } __attribute__((packed)) B;
  } MCG_ATCVH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATCVL:8;
    } __attribute__((packed)) B;
  } MCG_ATCVL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSCSEL:1;
    } __attribute__((packed)) B;
  } MCG_C7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LOCS1:1;
      uint64_t reservedSpace0:4;
      uint64_t CME1:1;
      uint64_t reservedSpace1:1;
      uint64_t LOCRE1:1;
    } __attribute__((packed)) B;
  } MCG_C8;

} __attribute__((packed));

#define MCG (*(volatile struct MCG_tag *) 0x40064000)

struct I2C0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AD:7;
    } __attribute__((packed)) B;
  } I2C0_A1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ICR:6;
      uint64_t MULT:2;
    } __attribute__((packed)) B;
  } I2C0_F;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t WUEN:1;
      uint64_t RSTA:1;
      uint64_t TXAK:1;
      uint64_t TX:1;
      uint64_t MST:1;
      uint64_t IICIE:1;
      uint64_t IICEN:1;
    } __attribute__((packed)) B;
  } I2C0_C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RXAK:1;
      uint64_t IICIF:1;
      uint64_t SRW:1;
      uint64_t RAM:1;
      uint64_t ARBL:1;
      uint64_t BUSY:1;
      uint64_t IAAS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } I2C0_S;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } I2C0_D;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:3;
      uint64_t RMEN:1;
      uint64_t SBRC:1;
      uint64_t HDRS:1;
      uint64_t ADEXT:1;
      uint64_t GCAEN:1;
    } __attribute__((packed)) B;
  } I2C0_C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLT:4;
      uint64_t STARTF:1;
      uint64_t SSIE:1;
      uint64_t STOPF:1;
      uint64_t SHEN:1;
    } __attribute__((packed)) B;
  } I2C0_FLT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RAD:7;
    } __attribute__((packed)) B;
  } I2C0_RA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SHTF2IE:1;
      uint64_t SHTF2:1;
      uint64_t SHTF1:1;
      uint64_t SLTF:1;
      uint64_t TCKSEL:1;
      uint64_t SIICAEN:1;
      uint64_t ALERTEN:1;
      uint64_t FACK:1;
    } __attribute__((packed)) B;
  } I2C0_SMB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SAD:7;
    } __attribute__((packed)) B;
  } I2C0_A2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSLT:8;
    } __attribute__((packed)) B;
  } I2C0_SLTH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSLT:8;
    } __attribute__((packed)) B;
  } I2C0_SLTL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ERROR:1;
      uint64_t DFEN:1;
    } __attribute__((packed)) B;
  } I2C0_S2;

} __attribute__((packed));

#define I2C0 (*(volatile struct I2C0_tag *) 0x40066000)

struct I2C1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AD:7;
    } __attribute__((packed)) B;
  } I2C1_A1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ICR:6;
      uint64_t MULT:2;
    } __attribute__((packed)) B;
  } I2C1_F;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t WUEN:1;
      uint64_t RSTA:1;
      uint64_t TXAK:1;
      uint64_t TX:1;
      uint64_t MST:1;
      uint64_t IICIE:1;
      uint64_t IICEN:1;
    } __attribute__((packed)) B;
  } I2C1_C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RXAK:1;
      uint64_t IICIF:1;
      uint64_t SRW:1;
      uint64_t RAM:1;
      uint64_t ARBL:1;
      uint64_t BUSY:1;
      uint64_t IAAS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } I2C1_S;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } I2C1_D;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t AD:3;
      uint64_t RMEN:1;
      uint64_t SBRC:1;
      uint64_t HDRS:1;
      uint64_t ADEXT:1;
      uint64_t GCAEN:1;
    } __attribute__((packed)) B;
  } I2C1_C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLT:4;
      uint64_t STARTF:1;
      uint64_t SSIE:1;
      uint64_t STOPF:1;
      uint64_t SHEN:1;
    } __attribute__((packed)) B;
  } I2C1_FLT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RAD:7;
    } __attribute__((packed)) B;
  } I2C1_RA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SHTF2IE:1;
      uint64_t SHTF2:1;
      uint64_t SHTF1:1;
      uint64_t SLTF:1;
      uint64_t TCKSEL:1;
      uint64_t SIICAEN:1;
      uint64_t ALERTEN:1;
      uint64_t FACK:1;
    } __attribute__((packed)) B;
  } I2C1_SMB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SAD:7;
    } __attribute__((packed)) B;
  } I2C1_A2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSLT:8;
    } __attribute__((packed)) B;
  } I2C1_SLTH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SSLT:8;
    } __attribute__((packed)) B;
  } I2C1_SLTL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ERROR:1;
      uint64_t DFEN:1;
    } __attribute__((packed)) B;
  } I2C1_S2;

} __attribute__((packed));

#define I2C1 (*(volatile struct I2C1_tag *) 0x40067000)

struct CMP0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HYSTCTR:2;
      uint64_t reservedSpace0:2;
      uint64_t FILTER_CNT:3;
    } __attribute__((packed)) B;
  } CMP0_CR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t OPE:1;
      uint64_t COS:1;
      uint64_t INV:1;
      uint64_t PMODE:1;
      uint64_t TRIGM:1;
      uint64_t WE:1;
      uint64_t SE:1;
    } __attribute__((packed)) B;
  } CMP0_CR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FILT_PER:8;
    } __attribute__((packed)) B;
  } CMP0_FPR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COUT:1;
      uint64_t CFF:1;
      uint64_t CFR:1;
      uint64_t IEF:1;
      uint64_t IER:1;
      uint64_t reservedSpace0:1;
      uint64_t DMAEN:1;
    } __attribute__((packed)) B;
  } CMP0_SCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VOSEL:6;
      uint64_t VRSEL:1;
      uint64_t DACEN:1;
    } __attribute__((packed)) B;
  } CMP0_DACCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSEL:3;
      uint64_t PSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t PSTM:1;
    } __attribute__((packed)) B;
  } CMP0_MUXCR;

} __attribute__((packed));

#define CMP0 (*(volatile struct CMP0_tag *) 0x40073000)

struct VREF_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t TRIM:6;
      uint64_t CHOPEN:1;
    } __attribute__((packed)) B;
  } VREF_TRM;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MODE_LV:2;
      uint64_t VREFST:1;
      uint64_t reservedSpace0:2;
      uint64_t ICOMPEN:1;
      uint64_t REGEN:1;
      uint64_t VREFEN:1;
    } __attribute__((packed)) B;
  } VREF_SC;

} __attribute__((packed));

#define VREF (*(volatile struct VREF_tag *) 0x40074000)

struct LLWU_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUPE0:2;
      uint64_t WUPE1:2;
      uint64_t WUPE2:2;
      uint64_t WUPE3:2;
    } __attribute__((packed)) B;
  } LLWU_PE1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUPE4:2;
      uint64_t WUPE5:2;
      uint64_t WUPE6:2;
      uint64_t WUPE7:2;
    } __attribute__((packed)) B;
  } LLWU_PE2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUPE8:2;
      uint64_t WUPE9:2;
      uint64_t WUPE10:2;
      uint64_t WUPE11:2;
    } __attribute__((packed)) B;
  } LLWU_PE3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUPE12:2;
      uint64_t WUPE13:2;
      uint64_t WUPE14:2;
      uint64_t WUPE15:2;
    } __attribute__((packed)) B;
  } LLWU_PE4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUME0:1;
      uint64_t WUME1:1;
      uint64_t WUME2:1;
      uint64_t WUME3:1;
      uint64_t WUME4:1;
      uint64_t WUME5:1;
      uint64_t WUME6:1;
      uint64_t WUME7:1;
    } __attribute__((packed)) B;
  } LLWU_ME;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUF0:1;
      uint64_t WUF1:1;
      uint64_t WUF2:1;
      uint64_t WUF3:1;
      uint64_t WUF4:1;
      uint64_t WUF5:1;
      uint64_t WUF6:1;
      uint64_t WUF7:1;
    } __attribute__((packed)) B;
  } LLWU_F1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t WUF8:1;
      uint64_t WUF9:1;
      uint64_t WUF10:1;
      uint64_t WUF11:1;
      uint64_t WUF12:1;
      uint64_t WUF13:1;
      uint64_t WUF14:1;
      uint64_t WUF15:1;
    } __attribute__((packed)) B;
  } LLWU_F2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MWUF0:1;
      uint64_t MWUF1:1;
      uint64_t MWUF2:1;
      uint64_t MWUF3:1;
      uint64_t MWUF4:1;
      uint64_t MWUF5:1;
      uint64_t MWUF6:1;
      uint64_t MWUF7:1;
    } __attribute__((packed)) B;
  } LLWU_F3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FILTSEL:4;
      uint64_t reservedSpace0:1;
      uint64_t FILTE:2;
      uint64_t FILTF:1;
    } __attribute__((packed)) B;
  } LLWU_FILT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FILTSEL:4;
      uint64_t reservedSpace0:1;
      uint64_t FILTE:2;
      uint64_t FILTF:1;
    } __attribute__((packed)) B;
  } LLWU_FILT2;

} __attribute__((packed));

#define LLWU (*(volatile struct LLWU_tag *) 0x4007c000)

struct PMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LVDV:2;
      uint64_t reservedSpace0:2;
      uint64_t LVDRE:1;
      uint64_t LVDIE:1;
      uint64_t LVDACK:1;
      uint64_t LVDF:1;
    } __attribute__((packed)) B;
  } PMC_LVDSC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LVWV:2;
      uint64_t reservedSpace0:3;
      uint64_t LVWIE:1;
      uint64_t LVWACK:1;
      uint64_t LVWF:1;
    } __attribute__((packed)) B;
  } PMC_LVDSC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGBE:1;
      uint64_t reservedSpace0:1;
      uint64_t REGONS:1;
      uint64_t ACKISO:1;
      uint64_t BGEN:1;
      uint64_t reservedSpace1:1;
      uint64_t VLPO:1;
    } __attribute__((packed)) B;
  } PMC_REGSC;

} __attribute__((packed));

#define PMC (*(volatile struct PMC_tag *) 0x4007d000)

struct SMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AVLLS:1;
      uint64_t reservedSpace1:1;
      uint64_t ALLS:1;
      uint64_t reservedSpace2:1;
      uint64_t AVLP:1;
    } __attribute__((packed)) B;
  } SMC_PMPROT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STOPM:3;
      uint64_t STOPA:1;
      uint64_t reservedSpace0:1;
      uint64_t RUNM:2;
    } __attribute__((packed)) B;
  } SMC_PMCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LLSM:3;
      uint64_t reservedSpace0:1;
      uint64_t RAM2PO:1;
      uint64_t PORPO:1;
      uint64_t PSTOPO:2;
    } __attribute__((packed)) B;
  } SMC_STOPCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMSTAT:8;
    } __attribute__((packed)) B;
  } SMC_PMSTAT;

} __attribute__((packed));

#define SMC (*(volatile struct SMC_tag *) 0x4007e000)

struct RCM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t LVD:1;
      uint64_t LOC:1;
      uint64_t reservedSpace0:2;
      uint64_t WDOG:1;
      uint64_t PIN:1;
      uint64_t POR:1;
    } __attribute__((packed)) B;
  } RCM_SRS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LOCKUP:1;
      uint64_t SW:1;
      uint64_t MDM_AP:1;
      uint64_t reservedSpace1:1;
      uint64_t SACKERR:1;
    } __attribute__((packed)) B;
  } RCM_SRS1;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTFLTSRW:2;
      uint64_t RSTFLTSS:1;
    } __attribute__((packed)) B;
  } RCM_RPFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTFLTSEL:5;
    } __attribute__((packed)) B;
  } RCM_RPFW;

} __attribute__((packed));

#define RCM (*(volatile struct RCM_tag *) 0x4007f000)

struct GPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO0:1;
      uint64_t PDO1:1;
      uint64_t PDO2:1;
      uint64_t PDO3:1;
      uint64_t PDO4:1;
      uint64_t PDO5:1;
      uint64_t PDO6:1;
      uint64_t PDO7:1;
      uint64_t PDO8:1;
      uint64_t PDO9:1;
      uint64_t PDO10:1;
      uint64_t PDO11:1;
      uint64_t PDO12:1;
      uint64_t PDO13:1;
      uint64_t PDO14:1;
      uint64_t PDO15:1;
      uint64_t PDO16:1;
      uint64_t PDO17:1;
      uint64_t PDO18:1;
      uint64_t PDO19:1;
      uint64_t PDO20:1;
      uint64_t PDO21:1;
      uint64_t PDO22:1;
      uint64_t PDO23:1;
      uint64_t PDO24:1;
      uint64_t PDO25:1;
      uint64_t PDO26:1;
      uint64_t PDO27:1;
      uint64_t PDO28:1;
      uint64_t PDO29:1;
      uint64_t PDO30:1;
      uint64_t PDO31:1;
    } __attribute__((packed)) B;
  } GPIOA_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO0:1;
      uint64_t PTSO1:1;
      uint64_t PTSO2:1;
      uint64_t PTSO3:1;
      uint64_t PTSO4:1;
      uint64_t PTSO5:1;
      uint64_t PTSO6:1;
      uint64_t PTSO7:1;
      uint64_t PTSO8:1;
      uint64_t PTSO9:1;
      uint64_t PTSO10:1;
      uint64_t PTSO11:1;
      uint64_t PTSO12:1;
      uint64_t PTSO13:1;
      uint64_t PTSO14:1;
      uint64_t PTSO15:1;
      uint64_t PTSO16:1;
      uint64_t PTSO17:1;
      uint64_t PTSO18:1;
      uint64_t PTSO19:1;
      uint64_t PTSO20:1;
      uint64_t PTSO21:1;
      uint64_t PTSO22:1;
      uint64_t PTSO23:1;
      uint64_t PTSO24:1;
      uint64_t PTSO25:1;
      uint64_t PTSO26:1;
      uint64_t PTSO27:1;
      uint64_t PTSO28:1;
      uint64_t PTSO29:1;
      uint64_t PTSO30:1;
      uint64_t PTSO31:1;
    } __attribute__((packed)) B;
  } GPIOA_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO0:1;
      uint64_t PTCO1:1;
      uint64_t PTCO2:1;
      uint64_t PTCO3:1;
      uint64_t PTCO4:1;
      uint64_t PTCO5:1;
      uint64_t PTCO6:1;
      uint64_t PTCO7:1;
      uint64_t PTCO8:1;
      uint64_t PTCO9:1;
      uint64_t PTCO10:1;
      uint64_t PTCO11:1;
      uint64_t PTCO12:1;
      uint64_t PTCO13:1;
      uint64_t PTCO14:1;
      uint64_t PTCO15:1;
      uint64_t PTCO16:1;
      uint64_t PTCO17:1;
      uint64_t PTCO18:1;
      uint64_t PTCO19:1;
      uint64_t PTCO20:1;
      uint64_t PTCO21:1;
      uint64_t PTCO22:1;
      uint64_t PTCO23:1;
      uint64_t PTCO24:1;
      uint64_t PTCO25:1;
      uint64_t PTCO26:1;
      uint64_t PTCO27:1;
      uint64_t PTCO28:1;
      uint64_t PTCO29:1;
      uint64_t PTCO30:1;
      uint64_t PTCO31:1;
    } __attribute__((packed)) B;
  } GPIOA_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO0:1;
      uint64_t PTTO1:1;
      uint64_t PTTO2:1;
      uint64_t PTTO3:1;
      uint64_t PTTO4:1;
      uint64_t PTTO5:1;
      uint64_t PTTO6:1;
      uint64_t PTTO7:1;
      uint64_t PTTO8:1;
      uint64_t PTTO9:1;
      uint64_t PTTO10:1;
      uint64_t PTTO11:1;
      uint64_t PTTO12:1;
      uint64_t PTTO13:1;
      uint64_t PTTO14:1;
      uint64_t PTTO15:1;
      uint64_t PTTO16:1;
      uint64_t PTTO17:1;
      uint64_t PTTO18:1;
      uint64_t PTTO19:1;
      uint64_t PTTO20:1;
      uint64_t PTTO21:1;
      uint64_t PTTO22:1;
      uint64_t PTTO23:1;
      uint64_t PTTO24:1;
      uint64_t PTTO25:1;
      uint64_t PTTO26:1;
      uint64_t PTTO27:1;
      uint64_t PTTO28:1;
      uint64_t PTTO29:1;
      uint64_t PTTO30:1;
      uint64_t PTTO31:1;
    } __attribute__((packed)) B;
  } GPIOA_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI0:1;
      uint64_t PDI1:1;
      uint64_t PDI2:1;
      uint64_t PDI3:1;
      uint64_t PDI4:1;
      uint64_t PDI5:1;
      uint64_t PDI6:1;
      uint64_t PDI7:1;
      uint64_t PDI8:1;
      uint64_t PDI9:1;
      uint64_t PDI10:1;
      uint64_t PDI11:1;
      uint64_t PDI12:1;
      uint64_t PDI13:1;
      uint64_t PDI14:1;
      uint64_t PDI15:1;
      uint64_t PDI16:1;
      uint64_t PDI17:1;
      uint64_t PDI18:1;
      uint64_t PDI19:1;
      uint64_t PDI20:1;
      uint64_t PDI21:1;
      uint64_t PDI22:1;
      uint64_t PDI23:1;
      uint64_t PDI24:1;
      uint64_t PDI25:1;
      uint64_t PDI26:1;
      uint64_t PDI27:1;
      uint64_t PDI28:1;
      uint64_t PDI29:1;
      uint64_t PDI30:1;
      uint64_t PDI31:1;
    } __attribute__((packed)) B;
  } GPIOA_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD0:1;
      uint64_t PDD1:1;
      uint64_t PDD2:1;
      uint64_t PDD3:1;
      uint64_t PDD4:1;
      uint64_t PDD5:1;
      uint64_t PDD6:1;
      uint64_t PDD7:1;
      uint64_t PDD8:1;
      uint64_t PDD9:1;
      uint64_t PDD10:1;
      uint64_t PDD11:1;
      uint64_t PDD12:1;
      uint64_t PDD13:1;
      uint64_t PDD14:1;
      uint64_t PDD15:1;
      uint64_t PDD16:1;
      uint64_t PDD17:1;
      uint64_t PDD18:1;
      uint64_t PDD19:1;
      uint64_t PDD20:1;
      uint64_t PDD21:1;
      uint64_t PDD22:1;
      uint64_t PDD23:1;
      uint64_t PDD24:1;
      uint64_t PDD25:1;
      uint64_t PDD26:1;
      uint64_t PDD27:1;
      uint64_t PDD28:1;
      uint64_t PDD29:1;
      uint64_t PDD30:1;
      uint64_t PDD31:1;
    } __attribute__((packed)) B;
  } GPIOA_PDDR;

} __attribute__((packed));

#define GPIOA (*(volatile struct GPIOA_tag *) 0x400ff000)

struct GPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO0:1;
      uint64_t PDO1:1;
      uint64_t PDO2:1;
      uint64_t PDO3:1;
      uint64_t PDO4:1;
      uint64_t PDO5:1;
      uint64_t PDO6:1;
      uint64_t PDO7:1;
      uint64_t PDO8:1;
      uint64_t PDO9:1;
      uint64_t PDO10:1;
      uint64_t PDO11:1;
      uint64_t PDO12:1;
      uint64_t PDO13:1;
      uint64_t PDO14:1;
      uint64_t PDO15:1;
      uint64_t PDO16:1;
      uint64_t PDO17:1;
      uint64_t PDO18:1;
      uint64_t PDO19:1;
      uint64_t PDO20:1;
      uint64_t PDO21:1;
      uint64_t PDO22:1;
      uint64_t PDO23:1;
      uint64_t PDO24:1;
      uint64_t PDO25:1;
      uint64_t PDO26:1;
      uint64_t PDO27:1;
      uint64_t PDO28:1;
      uint64_t PDO29:1;
      uint64_t PDO30:1;
      uint64_t PDO31:1;
    } __attribute__((packed)) B;
  } GPIOB_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO0:1;
      uint64_t PTSO1:1;
      uint64_t PTSO2:1;
      uint64_t PTSO3:1;
      uint64_t PTSO4:1;
      uint64_t PTSO5:1;
      uint64_t PTSO6:1;
      uint64_t PTSO7:1;
      uint64_t PTSO8:1;
      uint64_t PTSO9:1;
      uint64_t PTSO10:1;
      uint64_t PTSO11:1;
      uint64_t PTSO12:1;
      uint64_t PTSO13:1;
      uint64_t PTSO14:1;
      uint64_t PTSO15:1;
      uint64_t PTSO16:1;
      uint64_t PTSO17:1;
      uint64_t PTSO18:1;
      uint64_t PTSO19:1;
      uint64_t PTSO20:1;
      uint64_t PTSO21:1;
      uint64_t PTSO22:1;
      uint64_t PTSO23:1;
      uint64_t PTSO24:1;
      uint64_t PTSO25:1;
      uint64_t PTSO26:1;
      uint64_t PTSO27:1;
      uint64_t PTSO28:1;
      uint64_t PTSO29:1;
      uint64_t PTSO30:1;
      uint64_t PTSO31:1;
    } __attribute__((packed)) B;
  } GPIOB_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO0:1;
      uint64_t PTCO1:1;
      uint64_t PTCO2:1;
      uint64_t PTCO3:1;
      uint64_t PTCO4:1;
      uint64_t PTCO5:1;
      uint64_t PTCO6:1;
      uint64_t PTCO7:1;
      uint64_t PTCO8:1;
      uint64_t PTCO9:1;
      uint64_t PTCO10:1;
      uint64_t PTCO11:1;
      uint64_t PTCO12:1;
      uint64_t PTCO13:1;
      uint64_t PTCO14:1;
      uint64_t PTCO15:1;
      uint64_t PTCO16:1;
      uint64_t PTCO17:1;
      uint64_t PTCO18:1;
      uint64_t PTCO19:1;
      uint64_t PTCO20:1;
      uint64_t PTCO21:1;
      uint64_t PTCO22:1;
      uint64_t PTCO23:1;
      uint64_t PTCO24:1;
      uint64_t PTCO25:1;
      uint64_t PTCO26:1;
      uint64_t PTCO27:1;
      uint64_t PTCO28:1;
      uint64_t PTCO29:1;
      uint64_t PTCO30:1;
      uint64_t PTCO31:1;
    } __attribute__((packed)) B;
  } GPIOB_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO0:1;
      uint64_t PTTO1:1;
      uint64_t PTTO2:1;
      uint64_t PTTO3:1;
      uint64_t PTTO4:1;
      uint64_t PTTO5:1;
      uint64_t PTTO6:1;
      uint64_t PTTO7:1;
      uint64_t PTTO8:1;
      uint64_t PTTO9:1;
      uint64_t PTTO10:1;
      uint64_t PTTO11:1;
      uint64_t PTTO12:1;
      uint64_t PTTO13:1;
      uint64_t PTTO14:1;
      uint64_t PTTO15:1;
      uint64_t PTTO16:1;
      uint64_t PTTO17:1;
      uint64_t PTTO18:1;
      uint64_t PTTO19:1;
      uint64_t PTTO20:1;
      uint64_t PTTO21:1;
      uint64_t PTTO22:1;
      uint64_t PTTO23:1;
      uint64_t PTTO24:1;
      uint64_t PTTO25:1;
      uint64_t PTTO26:1;
      uint64_t PTTO27:1;
      uint64_t PTTO28:1;
      uint64_t PTTO29:1;
      uint64_t PTTO30:1;
      uint64_t PTTO31:1;
    } __attribute__((packed)) B;
  } GPIOB_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI0:1;
      uint64_t PDI1:1;
      uint64_t PDI2:1;
      uint64_t PDI3:1;
      uint64_t PDI4:1;
      uint64_t PDI5:1;
      uint64_t PDI6:1;
      uint64_t PDI7:1;
      uint64_t PDI8:1;
      uint64_t PDI9:1;
      uint64_t PDI10:1;
      uint64_t PDI11:1;
      uint64_t PDI12:1;
      uint64_t PDI13:1;
      uint64_t PDI14:1;
      uint64_t PDI15:1;
      uint64_t PDI16:1;
      uint64_t PDI17:1;
      uint64_t PDI18:1;
      uint64_t PDI19:1;
      uint64_t PDI20:1;
      uint64_t PDI21:1;
      uint64_t PDI22:1;
      uint64_t PDI23:1;
      uint64_t PDI24:1;
      uint64_t PDI25:1;
      uint64_t PDI26:1;
      uint64_t PDI27:1;
      uint64_t PDI28:1;
      uint64_t PDI29:1;
      uint64_t PDI30:1;
      uint64_t PDI31:1;
    } __attribute__((packed)) B;
  } GPIOB_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD0:1;
      uint64_t PDD1:1;
      uint64_t PDD2:1;
      uint64_t PDD3:1;
      uint64_t PDD4:1;
      uint64_t PDD5:1;
      uint64_t PDD6:1;
      uint64_t PDD7:1;
      uint64_t PDD8:1;
      uint64_t PDD9:1;
      uint64_t PDD10:1;
      uint64_t PDD11:1;
      uint64_t PDD12:1;
      uint64_t PDD13:1;
      uint64_t PDD14:1;
      uint64_t PDD15:1;
      uint64_t PDD16:1;
      uint64_t PDD17:1;
      uint64_t PDD18:1;
      uint64_t PDD19:1;
      uint64_t PDD20:1;
      uint64_t PDD21:1;
      uint64_t PDD22:1;
      uint64_t PDD23:1;
      uint64_t PDD24:1;
      uint64_t PDD25:1;
      uint64_t PDD26:1;
      uint64_t PDD27:1;
      uint64_t PDD28:1;
      uint64_t PDD29:1;
      uint64_t PDD30:1;
      uint64_t PDD31:1;
    } __attribute__((packed)) B;
  } GPIOB_PDDR;

} __attribute__((packed));

#define GPIOB (*(volatile struct GPIOB_tag *) 0x400ff040)

struct GPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO0:1;
      uint64_t PDO1:1;
      uint64_t PDO2:1;
      uint64_t PDO3:1;
      uint64_t PDO4:1;
      uint64_t PDO5:1;
      uint64_t PDO6:1;
      uint64_t PDO7:1;
      uint64_t PDO8:1;
      uint64_t PDO9:1;
      uint64_t PDO10:1;
      uint64_t PDO11:1;
      uint64_t PDO12:1;
      uint64_t PDO13:1;
      uint64_t PDO14:1;
      uint64_t PDO15:1;
      uint64_t PDO16:1;
      uint64_t PDO17:1;
      uint64_t PDO18:1;
      uint64_t PDO19:1;
      uint64_t PDO20:1;
      uint64_t PDO21:1;
      uint64_t PDO22:1;
      uint64_t PDO23:1;
      uint64_t PDO24:1;
      uint64_t PDO25:1;
      uint64_t PDO26:1;
      uint64_t PDO27:1;
      uint64_t PDO28:1;
      uint64_t PDO29:1;
      uint64_t PDO30:1;
      uint64_t PDO31:1;
    } __attribute__((packed)) B;
  } GPIOC_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO0:1;
      uint64_t PTSO1:1;
      uint64_t PTSO2:1;
      uint64_t PTSO3:1;
      uint64_t PTSO4:1;
      uint64_t PTSO5:1;
      uint64_t PTSO6:1;
      uint64_t PTSO7:1;
      uint64_t PTSO8:1;
      uint64_t PTSO9:1;
      uint64_t PTSO10:1;
      uint64_t PTSO11:1;
      uint64_t PTSO12:1;
      uint64_t PTSO13:1;
      uint64_t PTSO14:1;
      uint64_t PTSO15:1;
      uint64_t PTSO16:1;
      uint64_t PTSO17:1;
      uint64_t PTSO18:1;
      uint64_t PTSO19:1;
      uint64_t PTSO20:1;
      uint64_t PTSO21:1;
      uint64_t PTSO22:1;
      uint64_t PTSO23:1;
      uint64_t PTSO24:1;
      uint64_t PTSO25:1;
      uint64_t PTSO26:1;
      uint64_t PTSO27:1;
      uint64_t PTSO28:1;
      uint64_t PTSO29:1;
      uint64_t PTSO30:1;
      uint64_t PTSO31:1;
    } __attribute__((packed)) B;
  } GPIOC_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO0:1;
      uint64_t PTCO1:1;
      uint64_t PTCO2:1;
      uint64_t PTCO3:1;
      uint64_t PTCO4:1;
      uint64_t PTCO5:1;
      uint64_t PTCO6:1;
      uint64_t PTCO7:1;
      uint64_t PTCO8:1;
      uint64_t PTCO9:1;
      uint64_t PTCO10:1;
      uint64_t PTCO11:1;
      uint64_t PTCO12:1;
      uint64_t PTCO13:1;
      uint64_t PTCO14:1;
      uint64_t PTCO15:1;
      uint64_t PTCO16:1;
      uint64_t PTCO17:1;
      uint64_t PTCO18:1;
      uint64_t PTCO19:1;
      uint64_t PTCO20:1;
      uint64_t PTCO21:1;
      uint64_t PTCO22:1;
      uint64_t PTCO23:1;
      uint64_t PTCO24:1;
      uint64_t PTCO25:1;
      uint64_t PTCO26:1;
      uint64_t PTCO27:1;
      uint64_t PTCO28:1;
      uint64_t PTCO29:1;
      uint64_t PTCO30:1;
      uint64_t PTCO31:1;
    } __attribute__((packed)) B;
  } GPIOC_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO0:1;
      uint64_t PTTO1:1;
      uint64_t PTTO2:1;
      uint64_t PTTO3:1;
      uint64_t PTTO4:1;
      uint64_t PTTO5:1;
      uint64_t PTTO6:1;
      uint64_t PTTO7:1;
      uint64_t PTTO8:1;
      uint64_t PTTO9:1;
      uint64_t PTTO10:1;
      uint64_t PTTO11:1;
      uint64_t PTTO12:1;
      uint64_t PTTO13:1;
      uint64_t PTTO14:1;
      uint64_t PTTO15:1;
      uint64_t PTTO16:1;
      uint64_t PTTO17:1;
      uint64_t PTTO18:1;
      uint64_t PTTO19:1;
      uint64_t PTTO20:1;
      uint64_t PTTO21:1;
      uint64_t PTTO22:1;
      uint64_t PTTO23:1;
      uint64_t PTTO24:1;
      uint64_t PTTO25:1;
      uint64_t PTTO26:1;
      uint64_t PTTO27:1;
      uint64_t PTTO28:1;
      uint64_t PTTO29:1;
      uint64_t PTTO30:1;
      uint64_t PTTO31:1;
    } __attribute__((packed)) B;
  } GPIOC_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI0:1;
      uint64_t PDI1:1;
      uint64_t PDI2:1;
      uint64_t PDI3:1;
      uint64_t PDI4:1;
      uint64_t PDI5:1;
      uint64_t PDI6:1;
      uint64_t PDI7:1;
      uint64_t PDI8:1;
      uint64_t PDI9:1;
      uint64_t PDI10:1;
      uint64_t PDI11:1;
      uint64_t PDI12:1;
      uint64_t PDI13:1;
      uint64_t PDI14:1;
      uint64_t PDI15:1;
      uint64_t PDI16:1;
      uint64_t PDI17:1;
      uint64_t PDI18:1;
      uint64_t PDI19:1;
      uint64_t PDI20:1;
      uint64_t PDI21:1;
      uint64_t PDI22:1;
      uint64_t PDI23:1;
      uint64_t PDI24:1;
      uint64_t PDI25:1;
      uint64_t PDI26:1;
      uint64_t PDI27:1;
      uint64_t PDI28:1;
      uint64_t PDI29:1;
      uint64_t PDI30:1;
      uint64_t PDI31:1;
    } __attribute__((packed)) B;
  } GPIOC_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD0:1;
      uint64_t PDD1:1;
      uint64_t PDD2:1;
      uint64_t PDD3:1;
      uint64_t PDD4:1;
      uint64_t PDD5:1;
      uint64_t PDD6:1;
      uint64_t PDD7:1;
      uint64_t PDD8:1;
      uint64_t PDD9:1;
      uint64_t PDD10:1;
      uint64_t PDD11:1;
      uint64_t PDD12:1;
      uint64_t PDD13:1;
      uint64_t PDD14:1;
      uint64_t PDD15:1;
      uint64_t PDD16:1;
      uint64_t PDD17:1;
      uint64_t PDD18:1;
      uint64_t PDD19:1;
      uint64_t PDD20:1;
      uint64_t PDD21:1;
      uint64_t PDD22:1;
      uint64_t PDD23:1;
      uint64_t PDD24:1;
      uint64_t PDD25:1;
      uint64_t PDD26:1;
      uint64_t PDD27:1;
      uint64_t PDD28:1;
      uint64_t PDD29:1;
      uint64_t PDD30:1;
      uint64_t PDD31:1;
    } __attribute__((packed)) B;
  } GPIOC_PDDR;

} __attribute__((packed));

#define GPIOC (*(volatile struct GPIOC_tag *) 0x400ff080)

struct MTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t WRAP:1;
      uint64_t POINTER:29;
    } __attribute__((packed)) B;
  } MTB_POSITION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
      uint64_t TSTARTEN:1;
      uint64_t TSTOPEN:1;
      uint64_t SFRWPRIV:1;
      uint64_t RAMPRIV:1;
      uint64_t HALTREQ:1;
      uint64_t reservedSpace0:21;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } MTB_MASTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOSTOP:1;
      uint64_t AUTOHALT:1;
      uint64_t reservedSpace0:1;
      uint64_t WATERMARK:29;
    } __attribute__((packed)) B;
  } MTB_FLOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEADDR:32;
    } __attribute__((packed)) B;
  } MTB_BASE;

  uint8_t res0[3824];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODECTRL:32;
    } __attribute__((packed)) B;
  } MTB_MODECTRL;

  uint8_t res1[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAGSET:32;
    } __attribute__((packed)) B;
  } MTB_TAGSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAGCLEAR:32;
    } __attribute__((packed)) B;
  } MTB_TAGCLEAR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKACCESS:32;
    } __attribute__((packed)) B;
  } MTB_LOCKACCESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKSTAT:32;
    } __attribute__((packed)) B;
  } MTB_LOCKSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIT0:1;
      uint64_t BIT1:1;
      uint64_t BIT2:1;
      uint64_t BIT3:1;
    } __attribute__((packed)) B;
  } MTB_AUTHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICEARCH:32;
    } __attribute__((packed)) B;
  } MTB_DEVICEARCH;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICECFG:32;
    } __attribute__((packed)) B;
  } MTB_DEVICECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICETYPID:32;
    } __attribute__((packed)) B;
  } MTB_DEVICETYPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTB_PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTB_COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTB_COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTB_COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTB_COMPID3;

} __attribute__((packed));

#define MTB (*(volatile struct MTB_tag *) 0xf0000000)

struct MTBDWT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWTCFGCTRL:28;
      uint64_t NUMCMP:4;
    } __attribute__((packed)) B;
  } MTBDWT_CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
    } __attribute__((packed)) B;
  } MTBDWT_MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:4;
      uint64_t DATAVMATCH:1;
      uint64_t reservedSpace1:1;
      uint64_t DATAVSIZE:2;
      uint64_t DATAVADDR0:4;
      uint64_t reservedSpace2:8;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } MTBDWT_FCT0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
    } __attribute__((packed)) B;
  } MTBDWT_MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t reservedSpace0:20;
      uint64_t MATCHED:1;
    } __attribute__((packed)) B;
  } MTBDWT_FCT1;

  uint8_t res2[452];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACOMP0:1;
      uint64_t ACOMP1:1;
      uint64_t reservedSpace0:26;
      uint64_t NUMCOMP:4;
    } __attribute__((packed)) B;
  } MTBDWT_TBCTRL;

  uint8_t res3[3524];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICECFG:32;
    } __attribute__((packed)) B;
  } MTBDWT_DEVICECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICETYPID:32;
    } __attribute__((packed)) B;
  } MTBDWT_DEVICETYPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } MTBDWT_PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } MTBDWT_COMPID3;

} __attribute__((packed));

#define MTBDWT (*(volatile struct MTBDWT_tag *) 0xf0001000)

struct ROM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENTRY:32;
    } __attribute__((packed)) B;
  } ROM_ENTRY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENTRY:32;
    } __attribute__((packed)) B;
  } ROM_ENTRY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENTRY:32;
    } __attribute__((packed)) B;
  } ROM_ENTRY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARK:32;
    } __attribute__((packed)) B;
  } ROM_TABLEMARK;

  uint8_t res0[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSACCESS:32;
    } __attribute__((packed)) B;
  } ROM_SYSACCESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } ROM_PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } ROM_COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } ROM_COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } ROM_COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } ROM_COMPID3;

} __attribute__((packed));

#define ROM (*(volatile struct ROM_tag *) 0xf0002000)

struct MCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ASC:8;
    } __attribute__((packed)) B;
  } MCM_PLASC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:8;
    } __attribute__((packed)) B;
  } MCM_PLAMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t ARB:1;
      uint64_t CFCC:1;
      uint64_t DFCDA:1;
      uint64_t DFCIC:1;
      uint64_t DFCC:1;
      uint64_t EFDS:1;
      uint64_t DFCS:1;
      uint64_t ESFC:1;
    } __attribute__((packed)) B;
  } MCM_PLACR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOREQ:1;
      uint64_t CPOACK:1;
      uint64_t CPOWOI:1;
    } __attribute__((packed)) B;
  } MCM_CPO;

} __attribute__((packed));

#define MCM (*(volatile struct MCM_tag *) 0xf0003008)

struct FGPIOA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } FGPIOA_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } FGPIOA_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } FGPIOA_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } FGPIOA_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } FGPIOA_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } FGPIOA_PDDR;

} __attribute__((packed));

#define FGPIOA (*(volatile struct FGPIOA_tag *) 0xf8000000)

struct FGPIOB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } FGPIOB_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } FGPIOB_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } FGPIOB_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } FGPIOB_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } FGPIOB_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } FGPIOB_PDDR;

} __attribute__((packed));

#define FGPIOB (*(volatile struct FGPIOB_tag *) 0xf8000040)

struct FGPIOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } FGPIOC_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } FGPIOC_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } FGPIOC_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } FGPIOC_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } FGPIOC_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } FGPIOC_PDDR;

} __attribute__((packed));

#define FGPIOC (*(volatile struct FGPIOC_tag *) 0xf8000080)

