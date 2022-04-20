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
  } __attribute__((aligned(4))) SYSCTRL_register;

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

struct SYSCTRL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUCM:1;
      uint64_t reservedSpace0:6;
      uint64_t CP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDGS:1;
      uint64_t WWDGS:1;
      uint64_t TIMERS:1;
      uint64_t EPWMS:1;
      uint64_t CAPCOMS:1;
      uint64_t ADCS:1;
      uint64_t LINUARTS:1;
      uint64_t PWMIOS:1;
      uint64_t SPIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGSTOP;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERMCR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHR:1;
      uint64_t reservedSpace0:7;
      uint64_t BVDDUV:1;
      uint64_t BVDDOV:1;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t LINWK:1;
      uint64_t WT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHR:1;
      uint64_t POR:1;
      uint64_t OTD:1;
      uint64_t SLEEP:1;
      uint64_t DWDGR:1;
      uint64_t WWDGR:1;
      uint64_t reservedSpace0:1;
      uint64_t RET:1;
      uint64_t BVDDUV:1;
      uint64_t BVDDOV:1;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t LINWK:1;
      uint64_t WT:1;
      uint64_t reservedSpace1:2;
      uint64_t IWU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RWSR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GTI:1;
      uint64_t GTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR;

  uint32_t PCRULA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOSC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  uint32_t PCRULB;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BVDD_5V4:1;
      uint64_t BVDD_7V:1;
      uint64_t BVDD_9V5:1;
      uint64_t BVDD_18V:1;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace0:1;
      uint64_t SMPSMODE:1;
      uint64_t AVDD_OK:1;
      uint64_t SMPS_OK:1;
      uint64_t SVDD_OK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BVDDUV:1;
      uint64_t BVDDOV:1;
      uint64_t reservedSpace0:2;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace1:2;
      uint64_t RFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BVDDUV:1;
      uint64_t BVDDOV:1;
      uint64_t reservedSpace0:2;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace1:2;
      uint64_t RFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BVDDUV:1;
      uint64_t BVDDOV:1;
      uint64_t reservedSpace0:2;
      uint64_t MONUV:1;
      uint64_t MONOV:1;
      uint64_t reservedSpace1:2;
      uint64_t RFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define SYSCTRL (*(volatile struct SYSCTRL_tag *) 0x40000000)

