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

struct AON_BATMON_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEAS_EN:1;
      uint64_t CALC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEASCFG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATMONP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG1:4;
      uint64_t CFG2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:4;
      uint64_t OVR:1;
      uint64_t LOWLIM:1;
      uint64_t HIGHLIM:2;
      uint64_t FALLB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASHPUMPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:8;
      uint64_t INT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BATUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEMPUPD;

};

#define AON_BATMON (*(volatile struct AON_BATMON_tag *) 0x40095000)

struct AON_EVENT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
      uint64_t reservedSpace2:2;
      uint64_t WU3_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WU0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t WU1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t WU2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXWUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG0_EV:6;
      uint64_t reservedSpace0:2;
      uint64_t AON_PROG1_EV:6;
      uint64_t reservedSpace1:2;
      uint64_t AON_PROG2_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_CH1_CAPT_EV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSEL;

};

#define AON_EVENT (*(volatile struct AON_EVENT_tag *) 0x40093000)

struct AON_IOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRAY_CODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSTRMAX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCLATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK32KCTL;

};

#define AON_IOC (*(volatile struct AON_IOC_tag *) 0x40094000)

struct AON_RTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RTC_UPD_EN:1;
      uint64_t RTC_4KHZ_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t RESET:1;
      uint64_t EV_DELAY:4;
      uint64_t reservedSpace1:4;
      uint64_t COMB_EV_MASK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1:1;
      uint64_t reservedSpace1:7;
      uint64_t CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUEINC:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUBSECINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t CH1_EN:1;
      uint64_t CH1_CAPT_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CH2_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t CH2_CONT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH0CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH2CMPINC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBSEC:16;
      uint64_t SEC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH1CAPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

};

#define AON_RTC (*(volatile struct AON_RTC_tag *) 0x40092000)

struct AON_SYSCTL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_EN:1;
      uint64_t EXT_REG_MODE:1;
      uint64_t DCDC_ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RESET_SRC:3;
      uint64_t CLK_LOSS_EN:1;
      uint64_t VDD_LOSS_EN:1;
      uint64_t VDDR_LOSS_EN:1;
      uint64_t VDDS_LOSS_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t VDD_LOSS_EN_OVR:1;
      uint64_t VDDR_LOSS_EN_OVR:1;
      uint64_t VDDS_LOSS_EN_OVR:1;
      uint64_t BOOT_DET_0:1;
      uint64_t BOOT_DET_1:1;
      uint64_t GPIO_WU_FROM_SD:1;
      uint64_t WU_FROM_SD:1;
      uint64_t BOOT_DET_0_SET:1;
      uint64_t BOOT_DET_1_SET:1;
      uint64_t reservedSpace2:6;
      uint64_t BOOT_DET_0_CLR:1;
      uint64_t BOOT_DET_1_CLR:1;
      uint64_t reservedSpace3:5;
      uint64_t SYSRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESETCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO_PAD_SLEEP_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SLEEPCTL;

};

#define AON_SYSCTL (*(volatile struct AON_SYSCTL_tag *) 0x40090000)

struct AON_WUC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_DWN_SRC:2;
      uint64_t RCOSC_HF_CAL_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:3;
      uint64_t reservedSpace0:5;
      uint64_t SCLK_HF_DIV:3;
      uint64_t PWR_DWN_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRAM_RET_EN:4;
      uint64_t reservedSpace0:12;
      uint64_t FIXED_WU_EN:1;
      uint64_t VIRT_OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_RET_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUX_FORCE_ON:1;
      uint64_t SWEV:1;
      uint64_t SCE_RUN_EN:1;
      uint64_t reservedSpace0:28;
      uint64_t RESET_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t AUX_RESET_DONE:1;
      uint64_t AUX_BUS_CONNECTED:1;
      uint64_t reservedSpace1:1;
      uint64_t MCU_PD_ON:1;
      uint64_t AUX_PD_ON:1;
      uint64_t JTAG_PD_ON:1;
      uint64_t reservedSpace2:2;
      uint64_t AUX_PWR_DWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHUTDOWN;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU_SRAM_ERASE:1;
      uint64_t AUX_SRAM_ERASE:1;
      uint64_t reservedSpace1:4;
      uint64_t PWR_DWN_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCU_WARM_RESET:1;
      uint64_t MCU_RESET_SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t MAX_PER_E:3;
      uint64_t MAX_PER_M:5;
      uint64_t C1:4;
      uint64_t C2:4;
      uint64_t reservedSpace0:7;
      uint64_t ADAPTIVE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_USED_PER:16;
      uint64_t VDDR_SMPLS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RECHARGESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PER_E:3;
      uint64_t PER_M:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCFG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t JTAG_PD_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USER_CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGUSERCODE;

};

#define AON_WUC (*(volatile struct AON_WUC_tag *) 0x40091000)

struct AUX_ADI4_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:4;
      uint64_t COMPA_IN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPB_REF:3;
      uint64_t ADCCOMPB_IN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ADCCOMPB_IN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ISRC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t COMPB_EN:1;
      uint64_t COMPB_TRIM:3;
      uint64_t COMPA_REF_CURR_EN:1;
      uint64_t COMPA_REF_RES_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) COMP;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t COMPA_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUX4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t RESET_N:1;
      uint64_t reservedSpace0:1;
      uint64_t SMPL_CYCLE_EXP:4;
      uint64_t SMPL_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCALE_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SRC:1;
      uint64_t EXT:1;
      uint64_t IOMUX:1;
      uint64_t REF_ON_IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ADCREF1;

};

#define AUX_ADI4 (*(volatile struct AUX_ADI4_tag *) 0x400cb000)

struct AUX_AIODIO0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO0 (*(volatile struct AUX_AIODIO0_tag *) 0x400c1000)

struct AUX_AIODIO1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0:2;
      uint64_t IO1:2;
      uint64_t IO2:2;
      uint64_t IO3:2;
      uint64_t IO4:2;
      uint64_t IO5:2;
      uint64_t IO6:2;
      uint64_t IO7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODOUTTGL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO7_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIODIE;

};

#define AUX_AIODIO1 (*(volatile struct AUX_AIODIO1_tag *) 0x400c2000)

struct AUX_ANAIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
      uint64_t reservedSpace0:6;
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMPTY:1;
      uint64_t ALMOST_FULL:1;
      uint64_t FULL:1;
      uint64_t UNDERFLOW:1;
      uint64_t OVERFLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFOSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCFIFO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISRCCTL;

};

#define AUX_ANAIF (*(volatile struct AUX_ANAIF_tag *) 0x400c9010)

