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

struct AHBREGS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AOBLE_FEATURE:1;
      uint64_t LPDSP32_FEATURE:1;
      uint64_t OD_FEATURE:1;
      uint64_t CHIP_MINOR_REVISION:5;
      uint64_t CHIP_MAJOR_REVISION:8;
      uint64_t CHIP_VERSION:8;
      uint64_t CHIP_FAMILY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBREGS_CHIP_ID_NUM;

};

#define AHBREGS (*(volatile struct AHBREGS_tag *) 0x1ffffffc)

struct SYSCTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDSP32_RUNNING:1;
      uint64_t LPDSP32_RESUME:1;
      uint64_t LPDSP32_PAUSE:1;
      uint64_t DSS_RESET:1;
      uint64_t DSS_DMA_INT_RESET:1;
      uint64_t DSS_CSS_INT_RESET:1;
      uint64_t reservedSpace0:2;
      uint64_t LPDSP32_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DSS_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS_CMD_0:1;
      uint64_t DSS_CMD_1:1;
      uint64_t DSS_CMD_2:1;
      uint64_t DSS_CMD_3:1;
      uint64_t DSS_CMD_4:1;
      uint64_t DSS_CMD_5:1;
      uint64_t DSS_CMD_6:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DSS_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRAM0_OVERLAY_CFG:1;
      uint64_t PRAM1_OVERLAY_CFG:1;
      uint64_t PRAM2_OVERLAY_CFG:1;
      uint64_t PRAM3_OVERLAY_CFG:1;
      uint64_t DSP_PRAM3_OVERLAY_CFG:1;
      uint64_t DSP_PRAM2_OVERLAY_CFG:1;
      uint64_t DSP_PRAM1_OVERLAY_CFG:1;
      uint64_t DSP_PRAM0_OVERLAY_CFG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_FLASH_OVERLAY_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSS_LOOP_CACHE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_CSS_LOOP_CACHE_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS_LOOP_CACHE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DSS_LOOP_CACHE_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDSP32_PMEM_ERROR:1;
      uint64_t LPDSP32_DMEM_ERROR:1;
      uint64_t DMA_MEM_ERROR:1;
      uint64_t FLASH_COPIER_MEM_ERROR:1;
      uint64_t BB_MEM_ERROR:1;
      uint64_t MEM_ERROR_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_ERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROM_POWER:1;
      uint64_t FLASH_POWER:1;
      uint64_t PRAM0_POWER:1;
      uint64_t PRAM1_POWER:1;
      uint64_t PRAM2_POWER:1;
      uint64_t PRAM3_POWER:1;
      uint64_t DRAM0_POWER:1;
      uint64_t DRAM1_POWER:1;
      uint64_t DRAM2_POWER:1;
      uint64_t reservedSpace0:1;
      uint64_t BB_DRAM0_POWER:1;
      uint64_t BB_DRAM1_POWER:1;
      uint64_t DSP_PRAM0_POWER:1;
      uint64_t DSP_PRAM1_POWER:1;
      uint64_t DSP_PRAM2_POWER:1;
      uint64_t DSP_PRAM3_POWER:1;
      uint64_t DSP_DRAM0_POWER:1;
      uint64_t DSP_DRAM1_POWER:1;
      uint64_t DSP_DRAM2_POWER:1;
      uint64_t DSP_DRAM3_POWER:1;
      uint64_t DSP_DRAM4_POWER:1;
      uint64_t DSP_DRAM5_POWER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_POWER_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROM_ACCESS:1;
      uint64_t FLASH_ACCESS:1;
      uint64_t PRAM0_ACCESS:1;
      uint64_t PRAM1_ACCESS:1;
      uint64_t PRAM2_ACCESS:1;
      uint64_t PRAM3_ACCESS:1;
      uint64_t DRAM0_ACCESS:1;
      uint64_t DRAM1_ACCESS:1;
      uint64_t DRAM2_ACCESS:1;
      uint64_t reservedSpace0:1;
      uint64_t BB_DRAM0_ACCESS:1;
      uint64_t BB_DRAM1_ACCESS:1;
      uint64_t DSP_PRAM0_ACCESS:1;
      uint64_t DSP_PRAM1_ACCESS:1;
      uint64_t DSP_PRAM2_ACCESS:1;
      uint64_t DSP_PRAM3_ACCESS:1;
      uint64_t DSP_DRAM0_ACCESS:1;
      uint64_t DSP_DRAM1_ACCESS:1;
      uint64_t DSP_DRAM2_ACCESS:1;
      uint64_t DSP_DRAM3_ACCESS:1;
      uint64_t DSP_DRAM4_ACCESS:1;
      uint64_t DSP_DRAM5_ACCESS:1;
      uint64_t reservedSpace1:2;
      uint64_t WAKEUP_ADDR_PACKED:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_ACCESS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_WAKEUP_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PRAM0_RETENTION:1;
      uint64_t PRAM1_RETENTION:1;
      uint64_t PRAM2_RETENTION:1;
      uint64_t PRAM3_RETENTION:1;
      uint64_t DRAM0_RETENTION:1;
      uint64_t DRAM1_RETENTION:1;
      uint64_t DRAM2_RETENTION:1;
      uint64_t reservedSpace1:1;
      uint64_t BB_DRAM0_RETENTION:1;
      uint64_t BB_DRAM1_RETENTION:1;
      uint64_t DSP_PRAM0_RETENTION:1;
      uint64_t DSP_PRAM1_RETENTION:1;
      uint64_t DSP_PRAM2_RETENTION:1;
      uint64_t DSP_PRAM3_RETENTION:1;
      uint64_t DSP_DRAM0_RETENTION:1;
      uint64_t DSP_DRAM1_RETENTION:1;
      uint64_t DSP_DRAM2_RETENTION:1;
      uint64_t DSP_DRAM3_RETENTION:1;
      uint64_t DSP_DRAM4_RETENTION:1;
      uint64_t DSP_DRAM5_RETENTION:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_RETENTION_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROUND_ROBIN_TOKEN:1;
      uint64_t PRAM_ARBITER:1;
      uint64_t DRAM0_ARBITER:1;
      uint64_t reservedSpace0:1;
      uint64_t DRAM12_ARBITER:2;
      uint64_t reservedSpace1:2;
      uint64_t BB_DRAM0_ARBITER:2;
      uint64_t BB_DRAM1_ARBITER:2;
      uint64_t reservedSpace2:4;
      uint64_t DSP_PRAM0_ARBITER:2;
      uint64_t DSP_PRAM1_ARBITER:2;
      uint64_t DSP_PRAM2_ARBITER:2;
      uint64_t DSP_PRAM3_ARBITER:2;
      uint64_t DSP_DRAM01_ARBITER:2;
      uint64_t DSP_DRAM23_ARBITER:2;
      uint64_t DSP_DRAM45_ARBITER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_ARBITER_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROM_EMA:3;
      uint64_t PROM_KEN:1;
      uint64_t DSP_PRAM_EMA:3;
      uint64_t reservedSpace0:1;
      uint64_t DSP_PRAM_EMAW:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_MEM_TIMING_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT_START:1;
      uint64_t CNT_STOP:1;
      uint64_t CNT_CLEAR:1;
      uint64_t CNT_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_CNT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK_CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_SYSCLK_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM3_CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_CM3_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDSP32_CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_LPDSP32_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_READ_CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_FLASH_READ_CNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPEED_MEASURE_RESULT:3;
      uint64_t SPEED_MEASURE_STATUS:1;
      uint64_t SPEED_MEASURE_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_SPEED_MEASURE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDSP32_DEBUG_ENABLE:1;
      uint64_t LPDSP32_EXIT_POWERDOWN_WHEN_HALTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_LPDSP32_DEBUG_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF_POWER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_RF_POWER_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RF_ACCESS:1;
      uint64_t RF_IRQ_ACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_RF_ACCESS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_PAD_VALUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_WAKEUP_PAD;

  uint8_t res1[128];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCK_WR:32;
      uint64_t DBG_LOCK_RD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DBG_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DBG_LOCK_KEY_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DBG_LOCK_KEY_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DBG_LOCK_KEY_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_LOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL_DBG_LOCK_KEY_3;

};

#define SYSCTRL (*(volatile struct SYSCTRL_tag *) 0x40000000)

struct CLK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK_SRC_SEL:3;
      uint64_t reservedSpace0:5;
      uint64_t EXTCLK_PRESCALE:4;
      uint64_t reservedSpace1:4;
      uint64_t JTCK_PRESCALE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SYS_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOWCLK_PRESCALE:6;
      uint64_t reservedSpace0:2;
      uint64_t BBCLK_PRESCALE:3;
      uint64_t reservedSpace1:5;
      uint64_t USRCLK_PRESCALE:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DIV_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWM0CLK_PRESCALE:6;
      uint64_t reservedSpace0:2;
      uint64_t PWM1CLK_PRESCALE:6;
      uint64_t reservedSpace1:2;
      uint64_t UARTCLK_PRESCALE:5;
      uint64_t reservedSpace2:3;
      uint64_t AUDIOCLK_PRESCALE:6;
      uint64_t AUDIOSLOWCLK_PRESCALE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DIV_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCLK_PRESCALE:6;
      uint64_t reservedSpace0:1;
      uint64_t DCCLK_DISABLE:1;
      uint64_t CPCLK_PRESCALE:6;
      uint64_t reservedSpace1:1;
      uint64_t CPCLK_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DIV_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DET_ENABLE:1;
      uint64_t CLK_DET_DIV:2;
      uint64_t CLK_DET_INT_SEL:2;
      uint64_t CLK_DET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DET_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DET_STATUS:1;
      uint64_t CLK_DET_INT_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DET_STATUS;

};

#define CLK (*(volatile struct CLK_tag *) 0x40000100)

struct DIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACS_RESET_FLAG:1;
      uint64_t CM3_SW_RESET_FLAG:1;
      uint64_t WATCHDOG_RESET_FLAG:1;
      uint64_t LOCKUP_FLAG:1;
      uint64_t ACS_RESET_FLAG_CLEAR:1;
      uint64_t CM3_SW_RESET_FLAG_CLEAR:1;
      uint64_t WATCHDOG_RESET_FLAG_CLEAR:1;
      uint64_t LOCKUP_RESET_FLAG_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIG_RESET_STATUS;

};

#define DIG (*(volatile struct DIG_tag *) 0x40000200)

struct WATCHDOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_VALUE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATCHDOG_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WATCHDOG_REFRESH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATCHDOG_CTRL;

};

#define WATCHDOG (*(volatile struct WATCHDOG_tag *) 0x40000300)

struct TIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_VALUE:24;
      uint64_t PRESCALE:3;
      uint64_t CLK_SRC:1;
      uint64_t MODE:1;
      uint64_t MULTI_COUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_VALUE:24;
      uint64_t PRESCALE:3;
      uint64_t CLK_SRC:1;
      uint64_t MODE:1;
      uint64_t MULTI_COUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_VALUE:24;
      uint64_t PRESCALE:3;
      uint64_t CLK_SRC:1;
      uint64_t MODE:1;
      uint64_t MULTI_COUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_VALUE:24;
      uint64_t PRESCALE:3;
      uint64_t CLK_SRC:1;
      uint64_t MODE:1;
      uint64_t MULTI_COUNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_STOP:1;
      uint64_t TIMER_START:1;
      uint64_t TIMER_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_STOP:1;
      uint64_t TIMER_START:1;
      uint64_t TIMER_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CTRL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_STOP:1;
      uint64_t TIMER_START:1;
      uint64_t TIMER_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CTRL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_STOP:1;
      uint64_t TIMER_START:1;
      uint64_t TIMER_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_CTRL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_VAL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_VAL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_VAL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER_VALUE:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER_VAL_3;

};

#define TIMER (*(volatile struct TIMER_tag *) 0x40000400)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_MODE:1;
      uint64_t reservedSpace0:7;
      uint64_t RETRY:2;
      uint64_t RECALL:1;
      uint64_t VREAD0_MODE:1;
      uint64_t VREAD1_MODE:1;
      uint64_t reservedSpace1:3;
      uint64_t NOT_LOAD_AUTO:1;
      uint64_t PREFETCH_IBUS:1;
      uint64_t PREFETCH_DBUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_IF_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_MAIN_WRITE_UNLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_LOW_W_EN:1;
      uint64_t MAIN_MIDDLE_W_EN:1;
      uint64_t MAIN_HIGH_W_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_MAIN_CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK_FREQ:4;
      uint64_t reservedSpace0:3;
      uint64_t READ_MARGIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_DELAY_CTRL;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND:5;
      uint64_t CMD_END:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CMD_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_LOW_W_UNLOCK:1;
      uint64_t MAIN_MIDDLE_W_UNLOCK:1;
      uint64_t MAIN_HIGH_W_UNLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t NVR1_W_UNLOCK:1;
      uint64_t NVR2_W_UNLOCK:1;
      uint64_t NVR3_W_UNLOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t RED1_W_UNLOCK:1;
      uint64_t RED2_W_UNLOCK:1;
      uint64_t BUSY:1;
      uint64_t PROG_SEQ_DATA_REQ:1;
      uint64_t ISOLATE_STATUS:1;
      uint64_t TRIMMED_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_IF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FLASH_ADDR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_DATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNLOCK_KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NVR_WRITE_UNLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t NVR1_W_EN:1;
      uint64_t NVR2_W_EN:1;
      uint64_t NVR3_W_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NVR_CTRL;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t PATCH_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PATCH_ADDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t PATCH_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PATCH_ADDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t PATCH_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PATCH_ADDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t PATCH_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PATCH_ADDR_3;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:1;
      uint64_t reservedSpace0:7;
      uint64_t COPY_MODE:1;
      uint64_t COPY_DEST:1;
      uint64_t reservedSpace1:6;
      uint64_t COMP_MODE:1;
      uint64_t COMP_ADDR_DIR:1;
      uint64_t COMP_ADDR_STEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COPY_CFG;

  uint8_t res4[68];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COPY_CTRL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COPY_SRC_ADDR_PTR:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COPY_SRC_ADDR_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t COPY_DST_ADDR_PTR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COPY_DST_ADDR_PTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COPY_WORD_CNT:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COPY_WORD_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDBUS_ECC_CTRL:1;
      uint64_t reservedSpace0:1;
      uint64_t CMD_ECC_CTRL:1;
      uint64_t COPIER_ECC_CTRL:1;
      uint64_t reservedSpace1:4;
      uint64_t ECC_COR_CNT_INT_THRESHOLD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ECC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_UNCOR_ERROR_CNT_STATUS:1;
      uint64_t ECC_COR_ERROR_CNT_STATUS:1;
      uint64_t reservedSpace0:2;
      uint64_t ECC_ERROR_ADDR_CLEAR:1;
      uint64_t ECC_UNCOR_ERROR_CNT_CLEAR:1;
      uint64_t ECC_COR_ERROR_CNT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ECC_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ECC_ERROR_ADDR:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ECC_ERROR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_UNCOR_ERROR_CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ECC_UNCOR_ERROR_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_COR_ERROR_CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ECC_COR_ERROR_CNT;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x40000500)