struct LGPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DO0:1;
      uint64_t DO1:1;
      uint64_t DO2:1;
      uint64_t DO3:1;
      uint64_t DO4:1;
      uint64_t DO5:1;
      uint64_t DO6:1;
      uint64_t DO7:1;
      uint64_t DO8:1;
      uint64_t DO9:1;
      uint64_t DO10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DI0:1;
      uint64_t DI1:1;
      uint64_t DI2:1;
      uint64_t DI3:1;
      uint64_t DI4:1;
      uint64_t DI5:1;
      uint64_t DI6:1;
      uint64_t DI7:1;
      uint64_t DI8:1;
      uint64_t DI9:1;
      uint64_t DI10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DD0:1;
      uint64_t DD1:1;
      uint64_t DD2:1;
      uint64_t DD3:1;
      uint64_t DD4:1;
      uint64_t DD5:1;
      uint64_t DD6:1;
      uint64_t DD7:1;
      uint64_t DD8:1;
      uint64_t DD9:1;
      uint64_t DD10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C00:1;
      uint64_t C01:1;
      uint64_t C02:1;
      uint64_t C03:1;
      uint64_t C04:1;
      uint64_t C05:1;
      uint64_t C06:1;
      uint64_t C07:1;
      uint64_t C08:1;
      uint64_t C09:1;
      uint64_t C010:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C10:1;
      uint64_t C11:1;
      uint64_t C12:1;
      uint64_t C13:1;
      uint64_t C14:1;
      uint64_t C15:1;
      uint64_t C16:1;
      uint64_t C17:1;
      uint64_t C18:1;
      uint64_t C19:1;
      uint64_t C110:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AOS0:1;
      uint64_t reservedSpace0:1;
      uint64_t AOS1:1;
      uint64_t reservedSpace1:1;
      uint64_t AOS2:1;
      uint64_t reservedSpace2:1;
      uint64_t AOS3:1;
      uint64_t reservedSpace3:1;
      uint64_t AOS4:1;
      uint64_t reservedSpace4:1;
      uint64_t AOS5:1;
      uint64_t reservedSpace5:1;
      uint64_t AOS6:1;
      uint64_t reservedSpace6:1;
      uint64_t AOS7:1;
      uint64_t reservedSpace7:1;
      uint64_t AOS8:1;
      uint64_t reservedSpace8:1;
      uint64_t AOS9:1;
      uint64_t reservedSpace9:1;
      uint64_t AOS10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AIS0:1;
      uint64_t reservedSpace0:1;
      uint64_t AIS1:1;
      uint64_t reservedSpace1:1;
      uint64_t AIS2:1;
      uint64_t reservedSpace2:1;
      uint64_t AIS3:1;
      uint64_t reservedSpace3:1;
      uint64_t AIS4:1;
      uint64_t reservedSpace4:1;
      uint64_t AIS5:1;
      uint64_t reservedSpace5:1;
      uint64_t AIS6:1;
      uint64_t reservedSpace6:1;
      uint64_t AIS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRISE0:1;
      uint64_t IRISE1:1;
      uint64_t IRISE2:1;
      uint64_t IRISE3:1;
      uint64_t IRISE4:1;
      uint64_t IRISE5:1;
      uint64_t IRISE6:1;
      uint64_t IRISE7:1;
      uint64_t IRISE8:1;
      uint64_t IRISE9:1;
      uint64_t IRISE10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRISE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFALL0:1;
      uint64_t IFALL1:1;
      uint64_t IFALL2:1;
      uint64_t IFALL3:1;
      uint64_t IFALL4:1;
      uint64_t IFALL5:1;
      uint64_t IFALL6:1;
      uint64_t IFALL7:1;
      uint64_t IFALL8:1;
      uint64_t IFALL9:1;
      uint64_t IFALL10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFALL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0:1;
      uint64_t GPIO1:1;
      uint64_t GPIO2:1;
      uint64_t GPIO3:1;
      uint64_t GPIO4:1;
      uint64_t GPIO5:1;
      uint64_t GPIO6:1;
      uint64_t GPIO7:1;
      uint64_t GPIO8:1;
      uint64_t GPIO9:1;
      uint64_t GPIO10:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define LGPIO (*(volatile struct LGPIO_tag *) 0x40001000)

struct TIM0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t CM:1;
      uint64_t MOD:2;
      uint64_t CIF:3;
      uint64_t reservedSpace0:1;
      uint64_t CIP:2;
      uint64_t ARBE:1;
      uint64_t CCBE:1;
      uint64_t UEM:1;
      uint64_t UIM:1;
      uint64_t TU:1;
      uint64_t CCU:1;
      uint64_t OCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

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
      uint64_t PS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define TIM0 (*(volatile struct TIM0_tag *) 0x40002000)

struct TIM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t CM:1;
      uint64_t MOD:2;
      uint64_t CIF:3;
      uint64_t reservedSpace0:1;
      uint64_t CIP:2;
      uint64_t ARBE:1;
      uint64_t CCBE:1;
      uint64_t UEM:1;
      uint64_t UIM:1;
      uint64_t TU:1;
      uint64_t CCU:1;
      uint64_t OCM:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

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
      uint64_t PS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD:1;
      uint64_t CMP:1;
      uint64_t CAP:1;
      uint64_t reservedSpace0:5;
      uint64_t COF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define TIM1 (*(volatile struct TIM1_tag *) 0x40002100)