struct AUX_DDI0_OSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLK_HF_SRC_SEL:1;
      uint64_t SCLK_MF_SRC_SEL:1;
      uint64_t SCLK_LF_SRC_SEL:2;
      uint64_t reservedSpace0:1;
      uint64_t ACLK_REF_SRC_SEL:2;
      uint64_t ACLK_TDC_SRC_SEL:2;
      uint64_t CLK_LOSS_EN:1;
      uint64_t XOSC_LF_DIG_BYPASS:1;
      uint64_t XOSC_HF_POWER_MODE:1;
      uint64_t RCOSC_LF_TRIMMED:1;
      uint64_t reservedSpace1:3;
      uint64_t ALLOW_SCLK_HF_SWITCHING:1;
      uint64_t reservedSpace2:5;
      uint64_t FORCE_KICKSTART_EN:1;
      uint64_t reservedSpace3:2;
      uint64_t DOUBLER_RESET_DURATION:1;
      uint64_t DOUBLER_START_DURATION:2;
      uint64_t BYPASS_RCOSC_LF_CLK_QUAL:1;
      uint64_t BYPASS_XOSC_LF_CLK_QUAL:1;
      uint64_t reservedSpace4:1;
      uint64_t XTAL_IS_24M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t reservedSpace0:15;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t RADC_MODE_IS_SAR:1;
      uint64_t RADC_DAC_TH:6;
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RADCEXTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:2;
      uint64_t AMPCOMP_SW_EN:1;
      uint64_t AMPCOMP_SW_CTRL:1;
      uint64_t AMPCOMP_FSM_UPDATE_RATE:2;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTH:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMPTH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASSVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SCLK_LF_AUX_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATESTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_IREF_CTRL:2;
      uint64_t reservedSpace0:2;
      uint64_t ADC_SH_VBUF_EN:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t reservedSpace1:17;
      uint64_t SPARE23:1;
      uint64_t NANOAMP_BIAS_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCDOUBLERNANOAMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t reservedSpace0:1;
      uint64_t BYPASS:1;
      uint64_t reservedSpace1:1;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t reservedSpace0:8;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFOSCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RCOSCHF_CTRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSCHFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PENDINGSCLKHFSWITCHING:1;
      uint64_t ADC_DATA:6;
      uint64_t ADC_DATA_READY:1;
      uint64_t ADC_THMET:1;
      uint64_t reservedSpace0:1;
      uint64_t XOSC_HF_HP_BUF_EN:1;
      uint64_t XOSC_HF_LP_BUF_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t XB_48M_CLK_EN:1;
      uint64_t reservedSpace2:1;
      uint64_t XOSC_HF_EN:1;
      uint64_t SCLK_LF_LOSS:1;
      uint64_t SCLK_HF_LOSS:1;
      uint64_t CLK_DCDC_RDY_ACK:1;
      uint64_t CLK_DCDC_RDY:1;
      uint64_t XOSC_LF_EN:1;
      uint64_t RCOSC_LF_EN:1;
      uint64_t RCOSC_HF_EN:1;
      uint64_t reservedSpace3:5;
      uint64_t SCLK_HF_SRC:1;
      uint64_t SCLK_LF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DCDC_GOOD:1;
      uint64_t CLK_CHP_GOOD:1;
      uint64_t ACLK_REF_GOOD:1;
      uint64_t ACLK_TDC_GOOD:1;
      uint64_t ACLK_ADC_GOOD:1;
      uint64_t SCLK_LF_GOOD:1;
      uint64_t SCLK_MF_GOOD:1;
      uint64_t SCLK_HF_GOOD:1;
      uint64_t CLK_DCDC_EN:1;
      uint64_t CLK_CHP_EN:1;
      uint64_t ACLK_REF_EN:1;
      uint64_t ACLK_TDC_EN:1;
      uint64_t ACLK_ADC_EN:1;
      uint64_t SCLK_MF_EN:1;
      uint64_t SCLK_HF_EN:1;
      uint64_t FORCE_RCOSC_HF:1;
      uint64_t LPM_UPDATE_AMP:6;
      uint64_t HMP_UPDATE_AMP:6;
      uint64_t RAMPSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_RF_FREQGOOD:1;
      uint64_t XOSC_HF_FREQGOOD:1;
      uint64_t XOSC_HF_AMPGOOD:1;
      uint64_t AMPCOMP_REQ:1;
      uint64_t reservedSpace0:8;
      uint64_t RAMPSTATE:4;
      uint64_t reservedSpace1:7;
      uint64_t HPM_RAMP3_THMET:1;
      uint64_t HPM_RAMP2_THMET:1;
      uint64_t HPM_RAMP1_THMET:1;
      uint64_t ADC_DCBIAS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT2;

};

#define AUX_DDI0_OSC (*(volatile struct AUX_DDI0_OSC_tag *) 0x400ca000)

struct AUX_EVCTL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0_EV:5;
      uint64_t VEC0_EN:1;
      uint64_t VEC0_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC1_EV:5;
      uint64_t VEC1_EN:1;
      uint64_t VEC1_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC2_EV:5;
      uint64_t VEC2_EN:1;
      uint64_t VEC2_POL:1;
      uint64_t reservedSpace0:1;
      uint64_t VEC3_EV:5;
      uint64_t VEC3_EN:1;
      uint64_t VEC3_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEV7_EV:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCEWEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:1;
      uint64_t EN:1;
      uint64_t REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEVSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_RTC_CH2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t OBSMUX1:1;
      uint64_t AON_SW:1;
      uint64_t AON_PROG_WU:1;
      uint64_t AUXIO0:1;
      uint64_t AUXIO1:1;
      uint64_t AUXIO2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUXIO3:1;
      uint64_t AUXIO4:1;
      uint64_t AUXIO5:1;
      uint64_t AUXIO6:1;
      uint64_t AUXIO7:1;
      uint64_t AUXIO8:1;
      uint64_t AUXIO9:1;
      uint64_t AUXIO10:1;
      uint64_t AUXIO11:1;
      uint64_t AUXIO12:1;
      uint64_t AUXIO13:1;
      uint64_t AUXIO14:1;
      uint64_t AUXIO15:1;
      uint64_t ACLK_REF:1;
      uint64_t MCU_EV:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMBEVTOMCUMASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_WU_EV:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
      uint64_t SMPH_AUTOTAKE_DONE:1;
      uint64_t ADC_DONE:1;
      uint64_t ADC_FIFO_ALMOST_FULL:1;
      uint64_t OBSMUX0:1;
      uint64_t ADC_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOMCUFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t SWEV1:1;
      uint64_t SWEV2:1;
      uint64_t AUX_COMPA:1;
      uint64_t AUX_COMPB:1;
      uint64_t ADC_DONE:1;
      uint64_t TDC_DONE:1;
      uint64_t TIMER0_EV:1;
      uint64_t TIMER1_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVTOAONFLAGSCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VEC0:1;
      uint64_t VEC1:1;
      uint64_t VEC2:1;
      uint64_t VEC3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VECFLAGSCLR;

};

#define AUX_EVCTL (*(volatile struct AUX_EVCTL_tag *) 0x400c5000)

struct AUX_SCE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
      uint64_t SUSPEND:1;
      uint64_t SINGLE_STEP:1;
      uint64_t RESTART:1;
      uint64_t FORCE_WU_HIGH:1;
      uint64_t FORCE_WU_LOW:1;
      uint64_t DBG_FREEZE_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RESET_VECTOR:4;
      uint64_t reservedSpace1:4;
      uint64_t FORCE_EV_HIGH:8;
      uint64_t FORCE_EV_LOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PC:16;
      uint64_t OPCODE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FETCHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Z_FLAG:1;
      uint64_t N_FLAG:1;
      uint64_t C_FLAG:1;
      uint64_t V_FLAG:1;
      uint64_t reservedSpace0:4;
      uint64_t SELF_STOP:1;
      uint64_t WEV:1;
      uint64_t SLEEP:1;
      uint64_t BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SIGNALS:8;
      uint64_t WU_SIGNAL:1;
      uint64_t reservedSpace0:7;
      uint64_t EXC_VECTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0:16;
      uint64_t REG1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG2:16;
      uint64_t REG3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG4:16;
      uint64_t REG5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG6:16;
      uint64_t REG7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START:16;
      uint64_t STOP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITER_LEFT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOOPCNT;

};

#define AUX_SCE (*(volatile struct AUX_SCE_tag *) 0x400e1000)

struct AUX_SMPH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_ID:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTOTAKE;

};

#define AUX_SMPH (*(volatile struct AUX_SMPH_tag *) 0x400c8000)

struct AUX_TDCIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATE:6;
      uint64_t DONE:1;
      uint64_t SAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIMIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SATCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_SRC:5;
      uint64_t START_POL:1;
      uint64_t reservedSpace0:2;
      uint64_t STOP_SRC:5;
      uint64_t STOP_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTLOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRIGCNTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:5;
      uint64_t reservedSpace0:1;
      uint64_t RATIO:1;
      uint64_t RESET_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRECNT;

};

#define AUX_TDCIF (*(volatile struct AUX_TDCIF_tag *) 0x400c4000)

struct AUX_TIMER_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:1;
      uint64_t MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t PRE:4;
      uint64_t TICK_SRC:5;
      uint64_t TICK_SRC_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1TARGET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1CTL;

};

#define AUX_TIMER (*(volatile struct AUX_TIMER_tag *) 0x400c7000)

struct AUX_WUC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t TDC:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWROFFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRDWNACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLFACK;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AON_PROG_WU:1;
      uint64_t AON_SW:1;
      uint64_t AON_RTC_CH2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUEVCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDCCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQ:1;
      uint64_t ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REFCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC15_0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INC23_16:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPD_REQ:1;
      uint64_t UPD_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCSUBSECINCCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISCONNECT_ACK:1;
      uint64_t DISCONNECTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCUBUSSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCE_RUN_EN:1;
      uint64_t AUX_FORCE_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AONCTLSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXIOLATCH;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPH_bitfield:1;
      uint64_t AIODIO0:1;
      uint64_t AIODIO1:1;
      uint64_t TIMER:1;
      uint64_t ANAIF:1;
      uint64_t reservedSpace0:1;
      uint64_t AUX_DDI0_OSC_bitfield:1;
      uint64_t AUX_ADI4_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODCLKEN1;

};

#define AUX_WUC (*(volatile struct AUX_WUC_tag *) 0x400c6000)