struct DMA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ADDR_MODE:1;
      uint64_t SRC_ADDR_INC:1;
      uint64_t DEST_ADDR_INC:1;
      uint64_t TRANSFER_TYPE:2;
      uint64_t CHANNEL_PRIORITY:2;
      uint64_t reservedSpace0:1;
      uint64_t SRC_SELECT:3;
      uint64_t DEST_SELECT:3;
      uint64_t reservedSpace1:1;
      uint64_t SRC_WORD_SIZE:2;
      uint64_t DEST_WORD_SIZE:2;
      uint64_t START_INT_ENABLE:1;
      uint64_t COUNTER_INT_ENABLE:1;
      uint64_t COMPLETE_INT_ENABLE:1;
      uint64_t ERROR_INT_ENABLE:1;
      uint64_t DISABLE_INT_ENABLE:1;
      uint64_t BYTE_ORDER:1;
      uint64_t SRC_ADDR_STEP_MODE:1;
      uint64_t DEST_ADDR_STEP_MODE:1;
      uint64_t SRC_ADDR_STEP_SIZE:2;
      uint64_t DEST_ADDR_STEP_SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL0_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_SRC_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_SRC_BASE_ADDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_DEST_BASE_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_DEST_BASE_ADDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_LENGTH:16;
      uint64_t COUNTER_INT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_CTRL1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_SRC_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_SRC_ADDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_NEXT_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_NEXT_DEST_ADDR_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_WORD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_WORD_CNT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_INT_STATUS:1;
      uint64_t START_INT_STATUS:1;
      uint64_t COUNTER_INT_STATUS:1;
      uint64_t COMPLETE_INT_STATUS:1;
      uint64_t ERROR_INT_STATUS:1;
      uint64_t STATE:3;
      uint64_t DISABLE_INT_CLEAR:1;
      uint64_t START_INT_CLEAR:1;
      uint64_t COUNTER_INT_CLEAR:1;
      uint64_t COMPLETE_INT_CLEAR:1;
      uint64_t ERROR_INT_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_STATUS_7;

};

#define DMA (*(volatile struct DMA_tag *) 0x40000600)

struct DIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_MODE:6;
      uint64_t reservedSpace0:2;
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
      uint64_t reservedSpace1:1;
      uint64_t DRIVE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_CFG_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO_bitfield:16;
      uint64_t GPIO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO_bitfield:16;
      uint64_t GPIO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_DIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:3;
      uint64_t EVENT:3;
      uint64_t DEBOUNCE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_INT_CFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:3;
      uint64_t EVENT:3;
      uint64_t DEBOUNCE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_INT_CFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:3;
      uint64_t EVENT:3;
      uint64_t DEBOUNCE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_INT_CFG_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:3;
      uint64_t EVENT:3;
      uint64_t DEBOUNCE_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_INT_CFG_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBOUNCE_COUNT:8;
      uint64_t DEBOUNCE_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_INT_DEBOUNCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_bitfield:5;
      uint64_t reservedSpace0:3;
      uint64_t FRAME:5;
      uint64_t reservedSpace1:3;
      uint64_t SERI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_PCM_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_bitfield:5;
      uint64_t reservedSpace0:3;
      uint64_t CS:5;
      uint64_t reservedSpace1:3;
      uint64_t SERI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_SPI_SRC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_bitfield:5;
      uint64_t reservedSpace0:3;
      uint64_t CS:5;
      uint64_t reservedSpace1:3;
      uint64_t SERI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_SPI_SRC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_UART_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCL:5;
      uint64_t reservedSpace0:3;
      uint64_t SDA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_I2C_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_bitfield:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_AUDIOSINK_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI:5;
      uint64_t NMI_POLARITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_NMI_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:5;
      uint64_t reservedSpace0:3;
      uint64_t CLK_bitfield:5;
      uint64_t reservedSpace1:3;
      uint64_t RF_SYNC_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_BB_RX_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISO:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_BB_SPI_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_bitfield:5;
      uint64_t reservedSpace0:3;
      uint64_t CSN:5;
      uint64_t reservedSpace1:3;
      uint64_t MOSI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_RF_SPI_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:5;
      uint64_t reservedSpace0:3;
      uint64_t GPIO1:5;
      uint64_t reservedSpace1:3;
      uint64_t GPIO2:5;
      uint64_t reservedSpace2:3;
      uint64_t GPIO3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_RF_GPIO03_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO4:5;
      uint64_t reservedSpace0:3;
      uint64_t GPIO5:5;
      uint64_t reservedSpace1:3;
      uint64_t GPIO6:5;
      uint64_t reservedSpace2:3;
      uint64_t GPIO7:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_RF_GPIO47_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO8:5;
      uint64_t reservedSpace0:3;
      uint64_t GPIO9:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_RF_GPIO89_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:5;
      uint64_t reservedSpace0:3;
      uint64_t CLK_bitfield:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_DMIC_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCK:5;
      uint64_t reservedSpace0:3;
      uint64_t TMS:5;
      uint64_t reservedSpace1:3;
      uint64_t TDI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_LPDSP32_JTAG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTMS_PULL:2;
      uint64_t JTMS_DRIVE:2;
      uint64_t JTCK_PULL:2;
      uint64_t CM3_JTAG_TRST_EN:1;
      uint64_t CM3_JTAG_DATA_EN:1;
      uint64_t JTMS_LPF:1;
      uint64_t JTCK_LPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_JTAG_SW_PAD_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULL_CTRL:2;
      uint64_t LPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_EXTCLK_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIO_PAD_CFG;

};

#define DIO (*(volatile struct DIO_tag *) 0x40000700)

struct SPI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0_PRESCALE:4;
      uint64_t SPI0_ENABLE:1;
      uint64_t SPI0_MODE_SELECT:1;
      uint64_t SPI0_CLK_POLARITY:1;
      uint64_t SPI0_SLAVE:1;
      uint64_t SPI0_CONTROLLER:1;
      uint64_t SPI0_UNDERRUN_INT_ENABLE:1;
      uint64_t SPI0_OVERRUN_INT_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0_WORD_SIZE:5;
      uint64_t SPI0_CS:1;
      uint64_t SPI0_RW_CMD:2;
      uint64_t SPI0_START_BUSY:1;
      uint64_t SPI0_BUSY_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0_TX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_TX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0_RX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_RX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI0_UNDERRUN_STATUS:1;
      uint64_t SPI0_OVERRUN_STATUS:1;
      uint64_t SPI0_RECEIVE_STATUS:1;
      uint64_t SPI0_TRANSMIT_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI0_STATUS;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40000800)

struct SPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_PRESCALE:4;
      uint64_t SPI1_ENABLE:1;
      uint64_t SPI1_MODE_SELECT:1;
      uint64_t SPI1_CLK_POLARITY:1;
      uint64_t SPI1_SLAVE:1;
      uint64_t SPI1_CONTROLLER:1;
      uint64_t SPI1_UNDERRUN_INT_ENABLE:1;
      uint64_t SPI1_OVERRUN_INT_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI1_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_WORD_SIZE:5;
      uint64_t SPI1_CS:1;
      uint64_t SPI1_RW_CMD:2;
      uint64_t SPI1_START_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI1_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_TX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI1_TX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_RX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI1_RX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_UNDERRUN_STATUS:1;
      uint64_t SPI1_OVERRUN_STATUS:1;
      uint64_t SPI1_RECEIVE_STATUS:1;
      uint64_t SPI1_TRANSMIT_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI1_STATUS;

};

#define SPI1 (*(volatile struct SPI1_tag *) 0x40000900)

struct PCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAVE:1;
      uint64_t ENABLE:1;
      uint64_t CONTROLLER:1;
      uint64_t FRAME_SUBFRAMES:1;
      uint64_t FRAME_LENGTH:3;
      uint64_t FRAME_WIDTH:1;
      uint64_t FRAME_ALIGN:1;
      uint64_t WORD_SIZE:2;
      uint64_t TX_ALIGN:1;
      uint64_t BIT_ORDER:1;
      uint64_t reservedSpace0:1;
      uint64_t PCM_CLK_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_TX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM_TX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_RX_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM_RX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UNDERRUN_STATUS:1;
      uint64_t OVERRUN_STATUS:1;
      uint64_t RECEIVE_STATUS:1;
      uint64_t TRANSMIT_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM_STATUS;

};

#define PCM (*(volatile struct PCM_tag *) 0x40000a00)

struct I2C_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLAVE_ENABLE:1;
      uint64_t I2C_SAMPLE_CLK_ENABLE:1;
      uint64_t AUTO_ACK_ENABLE:1;
      uint64_t STOP_INT_ENABLE:1;
      uint64_t CONTROLLER:1;
      uint64_t reservedSpace0:3;
      uint64_t SLAVE_ADDRESS:7;
      uint64_t reservedSpace1:1;
      uint64_t SPEED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
      uint64_t NACK:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP:1;
      uint64_t LAST_DATA:1;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_DATA_M:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_DATA_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READ_WRITE:1;
      uint64_t ADDRESS:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_ADDR_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK_STATUS:1;
      uint64_t GEN_CALL:1;
      uint64_t READ_WRITE:1;
      uint64_t ADDR_DATA:1;
      uint64_t BUS_FREE:1;
      uint64_t CLK_STRETCH:1;
      uint64_t BUFFER_FULL:1;
      uint64_t BUS_ERROR:1;
      uint64_t ERROR:1;
      uint64_t DATA_EVENT:1;
      uint64_t STOP_DETECT:1;
      uint64_t DMA_REQ:1;
      uint64_t MASTER_MODE:1;
      uint64_t START_PENDING:1;
      uint64_t BUS_ERROR_S:1;
      uint64_t ERROR_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_STATUS;

};

#define I2C (*(volatile struct I2C_tag *) 0x40000b00)

struct UART_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t DMA_ENABLE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRESCALE_ENABLE:1;
      uint64_t reservedSpace1:3;
      uint64_t PRESCALE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART_TX_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART_RX_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART_RX_OVERRUN_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_STATUS;

};

#define UART (*(volatile struct UART_tag *) 0x40000c00)

struct PWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWM_PERIOD:8;
      uint64_t PWM_HIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CFG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWM_PERIOD:8;
      uint64_t PWM_HIGH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CFG_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWM0_ENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t PWM1_ENABLE:1;
      uint64_t reservedSpace1:3;
      uint64_t PWM_OFFSET:8;
      uint64_t PWM_OFFSET_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWM_CTRL;

};

#define PWM (*(volatile struct PWM_tag *) 0x40000d00)

struct AUDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC0_ENABLE:1;
      uint64_t DMIC0_DATA_ALIGN:1;
      uint64_t DMIC0_INT_GEN_EN:1;
      uint64_t DMIC0_DMA_REQ_EN:1;
      uint64_t DMIC1_ENABLE:1;
      uint64_t DMIC1_DATA_ALIGN:1;
      uint64_t DMIC1_INT_GEN_EN:1;
      uint64_t DMIC1_DMA_REQ_EN:1;
      uint64_t OD_ENABLE:1;
      uint64_t OD_DATA_ALIGN:1;
      uint64_t OD_INT_GEN_EN:1;
      uint64_t OD_DMA_REQ_EN:1;
      uint64_t OD_UNDERRUN_PROTECT:1;
      uint64_t reservedSpace0:3;
      uint64_t DEC_RATE:5;
      uint64_t reservedSpace1:3;
      uint64_t DMIC_CLK_SRC:1;
      uint64_t OD_CLK_SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC0_DATA_RDY_FLAG:1;
      uint64_t DMIC0_OVERRUN_FLAG:1;
      uint64_t DMIC0_OVERRUN_FLAG_CLEAR:1;
      uint64_t reservedSpace0:1;
      uint64_t DMIC1_DATA_RDY_FLAG:1;
      uint64_t DMIC1_OVERRUN_FLAG:1;
      uint64_t DMIC1_OVERRUN_FLAG_CLEAR:1;
      uint64_t reservedSpace1:1;
      uint64_t OD_DATA_REQ_FLAG:1;
      uint64_t OD_UNDERRUN_FLAG:1;
      uint64_t OD_UNDERRUN_FLAG_CLEAR:1;
      uint64_t OD_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC0_CLK_EDGE:1;
      uint64_t DMIC1_CLK_EDGE:1;
      uint64_t reservedSpace0:6;
      uint64_t DMIC0_DCRM:3;
      uint64_t reservedSpace1:1;
      uint64_t DMIC1_DCRM:3;
      uint64_t reservedSpace2:1;
      uint64_t DMIC1_DELAY:4;
      uint64_t reservedSpace3:4;
      uint64_t DMIC1_FRAC_DELAY:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC0_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC1_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC0_DATA:16;
      uint64_t DMIC1_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC0_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_DMIC1_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EDGE:1;
      uint64_t reservedSpace0:9;
      uint64_t DITHER:1;
      uint64_t reservedSpace1:5;
      uint64_t DCRM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_OD_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_OD_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
      uint64_t DATA_RD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_OD_DATA;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDM_CFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIO_SDM_CFG;

};