struct LINUART_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TXRXEN:1;
      uint64_t AUTEN:1;
      uint64_t LINEN:1;
      uint64_t ISTVEN:1;
      uint64_t reservedSpace0:2;
      uint64_t TXMODE:1;
      uint64_t STP:1;
      uint64_t PAR:1;
      uint64_t PAREN:1;
      uint64_t MSMP:1;
      uint64_t TXFCV:4;
      uint64_t RXFCV:4;
      uint64_t reservedSpace1:8;
      uint64_t TINV:1;
      uint64_t RINV:1;
      uint64_t LLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFE:1;
      uint64_t TXFF:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
      uint64_t BRK:1;
      uint64_t TBSY:1;
      uint64_t RBSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BLEN:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFILL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXFFILL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFILL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFFILL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:1;
      uint64_t TXFE:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
      uint64_t BRSY:1;
      uint64_t PAR:1;
      uint64_t FRM:1;
      uint64_t TXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:1;
      uint64_t TXFE:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
      uint64_t BRSY:1;
      uint64_t PAR:1;
      uint64_t FRM:1;
      uint64_t TXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:1;
      uint64_t TXFE:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
      uint64_t BRSY:1;
      uint64_t PAR:1;
      uint64_t FRM:1;
      uint64_t TXERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define LINUART (*(volatile struct LINUART_tag *) 0x40003000)

struct EPWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t PAM:1;
      uint64_t BCM:1;
      uint64_t OCSDM:1;
      uint64_t CCPT:4;
      uint64_t CKSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t OCFT:2;
      uint64_t reservedSpace1:2;
      uint64_t BIS0:1;
      uint64_t BIS1:1;
      uint64_t BIS2:1;
      uint64_t BRM:1;
      uint64_t BCRM:2;
      uint64_t reservedSpace2:2;
      uint64_t FSON:2;
      uint64_t FSOFF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSOM0:2;
      uint64_t HSOM0:2;
      uint64_t LSOM1:1;
      uint64_t reservedSpace0:1;
      uint64_t HSOM1:1;
      uint64_t reservedSpace1:1;
      uint64_t LSOM2:1;
      uint64_t reservedSpace2:1;
      uint64_t HSOM2:1;
      uint64_t reservedSpace3:1;
      uint64_t LSOM3:1;
      uint64_t reservedSpace4:1;
      uint64_t HSOM3:1;
      uint64_t reservedSpace5:1;
      uint64_t LSOM4:1;
      uint64_t reservedSpace6:1;
      uint64_t HSOM4:1;
      uint64_t reservedSpace7:1;
      uint64_t LSOM5:1;
      uint64_t reservedSpace8:1;
      uint64_t HSOM5:1;
      uint64_t reservedSpace9:1;
      uint64_t BCSS0:1;
      uint64_t BCSS1:1;
      uint64_t BCSS2:1;
      uint64_t reservedSpace10:1;
      uint64_t CLM0:1;
      uint64_t CLM1:1;
      uint64_t CLM2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRBE0:1;
      uint64_t PRBE1:1;
      uint64_t PRBE2:1;
      uint64_t reservedSpace0:1;
      uint64_t PRUM0:1;
      uint64_t PRUM1:1;
      uint64_t PRUM2:1;
      uint64_t reservedSpace1:1;
      uint64_t PUR0:1;
      uint64_t PUR1:1;
      uint64_t PUR2:1;
      uint64_t reservedSpace2:5;
      uint64_t CLBE:1;
      uint64_t CLUEOP:1;
      uint64_t CLUTRG:1;
      uint64_t reservedSpace3:5;
      uint64_t CR1BE:1;
      uint64_t CR1UEOP:1;
      uint64_t CR1UTRG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC0:4;
      uint64_t UCE0:1;
      uint64_t DCE0:1;
      uint64_t reservedSpace0:2;
      uint64_t DEC1:1;
      uint64_t reservedSpace1:3;
      uint64_t UCE1:1;
      uint64_t DCE1:1;
      uint64_t reservedSpace2:2;
      uint64_t DEC2:1;
      uint64_t reservedSpace3:3;
      uint64_t UCE2:1;
      uint64_t DCE2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:12;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:3;
      uint64_t CAPU:12;
      uint64_t CDIRU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:12;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:3;
      uint64_t CAPU:12;
      uint64_t CDIRU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:12;
      uint64_t CDIR:1;
      uint64_t reservedSpace0:3;
      uint64_t CAPU:12;
      uint64_t CDIRU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t BLT0:1;
      uint64_t reservedSpace0:7;
      uint64_t DATA1:8;
      uint64_t BLT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLDAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC0:1;
      uint64_t OC1:1;
      uint64_t OC2:1;
      uint64_t OC3:1;
      uint64_t OC4:1;
      uint64_t OC5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOT:12;
      uint64_t reservedSpace0:4;
      uint64_t MEN0:1;
      uint64_t MEN1:1;
      uint64_t MEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOP0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t TRG0:1;
      uint64_t OC0:1;
      uint64_t reservedSpace0:3;
      uint64_t EOP1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t TRG1:1;
      uint64_t OC1:1;
      uint64_t reservedSpace1:3;
      uint64_t EOP2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t TRG2:1;
      uint64_t OC2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOP0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t TRG0:1;
      uint64_t OC0:1;
      uint64_t reservedSpace0:3;
      uint64_t EOP1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t TRG1:1;
      uint64_t OC1:1;
      uint64_t reservedSpace1:3;
      uint64_t EOP2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t TRG2:1;
      uint64_t OC2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOP0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t TRG0:1;
      uint64_t OC0:1;
      uint64_t reservedSpace0:3;
      uint64_t EOP1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t TRG1:1;
      uint64_t OC1:1;
      uint64_t reservedSpace1:3;
      uint64_t EOP2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t TRG2:1;
      uint64_t OC2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define EPWM (*(volatile struct EPWM_tag *) 0x40004000)