struct CCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_INCREMENT:24;
      uint64_t DIO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXT_LF_CLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_MAX_START:8;
      uint64_t DELTA_IBIAS_OFFSET:4;
      uint64_t DELTA_IBIAS_INIT:4;
      uint64_t ALT_DCDC_IPEAK:3;
      uint64_t ALT_DCDC_DITHER_EN:1;
      uint64_t ALT_DCDC_VMIN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_XOSC_OVR:1;
      uint64_t DIS_ALT_DCDC_SETTING:1;
      uint64_t DISABLE_FLAGS:14;
      uint64_t SIZE_OF_CCFG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIZE_AND_DIS_FLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_CAP:8;
      uint64_t XOSC_CAPARRAY_DELTA:8;
      uint64_t HF_COMP:1;
      uint64_t XOSC_CAP_MOD:1;
      uint64_t XOSC_FREQ:2;
      uint64_t RTC_COMP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCLK_LF_OPTION:2;
      uint64_t VDDS_BOD_LEVEL:1;
      uint64_t VDDR_EXT_LOAD:1;
      uint64_t DCDC_ACTIVE:1;
      uint64_t DCDC_RECHARGE:1;
      uint64_t VDDR_TRIM_SLEEP_DELTA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TM15:8;
      uint64_t VDDR_EXT_TP5:8;
      uint64_t VDDR_EXT_TP25:8;
      uint64_t VDDR_EXT_TP45:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VDDR_EXT_TP65:8;
      uint64_t VDDR_EXT_TP85:8;
      uint64_t VDDR_EXT_TP105:8;
      uint64_t VDDR_EXT_TP125:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_LOAD_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_COMP_P2:8;
      uint64_t RTC_COMP_P1:8;
      uint64_t RTC_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTC_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HF_COMP_P2:8;
      uint64_t HF_COMP_P1:8;
      uint64_t HF_COMP_P0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREQ_OFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_MAC_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IEEE_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BL_ENABLE:8;
      uint64_t BL_PIN_NUMBER:8;
      uint64_t BL_LEVEL:1;
      uint64_t reservedSpace0:7;
      uint64_t BOOTLOADER_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BL_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK_ERASE_DIS_N:1;
      uint64_t reservedSpace0:7;
      uint64_t CHIP_ERASE_DIS_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERASE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_FA_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TI_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_TAP_ENABLE:8;
      uint64_t PRCM_TAP_ENABLE:8;
      uint64_t CPU_DAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUC_TAP_ENABLE:8;
      uint64_t PBIST1_TAP_ENABLE:8;
      uint64_t PBIST2_TAP_ENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_TAP_DAP_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IMAGE_VALID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMAGE_VALID_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_0:1;
      uint64_t WRT_PROT_SEC_1:1;
      uint64_t WRT_PROT_SEC_2:1;
      uint64_t WRT_PROT_SEC_3:1;
      uint64_t WRT_PROT_SEC_4:1;
      uint64_t WRT_PROT_SEC_5:1;
      uint64_t WRT_PROT_SEC_6:1;
      uint64_t WRT_PROT_SEC_7:1;
      uint64_t WRT_PROT_SEC_8:1;
      uint64_t WRT_PROT_SEC_9:1;
      uint64_t WRT_PROT_SEC_10:1;
      uint64_t WRT_PROT_SEC_11:1;
      uint64_t WRT_PROT_SEC_12:1;
      uint64_t WRT_PROT_SEC_13:1;
      uint64_t WRT_PROT_SEC_14:1;
      uint64_t WRT_PROT_SEC_15:1;
      uint64_t WRT_PROT_SEC_16:1;
      uint64_t WRT_PROT_SEC_17:1;
      uint64_t WRT_PROT_SEC_18:1;
      uint64_t WRT_PROT_SEC_19:1;
      uint64_t WRT_PROT_SEC_20:1;
      uint64_t WRT_PROT_SEC_21:1;
      uint64_t WRT_PROT_SEC_22:1;
      uint64_t WRT_PROT_SEC_23:1;
      uint64_t WRT_PROT_SEC_24:1;
      uint64_t WRT_PROT_SEC_25:1;
      uint64_t WRT_PROT_SEC_26:1;
      uint64_t WRT_PROT_SEC_27:1;
      uint64_t WRT_PROT_SEC_28:1;
      uint64_t WRT_PROT_SEC_29:1;
      uint64_t WRT_PROT_SEC_30:1;
      uint64_t WRT_PROT_SEC_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_31_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_32:1;
      uint64_t WRT_PROT_SEC_33:1;
      uint64_t WRT_PROT_SEC_34:1;
      uint64_t WRT_PROT_SEC_35:1;
      uint64_t WRT_PROT_SEC_36:1;
      uint64_t WRT_PROT_SEC_37:1;
      uint64_t WRT_PROT_SEC_38:1;
      uint64_t WRT_PROT_SEC_39:1;
      uint64_t WRT_PROT_SEC_40:1;
      uint64_t WRT_PROT_SEC_41:1;
      uint64_t WRT_PROT_SEC_42:1;
      uint64_t WRT_PROT_SEC_43:1;
      uint64_t WRT_PROT_SEC_44:1;
      uint64_t WRT_PROT_SEC_45:1;
      uint64_t WRT_PROT_SEC_46:1;
      uint64_t WRT_PROT_SEC_47:1;
      uint64_t WRT_PROT_SEC_48:1;
      uint64_t WRT_PROT_SEC_49:1;
      uint64_t WRT_PROT_SEC_50:1;
      uint64_t WRT_PROT_SEC_51:1;
      uint64_t WRT_PROT_SEC_52:1;
      uint64_t WRT_PROT_SEC_53:1;
      uint64_t WRT_PROT_SEC_54:1;
      uint64_t WRT_PROT_SEC_55:1;
      uint64_t WRT_PROT_SEC_56:1;
      uint64_t WRT_PROT_SEC_57:1;
      uint64_t WRT_PROT_SEC_58:1;
      uint64_t WRT_PROT_SEC_59:1;
      uint64_t WRT_PROT_SEC_60:1;
      uint64_t WRT_PROT_SEC_61:1;
      uint64_t WRT_PROT_SEC_62:1;
      uint64_t WRT_PROT_SEC_63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_63_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_64:1;
      uint64_t WRT_PROT_SEC_65:1;
      uint64_t WRT_PROT_SEC_66:1;
      uint64_t WRT_PROT_SEC_67:1;
      uint64_t WRT_PROT_SEC_68:1;
      uint64_t WRT_PROT_SEC_69:1;
      uint64_t WRT_PROT_SEC_70:1;
      uint64_t WRT_PROT_SEC_71:1;
      uint64_t WRT_PROT_SEC_72:1;
      uint64_t WRT_PROT_SEC_73:1;
      uint64_t WRT_PROT_SEC_74:1;
      uint64_t WRT_PROT_SEC_75:1;
      uint64_t WRT_PROT_SEC_76:1;
      uint64_t WRT_PROT_SEC_77:1;
      uint64_t WRT_PROT_SEC_78:1;
      uint64_t WRT_PROT_SEC_79:1;
      uint64_t WRT_PROT_SEC_80:1;
      uint64_t WRT_PROT_SEC_81:1;
      uint64_t WRT_PROT_SEC_82:1;
      uint64_t WRT_PROT_SEC_83:1;
      uint64_t WRT_PROT_SEC_84:1;
      uint64_t WRT_PROT_SEC_85:1;
      uint64_t WRT_PROT_SEC_86:1;
      uint64_t WRT_PROT_SEC_87:1;
      uint64_t WRT_PROT_SEC_88:1;
      uint64_t WRT_PROT_SEC_89:1;
      uint64_t WRT_PROT_SEC_90:1;
      uint64_t WRT_PROT_SEC_91:1;
      uint64_t WRT_PROT_SEC_92:1;
      uint64_t WRT_PROT_SEC_93:1;
      uint64_t WRT_PROT_SEC_94:1;
      uint64_t WRT_PROT_SEC_95:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_95_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRT_PROT_SEC_96:1;
      uint64_t WRT_PROT_SEC_97:1;
      uint64_t WRT_PROT_SEC_98:1;
      uint64_t WRT_PROT_SEC_99:1;
      uint64_t WRT_PROT_SEC_100:1;
      uint64_t WRT_PROT_SEC_101:1;
      uint64_t WRT_PROT_SEC_102:1;
      uint64_t WRT_PROT_SEC_103:1;
      uint64_t WRT_PROT_SEC_104:1;
      uint64_t WRT_PROT_SEC_105:1;
      uint64_t WRT_PROT_SEC_106:1;
      uint64_t WRT_PROT_SEC_107:1;
      uint64_t WRT_PROT_SEC_108:1;
      uint64_t WRT_PROT_SEC_109:1;
      uint64_t WRT_PROT_SEC_110:1;
      uint64_t WRT_PROT_SEC_111:1;
      uint64_t WRT_PROT_SEC_112:1;
      uint64_t WRT_PROT_SEC_113:1;
      uint64_t WRT_PROT_SEC_114:1;
      uint64_t WRT_PROT_SEC_115:1;
      uint64_t WRT_PROT_SEC_116:1;
      uint64_t WRT_PROT_SEC_117:1;
      uint64_t WRT_PROT_SEC_118:1;
      uint64_t WRT_PROT_SEC_119:1;
      uint64_t WRT_PROT_SEC_120:1;
      uint64_t WRT_PROT_SEC_121:1;
      uint64_t WRT_PROT_SEC_122:1;
      uint64_t WRT_PROT_SEC_123:1;
      uint64_t WRT_PROT_SEC_124:1;
      uint64_t WRT_PROT_SEC_125:1;
      uint64_t WRT_PROT_SEC_126:1;
      uint64_t WRT_PROT_SEC_127:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCFG_PROT_127_96;

};