#define AUDIO (*(volatile struct AUDIO_tag *) 0x40000e00)

struct CRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYTE_ORDER:1;
      uint64_t CRC_TYPE:1;
      uint64_t BIT_ORDER:1;
      uint64_t FINAL_CRC_REVERSE:1;
      uint64_t FINAL_CRC_XOR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT_CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_ADD_1_BIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_ADD_8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADD_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_ADD_16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADD_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_ADD_24_BITS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADD_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_ADD_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_ADD_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINAL_CRC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_FINAL;

};

#define CRC (*(volatile struct CRC_tag *) 0x40000f00)

struct AUDIOSINK_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT_RESET:1;
      uint64_t PHASE_CNT_START:1;
      uint64_t PHASE_CNT_STOP:1;
      uint64_t PHASE_CNT_STATUS:1;
      uint64_t PHASE_CNT_MISSED_STATUS:1;
      uint64_t PERIOD_CNT_START:1;
      uint64_t PERIOD_CNT_STOP:1;
      uint64_t PERIOD_CNT_STATUS:1;
      uint64_t PHASE_CNT_START_NO_WAIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOSINK_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIODS_CFG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOSINK_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOSINK_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHASE_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOSINK_PHASE_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD_CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUDIOSINK_PERIOD_CNT;

};

#define AUDIOSINK (*(volatile struct AUDIOSINK_tag *) 0x40001000)

struct ASRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_ENABLE:1;
      uint64_t ASRC_DISABLE:1;
      uint64_t ASRC_EN_STATUS:1;
      uint64_t ASRC_RESET:1;
      uint64_t reservedSpace0:4;
      uint64_t ASRC_IN_ERR_CLR:1;
      uint64_t ASRC_UPDATE_ERR_CLR:1;
      uint64_t ASRC_IN_ERR:1;
      uint64_t ASRC_UPDATE_ERR:1;
      uint64_t ASRC_IN_REQ:1;
      uint64_t ASRC_OUT_REQ:1;
      uint64_t ASRC_PROC_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_IN_REQ:1;
      uint64_t ASRC_OUT_REQ:1;
      uint64_t ASRC_IN_ERR:1;
      uint64_t ASRC_UPDATE_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_INT_ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_OUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_OUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_IN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_MODE:2;
      uint64_t WDF_TYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_OUTPUT_CNT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_OUTPUT_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STEP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_PHASE_INC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_PHASE_CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_PHASE_CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASRC_STATE_MEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ASRC_STATE_MEM_29;

};

#define ASRC (*(volatile struct ASRC_tag *) 0x40001100)

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_TRIM_CH_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_DATA_AUDIO_CH_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NEG_INPUT_SEL:3;
      uint64_t reservedSpace0:1;
      uint64_t POS_INPUT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_INPUT_SEL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:4;
      uint64_t CONTINUOUS_MODE:1;
      uint64_t DUTY_DIVIDER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_OFFSET;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUPPLY_SRC:1;
      uint64_t reservedSpace0:7;
      uint64_t SUPPLY_THRESHOLD:8;
      uint64_t ALARM_COUNT_VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_BATMON_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_INT_ENABLE:1;
      uint64_t ADC_INT_CH_NUM:3;
      uint64_t BATMON_ALARM_INT_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_BATMON_INT_ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUPPLY_COUNT_VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_BATMON_COUNT_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_READY_STAT:1;
      uint64_t ADC_OVERRUN_STAT:1;
      uint64_t reservedSpace0:2;
      uint64_t BATMON_ALARM_STAT:1;
      uint64_t reservedSpace1:3;
      uint64_t ADC_READY_CLEAR:1;
      uint64_t ADC_OVERRUN_CLEAR:1;
      uint64_t reservedSpace2:2;
      uint64_t BATMON_ALARM_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADC_BATMON_STATUS;

};

#define ADC (*(volatile struct ADC_tag *) 0x40001200)

struct ACS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:6;
      uint64_t reservedSpace0:2;
      uint64_t SLOPE_TRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_BG_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:5;
      uint64_t reservedSpace0:3;
      uint64_t BUCK_ENABLE:1;
      uint64_t CHARGE_CTRL:1;
      uint64_t PULSE_CTRL:1;
      uint64_t CCM_ENABLE:1;
      uint64_t reservedSpace1:4;
      uint64_t ICH_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VCC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDA_CP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:6;
      uint64_t reservedSpace0:6;
      uint64_t SLEEP_CLAMP:1;
      uint64_t ENABLE_LOW_BIAS:1;
      uint64_t reservedSpace1:2;
      uint64_t STANDBY_VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:6;
      uint64_t reservedSpace0:6;
      uint64_t SLEEP_CLAMP:1;
      uint64_t ENABLE_LOW_BIAS:1;
      uint64_t reservedSpace1:2;
      uint64_t STANDBY_VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDM_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:6;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE:1;
      uint64_t reservedSpace1:3;
      uint64_t CLAMP:1;
      uint64_t reservedSpace2:11;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDRF_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM:6;
      uint64_t reservedSpace0:2;
      uint64_t ENABLE:1;
      uint64_t ENABLE_ISENSE:1;
      uint64_t reservedSpace1:2;
      uint64_t VDDPA_SW_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDPA_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDCRET_ENABLE:1;
      uint64_t VDDCRET_VTRIM:2;
      uint64_t reservedSpace0:5;
      uint64_t VDDTRET_ENABLE:1;
      uint64_t VDDTRET_VTRIM:2;
      uint64_t reservedSpace1:5;
      uint64_t VDDMRET_ENABLE:1;
      uint64_t VDDMRET_VTRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_VDDRET_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTRIM_32K:6;
      uint64_t FTRIM_32K_ADJ:1;
      uint64_t reservedSpace0:1;
      uint64_t FTRIM_START:6;
      uint64_t reservedSpace1:1;
      uint64_t FTRIM_FLAG:1;
      uint64_t RC_OSC_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t CLOCK_MULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_RCOSC_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t IBOOST:1;
      uint64_t reservedSpace0:2;
      uint64_t ITRIM:4;
      uint64_t CLOAD_TRIM:6;
      uint64_t reservedSpace1:2;
      uint64_t FORCE_READY:1;
      uint64_t EN_AMPL_CTRL:1;
      uint64_t XIN_CAP_BYPASS_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_XTAL32K_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BB_TIMER_NRESET:1;
      uint64_t reservedSpace0:7;
      uint64_t BB_CLK_PRESCALE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_BB_TIMER_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t RESET_IGNORE:1;
      uint64_t reservedSpace0:6;
      uint64_t CLOCK_PRESENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_CLK_DET_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_RTC_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_RTC_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t CLK_SRC_SEL:3;
      uint64_t ALARM_CFG:4;
      uint64_t reservedSpace0:16;
      uint64_t RESET:1;
      uint64_t FORCE_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_RTC_CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_PWR_MODES_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0_WAKEUP_CLEAR:1;
      uint64_t DIO1_WAKEUP_CLEAR:1;
      uint64_t DIO2_WAKEUP_CLEAR:1;
      uint64_t DIO3_WAKEUP_CLEAR:1;
      uint64_t BB_TIMER_WAKEUP_CLEAR:1;
      uint64_t RTC_ALARM_WAKEUP_CLEAR:1;
      uint64_t WAKEUP_PAD_WAKEUP_CLEAR:1;
      uint64_t DCDC_OVERLOAD_CLEAR:1;
      uint64_t DIO0_WAKEUP:1;
      uint64_t DIO1_WAKEUP:1;
      uint64_t DIO2_WAKEUP:1;
      uint64_t DIO3_WAKEUP:1;
      uint64_t BB_TIMER_WAKEUP:1;
      uint64_t RTC_ALARM_WAKEUP:1;
      uint64_t WAKEUP_PAD_WAKEUP:1;
      uint64_t DCDC_OVERLOAD_WAKEUP:1;
      uint64_t BOOT_SELECT:2;
      uint64_t RC_FTRIM_FLAG:1;
      uint64_t RC_CLOCK_MULT:1;
      uint64_t BOOT_FLASH_APP_REBOOT:1;
      uint64_t reservedSpace0:3;
      uint64_t PADS_RETENTION_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_WAKEUP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0_EN:1;
      uint64_t DIO1_EN:1;
      uint64_t DIO2_EN:1;
      uint64_t DIO3_EN:1;
      uint64_t DIO0_POL:1;
      uint64_t DIO1_POL:1;
      uint64_t DIO2_POL:1;
      uint64_t DIO3_POL:1;
      uint64_t WAKEUP_PAD_POL:1;
      uint64_t DCDC_OVERLOAD_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DELAY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_WAKEUP_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_VALUE:8;
      uint64_t reservedSpace0:8;
      uint64_t WAKEUP_SRC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_WAKEUP_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GP_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_WAKEUP_GP_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR_RESET_FLAG_CLEAR:1;
      uint64_t PAD_RESET_FLAG_CLEAR:1;
      uint64_t VDDC_RESET_FLAG_CLEAR:1;
      uint64_t VDDM_RESET_FLAG_CLEAR:1;
      uint64_t VDDA_RESET_FLAG_CLEAR:1;
      uint64_t CLK_DET_RESET_FLAG_CLEAR:1;
      uint64_t TIMEOUT_RESET_FLAG_CLEAR:1;
      uint64_t reservedSpace0:1;
      uint64_t POR_RESET_FLAG:1;
      uint64_t PAD_RESET_FLAG:1;
      uint64_t VDDC_RESET_FLAG:1;
      uint64_t VDDM_RESET_FLAG:1;
      uint64_t VDDA_RESET_FLAG:1;
      uint64_t CLK_DET_RESET_FLAG:1;
      uint64_t TIMEOUT_RESET_FLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_RESET_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_AOUT:5;
      uint64_t reservedSpace0:3;
      uint64_t RTC_CLOCK_DIO0_START:3;
      uint64_t RTC_CLOCK_DIO0_STOP_SRC:2;
      uint64_t RTC_CLOCK_DIO0_STOP_EDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_AOUT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BYTE0_RO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS_JIC_READ;

};

#define ACS (*(volatile struct ACS_tag *) 0x40001300)

struct BBIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_ENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t CLK_SEL:6;
      uint64_t reservedSpace1:6;
      uint64_t WAKEUP_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RADIO_EN:1;
      uint64_t OSC_EN:1;
      uint64_t CLK_STATUS:1;
      uint64_t AOBLE_STATUS:1;
      uint64_t LINK_LABEL:5;
      uint64_t reservedSpace0:2;
      uint64_t LINK_FORMAT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX:1;
      uint64_t reservedSpace0:3;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_COEX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_RX:1;
      uint64_t reservedSpace0:3;
      uint64_t BLE_TX:1;
      uint64_t reservedSpace1:3;
      uint64_t BLE_IN_PROCESS:1;
      uint64_t reservedSpace2:3;
      uint64_t BLE_PTI:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_COEX_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_RX_EVENT:2;
      uint64_t reservedSpace0:2;
      uint64_t BLE_TX_EVENT:2;
      uint64_t reservedSpace1:2;
      uint64_t BLE_IN_PROCESS_EVENT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_COEX_INT_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_RX_EVENT_FLAG:1;
      uint64_t reservedSpace0:3;
      uint64_t BLE_TX_EVENT_FLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_COEX_INT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SOURCE:3;
      uint64_t LINK_LABEL:5;
      uint64_t reservedSpace0:2;
      uint64_t LINK_FORMAT:5;
      uint64_t RF_ACTIVE:1;
      uint64_t RF_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BBIF_SYNC_CFG;

};

#define BBIF (*(volatile struct BBIF_tag *) 0x40001400)