struct CAPCOM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RBE:1;
      uint64_t reservedSpace0:1;
      uint64_t ACM:1;
      uint64_t reservedSpace1:4;
      uint64_t IAM0:2;
      uint64_t OAM0:2;
      uint64_t CIF0:3;
      uint64_t CIS0:1;
      uint64_t IAM1:1;
      uint64_t reservedSpace2:1;
      uint64_t OAM1:1;
      uint64_t reservedSpace3:1;
      uint64_t CIF1:1;
      uint64_t reservedSpace4:2;
      uint64_t CIS1:1;
      uint64_t IAM2:1;
      uint64_t reservedSpace5:1;
      uint64_t OAM2:1;
      uint64_t reservedSpace6:1;
      uint64_t CIF2:1;
      uint64_t reservedSpace7:2;
      uint64_t CIS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REFP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVF0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t CAOF0:1;
      uint64_t OVF1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t CAOF1:1;
      uint64_t OVF2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t CAOF2:1;
      uint64_t RP:1;
      uint64_t WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVF0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t CAOF0:1;
      uint64_t OVF1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t CAOF1:1;
      uint64_t OVF2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t CAOF2:1;
      uint64_t RP:1;
      uint64_t WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVF0:1;
      uint64_t CMP0:1;
      uint64_t CAP0:1;
      uint64_t CAOF0:1;
      uint64_t OVF1:1;
      uint64_t CMP1:1;
      uint64_t CAP1:1;
      uint64_t CAOF1:1;
      uint64_t OVF2:1;
      uint64_t CMP2:1;
      uint64_t CAP2:1;
      uint64_t CAOF2:1;
      uint64_t RP:1;
      uint64_t WP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define CAPCOM (*(volatile struct CAPCOM_tag *) 0x40005000)