#define CCFG (*(volatile struct CCFG_tag *) 0x50003fa8)

struct CPU_TIPROP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRACECLK_N_SWV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRACECLKMUX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DYN_CG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DYN_CG;

};

#define CPU_TIPROP (*(volatile struct CPU_TIPROP_tag *) 0xe00feff8)

struct EVENT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL2;

  uint32_t CPUIRQSEL3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUIRQSEL33;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCSEL9;

  uint8_t res1[216];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT0BCAPTSEL;

  uint8_t res2[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT1BCAPTSEL;

  uint8_t res3[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT2BCAPTSEL;

  uint8_t res4[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH1BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH2BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH3BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH4BSEL;

  uint32_t UDMACH5SSEL;
  uint32_t UDMACH5BSEL;
  uint32_t UDMACH6SSEL;
  uint32_t UDMACH6BSEL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH7BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH8BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH9BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH10BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH11BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH12BSEL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH13BSEL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH14BSEL;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH15BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH16BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH17BSEL;

  uint8_t res8[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH21BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH22BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH23BSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24SSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UDMACH24BSEL;

  uint8_t res9[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3ACAPTSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPT3BCAPTSEL;

  uint8_t res10[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUXSEL0;

  uint8_t res11[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CM3NMISEL0;

  uint8_t res12[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SSTMPSEL0;

  uint8_t res13[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRZSEL0;

  uint8_t res14[1276];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWEV0:1;
      uint64_t reservedSpace0:7;
      uint64_t SWEV1:1;
      uint64_t reservedSpace1:7;
      uint64_t SWEV2:1;
      uint64_t reservedSpace2:7;
      uint64_t SWEV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWEV;

};

#define EVENT (*(volatile struct EVENT_tag *) 0x40083000)

struct FCFG1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICE_MINOR_REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_CONF_1;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:7;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH_DIV30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC_DIV30;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_DIE_ID_3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCHF_CTRIM:8;
      uint64_t VTRIM_COARSE:4;
      uint64_t VTRIM_DIG:4;
      uint64_t ITRIM_DIG_LDO:2;
      uint64_t TRIMIREF:5;
      uint64_t TRIMMAG:4;
      uint64_t SET_RCOSC_HF_COARSE_RESISTOR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_OSC_BIAS_LDO_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMTEMP:6;
      uint64_t TRIMBOD_EXTMODE:5;
      uint64_t TRIMBOD_INTMODE:5;
      uint64_t VDDR_TRIM:5;
      uint64_t IPTAT_TRIM:2;
      uint64_t VDDR_OK_HYS:1;
      uint64_t VDDR_ENABLE_PG1:1;
      uint64_t BOD_BANDGAP_TRIM_CNF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHDW_ANA_TRIM;

  uint8_t res3[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOT_NUMBER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_NUMBER;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YCOORDINATE:16;
      uint64_t XCOORDINATE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_COORDINATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSU:8;
      uint64_t PVSU:8;
      uint64_t ESU:8;
      uint64_t PSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_E_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVSU:12;
      uint64_t A_EXEZ_SETUP:4;
      uint64_t PV_ACCESS:8;
      uint64_t RVSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_C_E_P_R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVH2:8;
      uint64_t PVH:8;
      uint64_t RH:8;
      uint64_t PH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_P_R_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SM_FREQUENCY:12;
      uint64_t VSTAT:4;
      uint64_t SEQ:8;
      uint64_t EH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_EH_SEQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E_STEP_HIGHT:16;
      uint64_t VHV_E_START:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PP:16;
      uint64_t reservedSpace0:8;
      uint64_t PUMP_SU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGRAM_PW:16;
      uint64_t MAX_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_PROG_EP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASE_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_ERA_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHV_E:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_E:4;
      uint64_t reservedSpace1:4;
      uint64_t VHV_P:4;
      uint64_t reservedSpace2:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VINH:8;
      uint64_t VCG2P5:8;
      uint64_t VHV_PV:4;
      uint64_t reservedSpace0:4;
      uint64_t TRIM13_PV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_VHV_PV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t V_READ:8;
      uint64_t VWL_P:8;
      uint64_t VSL_P:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_V;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t PROTOCOL:4;
      uint64_t PKG:3;
      uint64_t SEQUENCE:4;
      uint64_t reservedSpace1:3;
      uint64_t VER:2;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USER_ID;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAIT_SYSCODE:8;
      uint64_t FLASH_SIZE:8;
      uint64_t TRIM_1P7:2;
      uint64_t MAX_EC_LEVEL:4;
      uint64_t DO_PRECOND:1;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDC_HIGH_EN_SEL:3;
      uint64_t DCDC_LOW_EN_SEL:3;
      uint64_t DEAD_TIME_TRIM:2;
      uint64_t DCDC_IPEAK:3;
      uint64_t DITHER_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t NANOAMP_RES_TRIM:6;
      uint64_t ATESTLF_UDIGLDO_IBIAS_TRIM:1;
      uint64_t SET_RCOSC_HF_FINE_RESISTOR:2;
      uint64_t reservedSpace1:1;
      uint64_t RCOSCHFCTRIMFRACT:5;
      uint64_t RCOSCHFCTRIMFRACT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANA2_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VTRIM_DELTA:3;
      uint64_t reservedSpace0:5;
      uint64_t ITRIM_UDIGLDO:3;
      uint64_t ITRIM_DIGLDO_LOAD:2;
      uint64_t reservedSpace1:3;
      uint64_t GLDO_CURSRC:3;
      uint64_t reservedSpace2:5;
      uint64_t VDDR_TRIM_SLEEP:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDO_TRIM;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_BLE_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_0_31:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR_32_63:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAC_15_4_1;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_AT_X_EXT_RD:3;
      uint64_t DIS_IDLE_EXT_RD:1;
      uint64_t DIS_STANDBY_EXT_RD:1;
      uint64_t STANDBY_PW_SEL_EXT_RD:2;
      uint64_t STANDBY_MODE_SEL_EXT_RD:1;
      uint64_t VIN_AT_X_INT_RD:3;
      uint64_t DIS_IDLE_INT_RD:1;
      uint64_t DIS_STANDBY_INT_RD:1;
      uint64_t STANDBY_PW_SEL_INT_RD:2;
      uint64_t STANDBY_MODE_SEL_INT_RD:1;
      uint64_t VIN_AT_X_EXT_WRT:3;
      uint64_t DIS_IDLE_EXT_WRT:1;
      uint64_t DIS_STANDBY_EXT_WRT:1;
      uint64_t STANDBY_PW_SEL_EXT_WRT:2;
      uint64_t STANDBY_MODE_SEL_EXT_WRT:1;
      uint64_t VIN_AT_X_INT_WRT:3;
      uint64_t DIS_IDLE_INT_WRT:1;
      uint64_t DIS_STANDBY_INT_WRT:1;
      uint64_t STANDBY_PW_SEL_INT_WRT:2;
      uint64_t STANDBY_MODE_SEL_INT_WRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OTP_DATA4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMPVSLOPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRIMFRACT_SLOPE:8;
      uint64_t CTRIMFRACT_QUAD:8;
      uint64_t CTRIM:8;
      uint64_t FINE_RESISTOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCOSC_HF_TEMPCOMP;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MANUFACTURER_ID:12;
      uint64_t WAFER_ID:16;
      uint64_t PG_REV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEPICK_DEVICE_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_PROGRAM_REV:8;
      uint64_t PO_TAIL_RES_TRIM:4;
      uint64_t PER_E:3;
      uint64_t PER_M:5;
      uint64_t RCOSC_HF_CRIM:8;
      uint64_t RCOSC_HF_ITUNE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA;

  uint8_t res10[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO_CNT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCONF;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFANALDO_TRIM_OUTPUT:5;
      uint64_t IFDIGLDO_TRIM_OUTPUT:5;
      uint64_t INT2ADJ:4;
      uint64_t AAFCAP:2;
      uint64_t FF1ADJ:4;
      uint64_t INT3ADJ:4;
      uint64_t FF3ADJ:4;
      uint64_t FF2ADJ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_IF_ADC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCOSCLF_RTUNE_TRIM:2;
      uint64_t RCOSCLF_CTUNE_TRIM:8;
      uint64_t XOSC_HF_COLUMN_Q12:16;
      uint64_t XOSC_HF_ROW_Q12:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_OSC_TOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFLDO_TRIM_OUTPUT:7;
      uint64_t reservedSpace0:6;
      uint64_t PATRIMCOMPLETE_N:1;
      uint64_t CTL_PA0_TRIM:5;
      uint64_t IFAMP_TRIM:5;
      uint64_t LNA_IB:4;
      uint64_t IFAMP_IB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_RF_FRONTEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLDO_TRIM_OUTPUT:6;
      uint64_t LDOVCO_TRIM_OUTPUT:6;
      uint64_t RFC_MDM_DEMIQMC0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_SYNTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_ABS_GAIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REL_GAIN_TEMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REL_GAIN;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_ABS_OFFSET_TEMP1:8;
      uint64_t reservedSpace0:8;
      uint64_t SOC_ADC_REL_OFFSET_TEMP1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_OFFSET_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOC_ADC_REF_VOLTAGE_TRIM_TEMP1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOC_ADC_REF_TRIM_AND_OFFSET_EXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HPMRAMP1_TH:6;
      uint64_t IBIASCAP_LPTOHP_OL_CNT:4;
      uint64_t HPMRAMP3_HTH:6;
      uint64_t reservedSpace0:2;
      uint64_t HPMRAMP3_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADC_COMP_AMPTH_HPM:6;
      uint64_t reservedSpace1:2;
      uint64_t ADC_COMP_AMPTH_LPM:6;
      uint64_t reservedSpace2:2;
      uint64_t LPMUPDATE_HTM:6;
      uint64_t reservedSpace3:2;
      uint64_t LPMUPDATE_LTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_TH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBIASCAP_HPTOLP_OL_CNT:4;
      uint64_t CAP_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT_FINAL:8;
      uint64_t IBIAS_INIT:4;
      uint64_t IBIAS_OFFSET:4;
      uint64_t reservedSpace0:6;
      uint64_t AMPCOMP_REQ_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMPCOMP_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XOSC_HF_IBIASTHERM:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANABYPASS_VALUE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACTRIM:6;
      uint64_t QUANTCTLTHRES:3;
      uint64_t RSSI_OFFSET:8;
      uint64_t RSSITRIMCOMPLETE_N:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_MISC_ADC;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIMBOD_H:5;
      uint64_t reservedSpace0:3;
      uint64_t VDDR_TRIM_SLEEP_H:5;
      uint64_t reservedSpace1:3;
      uint64_t VDDR_TRIM_H:5;
      uint64_t reservedSpace2:3;
      uint64_t VDDR_TRIM_HH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VOLT_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t XOSC_OPTION:1;
      uint64_t XOSC_HF_FAST_START:2;
      uint64_t XOSCLF_CMIRRWR_RATIO:4;
      uint64_t XOSCLF_REGULATOR_TRIM:2;
      uint64_t ATESTLF_RCOSCLF_IBIAS_TRIM:1;
      uint64_t ADC_SH_MODE_EN:1;
      uint64_t ADC_SH_VBUF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSC_CONF;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLUX_CAP_0P4_TRIM:16;
      uint64_t FLUX_CAP_0P28_TRIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_TRIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDAC_STEP:4;
      uint64_t LPM_IBIAS_WAIT_CNT:6;
      uint64_t HPM_IBIAS_WAIT_CNT:10;
      uint64_t DBLR_LOOP_FILTER_RESET_VOLTAGE:2;
      uint64_t LP_BUF_ITRIM:2;
      uint64_t HP_BUF_ITRIM:3;
      uint64_t PEAK_DET_ITRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC_OTP_DATA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_20C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_35C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_50C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_65C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_80C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_95C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_110C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASELINE:8;
      uint64_t DELTA_XOSC_LPM:8;
      uint64_t DELTA_RFMEM_RET:8;
      uint64_t DELTA_CACHE_REF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWD_CURR_125C;

};

#define FCFG1 (*(volatile struct FCFG1_tag *) 0x500010a0)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:1;
      uint64_t BUSY:1;
      uint64_t SAMHOLD_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t EFUSE_ERRCODE:5;
      uint64_t EFUSE_CRC_ERROR:1;
      uint64_t EFUSE_TIMEOUT:1;
      uint64_t EFUSE_BLANK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS_IDLE:1;
      uint64_t DIS_STANDBY:1;
      uint64_t reservedSpace0:1;
      uint64_t ENABLE_SWINTF:1;
      uint64_t DIS_READACCESS:1;
      uint64_t DIS_EFUSECLK:1;
      uint64_t STANDBY_PW_SEL:2;
      uint64_t STANDBY_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCODE_START:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCODE_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECTORS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_SIZE;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWLOCK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWLOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWFLAG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWFLAG;

  uint8_t res2[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DUMPWORD:16;
      uint64_t reservedSpace0:8;
      uint64_t INSTRUCTION:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROW:11;
      uint64_t BLOCK:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EEN:1;
      uint64_t R:1;
      uint64_t P:1;
      uint64_t SPARE:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAUPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATALOWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GATING:1;
      uint64_t reservedSpace0:2;
      uint64_t SLAVEPOWER:2;
      uint64_t reservedSpace1:3;
      uint64_t IDLEGATING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACCUMULATOR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUTENABLE:4;
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FDI:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t YS_ECC_SELF_TEST_EN:1;
      uint64_t OUTPUTENABLE:4;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t SPARE:1;
      uint64_t DISROW0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOUNDARY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEFLAG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSEDAY:5;
      uint64_t EFUSEMONTH:4;
      uint64_t EFUSEYEAR:7;
      uint64_t ODPDAY:5;
      uint64_t ODPMONTH:4;
      uint64_t ODPYEAR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSERELEASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_WS_READ_STATES:4;
      uint64_t SYS_REPAIR_EN:2;
      uint64_t SYS_DIEID_AUTOLOAD_EN:1;
      uint64_t EFC_FCLRZ:1;
      uint64_t EFC_READY:1;
      uint64_t SYS_ECC_OVERRIDE_EN:1;
      uint64_t EFC_AUTOLOAD_ERROR:1;
      uint64_t EFC_INSTRUCTION_ERROR:1;
      uint64_t EFC_INSTRUCTION_INFO:1;
      uint64_t SYS_ECC_SELF_TEST_EN:1;
      uint64_t EFC_SELF_TEST_ERROR:1;
      uint64_t EFC_SELF_TEST_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPINS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSECRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARGIN:2;
      uint64_t SPARE:1;
      uint64_t DEBUG:1;
      uint64_t READCLOCK:4;
      uint64_t DATABIT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEREAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRITECLOCK:9;
      uint64_t ITERATIONS:4;
      uint64_t VPPTOVDD:1;
      uint64_t CLOCKSTALL:16;
      uint64_t COMPAREDISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEPROGRAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CODE:5;
      uint64_t DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFUSEERROR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SINGLEBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FROM0:1;
      uint64_t FROMN:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TWOBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CYCLES:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTCYC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGNATURE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELFTESTSIGN;

  uint8_t res3[4016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRDCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RM0:1;
      uint64_t RM1:1;
      uint64_t reservedSpace0:6;
      uint64_t RMBSEM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SUSP_IGNR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTL1;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t FSM_DONE:1;
      uint64_t RVF_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACSTAT;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTL1DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBBUSY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADS:8;
      uint64_t BAGP:8;
      uint64_t OTPPROTDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKPWR0:2;
      uint64_t BANKPWR1:2;
      uint64_t BANKPWR2:2;
      uint64_t BANKPWR3:2;
      uint64_t BANKPWR4:2;
      uint64_t BANKPWR5:2;
      uint64_t BANKPWR6:2;
      uint64_t BANKPWR7:2;
      uint64_t REG_PWRSAV:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_PWRSAV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFALLBACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKRDY:1;
      uint64_t reservedSpace0:14;
      uint64_t PUMPRDY:1;
      uint64_t BANKBUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPRDY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUMPPWR:2;
      uint64_t reservedSpace0:2;
      uint64_t PUMPRESET_PW:12;
      uint64_t PSLEEPTDIS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOCK:1;
      uint64_t PSUSP:1;
      uint64_t ESUSP:1;
      uint64_t VOLSTAT:1;
      uint64_t CSTAT:1;
      uint64_t INVDAT:1;
      uint64_t PGM:1;
      uint64_t ERS:1;
      uint64_t BUSY:1;
      uint64_t CV:1;
      uint64_t EV:1;
      uint64_t PCV:1;
      uint64_t PGV:1;
      uint64_t DBF:1;
      uint64_t ILA:1;
      uint64_t RVF:1;
      uint64_t RDVER:1;
      uint64_t RVSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENCOM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOCK;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVREADCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_PV:4;
      uint64_t TRIM13_PV:4;
      uint64_t reservedSpace0:8;
      uint64_t VHVCT_E:4;
      uint64_t TRIM13_E:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t VHVCT_P:4;
      uint64_t TRIM13_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VHVCT_READ:4;
      uint64_t reservedSpace0:12;
      uint64_t WCT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVHVCT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIN_CT:5;
      uint64_t reservedSpace0:3;
      uint64_t VCG2P5CT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVNVCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSL_P:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVSLP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VWLCT_P:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FVWLCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE_EN:4;
      uint64_t EF_TEST:1;
      uint64_t reservedSpace0:3;
      uint64_t EF_CLRZ:1;
      uint64_t reservedSpace1:7;
      uint64_t BP_SEL:1;
      uint64_t WRITE_EN:1;
      uint64_t reservedSpace2:6;
      uint64_t CHAIN_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSECTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SHIFT_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSESTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FEFUSEDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEFUSEDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VIN_BY_PASS:1;
      uint64_t reservedSpace1:3;
      uint64_t VIN_AT_X:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIM_0P8:4;
      uint64_t TRIM_1P7:2;
      uint64_t reservedSpace3:2;
      uint64_t TRIM_3P4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSEQPMP;

  uint8_t res8[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t TEZ:1;
      uint64_t OTP:1;
      uint64_t TI_OTP:1;
      uint64_t PRECOL:1;
      uint64_t NOCOLRED:1;
      uint64_t reservedSpace1:1;
      uint64_t CTRLENZ:1;
      uint64_t reservedSpace2:7;
      uint64_t FLCLKEN:1;
      uint64_t RWAIT_FLCLK:1;
      uint64_t RWAIT2_FLCLK:1;
      uint64_t reservedSpace3:5;
      uint64_t ECBIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t V5PWRDNZ:1;
      uint64_t V3PWRDNZ:1;
      uint64_t reservedSpace0:6;
      uint64_t EXECUTEZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPSTROBES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBMODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FADDR;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_EN:1;
      uint64_t reservedSpace1:14;
      uint64_t WDATA_BLK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWPWRITE7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCBYTES31_24:8;
      uint64_t ECCBYTES23_16:8;
      uint64_t ECCBYTES15_08:8;
      uint64_t ECCBYTES07_00:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FWPWRITE_ECC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAFELV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSWSTAT;

  uint8_t res10[184];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_GLBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t OTP_ACT:1;
      uint64_t TIOTP_ACT:1;
      uint64_t FSM_ACT:1;
      uint64_t reservedSpace1:1;
      uint64_t EXECUTEZ:1;
      uint64_t CTRLENZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STATE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV_DAT:1;
      uint64_t OVR_PUL_CNT:1;
      uint64_t NON_OP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OSU:8;
      uint64_t PGM_OSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_OSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t VSTAT_CNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_VSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_VSU:8;
      uint64_t PGM_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t ADD_EXZ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_CMP_VSU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXE_VALD:8;
      uint64_t REP_VSU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EX_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD_H:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_RD_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_OH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_P_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_OH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_OH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_P_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_PPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PGM_VH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PE_VH;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROG_PUL_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERA_PW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PW;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAV_ERA_PUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SAV_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_TIMER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:3;
      uint64_t MODE:3;
      uint64_t SAV_ERA_MODE:3;
      uint64_t SAV_PGM_CMD:3;
      uint64_t SUBMODE:2;
      uint64_t ERA_SUBMODE:2;
      uint64_t PGM_SUBMODE:2;
      uint64_t RDV_SUBMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGM_ADDR:23;
      uint64_t PGM_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERA_ADDR:23;
      uint64_t ERA_BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_PRG_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t BEG_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PRG_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_ERA_PUL:12;
      uint64_t reservedSpace0:4;
      uint64_t MAX_EC_LEVEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERA_PUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t EC_STEP_SIZE:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_STEP_SIZE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUL_CNTR:12;
      uint64_t reservedSpace0:4;
      uint64_t CUR_EC_LEVEL:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PUL_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_STEP_HEIGHT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EC_STEP_HEIGHT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRIDE:1;
      uint64_t INV_DATA:1;
      uint64_t CMD_EN:1;
      uint64_t DIS_TST_EN:1;
      uint64_t PREC_STOP_EN:1;
      uint64_t PGM_SEC_COF_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_SHORT_ROW:4;
      uint64_t DO_REDU_COL:1;
      uint64_t reservedSpace1:2;
      uint64_t ONE_TIME_GOOD:1;
      uint64_t reservedSpace2:1;
      uint64_t RV_INT_EN:1;
      uint64_t RV_RES:1;
      uint64_t RV_SEC_EN:1;
      uint64_t RANDOM:1;
      uint64_t CMPV_ALLOWED:1;
      uint64_t ALL_BANKS:1;
      uint64_t FSM_INT_EN:1;
      uint64_t DO_PRECOND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ST_MACHINE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLK_OTP:8;
      uint64_t BLK_TIOTP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_FLES;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ENA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_WR_ENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ACC_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_PP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_EP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ACC_EP;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CUR_ADDR:28;
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_OUT:4;
      uint64_t SECTOR:4;
      uint64_t FSM_SECTOR_EXTENSION:8;
      uint64_t SECT_ERASED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG_CRC:12;
      uint64_t MOD_VERSION:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMC_REV_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_ERR_BANK:4;
      uint64_t reservedSpace0:4;
      uint64_t FSM_ERR_ADDR:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_ERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_PGM_MAXPUL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_PGM_MAXPUL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSMEXECUTE:5;
      uint64_t reservedSpace0:11;
      uint64_t SUSPEND_NOW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_EXECUTE;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_SECTOR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_SECTOR2;

  uint8_t res16[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLE1;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSLP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSM_BSL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_BSLP1;

  uint8_t res18[264];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAIN_NUM_BANK:4;
      uint64_t MAIN_BANK_WIDTH:12;
      uint64_t EE_NUM_BANK:4;
      uint64_t EE_BANK_WIDTH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BANK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_TYPE1:4;
      uint64_t UERR:2;
      uint64_t AUTO_SUSP:2;
      uint64_t ECCA:1;
      uint64_t SIL3:1;
      uint64_t IFLUSH:1;
      uint64_t ROM:1;
      uint64_t EE_IN_MAIN:4;
      uint64_t CPU2:4;
      uint64_t MEM_MAP:1;
      uint64_t reservedSpace0:3;
      uint64_t FAMILY_TYPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_WRAPPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_TYPE:4;
      uint64_t B1_TYPE:4;
      uint64_t B2_TYPE:4;
      uint64_t B3_TYPE:4;
      uint64_t B4_TYPE:4;
      uint64_t B5_TYPE:4;
      uint64_t B6_TYPE:4;
      uint64_t B7_TYPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_BNK_TYPE;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_START_ADDR:24;
      uint64_t B0_MUX_FACTOR:4;
      uint64_t B0_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B1_START_ADDR:24;
      uint64_t B1_MUX_FACTOR:4;
      uint64_t B1_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B1_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B2_START_ADDR:24;
      uint64_t B2_MUX_FACTOR:4;
      uint64_t B2_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B2_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B3_START_ADDR:24;
      uint64_t B3_MUX_FACTOR:4;
      uint64_t B3_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B3_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_START_ADDR:24;
      uint64_t B4_MUX_FACTOR:4;
      uint64_t B4_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B4_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B5_START_ADDR:24;
      uint64_t B5_MUX_FACTOR:4;
      uint64_t B5_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B5_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B6_START_ADDR:24;
      uint64_t B6_MUX_FACTOR:4;
      uint64_t B6_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B6_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B7_START_ADDR:24;
      uint64_t B7_MUX_FACTOR:4;
      uint64_t B7_MAX_SECTOR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B7_START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_SECT_SIZE:4;
      uint64_t reservedSpace0:12;
      uint64_t B0_NUM_SECTORS:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG_B0_SSIZE0;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x4003001c)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO1:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO2:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO4:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO5:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO6:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO8:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO9:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO10:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT11_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO12:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO13:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO14:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT15_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO16:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO17:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO18:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT19_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO20:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO21:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO22:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO23:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT23_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO24:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO25:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO26:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT27_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO28:1;
      uint64_t reservedSpace0:7;
      uint64_t DIO29:1;
      uint64_t reservedSpace1:7;
      uint64_t DIO30:1;
      uint64_t reservedSpace2:7;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_28;

  uint8_t res0[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUT31_0;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTSET31_0;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTCLR31_0;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOUTTGL31_0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIN31_0;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOE31_0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIO0:1;
      uint64_t DIO1:1;
      uint64_t DIO2:1;
      uint64_t DIO3:1;
      uint64_t DIO4:1;
      uint64_t DIO5:1;
      uint64_t DIO6:1;
      uint64_t DIO7:1;
      uint64_t DIO8:1;
      uint64_t DIO9:1;
      uint64_t DIO10:1;
      uint64_t DIO11:1;
      uint64_t DIO12:1;
      uint64_t DIO13:1;
      uint64_t DIO14:1;
      uint64_t DIO15:1;
      uint64_t DIO16:1;
      uint64_t DIO17:1;
      uint64_t DIO18:1;
      uint64_t DIO19:1;
      uint64_t DIO20:1;
      uint64_t DIO21:1;
      uint64_t DIO22:1;
      uint64_t DIO23:1;
      uint64_t DIO24:1;
      uint64_t DIO25:1;
      uint64_t DIO26:1;
      uint64_t DIO27:1;
      uint64_t DIO28:1;
      uint64_t DIO29:1;
      uint64_t DIO30:1;
      uint64_t DIO31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVFLAGS31_0;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40022000)

struct GPT0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT0 (*(volatile struct GPT0_tag *) 0x40010000)

struct GPT1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT1 (*(volatile struct GPT1_tag *) 0x40011000)

struct GPT2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT2 (*(volatile struct GPT2_tag *) 0x40012000)

struct GPT3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMR:2;
      uint64_t TACM:1;
      uint64_t TAAMS:1;
      uint64_t TACDIR:1;
      uint64_t TAMIE:1;
      uint64_t TAWOT:1;
      uint64_t TASNAPS:1;
      uint64_t TAILD:1;
      uint64_t TAPWMIE:1;
      uint64_t TAMRSU:1;
      uint64_t TAPLO:1;
      uint64_t TACINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMR:2;
      uint64_t TBCM:1;
      uint64_t TBAMS:1;
      uint64_t TBCDIR:1;
      uint64_t TBMIE:1;
      uint64_t TBWOT:1;
      uint64_t TBSNAPS:1;
      uint64_t TBILD:1;
      uint64_t TBPWMIE:1;
      uint64_t TBMRSU:1;
      uint64_t TBPLO:1;
      uint64_t TBCINTD:1;
      uint64_t TCACT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAEN:1;
      uint64_t TASTALL:1;
      uint64_t TAEVENT:2;
      uint64_t RTCEN:1;
      uint64_t TAOTE:1;
      uint64_t TAPWML:1;
      uint64_t reservedSpace0:1;
      uint64_t TBEN:1;
      uint64_t TBSTALL:1;
      uint64_t TBEVENT:2;
      uint64_t reservedSpace1:1;
      uint64_t TBOTE:1;
      uint64_t TBPWML:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC0:2;
      uint64_t SYNC1:2;
      uint64_t SYNC2:2;
      uint64_t SYNC3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYNC;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOIM:1;
      uint64_t CAMIM:1;
      uint64_t CAEIM:1;
      uint64_t RTCIM:1;
      uint64_t TAMIM:1;
      uint64_t DMAAIM:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOIM:1;
      uint64_t CBMIM:1;
      uint64_t CBEIM:1;
      uint64_t TBMIM:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABIM:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATORIS:1;
      uint64_t CAMRIS:1;
      uint64_t CAERIS:1;
      uint64_t RTCRIS:1;
      uint64_t TAMRIS:1;
      uint64_t DMAARIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTORIS:1;
      uint64_t CBMRIS:1;
      uint64_t CBERIS:1;
      uint64_t TBMRIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABRIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WURIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOMIS:1;
      uint64_t CAMMIS:1;
      uint64_t CAEMIS:1;
      uint64_t RTCMIS:1;
      uint64_t TAMMIS:1;
      uint64_t DMAAMIS:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOMIS:1;
      uint64_t CBMMIS:1;
      uint64_t CBEMIS:1;
      uint64_t TBMMIS:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABMIS:1;
      uint64_t reservedSpace2:2;
      uint64_t WUMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOCINT:1;
      uint64_t CAMCINT:1;
      uint64_t CAECINT:1;
      uint64_t RTCCINT:1;
      uint64_t TAMCINT:1;
      uint64_t DMAAINT:1;
      uint64_t reservedSpace0:2;
      uint64_t TBTOCINT:1;
      uint64_t CBMCINT:1;
      uint64_t CBECINT:1;
      uint64_t TBMCINT:1;
      uint64_t reservedSpace1:1;
      uint64_t DMABINT:1;
      uint64_t reservedSpace2:2;
      uint64_t WUECINT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBILR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBILR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMATCHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBMATCHR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBMATCHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBPSMR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTCPD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATODMAEN:1;
      uint64_t CAMDMAEN:1;
      uint64_t CAEDMAEN:1;
      uint64_t RTCDMAEN:1;
      uint64_t TAMDMAEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTODMAEN:1;
      uint64_t CBMDMAEN:1;
      uint64_t CBEDMAEN:1;
      uint64_t TBMDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TATOADCEN:1;
      uint64_t CAMADCEN:1;
      uint64_t CAEADCEN:1;
      uint64_t RTCADCEN:1;
      uint64_t TAMADCEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TBTOADCEN:1;
      uint64_t CBMADCEN:1;
      uint64_t CBEADCEN:1;
      uint64_t TBMADCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCEV;

  uint8_t res1[3900];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VERSION:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VERSION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCP_AND_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ANDCCP;

};

#define GPT3 (*(volatile struct GPT3_tag *) 0x40013000)

struct I2S0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCLK_SRC:2;
      uint64_t WCLK_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWCLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t END_FRAME_IDX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDMACFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD0:2;
      uint64_t reservedSpace0:2;
      uint64_t AD1:2;
      uint64_t reservedSpace1:2;
      uint64_t AD2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFDIRCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WORD_LEN:5;
      uint64_t DUAL_PHASE:1;
      uint64_t SMPL_EDGE:1;
      uint64_t MEM_LEN_24:1;
      uint64_t DATA_DELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFFMTCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFWMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSE_WIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFPWMVALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFINPTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTRNEXT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIFOUTPTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STMP_EN:1;
      uint64_t IN_RDY:1;
      uint64_t OUT_RDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IN_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPINTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUT_START_WCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPOUTTRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_INC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXPERMIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPXCNTCAPT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPT_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STMPWCNTCAPT1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTR_ERR:1;
      uint64_t WCLK_ERR:1;
      uint64_t BUS_ERR:1;
      uint64_t WCLK_TIMEOUT:1;
      uint64_t AIF_DMA_OUT:1;
      uint64_t AIF_DMA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQCLR;

};

#define I2S0 (*(volatile struct I2S0_tag *) 0x40021000)

struct IOC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_ID:6;
      uint64_t reservedSpace0:2;
      uint64_t IOSTR:2;
      uint64_t IOCURR:2;
      uint64_t SLEW_RED:1;
      uint64_t PULL_CTL:2;
      uint64_t reservedSpace1:1;
      uint64_t EDGE_DET:2;
      uint64_t EDGE_IRQ_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t IOMODE:3;
      uint64_t WU_CFG:2;
      uint64_t IE:1;
      uint64_t HYST_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFG31;

};

#define IOC (*(volatile struct IOC_tag *) 0x40081000)

struct PRCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INFRCLKDIVDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ULDO:1;
      uint64_t reservedSpace0:1;
      uint64_t MCU_VD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VDCTL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOAD:1;
      uint64_t LOAD_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKLOADCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCCLKG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VIMSCLKG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLK_EN:1;
      uint64_t TRNG_CLK_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t DMA_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECDMACLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2CCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSICLKGDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKGDS;

  uint8_t res2[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUCLKDIV;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATIO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t WCLK_PHASE:2;
      uint64_t SMPL_ON_POSEDGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SMCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SBCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SWCLKDIV;

  uint8_t res4[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MCU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_STAT:1;
      uint64_t LOCKUP_STAT:1;
      uint64_t WR_TO_PINRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WARMRESET;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL0PERIPH;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC_ON:1;
      uint64_t SERIAL_ON:1;
      uint64_t PERIPH_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0SERIAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT0PERIPH;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDCTL1VIMS;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t CPU_ON:1;
      uint64_t RFC_ON:1;
      uint64_t VIMS_MODE:1;
      uint64_t BUS_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1BUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1RFC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1CPU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDSTAT1VIMS;

  uint8_t res10[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCMODESEL;

  uint8_t res11[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VIMS_bitfield:2;
      uint64_t RFC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMRETEN;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMHWOPT;

};

#define PRCM (*(volatile struct PRCM_tag *) 0x40082000)

struct RFC_DBELL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMDSTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t FSCA:1;
      uint64_t MDMDONE:1;
      uint64_t MDMIN:1;
      uint64_t MDMOUT:1;
      uint64_t MDMSOFT:1;
      uint64_t TRCTK:1;
      uint64_t reservedSpace1:1;
      uint64_t RFEDONE:1;
      uint64_t RFESOFT0:1;
      uint64_t RFESOFT1:1;
      uint64_t RFESOFT2:1;
      uint64_t RATCH0:1;
      uint64_t RATCH1:1;
      uint64_t RATCH2:1;
      uint64_t RATCH3:1;
      uint64_t RATCH4:1;
      uint64_t RATCH5:1;
      uint64_t RATCH6:1;
      uint64_t RATCH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFHWIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEIEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMMAND_DONE:1;
      uint64_t LAST_COMMAND_DONE:1;
      uint64_t FG_COMMAND_DONE:1;
      uint64_t LAST_FG_COMMAND_DONE:1;
      uint64_t TX_DONE:1;
      uint64_t TX_ACK:1;
      uint64_t TX_CTRL:1;
      uint64_t TX_CTRL_ACK:1;
      uint64_t TX_CTRL_ACK_ACK:1;
      uint64_t TX_RETRANS:1;
      uint64_t TX_ENTRY_DONE:1;
      uint64_t TX_BUFFER_CHANGED:1;
      uint64_t BG_COMMAND_SUSPENDED:1;
      uint64_t IRQ13:1;
      uint64_t IRQ14:1;
      uint64_t IRQ15:1;
      uint64_t RX_OK:1;
      uint64_t RX_NOK:1;
      uint64_t RX_IGNORED:1;
      uint64_t RX_EMPTY:1;
      uint64_t RX_CTRL:1;
      uint64_t RX_CTRL_ACK:1;
      uint64_t RX_BUF_FULL:1;
      uint64_t RX_ENTRY_DONE:1;
      uint64_t RX_DATA_WRITTEN:1;
      uint64_t RX_N_DATA_WRITTEN:1;
      uint64_t RX_ABORTED:1;
      uint64_t IRQ27:1;
      uint64_t SYNTH_NO_LOCK:1;
      uint64_t MODULES_UNLOCKED:1;
      uint64_t BOOT_DONE:1;
      uint64_t INTERNAL_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFCPEISL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RFACKIFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPOCTL0:4;
      uint64_t GPOCTL1:4;
      uint64_t GPOCTL2:4;
      uint64_t GPOCTL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSGPOCTL;

};

#define RFC_DBELL (*(volatile struct RFC_DBELL_tag *) 0x40041000)

struct RFC_PWR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFC:1;
      uint64_t CPE:1;
      uint64_t CPERAM:1;
      uint64_t MDM:1;
      uint64_t MDMRAM:1;
      uint64_t RFE:1;
      uint64_t RFERAM:1;
      uint64_t RAT:1;
      uint64_t PHA:1;
      uint64_t FSCA:1;
      uint64_t RFCTRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMCLKEN;

};

#define RFC_PWR (*(volatile struct RFC_PWR_tag *) 0x40040000)

struct RFC_RAT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCNT;

  uint8_t res0[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH0VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH1VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH2VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH3VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH4VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH5VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH6VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RATCH7VAL;

};

#define RFC_RAT (*(volatile struct RFC_RAT_tag *) 0x40043004)

struct SMPH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPH31;

  uint8_t res0[1920];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEEK31;

};

#define SMPH (*(volatile struct SMPH_tag *) 0x40084000)

struct SSI0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI0 (*(volatile struct SSI0_tag *) 0x40000000)

struct SSI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSS:4;
      uint64_t FRF:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCR:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPSDVSR:8;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RORIC:1;
      uint64_t RTIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAE:1;
      uint64_t TXDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACR;

};

#define SSI1 (*(volatile struct SSI1_tag *) 0x40008000)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
      uint64_t reservedSpace0:29;
      uint64_t NEED_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQFLAGCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEST_MODE:1;
      uint64_t NO_LFSR_FB:1;
      uint64_t reservedSpace1:7;
      uint64_t TRNG_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t STARTUP_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REFILL_CYCLES:8;
      uint64_t SMPL_DIV:4;
      uint64_t reservedSpace0:4;
      uint64_t MAX_REFILL_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM_THR:8;
      uint64_t reservedSpace0:8;
      uint64_t SHUTDOWN_THR:5;
      uint64_t reservedSpace1:3;
      uint64_t SHUTDOWN_CNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FROEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRODETUNE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_MASK:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_FLAGS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALARMSTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_80_64:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSR2;

  uint8_t res0[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t NR_OF_FROS:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP_NUM:8;
      uint64_t EIP_NUM_COMPL:8;
      uint64_t HW_PATCH_LVL:4;
      uint64_t HW_MINOR_VER:4;
      uint64_t HW_MAJOR_VER:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER0;

  uint8_t res1[8024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDY:1;
      uint64_t SHUTDOWN_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTATMASK;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWVER1;

  uint8_t res3[8];

  uint32_t IRQSET;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWRESET;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQSTAT;

};

#define TRNG (*(volatile struct TRNG_tag *) 0x40028000)

struct UDMA0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:3;
      uint64_t STATE:4;
      uint64_t reservedSpace1:8;
      uint64_t TOTALCHANNELS:5;
      uint64_t reservedSpace2:7;
      uint64_t TEST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTERENABLE:1;
      uint64_t reservedSpace0:4;
      uint64_t PRTOCTRL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BASEPTR:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEPTR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLSTATUS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAITONREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARBURST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARREQMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHANNELEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIALT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SETCHNLPRIORITY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLEARCHNLPRIORITY;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERROR;

  uint8_t res1[1204];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQDONE;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHNLS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DONEMASK;

};

#define UDMA0 (*(volatile struct UDMA0_tag *) 0x40020000)

struct VIMS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t INV:1;
      uint64_t MODE_CHANGING:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE:2;
      uint64_t PREF_EN:1;
      uint64_t ARB_CFG:1;
      uint64_t SYSBUS_LB_DIS:1;
      uint64_t IDCODE_LB_DIS:1;
      uint64_t reservedSpace0:23;
      uint64_t DYN_CG_EN:1;
      uint64_t STATS_EN:1;
      uint64_t STATS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define VIMS (*(volatile struct VIMS_tag *) 0x40034000)

struct WDT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOAD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTVALUE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTEN:1;
      uint64_t RESEN:1;
      uint64_t INTTYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTICR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTRIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTMIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIS;

  uint8_t res0[1024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUSE_INTR:1;
      uint64_t CAUSE_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_CAUS;

  uint8_t res1[2016];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK;

};

#define WDT (*(volatile struct WDT_tag *) 0x40080000)