struct BB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCERR:3;
      uint64_t reservedSpace0:1;
      uint64_t RXWINSZDEF:4;
      uint64_t RWBLE_EN:1;
      uint64_t ADVERTFILT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t HOP_REMAP_DSB:1;
      uint64_t CRC_DSB:1;
      uint64_t WHIT_DSB:1;
      uint64_t CRYPT_DSB:1;
      uint64_t NESN_DSB:1;
      uint64_t SN_DSB:1;
      uint64_t MD_DSB:1;
      uint64_t reservedSpace2:1;
      uint64_t SCAN_ABORT:1;
      uint64_t ADVERT_ABORT:1;
      uint64_t RFTEST_ABORT:1;
      uint64_t reservedSpace3:1;
      uint64_t SWINT_REQ:1;
      uint64_t REG_SOFT_RST:1;
      uint64_t MASTER_TGSOFT_RST:1;
      uint64_t MASTER_SOFT_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RWBBCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILD:8;
      uint64_t UPG:8;
      uint64_t REL:8;
      uint64_t TYP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD_WIDTH:5;
      uint64_t DATA_WIDTH:1;
      uint64_t BUSTYPE:1;
      uint64_t INTMODE:1;
      uint64_t CLK_SEL:6;
      uint64_t USECRYPT:1;
      uint64_t USEDBG:1;
      uint64_t RFIF:5;
      uint64_t COEX:1;
      uint64_t reservedSpace0:1;
      uint64_t DECIPHER:1;
      uint64_t ISOPORTNB:2;
      uint64_t reservedSpace1:5;
      uint64_t DMMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RWBLEBCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTMSK:1;
      uint64_t RXINTMSK:1;
      uint64_t SLPINTMSK:1;
      uint64_t EVENTINTMSK:1;
      uint64_t CRYPTINTMSK:1;
      uint64_t ERRORINTMSK:1;
      uint64_t GROSSTGTIMINTMSK:1;
      uint64_t FINETGTIMINTMSK:1;
      uint64_t EVENTAPFAINTMSK:1;
      uint64_t SWINTMSK:1;
      uint64_t AUDIOINT0MSK:1;
      uint64_t AUDIOINT1MSK:1;
      uint64_t AUDIOINT2MSK:1;
      uint64_t reservedSpace0:2;
      uint64_t CSCNTDEVMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_INTCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTSTAT:1;
      uint64_t RXINTSTAT:1;
      uint64_t SLPINTSTAT:1;
      uint64_t EVENTINTSTAT:1;
      uint64_t CRYPTINTSTAT:1;
      uint64_t ERRORINTSTAT:1;
      uint64_t GROSSTGTIMINTSTAT:1;
      uint64_t FINETGTIMINTSTAT:1;
      uint64_t EVENTAPFAINTSTAT:1;
      uint64_t SWINTSTAT:1;
      uint64_t AUDIOINT0STAT:1;
      uint64_t AUDIOINT1STAT:1;
      uint64_t AUDIOINT2STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTRAWSTAT:1;
      uint64_t RXINTRAWSTAT:1;
      uint64_t SLPINTRAWSTAT:1;
      uint64_t EVENTINTRAWSTAT:1;
      uint64_t CRYPTINTRAWSTAT:1;
      uint64_t ERRORINTRAWSTAT:1;
      uint64_t GROSSTGTIMINTRAWSTAT:1;
      uint64_t FINETGTIMINTRAWSTAT:1;
      uint64_t EVENTAPFAINTRAWSTAT:1;
      uint64_t SWINTRAWSTAT:1;
      uint64_t AUDIOINT0RAWSTAT:1;
      uint64_t AUDIOINT1RAWSTAT:1;
      uint64_t AUDIOINT2RAWSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_INTRAWSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTACK:1;
      uint64_t RXINTACK:1;
      uint64_t SLPINTACK:1;
      uint64_t EVENTINTACK:1;
      uint64_t CRYPTINTACK:1;
      uint64_t ERRORINTACK:1;
      uint64_t GROSSTGTIMINTACK:1;
      uint64_t FINETGTIMINTACK:1;
      uint64_t EVENTAPFAINTACK:1;
      uint64_t SWINTACK:1;
      uint64_t AUDIOINT0ACK:1;
      uint64_t AUDIOINT1ACK:1;
      uint64_t AUDIOINT2ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_INTACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETIMECNT:27;
      uint64_t reservedSpace0:4;
      uint64_t SAMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BASETIMECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINECNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_FINETIMECNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDADDRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BDADDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDADDRU:16;
      uint64_t PRIV_NPUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BDADDRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENTRXDESCPTR:15;
      uint64_t reservedSpace0:1;
      uint64_t ETPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ET_CURRENTRXDESCPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSC_SLEEP_EN:1;
      uint64_t RADIO_SLEEP_EN:1;
      uint64_t DEEP_SLEEP_ON:1;
      uint64_t DEEP_SLEEP_CORR_EN:1;
      uint64_t SOFT_WAKEUP_REQ:1;
      uint64_t reservedSpace0:10;
      uint64_t DEEP_SLEEP_STAT:1;
      uint64_t reservedSpace1:15;
      uint64_t EXTWKUPDSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DEEPSLCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEEPSLTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DEEPSLWKUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEEPSLDUR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DEEPSLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t TWOSC:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ENBPRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINECNTCORR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_FINECNTCORR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETIMECNTCORR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BASETIMECNTCORR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG0:6;
      uint64_t reservedSpace0:1;
      uint64_t DIAG0_EN:1;
      uint64_t DIAG1:6;
      uint64_t reservedSpace1:1;
      uint64_t DIAG1_EN:1;
      uint64_t DIAG2:6;
      uint64_t reservedSpace2:1;
      uint64_t DIAG2_EN:1;
      uint64_t DIAG3:6;
      uint64_t reservedSpace3:1;
      uint64_t DIAG3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DIAGCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG0STAT:8;
      uint64_t DIAG1STAT:8;
      uint64_t DIAG2STAT:8;
      uint64_t DIAG3STAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DIAGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM_ADDMAX:16;
      uint64_t REG_ADDMAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DEBUGADDMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM_ADDMIN:16;
      uint64_t REG_ADDMIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_DEBUGADDMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRYPT_ERROR:1;
      uint64_t RXCRYPT_ERROR:1;
      uint64_t PKTCNTL_EMACC_ERROR:1;
      uint64_t RADIO_EMACC_ERROR:1;
      uint64_t EVT_SCHDL_EMACC_ERROR:1;
      uint64_t EVT_SCHDL_ENTRY_ERROR:1;
      uint64_t EVT_SCHDL_APFM_ERROR:1;
      uint64_t EVT_CNTL_APFM_ERROR:1;
      uint64_t WHITELIST_ERROR:1;
      uint64_t IFS_UNDERRUN:1;
      uint64_t ADV_UNDERRUN:1;
      uint64_t LLCHMAP_ERROR:1;
      uint64_t CSFORMAT_ERROR:1;
      uint64_t TXDESC_EMPTY_ERROR:1;
      uint64_t RXDESC_EMPTY_ERROR:1;
      uint64_t TXDATA_PTR_ERROR:1;
      uint64_t RXDATA_PTR_ERROR:1;
      uint64_t CONCEVTIRQ_ERROR:1;
      uint64_t RAL_ERROR:1;
      uint64_t RAL_UNDERRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ERRORTYPESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWPROF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_SWPROFILING;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIGO:1;
      uint64_t SPICOMP:1;
      uint64_t reservedSpace0:2;
      uint64_t SPIFREQ:2;
      uint64_t reservedSpace1:10;
      uint64_t SPIPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOCNTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBVERSION:4;
      uint64_t XRFSEL:5;
      uint64_t reservedSpace0:3;
      uint64_t JEF_SELECT:1;
      uint64_t DPCORR_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t SYNC_PULSE_MODE:1;
      uint64_t FORCEAGC_LENGTH:12;
      uint64_t reservedSpace2:2;
      uint64_t FORCEBLEIQ:1;
      uint64_t FORCEAGC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOCNTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQTABLE_PTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOCNTL2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPWRUP0:8;
      uint64_t TXPWRDN0:5;
      uint64_t reservedSpace0:3;
      uint64_t RXPWRUP0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOPWRUPDN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPWRUP1:8;
      uint64_t TXPWRDN1:5;
      uint64_t reservedSpace0:3;
      uint64_t RXPWRUP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOPWRUPDN1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_POSITION0:7;
      uint64_t reservedSpace0:1;
      uint64_t RFRXTMDA0:7;
      uint64_t reservedSpace1:1;
      uint64_t RXPATHDLY0:5;
      uint64_t reservedSpace2:3;
      uint64_t TXPATHDLY0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOTXRXTIM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_POSITION1:7;
      uint64_t reservedSpace0:1;
      uint64_t RFRXTMDA1:7;
      uint64_t reservedSpace1:1;
      uint64_t RXPATHDLY1:5;
      uint64_t reservedSpace2:3;
      uint64_t TXPATHDLY1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RADIOTXRXTIM1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXONPTR:16;
      uint64_t TXOFFPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_SPIPTRCNTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXONPTR:16;
      uint64_t RXOFFPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_SPIPTRCNTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSIPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_SPIPTRCNTL2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADVCHMAP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ADVCHMAP;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADVINT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ADVTIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPPERLIMIT:9;
      uint64_t reservedSpace0:7;
      uint64_t BACKOFF:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ACTSCANSTAT;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLPUBADDPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_WLPUBADDPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLPRIVADDPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_WLPRIVADDPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBPUBDEV:8;
      uint64_t NBPRIVDEV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_WLNBDEV;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_START:1;
      uint64_t AES_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESKEY31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESKEY63_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESKEY95_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESKEY127_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_AESPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMICVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_TXMICVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMICVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RXMICVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLENGTH:9;
      uint64_t reservedSpace0:2;
      uint64_t TXPKTCNTEN:1;
      uint64_t TXPLDSRC:1;
      uint64_t PRBSTYPE:1;
      uint64_t TXLENGTHSRC:1;
      uint64_t INFINITETX:1;
      uint64_t reservedSpace1:11;
      uint64_t RXPKTCNTEN:1;
      uint64_t reservedSpace2:3;
      uint64_t INFINITERX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RFTESTCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RFTESTTXSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPKTCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RFTESTRXSTAT;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREFETCH_TIME:9;
      uint64_t reservedSpace0:7;
      uint64_t PREFETCHABORT_TIME:10;
      uint64_t reservedSpace1:5;
      uint64_t APFM_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_TIMGENCNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GROSSTARGET:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_GROSSTIMTGT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINETARGET:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_FINETIMTGT;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEX_EN:1;
      uint64_t SYNCGEN_EN:1;
      uint64_t MWSCOEX_EN:1;
      uint64_t MWSWCI_EN:1;
      uint64_t RXMSK:2;
      uint64_t TXMSK:2;
      uint64_t MWSRXMSK:2;
      uint64_t MWSTXMSK:2;
      uint64_t MWSRXFREQMSK:2;
      uint64_t MWSTXFREQMSK:2;
      uint64_t WLCTXPRIOMODE:2;
      uint64_t reservedSpace0:2;
      uint64_t WLCRXPRIOMODE:2;
      uint64_t reservedSpace1:2;
      uint64_t MWSSCANFREQMSK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_COEXIFCNTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLCPDELAY:7;
      uint64_t reservedSpace0:1;
      uint64_t WLCPDURATION:7;
      uint64_t reservedSpace1:1;
      uint64_t WLCPTXTHR:5;
      uint64_t reservedSpace2:3;
      uint64_t WLCPRXTHR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_COEXIFCNTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_ANT_DELAY:4;
      uint64_t reservedSpace0:4;
      uint64_t RX_ANT_DELAY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_COEXIFCNTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEM0:4;
      uint64_t BLEM1:4;
      uint64_t BLEM2:4;
      uint64_t BLEM3:4;
      uint64_t BLEM4:4;
      uint64_t BLEM5:4;
      uint64_t BLEM6:4;
      uint64_t BLEM7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BBMPRIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEM8:4;
      uint64_t BLEM9:4;
      uint64_t reservedSpace0:20;
      uint64_t BLEMDEFAULT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BBMPRIO1;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RALPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RALPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RALNBDEV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RALNBDEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LRND_VAL:22;
      uint64_t reservedSpace0:9;
      uint64_t LRND_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RAL_LOCAL_RND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRND_VAL:22;
      uint64_t reservedSpace0:9;
      uint64_t PRND_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_RAL_PEER_RND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISOTYPE0:2;
      uint64_t ISOCHANEN0:1;
      uint64_t SYNCGEN0:1;
      uint64_t RETXACKEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCHANCNTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUTE_PATTERN0:8;
      uint64_t reservedSpace0:8;
      uint64_t INVL0_0:1;
      uint64_t INVL0_1:1;
      uint64_t MUTE_SOURCE0:1;
      uint64_t MUTE_SINK0:1;
      uint64_t reservedSpace1:11;
      uint64_t TOGO0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOMUTECNTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO0TXPTR1:16;
      uint64_t ISO0TXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTTXPTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO0RXPTR1:16;
      uint64_t ISO0RXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTRXPTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO0TXLEN:8;
      uint64_t reservedSpace0:8;
      uint64_t ISO0RXLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOTRCNL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETU0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETU0;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISOTYPE1:2;
      uint64_t ISOCHANEN1:1;
      uint64_t SYNCGEN1:1;
      uint64_t RETXACKEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCHANCNTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUTE_PATTERN1:8;
      uint64_t reservedSpace0:8;
      uint64_t INVL1_0:1;
      uint64_t INVL1_1:1;
      uint64_t MUTE_SOURCE1:1;
      uint64_t MUTE_SINK1:1;
      uint64_t reservedSpace1:11;
      uint64_t TOGO1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOMUTECNTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO1TXPTR1:16;
      uint64_t ISO1TXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTTXPTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO1RXPTR1:16;
      uint64_t ISO1RXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTRXPTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO1TXLEN:8;
      uint64_t reservedSpace0:8;
      uint64_t ISO1RXLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOTRCNL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETU1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETU1;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISOTYPE2:2;
      uint64_t ISOCHANEN2:1;
      uint64_t SYNCGEN2:1;
      uint64_t RETXACKEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCHANCNTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUTE_PATTERN2:8;
      uint64_t reservedSpace0:8;
      uint64_t INVL2_0:1;
      uint64_t INVL2_1:1;
      uint64_t MUTE_SOURCE2:1;
      uint64_t MUTE_SINK2:1;
      uint64_t reservedSpace1:11;
      uint64_t TOGO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOMUTECNTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO2TXPTR1:16;
      uint64_t ISO2TXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTTXPTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO2RXPTR1:16;
      uint64_t ISO2RXPTR0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOCURRENTRXPTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISO2TXLEN:8;
      uint64_t reservedSpace0:8;
      uint64_t ISO2RXLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOTRCNL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETL2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT_CNT_OFFSETU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_ISOEVTCNTLOFFSETU2;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEMARGIN:8;
      uint64_t reservedSpace0:7;
      uint64_t BLEPRIOMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BB_BBPRIOSCHARB;

};

#define BB (*(volatile struct BB_tag *) 0x40001500)