struct ADC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SWT:1;
      uint64_t TSRC:3;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TTP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q1SEL:4;
      uint64_t Q1G:2;
      uint64_t Q1REF:1;
      uint64_t Q1EN:1;
      uint64_t Q2SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t Q2G:1;
      uint64_t reservedSpace1:1;
      uint64_t Q2REF:1;
      uint64_t Q2EN:1;
      uint64_t Q3SEL:1;
      uint64_t reservedSpace2:3;
      uint64_t Q3G:1;
      uint64_t reservedSpace3:1;
      uint64_t Q3REF:1;
      uint64_t Q3EN:1;
      uint64_t Q4SEL:1;
      uint64_t reservedSpace4:3;
      uint64_t Q4G:1;
      uint64_t reservedSpace5:1;
      uint64_t Q4REF:1;
      uint64_t Q4EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Q5SEL:4;
      uint64_t Q5G:2;
      uint64_t Q5REF:1;
      uint64_t Q5EN:1;
      uint64_t Q6SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t Q6G:1;
      uint64_t reservedSpace1:1;
      uint64_t Q6REF:1;
      uint64_t Q6EN:1;
      uint64_t Q7SEL:1;
      uint64_t reservedSpace2:3;
      uint64_t Q7G:1;
      uint64_t reservedSpace3:1;
      uint64_t Q7REF:1;
      uint64_t Q7EN:1;
      uint64_t Q8SEL:1;
      uint64_t reservedSpace4:3;
      uint64_t Q8G:1;
      uint64_t reservedSpace5:1;
      uint64_t Q8REF:1;
      uint64_t Q8EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC:1;
      uint64_t TCOLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC:1;
      uint64_t TCOLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOC:1;
      uint64_t TCOLL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define ADC (*(volatile struct ADC_tag *) 0x40006000)

struct DWDG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:3;
      uint64_t reserved:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define DWDG (*(volatile struct DWDG_tag *) 0x40007000)

struct WWDG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:3;
      uint64_t reserved:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WCKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:3;
      uint64_t reserved:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define WWDG (*(volatile struct WWDG_tag *) 0x40008000)

struct BEMFC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:3;
      uint64_t BLKT0:4;
      uint64_t BLKT1:1;
      uint64_t reservedSpace1:3;
      uint64_t BLKT2:1;
      uint64_t reservedSpace2:3;
      uint64_t INV0:1;
      uint64_t INV1:1;
      uint64_t INV2:1;
      uint64_t reservedSpace3:1;
      uint64_t DGL0:2;
      uint64_t reservedSpace4:2;
      uint64_t DGL1:1;
      uint64_t reservedSpace5:3;
      uint64_t DGL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITS0:2;
      uint64_t DTP0:2;
      uint64_t DTS0:4;
      uint64_t ITS1:1;
      uint64_t reservedSpace0:1;
      uint64_t DTP1:1;
      uint64_t reservedSpace1:1;
      uint64_t DTS1:1;
      uint64_t reservedSpace2:3;
      uint64_t ITS2:1;
      uint64_t reservedSpace3:1;
      uint64_t DTP2:1;
      uint64_t reservedSpace4:1;
      uint64_t DTS2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CD0:1;
      uint64_t CD1:1;
      uint64_t CD2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PI0:1;
      uint64_t PI1:1;
      uint64_t PI2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PI0:1;
      uint64_t PI1:1;
      uint64_t PI2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PI0:1;
      uint64_t PI1:1;
      uint64_t PI2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define BEMFC (*(volatile struct BEMFC_tag *) 0x40009000)

struct SPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t LSBF:1;
      uint64_t DWID:2;
      uint64_t reservedSpace0:2;
      uint64_t SPIC:3;
      uint64_t reservedSpace1:1;
      uint64_t TXFCV:4;
      uint64_t RXFCV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t reservedSpace0:3;
      uint64_t TXFE:1;
      uint64_t TXFF:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t TXFFILL:4;
      uint64_t RXFE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
      uint64_t RXFFILL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFE:1;
      uint64_t TXFNF:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFE:1;
      uint64_t TXFNF:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFE:1;
      uint64_t TXFNF:1;
      uint64_t TXFC:1;
      uint64_t TXFO:1;
      uint64_t RXFNE:1;
      uint64_t RXFF:1;
      uint64_t RXFC:1;
      uint64_t RXFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define SPI (*(volatile struct SPI_tag *) 0x4000a000)

struct HSBVDD_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t DO:1;
      uint64_t OCFT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define HSBVDD (*(volatile struct HSBVDD_tag *) 0x4000b000)

struct PWMIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IENA:1;
      uint64_t OENA:1;
      uint64_t OM:2;
      uint64_t FDUPL:1;
      uint64_t IDGL:1;
      uint64_t ORBE:1;
      uint64_t EDFEN:1;
      uint64_t ICLK:4;
      uint64_t OCLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IHT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OLT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE:1;
      uint64_t IFE:1;
      uint64_t ICOF:1;
      uint64_t reservedSpace0:1;
      uint64_t OEOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE:1;
      uint64_t IFE:1;
      uint64_t ICOF:1;
      uint64_t reservedSpace0:1;
      uint64_t OEOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRE:1;
      uint64_t IFE:1;
      uint64_t ICOF:1;
      uint64_t reservedSpace0:1;
      uint64_t OEOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define PWMIO (*(volatile struct PWMIO_tag *) 0x4000c000)

struct LIN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RXFT:3;
      uint64_t OCFT:2;
      uint64_t LAIS:1;
      uint64_t PAIS:1;
      uint64_t TXOS:2;
      uint64_t SR:2;
      uint64_t DOMTOEN:1;
      uint64_t LOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t SWPU:1;
      uint64_t SWCS:1;
      uint64_t reservedSpace0:1;
      uint64_t CLKM:1;
      uint64_t CLKP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINFE:1;
      uint64_t LINRE:1;
      uint64_t OC:1;
      uint64_t DOMTO:1;
      uint64_t BEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINFE:1;
      uint64_t LINRE:1;
      uint64_t OC:1;
      uint64_t DOMTO:1;
      uint64_t BEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINFE:1;
      uint64_t LINRE:1;
      uint64_t OC:1;
      uint64_t DOMTO:1;
      uint64_t BEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define LIN (*(volatile struct LIN_tag *) 0x4000d000)