struct RF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_MODE:2;
      uint64_t MODE_TX_NRX:1;
      uint64_t MODE_EN_SERIALIZER:1;
      uint64_t MODE_EN_DESERIALIZER:1;
      uint64_t MODE_EN_FSM:1;
      uint64_t reservedSpace0:1;
      uint64_t MODE_NOT_TO_IDLE:1;
      uint64_t MODE2_TESTMODE:5;
      uint64_t MODE2_PSK_NFSK:1;
      uint64_t MODE2_DIFF_CODING:1;
      uint64_t reservedSpace1:1;
      uint64_t FOURFSK_CODING_RX_FOURFSK_CODING:3;
      uint64_t reservedSpace2:1;
      uint64_t FOURFSK_CODING_TX_FOURFSK_CODING:3;
      uint64_t FOURFSK_CODING_EN_FOURFSK_CODING:1;
      uint64_t DATAWHITE_BTLE_DW_BTLE_RST:7;
      uint64_t DATAWHITE_BTLE_DW_BTLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_TX_CK_TX_M:5;
      uint64_t MOD_TX_EN_INTERP:1;
      uint64_t MOD_TX_PULSE_NSYM:1;
      uint64_t reservedSpace0:1;
      uint64_t CARRIER_RECOVERY_EN_ROUGH_RECOV:1;
      uint64_t CARRIER_RECOVERY_EN_FINE_RECOV:1;
      uint64_t CARRIER_RECOVERY_EN_AFC:1;
      uint64_t CARRIER_RECOVERY_STARTER_MODE:1;
      uint64_t CARRIER_RECOVERY_AFC_NEG:1;
      uint64_t CARRIER_RECOVERY_EN_CORRECT_CFREQ_IF:1;
      uint64_t CARRIER_RECOVERY_CORRECT_CFREQ_IF_NEG:1;
      uint64_t CARRIER_RECOVERY_EN_CORRECT_CFREQ_AFC:1;
      uint64_t TAU_ROUGH_RECOV_TAU_ROUGH_RECOV:8;
      uint64_t TAU_PHASE_RECOV_TAU_PHASE_RECOV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAU_CLK_RECOV_TAU_CLK_RECOV:8;
      uint64_t TAU_DATARATE_RECOV_TAU_DATARATE_RECOV:8;
      uint64_t DATARATE_OFFSET_DATARATE_OFFSET:8;
      uint64_t FIFO_FIFO_THR:3;
      uint64_t FIFO_RX_FIFO_ACK:1;
      uint64_t FIFO_FIFO_FLUSH_ON_CRC_ERR:1;
      uint64_t FIFO_FIFO_FLUSH_ON_PL_ERR:1;
      uint64_t FIFO_FIFO_FLUSH_ON_ADDR_ERR:1;
      uint64_t FIFO_FIFO_FLUSH_ON_OVFLW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFO_2_TXFF_FLUSH_ON_STOP:1;
      uint64_t FIFO_2_RXFF_FLUSH_ON_START:1;
      uint64_t FIFO_2_STOP_ON_TXFF_UNFLW:1;
      uint64_t FIFO_2_STOP_ON_RXFF_OVFLW:1;
      uint64_t FIFO_2_WAIT_TXFIFO_WR:1;
      uint64_t FIFO_2_FIFO_THR_TX:3;
      uint64_t IRQ_CONF_IRQS_MASK:6;
      uint64_t IRQ_CONF_IRQ_ACTIVE_LOW:1;
      uint64_t IRQ_CONF_IRQ_HIGH_Z:1;
      uint64_t PAD_CONF_1_PAD_0_CONF:4;
      uint64_t PAD_CONF_1_PAD_1_CONF:4;
      uint64_t PAD_CONF_2_PAD_2_CONF:4;
      uint64_t PAD_CONF_2_PAD_3_CONF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAD_CONF_3_PAD_4_CONF:4;
      uint64_t PAD_CONF_3_PAD_5_CONF:4;
      uint64_t PAD_CONF_4_PAD_6_CONF:4;
      uint64_t PAD_CONF_4_PAD_7_CONF:4;
      uint64_t PAD_CONF_5_PAD_8_CONF:4;
      uint64_t PAD_CONF_5_PAD_9_CONF:4;
      uint64_t MAC_CONF_TX_MAC_START_NSTOP:1;
      uint64_t MAC_CONF_TX_MAC_TX_NRX:1;
      uint64_t MAC_CONF_TX_MAC_ACT:1;
      uint64_t MAC_CONF_RX_MAC_START_NSTOP:1;
      uint64_t MAC_CONF_RX_MAC_TX_NRX:1;
      uint64_t MAC_CONF_RX_MAC_ACT:1;
      uint64_t MAC_CONF_MAC_TIMER_GR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_MAC_TIMER_RX_MAC_TIMER:8;
      uint64_t TX_MAC_TIMER_TX_MAC_TIMER:8;
      uint64_t BANK_BANK:2;
      uint64_t BANK_DATARATE_TX_NRX:1;
      uint64_t reservedSpace0:5;
      uint64_t CHANNEL_CHANNEL:6;
      uint64_t CHANNEL_SWITCH_IQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CENTER_FREQ_CENTER_FREQUENCY:30;
      uint64_t CENTER_FREQ_RX_DIV_5_N6:1;
      uint64_t CENTER_FREQ_ADAPT_CFREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_CENTER_FREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_INFO_TX_DR_M_TX:5;
      uint64_t MOD_INFO_TX_SYMBOL_2BIT_TX:1;
      uint64_t MOD_INFO_TX_EN_DIV_2_N3_TX:1;
      uint64_t reservedSpace0:1;
      uint64_t MOD_INFO_RX_DR_M_RX:5;
      uint64_t MOD_INFO_RX_SYMBOL_2BIT_RX:1;
      uint64_t MOD_INFO_RX_EN_DIV_2_N3_RX:1;
      uint64_t reservedSpace1:1;
      uint64_t CHANNELS_1_CHANNEL_SPACING_LO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANNELS_2_CHANNEL_SPACING_HI:4;
      uint64_t reservedSpace0:3;
      uint64_t CHANNELS_2_EN_CHANNEL_SEL:1;
      uint64_t CODING_EN_MANCHESTER:1;
      uint64_t CODING_EN_802154_B2C:1;
      uint64_t CODING_EN_802154_L2F:1;
      uint64_t CODING_EVEN_BEFORE_ODD:1;
      uint64_t CODING_BIT_INVERT:1;
      uint64_t CODING_OFFSET:1;
      uint64_t CODING_I_NQ_DELAYED:1;
      uint64_t CODING_EN_DATAWHITE:1;
      uint64_t PACKET_HANDLING_EN_PACKET:1;
      uint64_t PACKET_HANDLING_EN_PATTERN:1;
      uint64_t PACKET_HANDLING_ENB_DW_ON_CRC:1;
      uint64_t PACKET_HANDLING_EN_MULTI_FRAME:1;
      uint64_t PACKET_HANDLING_EN_PREAMBLE:1;
      uint64_t PACKET_HANDLING_EN_CRC_ON_PKTLEN:1;
      uint64_t PACKET_HANDLING_EN_CRC:1;
      uint64_t PACKET_HANDLING_LSB_FIRST:1;
      uint64_t PACKET_LENGTH_PACKET_LEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_LENGTH_OPTS_PACKET_LEN_POS:2;
      uint64_t PACKET_LENGTH_OPTS_PACKET_LEN_CORR:4;
      uint64_t PACKET_LENGTH_OPTS_EN_PACKET_LEN_FIX:1;
      uint64_t reservedSpace0:1;
      uint64_t PREAMBLE_PREAMBLE:8;
      uint64_t PREAMBLE_LENGTH_PREAMBLE_LEN:8;
      uint64_t ADDRESS_CONF_EN_ADDRESS_TX:1;
      uint64_t ADDRESS_CONF_EN_ADDRESS_RX:1;
      uint64_t ADDRESS_CONF_EN_ADDRESS_RX_BR:1;
      uint64_t ADDRESS_CONF_ADDRESS_LEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDRESS_ADDRESS:16;
      uint64_t ADDRESS_BROADCAST_ADDRESS_BR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG0A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATTERN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_SYNC_PATTERN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_EXTRA_PATTERN_WORD_LEN:2;
      uint64_t PACKET_EXTRA_PATTERN_MAX_ERR:2;
      uint64_t PACKET_EXTRA_PKT_INFO_PRE_NPOST:1;
      uint64_t PACKET_EXTRA_EN_STOP_WORD:1;
      uint64_t PACKET_EXTRA_STOP_WORD_LEN:2;
      uint64_t CONV_CODES_CONF_EN_CONV_CODE:1;
      uint64_t CONV_CODES_CONF_CC_EN_TX_STOP:1;
      uint64_t CONV_CODES_CONF_CC_VITERBI_LEN:2;
      uint64_t reservedSpace0:4;
      uint64_t CONV_CODES_POLY_CC_POLY_0:5;
      uint64_t CONV_CODES_POLY_CC_POLY_1:5;
      uint64_t CONV_CODES_POLY_CC_POLY_2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_POLYNOMIAL_CRC_POLY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_CRC_POLYNOMIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_RST_CRC_RST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_CRC_RST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONV_CODES_PUNCT_CC_PUNCT_0:5;
      uint64_t CONV_CODES_PUNCT_CC_PUNCT_1:5;
      uint64_t CONV_CODES_PUNCT_CC_PUNCT_2:5;
      uint64_t reservedSpace0:1;
      uint64_t FRAC_CONF_RX_EN_FRAC:1;
      uint64_t FRAC_CONF_TX_EN_FRAC:1;
      uint64_t FRAC_CONF_RX_FRAC_GAIN:1;
      uint64_t FRAC_CONF_TX_FRAC_GAIN:1;
      uint64_t reservedSpace1:4;
      uint64_t RX_FRAC_CONF_RX_FRAC_NUM:4;
      uint64_t RX_FRAC_CONF_RX_FRAC_DEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG0F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FRAC_CONF_TX_FRAC_NUM:4;
      uint64_t TX_FRAC_CONF_TX_FRAC_DEN:4;
      uint64_t TX_MULT_TX_MULT_MAN:4;
      uint64_t TX_MULT_TX_MULT_EXP:4;
      uint64_t FRONTEND_DIV_PHADC:4;
      uint64_t FRONTEND_EN_RESAMPLE_PHADC:1;
      uint64_t FRONTEND_EN_RESAMPLE_RSSI:1;
      uint64_t FRONTEND_EN_PHADC_DEGLITCH:1;
      uint64_t reservedSpace0:1;
      uint64_t FRONTEND2_RESAMPLE_RSSI_G1:2;
      uint64_t FRONTEND2_RESAMPLE_RSSI_G2:3;
      uint64_t FRONTEND2_RESAMPLE_PH_GAIN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PULSE_SHAPE_1_TX_COEF1:8;
      uint64_t TX_PULSE_SHAPE_1_TX_COEF2:8;
      uint64_t TX_PULSE_SHAPE_1_TX_COEF3:8;
      uint64_t TX_PULSE_SHAPE_1_TX_COEF4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_TX_PULSE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PULSE_SHAPE_2_TX_COEF5:8;
      uint64_t TX_PULSE_SHAPE_2_TX_COEF6:8;
      uint64_t TX_PULSE_SHAPE_2_TX_COEF7:8;
      uint64_t TX_PULSE_SHAPE_2_TX_COEF8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_TX_PULSE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PULSE_SHAPE_3_TX_COEF9:8;
      uint64_t TX_PULSE_SHAPE_3_TX_COEF10:8;
      uint64_t TX_PULSE_SHAPE_3_TX_COEF11:8;
      uint64_t TX_PULSE_SHAPE_3_TX_COEF12:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_TX_PULSE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PULSE_SHAPE_4_TX_COEF13:8;
      uint64_t TX_PULSE_SHAPE_4_TX_COEF14:8;
      uint64_t TX_PULSE_SHAPE_4_TX_COEF15:8;
      uint64_t TX_PULSE_SHAPE_4_TX_COEF16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_TX_PULSE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_PULSE_SHAPE_RX_COEF1:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF2:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF3:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF4:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF5:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF6:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF7:4;
      uint64_t RX_PULSE_SHAPE_RX_COEF8:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_RX_PULSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTER_GAIN_FILTER_GAIN_E:3;
      uint64_t FILTER_GAIN_FILTER_GAIN_M:3;
      uint64_t FILTER_GAIN_DR_LIMIT:2;
      uint64_t FSK_FCR_AMP_1_FSK_FCR_AMP1:8;
      uint64_t RX_IF_IF2_CLK_OS:9;
      uint64_t RX_IF_RESAMPLE_PH_IF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARRIER_RECOVERY_EXTRA_FREQ_LIMIT_EXP:3;
      uint64_t reservedSpace0:1;
      uint64_t CARRIER_RECOVERY_EXTRA_FREQ_LIMIT_MAN:3;
      uint64_t reservedSpace1:1;
      uint64_t CARRIER_RECOVERY_EXTRA_EN_NOT_CAUSAL:1;
      uint64_t CARRIER_RECOVERY_EXTRA_NC_SEL_OUT:3;
      uint64_t CARRIER_RECOVERY_EXTRA_EN_SYNC_OK_DELAY_LINE:1;
      uint64_t CARRIER_RECOVERY_EXTRA_MAX_ERR_IN_DL_SYNC:2;
      uint64_t reservedSpace2:1;
      uint64_t FSK_FCR_AMP_2_FSK_FCR_AMP2:8;
      uint64_t FSK_FCR_AMP_3_FSK_FCR_AMP3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DECISION_EN_VITERBI_GFSK:1;
      uint64_t DECISION_VITERBI_POW_NLIN:1;
      uint64_t DECISION_VITERBI_LEN:2;
      uint64_t DECISION_USE_VIT_SOFT:1;
      uint64_t reservedSpace0:3;
      uint64_t RSSI_BANK_TAU_RSSI_FILTERING:4;
      uint64_t RSSI_BANK_EN_FAST_PRE_SYNC:1;
      uint64_t RSSI_BANK_FAST_RSSI:1;
      uint64_t RSSI_BANK_RSSI_TRI_CK_DIV:2;
      uint64_t CORRECT_CFREQ_IF_CORRECT_CFREQ_IF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CH_FILTER_DIV_FILT:4;
      uint64_t CLK_CH_FILTER_DIV_RSSI:4;
      uint64_t PA_PWR_PA_PWR:5;
      uint64_t PA_PWR_MIN_PA_PWR:1;
      uint64_t reservedSpace0:2;
      uint64_t PLL_BANK_IQ_PLL_0:4;
      uint64_t PLL_BANK_PLL_FILTER_RES_TRIM:2;
      uint64_t PLL_BANK_LOW_DR_TX:1;
      uint64_t reservedSpace1:1;
      uint64_t PLL_BANK_IQ_PLL_0_TX:4;
      uint64_t PLL_BANK_PLL_FILTER_RES_TRIM_TX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FILTER_BIAS_IQ_FI_FC:5;
      uint64_t reservedSpace0:3;
      uint64_t FILTER_BIAS_IQ_FI_BW:5;
      uint64_t reservedSpace1:3;
      uint64_t RSSI_CTRL_BYPASS_AGC:1;
      uint64_t RSSI_CTRL_PAYLOAD_BLOCKS_AGC:1;
      uint64_t RSSI_CTRL_AGC_WAIT:2;
      uint64_t RSSI_CTRL_AGC_MODE:1;
      uint64_t RSSI_CTRL_AGC_USE_LNA:1;
      uint64_t RSSI_CTRL_AGC_DECAY_TAU:2;
      uint64_t ATT_CTRL_SET_RX_ATT_CTRL:4;
      uint64_t ATT_CTRL_ATT_CTRL_MAX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_THR_LOW_AGC_THR_LOW:8;
      uint64_t AGC_THR_HIGH_AGC_THR_HIGH:8;
      uint64_t AGC_PEAK_DET_EN_AGC_PEAK:1;
      uint64_t AGC_PEAK_DET_PEAK_DET_THR_HIGH:1;
      uint64_t AGC_PEAK_DET_PEAK_DET_THR_LOW:2;
      uint64_t AGC_PEAK_DET_PEAK_DET_TAU:4;
      uint64_t IEEE802154_OPTS_C2B_THR:3;
      uint64_t IEEE802154_OPTS_EN_L2F_RX:1;
      uint64_t IEEE802154_OPTS_RX_DATA_NOT_SAMPLED:1;
      uint64_t IEEE802154_OPTS_BER_CLK_MODE:2;
      uint64_t IEEE802154_OPTS_EN_DW_TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG1B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_LUT_1_AGC_LEVEL_0:11;
      uint64_t AGC_LUT_1_AGC_LEVEL_1:11;
      uint64_t AGC_LUT_1_AGC_LEVEL_2_LO:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_AGC_LUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_LUT_2_AGC_LEVEL_2_HI:1;
      uint64_t AGC_LUT_2_AGC_LEVEL_3:11;
      uint64_t AGC_LUT_2_AGC_LEVEL_4:11;
      uint64_t AGC_LUT_2_AGC_LEVEL_5_LO:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_AGC_LUT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_LUT_3_AGC_LEVEL_5_HI:2;
      uint64_t AGC_LUT_3_AGC_LEVEL_6:11;
      uint64_t AGC_LUT_3_AGC_LEVEL_7:11;
      uint64_t AGC_LUT_3_AGC_LEVEL_8_LO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_AGC_LUT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_LUT_4_AGC_LEVEL_8_HI:3;
      uint64_t AGC_LUT_4_AGC_LEVEL_9:11;
      uint64_t AGC_LUT_4_AGC_LEVEL_10:11;
      uint64_t AGC_LUT_4_AGC_LEVEL_11_LO:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_AGC_LUT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_LUT_5_AGC_LEVEL_11_HI:4;
      uint64_t reservedSpace0:4;
      uint64_t TIMINGS_1_T_GRANULARITY_RX:3;
      uint64_t reservedSpace1:1;
      uint64_t TIMINGS_1_T_GRANULARITY_TX:3;
      uint64_t reservedSpace2:1;
      uint64_t TIMINGS_2_T_TX_RF:4;
      uint64_t TIMINGS_2_T_SUBBAND_TX:4;
      uint64_t TIMINGS_3_T_PLL_TX:4;
      uint64_t TIMINGS_3_T_DLL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_ATT_1_AGC_ATT_01:3;
      uint64_t AGC_ATT_1_AGC_ATT_12:3;
      uint64_t AGC_ATT_1_AGC_ATT_23:3;
      uint64_t AGC_ATT_1_AGC_ATT_34:3;
      uint64_t AGC_ATT_1_AGC_ATT_45:3;
      uint64_t AGC_ATT_1_AGC_ATT_56:3;
      uint64_t AGC_ATT_1_AGC_ATT_67:3;
      uint64_t AGC_ATT_1_AGC_ATT_78:3;
      uint64_t AGC_ATT_1_AGC_ATT_89:3;
      uint64_t AGC_ATT_1_AGC_ATT_9A:3;
      uint64_t AGC_ATT_1_AGC_ATT_AB_LO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_AGC_ATT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AGC_ATT_2_AGC_ATT_AB_HI:1;
      uint64_t AGC_ATT_2_AGC_ATT_1DB:1;
      uint64_t reservedSpace0:6;
      uint64_t TIMINGS_4_T_PLL_RX:4;
      uint64_t TIMINGS_4_T_SUBBAND_RX:4;
      uint64_t TIMINGS_5_T_RX_BB:4;
      uint64_t TIMINGS_5_T_RX_RF:4;
      uint64_t TIMING_FAST_RX_T_RX_FAST_CHP:4;
      uint64_t TIMING_FAST_RX_EN_FAST_RX:1;
      uint64_t TIMING_FAST_RX_EN_FAST_RX_TXFILT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUT_T_RX_TIMEOUT:4;
      uint64_t TIMEOUT_T_TIMEOUT_GR:3;
      uint64_t TIMEOUT_EN_RX_TIMEOUT:1;
      uint64_t INTERFACE_CONF_SPI_SELECT:2;
      uint64_t reservedSpace0:2;
      uint64_t INTERFACE_CONF_APB_WAIT_STATE:3;
      uint64_t reservedSpace1:1;
      uint64_t BIAS_0_IQ_RXTX_0:4;
      uint64_t BIAS_0_IQ_RXTX_1:4;
      uint64_t BIAS_1_IQ_RXTX_2:4;
      uint64_t BIAS_1_IQ_RXTX_3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIAS_2_IQ_RXTX_5:4;
      uint64_t BIAS_2_IQ_RXTX_6:4;
      uint64_t BIAS_3_IQ_RXTX_7:4;
      uint64_t BIAS_3_IQ_RXTX_8:4;
      uint64_t BIAS_4_IQ_PLL_1:4;
      uint64_t BIAS_4_IQ_PLL_2:4;
      uint64_t BIAS_5_IQ_PLL_4_TX:4;
      uint64_t BIAS_5_IQ_PLL_4_RX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIAS_6_IQ_PLL_3:4;
      uint64_t BIAS_6_IQ_BB_0:4;
      uint64_t BIAS_7_IQ_BB_1:4;
      uint64_t BIAS_7_IQ_BB_2:4;
      uint64_t BIAS_8_IQ_BB_3:4;
      uint64_t BIAS_8_IQ_BB_4:4;
      uint64_t BIAS_9_IQ_BB_5:4;
      uint64_t BIAS_9_IQ_BB_6:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIAS_10_IQ_BB_7:4;
      uint64_t BIAS_10_IQ_BB_8:4;
      uint64_t BIAS_11_LNA_AGC_BIAS_0:4;
      uint64_t BIAS_11_LNA_AGC_BIAS_1:4;
      uint64_t BIAS_12_LNA_AGC_BIAS_2:4;
      uint64_t BIAS_12_LNA_AGC_BIAS_3:4;
      uint64_t SD_MASH_MASH_RSTB:1;
      uint64_t SD_MASH_MASH_ORDER:2;
      uint64_t SD_MASH_MASH_DITHER:1;
      uint64_t SD_MASH_MASH_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIAS_EN_1_EN_BIAS_RXTX:7;
      uint64_t BIAS_EN_1_EN_BIAS_PLL:5;
      uint64_t BIAS_EN_1_EN_BIAS_BB_LO:4;
      uint64_t BIAS_EN_2_EN_BIAS_BB_HI:3;
      uint64_t BIAS_EN_2_EN_PTAT:1;
      uint64_t reservedSpace0:4;
      uint64_t CTRL_ADC_CTRL_ADC:5;
      uint64_t CTRL_ADC_PHADC_DELLATCH:2;
      uint64_t CTRL_ADC_ONE_CK_RSSI_PHADC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLL_CTRL_CK_SEL:2;
      uint64_t DLL_CTRL_FAST_ENB:1;
      uint64_t DLL_CTRL_LOCKED_AUTO_CHECK_EN:1;
      uint64_t DLL_CTRL_LOCKED_DET_EN:1;
      uint64_t DLL_CTRL_TOO_FAST_ENB:1;
      uint64_t DLL_CTRL_CK_TEST_EN:1;
      uint64_t DLL_CTRL_CK_DIG_EN:1;
      uint64_t DLL_CTRL_CK_EXT_SEL:1;
      uint64_t DLL_CTRL_CK_FIRST_SEL_DELAY:1;
      uint64_t DLL_CTRL_CK_LAST_SEL_DELAY:1;
      uint64_t reservedSpace0:5;
      uint64_t SWCAP_FSM_SB_CAP_TX:4;
      uint64_t SWCAP_FSM_SB_CAP_RX:4;
      uint64_t CTRL_RX_CTRL_RX:5;
      uint64_t CTRL_RX_START_MIX_ON_CAL:1;
      uint64_t CTRL_RX_USE_PEAK_DETECTOR:1;
      uint64_t CTRL_RX_SWITCH_LP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL_CTRL_1_CHP_CURR_OFFSET_EN:1;
      uint64_t PLL_CTRL_1_CHP_CMC_EN:1;
      uint64_t PLL_CTRL_1_CHP_MODE_TRIM:2;
      uint64_t PLL_CTRL_1_FAST_CHP_EN:1;
      uint64_t PLL_CTRL_1_HIGH_BW_FILTER_EN:1;
      uint64_t PLL_CTRL_1_CHP_CURR_OFFSET_TRIM:2;
      uint64_t PLL_CTRL_1_CHP_DEAD_ZONE_EN:1;
      uint64_t PLL_CTRL_1_EN_LOW_CHP_BIAS:1;
      uint64_t PLL_CTRL_1_VCODIV_CLK_TEST_EN:1;
      uint64_t PLL_CTRL_1_DIV2_CLKVCO_TEST_EN:1;
      uint64_t PLL_CTRL_1_SUB_SEL_OFFS_EN:1;
      uint64_t PLL_CTRL_1_VCO_SUBBAND_TRIM_LO:3;
      uint64_t PLL_CTRL_2_VCO_SUBBAND_TRIM_HI:1;
      uint64_t PLL_CTRL_2_DLL_RSTB:1;
      uint64_t PLL_CTRL_2_SWCAP_FSM:1;
      uint64_t PLL_CTRL_2_SWCAP_TX_SAME_RX:1;
      uint64_t PLL_CTRL_2_PLL_RX_48MEG:1;
      uint64_t reservedSpace0:3;
      uint64_t XTAL_TRIM_XTAL_TRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_PLL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSI_TUN_RSSI_EVEN_MIN:4;
      uint64_t RSSI_TUN_RSSI_EVEN_MAX:4;
      uint64_t RSSI_TUN_RSSI_ODD_OFFSET:5;
      uint64_t RSSI_TUN_RSSI_TUN_GAIN:3;
      uint64_t ENABLES_EN_BB:6;
      uint64_t ENABLES_EN_RXTX:6;
      uint64_t ENABLES_SEPARATE_PPA_CASC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG2A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XTAL_CTRL_EXT_CLK_MODE:1;
      uint64_t XTAL_CTRL_LP_MODE:1;
      uint64_t XTAL_CTRL_HP_MODE:1;
      uint64_t XTAL_CTRL_BUFF_EN_B:1;
      uint64_t XTAL_CTRL_CLK_DIG_EN_B:1;
      uint64_t XTAL_CTRL_FORCE_CLK_READY:1;
      uint64_t XTAL_CTRL_INV_CLK_PLL:1;
      uint64_t XTAL_CTRL_INV_CLK_DIG:1;
      uint64_t XTAL_CTRL_STARTUP_CURR_SEL:2;
      uint64_t XTAL_CTRL_AFTERSTARTUP_CURR_SEL:2;
      uint64_t XTAL_CTRL_REG_VALUE_SEL:1;
      uint64_t XTAL_CTRL_CLK_OUT_EN_B:1;
      uint64_t XTAL_CTRL_XTAL_CKDIV:2;
      uint64_t XTAL_CTRL_XO_EN_B_REG:1;
      uint64_t XTAL_CTRL_DIG_CLK_IN_SEL:1;
      uint64_t XTAL_CTRL_XTAL_CTRL_BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t XTAL_CTRL_XO_A_S_CURR_SEL_LOW:2;
      uint64_t XTAL_CTRL_XO_A_S_CURR_SEL_HIGH:2;
      uint64_t XTAL_CTRL_XO_THR_LOW:4;
      uint64_t XTAL_CTRL_XO_THR_HIGH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_XTAL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA_CONF_CTRL_PA:2;
      uint64_t PA_CONF_TX_0DBM:1;
      uint64_t PA_CONF_TX_SWITCHPA:1;
      uint64_t PA_CONF_SW_CN:2;
      uint64_t reservedSpace0:2;
      uint64_t SUBBAND_CONF_SB_MODE:2;
      uint64_t SUBBAND_CONF_SB_WAIT_T:2;
      uint64_t SUBBAND_CONF_SB_FREQ_CNT:2;
      uint64_t SUBBAND_CONF_SB_INV_BAND:1;
      uint64_t SUBBAND_CONF_SB_FLL_MODE:1;
      uint64_t SWCAP_LIM_SB_MIN_VAL:4;
      uint64_t SWCAP_LIM_SB_MAX_VAL:4;
      uint64_t SUBBAND_OFFSET_SB_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG2C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISC_XTAL_LOW_CLK_READY_TH_EN:1;
      uint64_t MISC_RSSI_PRE_ATT:2;
      uint64_t MISC_SPARES:5;
      uint64_t PA_RAMPUP_EN_PA_RAMPUP:1;
      uint64_t PA_RAMPUP_EN_PA_RAMPDOWN:1;
      uint64_t PA_RAMPUP_TAU_PA_RAMPUP:2;
      uint64_t PA_RAMPUP_DEL_PA_RAMPUP:3;
      uint64_t PA_RAMPUP_FULL_PA_RAMPUP:1;
      uint64_t PLL_CONF_TX_NRX_CHP_CURR_OFF_EN_TX:1;
      uint64_t PLL_CONF_TX_NRX_CHP_CURR_OFF_TRIM_TX:2;
      uint64_t reservedSpace0:1;
      uint64_t PLL_CONF_TX_NRX_CK_SEL_TX:2;
      uint64_t PLL_CONF_TX_NRX_INV_CLK_DIG_TX:1;
      uint64_t PLL_CONF_TX_NRX_INV_CLK_PLL_TX:1;
      uint64_t SUBBAND_CORR_SUBBAND_CORR_TX:3;
      uint64_t reservedSpace1:1;
      uint64_t SUBBAND_CORR_SUBBAND_CORR_RX:3;
      uint64_t SUBBAND_CORR_SUBBAND_CORR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG2D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSI_DETECT_RSSI_DET_EN_DIFF:1;
      uint64_t RSSI_DETECT_RSSI_DET_EN_ABS:1;
      uint64_t RSSI_DETECT_RSSI_DET_DIFF_LL:2;
      uint64_t RSSI_DETECT_RSSI_DET_WAIT:2;
      uint64_t RSSI_DETECT_RSSI_DET_CR_LEN:2;
      uint64_t DEMOD_CTRL_EARLY_FINE_RECOV:1;
      uint64_t DEMOD_CTRL_BLOCK_RSSI_DET:1;
      uint64_t DEMOD_CTRL_EN_PRE_SYNC:1;
      uint64_t DEMOD_CTRL_EN_MIN_MAX_MF:1;
      uint64_t DEMOD_CTRL_EN_FAST_CLK_RECOV:1;
      uint64_t DEMOD_CTRL_RSSI_DET_FILT:1;
      uint64_t DEMOD_CTRL_EN_DELLINE_SYNC_DET:1;
      uint64_t reservedSpace0:1;
      uint64_t RSSI_DETECT_DIFF_THR_RSSI_DET_DIFF_THR:8;
      uint64_t RSSI_DETECT_ABS_THR_RSSI_DET_ABS_THR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_WORD_CORR_SYNC_WORD_BIAS:6;
      uint64_t reservedSpace0:1;
      uint64_t SYNC_WORD_CORR_EN_SYNC_WORD_CORR:1;
      uint64_t SUBBAND_FLL_SB_FLL_WAIT:3;
      uint64_t SUBBAND_FLL_SB_FLL_PH_4_N8:1;
      uint64_t SUBBAND_FLL_SB_FLL_CIC_TAU:2;
      uint64_t SUBBAND_FLL_SB_FLL_DITHER:2;
      uint64_t PADS_PE_DS_SPI_CS_N_PE:1;
      uint64_t PADS_PE_DS_SPI_SCLK_PE:1;
      uint64_t PADS_PE_DS_SPI_MOSI_PE:1;
      uint64_t PADS_PE_DS_SPI_MISO_PE:1;
      uint64_t PADS_PE_DS_NRESET_PE:1;
      uint64_t PADS_PE_DS_GPIO_PE:1;
      uint64_t PADS_PE_DS_GPIO_DS:1;
      uint64_t reservedSpace1:1;
      uint64_t CK_DIV_1_6_CK_DIV_1_6:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG2F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_MODE_MODE:2;
      uint64_t FSM_MODE_N_IDLE:1;
      uint64_t FSM_MODE_TX_MODE:1;
      uint64_t FSM_MODE_TX_NRX:1;
      uint64_t FSM_MODE_RX_MODE:1;
      uint64_t FSM_MODE_RESET:1;
      uint64_t reservedSpace0:4;
      uint64_t FSM_STATUS_STATUS:2;
      uint64_t FSM_STATUS_TX_NRX:1;
      uint64_t reservedSpace1:5;
      uint64_t TXFIFO_STATUS_FLUSH:1;
      uint64_t TXFIFO_STATUS_EMPTY:1;
      uint64_t TXFIFO_STATUS_BIST:7;
      uint64_t TXFIFO_STATUS_FULL:1;
      uint64_t TXFIFO_STATUS_OVERFLOW:1;
      uint64_t TXFIFO_STATUS_UNDERFLOW:1;
      uint64_t TXFIFO_STATUS_NEAR_OVERFLOW:1;
      uint64_t TXFIFO_STATUS_NEAR_UNDERFLOW:1;
      uint64_t TXFIFO_STATUS_BIST_ERRORS:2;
      uint64_t RXFIFO_STATUS_FLUSH:1;
      uint64_t RXFIFO_STATUS_EMPTY:1;
      uint64_t RXFIFO_STATUS_BIST:7;
      uint64_t RXFIFO_STATUS_FULL:1;
      uint64_t RXFIFO_STATUS_OVERFLOW:1;
      uint64_t RXFIFO_STATUS_UNDERFLOW:1;
      uint64_t RXFIFO_STATUS_NEAR_OVERFLOW:1;
      uint64_t RXFIFO_STATUS_NEAR_UNDERFLOW:1;
      uint64_t RXFIFO_STATUS_BIST_ERRORS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO_COUNT_TX_COUNT:8;
      uint64_t RXFIFO_COUNT_RX_COUNT:8;
      uint64_t RSSI_MIN_RSSI_MIN:8;
      uint64_t RSSI_MAX_RSSI_MAX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSSI_PKT_RSSI_PKT:8;
      uint64_t DR_ERR_IND_DR_ERR_IND:8;
      uint64_t RSSI_AVG_RSSI_AVG:8;
      uint64_t RX_ATT_LEVEL_RX_ATT_LEVEL:3;
      uint64_t reservedSpace0:1;
      uint64_t RX_ATT_LEVEL_RX_ATT_LEVEL_PKT_LVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFIFO_TX_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_TXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO_RX_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_RXFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DESER_STATUS_DESER_FINISH:1;
      uint64_t DESER_STATUS_CRC_ERR:1;
      uint64_t DESER_STATUS_ADDRESS_ERR:1;
      uint64_t DESER_STATUS_PKT_LEN_ERR:1;
      uint64_t DESER_STATUS_IS_ADDRESS_BR:1;
      uint64_t DESER_STATUS_WAIT_SYNC:1;
      uint64_t DESER_STATUS_SYNC_DETECTED:1;
      uint64_t DESER_STATUS_SIGNAL_RECEIVING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_DESER_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_STATUS_FLAG_TX:1;
      uint64_t IRQ_STATUS_FLAG_RXSTOP:1;
      uint64_t IRQ_STATUS_FLAG_RECEIVED:1;
      uint64_t IRQ_STATUS_FLAG_SYNC:1;
      uint64_t IRQ_STATUS_FLAG_TXFIFO:1;
      uint64_t IRQ_STATUS_FLAG_RXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_IRQ_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEI_FEI_OUT:16;
      uint64_t FEI_PKT_FEI_PKT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEI_AFC_FEI_AFC:16;
      uint64_t LINK_QUAL_LINK_QUALITY:8;
      uint64_t LINK_QUAL_PKT_LINK_QUALITY_PKT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBBAND_ERR_SB_FLL_ERR:8;
      uint64_t ANALOG_INFO_SUBBAND_LO:1;
      uint64_t ANALOG_INFO_SUBBAND_HI:1;
      uint64_t ANALOG_INFO_CLK_PLL_READY:1;
      uint64_t ANALOG_INFO_CLK_DIG_READY:1;
      uint64_t ANALOG_INFO_DLL_LOCKED:1;
      uint64_t ANALOG_INFO_XTAL_FINISH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REG39;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHIP_ID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RF_REVISION;

};

#define RF (*(volatile struct RF_tag *) 0x40010000)

struct SysTick_tag
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
  } __attribute__((aligned(4))) SysTick_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_VAL;

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
  } __attribute__((aligned(4))) SysTick_CALIB;

};

#define SysTick (*(volatile struct SysTick_tag *) 0xe000e010)

struct SCnSCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCnSCB_ICTR;

};

#define SCnSCB (*(volatile struct SCnSCB_tag *) 0xe000e004)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t RTC_ALARM:1;
      uint64_t RTC_CLOCK:1;
      uint64_t ADC_BATMON:1;
      uint64_t TIMER0:1;
      uint64_t TIMER1:1;
      uint64_t TIMER2:1;
      uint64_t TIMER3:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t WATCHDOG_bitfield:1;
      uint64_t SPI0_RX:1;
      uint64_t SPI0_TX:1;
      uint64_t SPI0_ERROR:1;
      uint64_t SPI1_RX:1;
      uint64_t SPI1_TX:1;
      uint64_t SPI1_ERROR:1;
      uint64_t I2C_bitfield:1;
      uint64_t UART_RX:1;
      uint64_t UART_TX:1;
      uint64_t UART_ERROR:1;
      uint64_t DMIC_OUT_OD_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC_OD_ERROR:1;
      uint64_t PCM_RX:1;
      uint64_t PCM_TX:1;
      uint64_t PCM_ERROR:1;
      uint64_t DSS0:1;
      uint64_t DSS1:1;
      uint64_t DSS2:1;
      uint64_t DSS3:1;
      uint64_t DSS4:1;
      uint64_t DSS5:1;
      uint64_t DSS6:1;
      uint64_t DSS7:1;
      uint64_t BLE_CSCNT:1;
      uint64_t BLE_SLP:1;
      uint64_t BLE_RX:1;
      uint64_t BLE_EVENT:1;
      uint64_t BLE_CRYPT:1;
      uint64_t BLE_ERROR:1;
      uint64_t BLE_GROSSTGTIM:1;
      uint64_t BLE_FINETGTIM:1;
      uint64_t BLE_SW:1;
      uint64_t BLE_COEX_RX_TX:1;
      uint64_t BLE_COEX_IN_PROCESS:1;
      uint64_t RF_TX:1;
      uint64_t RF_RXSTOP:1;
      uint64_t RF_RECEIVED:1;
      uint64_t RF_SYNC:1;
      uint64_t RF_TXFIFO:1;
      uint64_t RF_RXFIFO:1;
      uint64_t ASRC_ERROR:1;
      uint64_t ASRC_IN:1;
      uint64_t ASRC_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUDIO_SINK_DELAY:1;
      uint64_t AUDIO_SINK_PERIOD:1;
      uint64_t CLKDET:1;
      uint64_t FLASH_COPY:1;
      uint64_t FLASH_ECC:1;
      uint64_t MEM_ERROR:1;
      uint64_t BLE_AUDIO0:1;
      uint64_t BLE_AUDIO1:1;
      uint64_t BLE_AUDIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER2;

  uint8_t res0[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t RTC_ALARM:1;
      uint64_t RTC_CLOCK:1;
      uint64_t ADC_BATMON:1;
      uint64_t TIMER0:1;
      uint64_t TIMER1:1;
      uint64_t TIMER2:1;
      uint64_t TIMER3:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t WATCHDOG_bitfield:1;
      uint64_t SPI0_RX:1;
      uint64_t SPI0_TX:1;
      uint64_t SPI0_ERROR:1;
      uint64_t SPI1_RX:1;
      uint64_t SPI1_TX:1;
      uint64_t SPI1_ERROR:1;
      uint64_t I2C_bitfield:1;
      uint64_t UART_RX:1;
      uint64_t UART_TX:1;
      uint64_t UART_ERROR:1;
      uint64_t DMIC_OUT_OD_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC_OD_ERROR:1;
      uint64_t PCM_RX:1;
      uint64_t PCM_TX:1;
      uint64_t PCM_ERROR:1;
      uint64_t DSS0:1;
      uint64_t DSS1:1;
      uint64_t DSS2:1;
      uint64_t DSS3:1;
      uint64_t DSS4:1;
      uint64_t DSS5:1;
      uint64_t DSS6:1;
      uint64_t DSS7:1;
      uint64_t BLE_CSCNT:1;
      uint64_t BLE_SLP:1;
      uint64_t BLE_RX:1;
      uint64_t BLE_EVENT:1;
      uint64_t BLE_CRYPT:1;
      uint64_t BLE_ERROR:1;
      uint64_t BLE_GROSSTGTIM:1;
      uint64_t BLE_FINETGTIM:1;
      uint64_t BLE_SW:1;
      uint64_t BLE_COEX_RX_TX:1;
      uint64_t BLE_COEX_IN_PROCESS:1;
      uint64_t RF_TX:1;
      uint64_t RF_RXSTOP:1;
      uint64_t RF_RECEIVED:1;
      uint64_t RF_SYNC:1;
      uint64_t RF_TXFIFO:1;
      uint64_t RF_RXFIFO:1;
      uint64_t ASRC_ERROR:1;
      uint64_t ASRC_IN:1;
      uint64_t ASRC_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUDIO_SINK_DELAY:1;
      uint64_t AUDIO_SINK_PERIOD:1;
      uint64_t CLKDET:1;
      uint64_t FLASH_COPY:1;
      uint64_t FLASH_ECC:1;
      uint64_t MEM_ERROR:1;
      uint64_t BLE_AUDIO0:1;
      uint64_t BLE_AUDIO1:1;
      uint64_t BLE_AUDIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER2;

  uint8_t res1[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t RTC_ALARM:1;
      uint64_t RTC_CLOCK:1;
      uint64_t ADC_BATMON:1;
      uint64_t TIMER0:1;
      uint64_t TIMER1:1;
      uint64_t TIMER2:1;
      uint64_t TIMER3:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t WATCHDOG_bitfield:1;
      uint64_t SPI0_RX:1;
      uint64_t SPI0_TX:1;
      uint64_t SPI0_ERROR:1;
      uint64_t SPI1_RX:1;
      uint64_t SPI1_TX:1;
      uint64_t SPI1_ERROR:1;
      uint64_t I2C_bitfield:1;
      uint64_t UART_RX:1;
      uint64_t UART_TX:1;
      uint64_t UART_ERROR:1;
      uint64_t DMIC_OUT_OD_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC_OD_ERROR:1;
      uint64_t PCM_RX:1;
      uint64_t PCM_TX:1;
      uint64_t PCM_ERROR:1;
      uint64_t DSS0:1;
      uint64_t DSS1:1;
      uint64_t DSS2:1;
      uint64_t DSS3:1;
      uint64_t DSS4:1;
      uint64_t DSS5:1;
      uint64_t DSS6:1;
      uint64_t DSS7:1;
      uint64_t BLE_CSCNT:1;
      uint64_t BLE_SLP:1;
      uint64_t BLE_RX:1;
      uint64_t BLE_EVENT:1;
      uint64_t BLE_CRYPT:1;
      uint64_t BLE_ERROR:1;
      uint64_t BLE_GROSSTGTIM:1;
      uint64_t BLE_FINETGTIM:1;
      uint64_t BLE_SW:1;
      uint64_t BLE_COEX_RX_TX:1;
      uint64_t BLE_COEX_IN_PROCESS:1;
      uint64_t RF_TX:1;
      uint64_t RF_RXSTOP:1;
      uint64_t RF_RECEIVED:1;
      uint64_t RF_SYNC:1;
      uint64_t RF_TXFIFO:1;
      uint64_t RF_RXFIFO:1;
      uint64_t ASRC_ERROR:1;
      uint64_t ASRC_IN:1;
      uint64_t ASRC_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUDIO_SINK_DELAY:1;
      uint64_t AUDIO_SINK_PERIOD:1;
      uint64_t CLKDET:1;
      uint64_t FLASH_COPY:1;
      uint64_t FLASH_ECC:1;
      uint64_t MEM_ERROR:1;
      uint64_t BLE_AUDIO0:1;
      uint64_t BLE_AUDIO1:1;
      uint64_t BLE_AUDIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR2;

  uint8_t res2[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t RTC_ALARM:1;
      uint64_t RTC_CLOCK:1;
      uint64_t ADC_BATMON:1;
      uint64_t TIMER0:1;
      uint64_t TIMER1:1;
      uint64_t TIMER2:1;
      uint64_t TIMER3:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t WATCHDOG_bitfield:1;
      uint64_t SPI0_RX:1;
      uint64_t SPI0_TX:1;
      uint64_t SPI0_ERROR:1;
      uint64_t SPI1_RX:1;
      uint64_t SPI1_TX:1;
      uint64_t SPI1_ERROR:1;
      uint64_t I2C_bitfield:1;
      uint64_t UART_RX:1;
      uint64_t UART_TX:1;
      uint64_t UART_ERROR:1;
      uint64_t DMIC_OUT_OD_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC_OD_ERROR:1;
      uint64_t PCM_RX:1;
      uint64_t PCM_TX:1;
      uint64_t PCM_ERROR:1;
      uint64_t DSS0:1;
      uint64_t DSS1:1;
      uint64_t DSS2:1;
      uint64_t DSS3:1;
      uint64_t DSS4:1;
      uint64_t DSS5:1;
      uint64_t DSS6:1;
      uint64_t DSS7:1;
      uint64_t BLE_CSCNT:1;
      uint64_t BLE_SLP:1;
      uint64_t BLE_RX:1;
      uint64_t BLE_EVENT:1;
      uint64_t BLE_CRYPT:1;
      uint64_t BLE_ERROR:1;
      uint64_t BLE_GROSSTGTIM:1;
      uint64_t BLE_FINETGTIM:1;
      uint64_t BLE_SW:1;
      uint64_t BLE_COEX_RX_TX:1;
      uint64_t BLE_COEX_IN_PROCESS:1;
      uint64_t RF_TX:1;
      uint64_t RF_RXSTOP:1;
      uint64_t RF_RECEIVED:1;
      uint64_t RF_SYNC:1;
      uint64_t RF_TXFIFO:1;
      uint64_t RF_RXFIFO:1;
      uint64_t ASRC_ERROR:1;
      uint64_t ASRC_IN:1;
      uint64_t ASRC_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUDIO_SINK_DELAY:1;
      uint64_t AUDIO_SINK_PERIOD:1;
      uint64_t CLKDET:1;
      uint64_t FLASH_COPY:1;
      uint64_t FLASH_ECC:1;
      uint64_t MEM_ERROR:1;
      uint64_t BLE_AUDIO0:1;
      uint64_t BLE_AUDIO1:1;
      uint64_t BLE_AUDIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR2;

  uint8_t res3[116];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t RTC_ALARM:1;
      uint64_t RTC_CLOCK:1;
      uint64_t ADC_BATMON:1;
      uint64_t TIMER0:1;
      uint64_t TIMER1:1;
      uint64_t TIMER2:1;
      uint64_t TIMER3:1;
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t WATCHDOG_bitfield:1;
      uint64_t SPI0_RX:1;
      uint64_t SPI0_TX:1;
      uint64_t SPI0_ERROR:1;
      uint64_t SPI1_RX:1;
      uint64_t SPI1_TX:1;
      uint64_t SPI1_ERROR:1;
      uint64_t I2C_bitfield:1;
      uint64_t UART_RX:1;
      uint64_t UART_TX:1;
      uint64_t UART_ERROR:1;
      uint64_t DMIC_OUT_OD_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMIC_OD_ERROR:1;
      uint64_t PCM_RX:1;
      uint64_t PCM_TX:1;
      uint64_t PCM_ERROR:1;
      uint64_t DSS0:1;
      uint64_t DSS1:1;
      uint64_t DSS2:1;
      uint64_t DSS3:1;
      uint64_t DSS4:1;
      uint64_t DSS5:1;
      uint64_t DSS6:1;
      uint64_t DSS7:1;
      uint64_t BLE_CSCNT:1;
      uint64_t BLE_SLP:1;
      uint64_t BLE_RX:1;
      uint64_t BLE_EVENT:1;
      uint64_t BLE_CRYPT:1;
      uint64_t BLE_ERROR:1;
      uint64_t BLE_GROSSTGTIM:1;
      uint64_t BLE_FINETGTIM:1;
      uint64_t BLE_SW:1;
      uint64_t BLE_COEX_RX_TX:1;
      uint64_t BLE_COEX_IN_PROCESS:1;
      uint64_t RF_TX:1;
      uint64_t RF_RXSTOP:1;
      uint64_t RF_RECEIVED:1;
      uint64_t RF_SYNC:1;
      uint64_t RF_TXFIFO:1;
      uint64_t RF_RXFIFO:1;
      uint64_t ASRC_ERROR:1;
      uint64_t ASRC_IN:1;
      uint64_t ASRC_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUDIO_SINK_DELAY:1;
      uint64_t AUDIO_SINK_PERIOD:1;
      uint64_t CLKDET:1;
      uint64_t FLASH_COPY:1;
      uint64_t FLASH_ECC:1;
      uint64_t MEM_ERROR:1;
      uint64_t BLE_AUDIO0:1;
      uint64_t BLE_AUDIO1:1;
      uint64_t BLE_AUDIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IABR2;

  uint8_t res4[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t WAKEUP:3;
      uint64_t reservedSpace1:5;
      uint64_t RTC_ALARM:3;
      uint64_t reservedSpace2:5;
      uint64_t RTC_CLOCK:3;
      uint64_t reservedSpace3:5;
      uint64_t ADC_BATMON:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TIMER0:3;
      uint64_t reservedSpace1:5;
      uint64_t TIMER1:3;
      uint64_t reservedSpace2:5;
      uint64_t TIMER2:3;
      uint64_t reservedSpace3:5;
      uint64_t TIMER3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DMA0:3;
      uint64_t reservedSpace1:5;
      uint64_t DMA1:3;
      uint64_t reservedSpace2:5;
      uint64_t DMA2:3;
      uint64_t reservedSpace3:5;
      uint64_t DMA3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DMA4:3;
      uint64_t reservedSpace1:5;
      uint64_t DMA5:3;
      uint64_t reservedSpace2:5;
      uint64_t DMA6:3;
      uint64_t reservedSpace3:5;
      uint64_t DMA7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DIO0:3;
      uint64_t reservedSpace1:5;
      uint64_t DIO1:3;
      uint64_t reservedSpace2:5;
      uint64_t DIO2:3;
      uint64_t reservedSpace3:5;
      uint64_t DIO3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t WATCHDOG_bitfield:3;
      uint64_t reservedSpace1:5;
      uint64_t SPI0_RX:3;
      uint64_t reservedSpace2:5;
      uint64_t SPI0_TX:3;
      uint64_t reservedSpace3:5;
      uint64_t SPI0_ERROR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t SPI1_RX:3;
      uint64_t reservedSpace1:5;
      uint64_t SPI1_TX:3;
      uint64_t reservedSpace2:5;
      uint64_t SPI1_ERROR:3;
      uint64_t reservedSpace3:5;
      uint64_t I2C_bitfield:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t UART_RX:3;
      uint64_t reservedSpace1:5;
      uint64_t UART_TX:3;
      uint64_t reservedSpace2:5;
      uint64_t UART_ERROR:3;
      uint64_t reservedSpace3:5;
      uint64_t DMIC_OUT_OD_IN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DMIC_OD_ERROR:3;
      uint64_t reservedSpace1:5;
      uint64_t PCM_RX:3;
      uint64_t reservedSpace2:5;
      uint64_t PCM_TX:3;
      uint64_t reservedSpace3:5;
      uint64_t PCM_ERROR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DSS0:3;
      uint64_t reservedSpace1:5;
      uint64_t DSS1:3;
      uint64_t reservedSpace2:5;
      uint64_t DSS2:3;
      uint64_t reservedSpace3:5;
      uint64_t DSS3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DSS4:3;
      uint64_t reservedSpace1:5;
      uint64_t DSS5:3;
      uint64_t reservedSpace2:5;
      uint64_t DSS6:3;
      uint64_t reservedSpace3:5;
      uint64_t DSS7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BLE_CSCNT:3;
      uint64_t reservedSpace1:5;
      uint64_t BLE_SLP:3;
      uint64_t reservedSpace2:5;
      uint64_t BLE_RX:3;
      uint64_t reservedSpace3:5;
      uint64_t BLE_EVENT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BLE_CRYPT:3;
      uint64_t reservedSpace1:5;
      uint64_t BLE_ERROR:3;
      uint64_t reservedSpace2:5;
      uint64_t BLE_GROSSTGTIM:3;
      uint64_t reservedSpace3:5;
      uint64_t BLE_FINETGTIM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BLE_SW:3;
      uint64_t reservedSpace1:5;
      uint64_t BLE_COEX_RX_TX:3;
      uint64_t reservedSpace2:5;
      uint64_t BLE_COEX_IN_PROCESS:3;
      uint64_t reservedSpace3:5;
      uint64_t RF_TX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RF_RXSTOP:3;
      uint64_t reservedSpace1:5;
      uint64_t RF_RECEIVED:3;
      uint64_t reservedSpace2:5;
      uint64_t RF_SYNC:3;
      uint64_t reservedSpace3:5;
      uint64_t RF_TXFIFO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RF_RXFIFO:3;
      uint64_t reservedSpace1:5;
      uint64_t ASRC_ERROR:3;
      uint64_t reservedSpace2:5;
      uint64_t ASRC_IN:3;
      uint64_t reservedSpace3:5;
      uint64_t ASRC_OUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t AUDIO_SINK_DELAY:3;
      uint64_t reservedSpace1:5;
      uint64_t AUDIO_SINK_PERIOD:3;
      uint64_t reservedSpace2:5;
      uint64_t CLKDET:3;
      uint64_t reservedSpace3:5;
      uint64_t FLASH_COPY:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t FLASH_ECC:3;
      uint64_t reservedSpace1:5;
      uint64_t MEM_ERROR:3;
      uint64_t reservedSpace2:5;
      uint64_t BLE_AUDIO0:3;
      uint64_t reservedSpace3:5;
      uint64_t BLE_AUDIO1:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BLE_AUDIO2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_IP18;

  uint8_t res5[2740];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_STIR;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct SCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:4;
      uint64_t PARTNO:12;
      uint64_t ARCHITECTURE:4;
      uint64_t VARIANT:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:10;
      uint64_t reservedSpace0:1;
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
  } __attribute__((aligned(4))) SCB_ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_VTOR;

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
      uint64_t VECTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_AIRCR;

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
  } __attribute__((aligned(4))) SCB_SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVIC_MEM_FAULT_PRIORITY:8;
      uint64_t NVIC_BUS_FAULT_PRIORITY:8;
      uint64_t NVIC_USAGE_FAULT_PRIORITY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t NVIC_SVC_PRIORITY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVIC_MONITOR_PRIORITY:8;
      uint64_t reservedSpace0:8;
      uint64_t NVIC_PENDSV_PRIORITY:8;
      uint64_t NVIC_SYSTICK_PRIORITY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHP2;

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
  } __attribute__((aligned(4))) SCB_SHCSR;

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
  } __attribute__((aligned(4))) SCB_CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_HFSR;

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
  } __attribute__((aligned(4))) SCB_DFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVIC_MMAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_MMFAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NVIC_BFAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_BFAR;

};