struct NVRAM_tag
{
  uint32_t DATA00_0;
  uint32_t DATA00_1;
  uint32_t DATA00_2;
  uint32_t DATA00_3;
  uint32_t DATA00_4;
  uint32_t DATA00_5;
  uint32_t DATA00_6;
  uint32_t DATA00_7;
  uint32_t DATA01_0;
  uint32_t DATA01_1;
  uint32_t DATA01_2;
  uint32_t DATA01_3;
  uint32_t DATA01_4;
  uint32_t DATA01_5;
  uint32_t DATA01_6;
  uint32_t DATA01_7;
  uint32_t DATA02_0;
  uint32_t DATA02_1;
  uint32_t DATA02_2;
  uint32_t DATA02_3;
  uint32_t DATA02_4;
  uint32_t DATA02_5;
  uint32_t DATA02_6;
  uint32_t DATA02_7;
  uint32_t DATA03_0;
  uint32_t DATA03_1;
  uint32_t DATA03_2;
  uint32_t DATA03_3;
  uint32_t DATA03_4;
  uint32_t DATA03_5;
  uint32_t DATA03_6;
  uint32_t DATA03_7;
  uint32_t DATA04_0;
  uint32_t DATA04_1;
  uint32_t DATA04_2;
  uint32_t DATA04_3;
  uint32_t DATA04_4;
  uint32_t DATA04_5;
  uint32_t DATA04_6;
  uint32_t DATA04_7;
  uint32_t DATA05_0;
  uint32_t DATA05_1;
  uint32_t DATA05_2;
  uint32_t DATA05_3;
  uint32_t DATA05_4;
  uint32_t DATA05_5;
  uint32_t DATA05_6;
  uint32_t DATA05_7;
  uint32_t DATA06_0;
  uint32_t DATA06_1;
  uint32_t DATA06_2;
  uint32_t DATA06_3;
  uint32_t DATA06_4;
  uint32_t DATA06_5;
  uint32_t DATA06_6;
  uint32_t DATA06_7;
  uint32_t DATA07_0;
  uint32_t DATA07_1;
  uint32_t DATA07_2;
  uint32_t DATA07_3;
  uint32_t DATA07_4;
  uint32_t DATA07_5;
  uint32_t DATA07_6;
  uint32_t DATA07_7;
  uint32_t DATA10_0;
  uint32_t DATA10_1;
  uint32_t DATA10_2;
  uint32_t DATA10_3;
  uint32_t DATA10_4;
  uint32_t DATA10_5;
  uint32_t DATA10_6;
  uint32_t DATA10_7;
  uint32_t DATA10_8;
  uint32_t DATA10_9;
  uint32_t DATA10_10;
  uint32_t DATA10_11;
  uint32_t DATA10_12;
  uint32_t DATA10_13;
  uint32_t DATA10_14;
  uint32_t DATA10_15;
  uint32_t DATA10_16;
  uint32_t DATA10_17;
  uint32_t DATA10_18;
  uint32_t DATA10_19;
  uint32_t DATA10_20;
  uint32_t DATA10_21;
  uint32_t DATA10_22;
  uint32_t DATA10_23;
  uint32_t DATA10_24;
  uint32_t DATA10_25;
  uint32_t DATA10_26;
  uint32_t DATA10_27;
  uint32_t DATA10_28;
  uint32_t DATA10_29;
  uint32_t DATA10_30;
  uint32_t DATA10_31;
  uint32_t DATA10_32;
  uint32_t DATA10_33;
  uint32_t DATA10_34;
  uint32_t DATA10_35;
  uint32_t DATA10_36;
  uint32_t DATA10_37;
  uint32_t DATA10_38;
  uint32_t DATA10_39;
  uint32_t DATA10_40;
  uint32_t DATA10_41;
  uint32_t DATA10_42;
  uint32_t DATA10_43;
  uint32_t DATA10_44;
  uint32_t DATA10_45;
  uint32_t DATA10_46;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDGEN:1;
      uint64_t DWDGEN:1;
      uint64_t reservedSpace0:2;
      uint64_t SMPS_MODE:1;
      uint64_t reservedSpace1:3;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM_VERS:4;
      uint64_t CUST:4;
      uint64_t SUB_VERS:4;
      uint64_t MAIN_VERS:4;
      uint64_t SALES_CODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERS;

  uint8_t res1[65068];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STO:1;
      uint64_t REC:1;
      uint64_t reservedSpace0:2;
      uint64_t MEMSEL:4;
      uint64_t reservedSpace1:8;
      uint64_t RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint32_t ULWA00;
  uint32_t ULSA00;
  uint32_t ULWA10;
  uint32_t ULSA10;
  uint8_t res2[8];

  uint32_t ULWB00;
  uint32_t ULSB00;
  uint32_t ULWB10;
  uint32_t ULSB10;
};

#define NVRAM (*(volatile struct NVRAM_tag *) 0x50000000)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t ERA:1;
      uint64_t WNV:1;
      uint64_t WLA:1;
      uint64_t RLA:1;
      uint64_t RNV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t reservedSpace0:1;
      uint64_t SBC:1;
      uint64_t DED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULA;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ULB;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBC:1;
      uint64_t DED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBC:1;
      uint64_t DED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBC:1;
      uint64_t DED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIPND;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x280000)

struct ROM_tag
{
  uint32_t SID;
  uint32_t FID;
  uint32_t VID;
};

#define ROM (*(volatile struct ROM_tag *) 0x5001f000)