#define SCB (*(volatile struct SCB_tag *) 0xe000ed00)

struct DEBUG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t C_DEBUGEN:1;
      uint64_t C_HALT:1;
      uint64_t C_STEP:1;
      uint64_t C_MASKINTS:1;
      uint64_t reservedSpace0:1;
      uint64_t C_SNAPSTALL:1;
      uint64_t reservedSpace1:10;
      uint64_t DBGKEY:16;
      uint64_t S_REGRDY:1;
      uint64_t S_HALT:1;
      uint64_t S_SLEEP:1;
      uint64_t S_LOCKUP:1;
      uint64_t reservedSpace2:4;
      uint64_t S_RETIRE_ST:1;
      uint64_t S_RESET_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_DHCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGSEL:5;
      uint64_t reservedSpace0:11;
      uint64_t REGWnR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_DCRSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEBUG_REGDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_DCRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VC_CORERESET:1;
      uint64_t reservedSpace0:3;
      uint64_t VC_MMERR:1;
      uint64_t VC_NOCPERR:1;
      uint64_t VC_CHKERR:1;
      uint64_t VC_STATERR:1;
      uint64_t VC_BUSERR:1;
      uint64_t VC_INTERR:1;
      uint64_t VC_HARDERR:1;
      uint64_t reservedSpace1:5;
      uint64_t MON_EN:1;
      uint64_t MON_PEND:1;
      uint64_t MON_STEP:1;
      uint64_t MON_REQ:1;
      uint64_t reservedSpace2:4;
      uint64_t TRCENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG_DEMCR;

};

#define DEBUG (*(volatile struct DEBUG_tag *) 0xe000edf0)

