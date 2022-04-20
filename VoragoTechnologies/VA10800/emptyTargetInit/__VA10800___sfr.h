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

struct SYSCONFIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t EXTRST:1;
      uint64_t SYSRSTREQ:1;
      uint64_t LOOKUP:1;
      uint64_t WATCHDOG:1;
      uint64_t MEMERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t EXTRST:1;
      uint64_t SYSRSTREQ:1;
      uint64_t LOOKUP:1;
      uint64_t WATCHDOG:1;
      uint64_t MEMERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_CNTL_ROM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POR:1;
      uint64_t EXTRST:1;
      uint64_t SYSRSTREQ:1;
      uint64_t LOOKUP:1;
      uint64_t WATCHDOG:1;
      uint64_t MEMERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RST_CNTL_RAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_PROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_SCRUB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:24;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_SCRUB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:14;
      uint64_t reservedSpace1:15;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_TRAP_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_TRAP_SYND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:14;
      uint64_t reservedSpace1:15;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_TRAP_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_TRAP_SYND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMSBE:1;
      uint64_t RAMMBE:1;
      uint64_t ROMSBE:1;
      uint64_t ROMMBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMSBE:1;
      uint64_t RAMMBE:1;
      uint64_t ROMSBE:1;
      uint64_t ROMMBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMSBE:1;
      uint64_t RAMMBE:1;
      uint64_t ROMSBE:1;
      uint64_t ROMMBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAMSBE:1;
      uint64_t RAMMBE:1;
      uint64_t ROMSBE:1;
      uint64_t ROMMBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RAM_SBE;
  uint32_t RAM_MBE;
  uint32_t ROM_SBE;
  uint32_t ROM_MBE;
  uint32_t IOCONFIG_CLKDIV0;
  uint32_t IOCONFIG_CLKDIV1;
  uint32_t IOCONFIG_CLKDIV2;
  uint32_t IOCONFIG_CLKDIV3;
  uint32_t IOCONFIG_CLKDIV4;
  uint32_t IOCONFIG_CLKDIV5;
  uint32_t IOCONFIG_CLKDIV6;
  uint32_t IOCONFIG_CLKDIV7;
  uint32_t ROM_RETRIES;
  uint32_t REFRESH_CONFIG;
  uint32_t TIM_RESET;
  uint32_t TIM_CLK_ENABLE;
  uint32_t PERIPHERAL_RESET;
  uint32_t PERIPHERAL_CLK_ENABLE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKUP_RESET;

  uint8_t res0[3948];

  uint32_t EF_CONFIG;
  uint32_t EF_ID;
  uint32_t PROCID;
  uint32_t PERID;
};

#define SYSCONFIG (*(volatile struct SYSCONFIG_tag *) 0x40000000)

struct IRQSEL_tag
{
  uint32_t PORTA_0;
  uint32_t PORTA_1;
  uint32_t PORTA_2;
  uint32_t PORTA_3;
  uint32_t PORTA_4;
  uint32_t PORTA_5;
  uint32_t PORTA_6;
  uint32_t PORTA_7;
  uint32_t PORTA_8;
  uint32_t PORTA_9;
  uint32_t PORTA_10;
  uint32_t PORTA_11;
  uint32_t PORTA_12;
  uint32_t PORTA_13;
  uint32_t PORTA_14;
  uint32_t PORTA_15;
  uint32_t PORTA_16;
  uint32_t PORTA_17;
  uint32_t PORTA_18;
  uint32_t PORTA_19;
  uint32_t PORTA_20;
  uint32_t PORTA_21;
  uint32_t PORTA_22;
  uint32_t PORTA_23;
  uint32_t PORTA_24;
  uint32_t PORTA_25;
  uint32_t PORTA_26;
  uint32_t PORTA_27;
  uint32_t PORTA_28;
  uint32_t PORTA_29;
  uint32_t PORTA_30;
  uint32_t PORTA_31;
  uint32_t PORTB_0;
  uint32_t PORTB_1;
  uint32_t PORTB_2;
  uint32_t PORTB_3;
  uint32_t PORTB_4;
  uint32_t PORTB_5;
  uint32_t PORTB_6;
  uint32_t PORTB_7;
  uint32_t PORTB_8;
  uint32_t PORTB_9;
  uint32_t PORTB_10;
  uint32_t PORTB_11;
  uint32_t PORTB_12;
  uint32_t PORTB_13;
  uint32_t PORTB_14;
  uint32_t PORTB_15;
  uint32_t PORTB_16;
  uint32_t PORTB_17;
  uint32_t PORTB_18;
  uint32_t PORTB_19;
  uint32_t PORTB_20;
  uint32_t PORTB_21;
  uint32_t PORTB_22;
  uint32_t PORTB_23;
  uint32_t PORTB_24;
  uint32_t PORTB_25;
  uint32_t PORTB_26;
  uint32_t PORTB_27;
  uint32_t PORTB_28;
  uint32_t PORTB_29;
  uint32_t PORTB_30;
  uint32_t PORTB_31;
  uint32_t TIM_0;
  uint32_t TIM_1;
  uint32_t TIM_2;
  uint32_t TIM_3;
  uint32_t TIM_4;
  uint32_t TIM_5;
  uint32_t TIM_6;
  uint32_t TIM_7;
  uint32_t TIM_8;
  uint32_t TIM_9;
  uint32_t TIM_10;
  uint32_t TIM_11;
  uint32_t TIM_12;
  uint32_t TIM_13;
  uint32_t TIM_14;
  uint32_t TIM_15;
  uint32_t TIM_16;
  uint32_t TIM_17;
  uint32_t TIM_18;
  uint32_t TIM_19;
  uint32_t TIM_20;
  uint32_t TIM_21;
  uint32_t TIM_22;
  uint32_t TIM_23;
  uint32_t TIM_24;
  uint32_t TIM_25;
  uint32_t TIM_26;
  uint32_t TIM_27;
  uint32_t TIM_28;
  uint32_t TIM_29;
  uint32_t TIM_30;
  uint32_t TIM_31;
  uint32_t UART_0;
  uint32_t UART_1;
  uint32_t UART_2;
  uint32_t UART_3;
  uint32_t SPI_0;
  uint32_t SPI_1;
  uint32_t SPI_2;
  uint32_t SPI_3;
  uint32_t I2C_MS_0;
  uint32_t I2C_MS_1;
  uint32_t I2C_MS_2;
  uint32_t I2C_MS_3;
  uint32_t I2C_SL_0;
  uint32_t I2C_SL_1;
  uint32_t I2C_SL_2;
  uint32_t I2C_SL_3;
  uint32_t INT_RAM_SBE;
  uint32_t INT_RAM_MBE;
  uint32_t INT_ROM_SBE;
  uint32_t INT_ROM_MBE;
  uint32_t TXEV;
  uint8_t res0[1580];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQS_31;

  uint8_t res1[104];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDBGRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MERESET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WATCHDOG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXEV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI;

  uint8_t res2[1792];

  uint32_t PERID;
};

#define IRQSEL (*(volatile struct IRQSEL_tag *) 0x40001000)

struct IOCONFIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTA_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLTTYPE:3;
      uint64_t FLTCLK:3;
      uint64_t INVINP:1;
      uint64_t IEWO:1;
      uint64_t OPENDRN:1;
      uint64_t INVOUT:1;
      uint64_t PLEVEL:1;
      uint64_t PEN:1;
      uint64_t PWOA:1;
      uint64_t FUNSEL:3;
      uint64_t IODIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORTB_31;

  uint8_t res0[3836];

  uint32_t PERID;
};

#define IOCONFIG (*(volatile struct IOCONFIG_tag *) 0x40002000)

struct UTILITY_tag
{
  uint32_t SYND_DATA0;
  uint32_t SYND_DATA1;
  uint32_t SYND_SYND;
  uint32_t SYND_ENC_32;
  uint32_t SYND_CHECK_32_DATA;
  uint32_t SYND_CHECK_32_SYND;
  uint32_t SYND_ENC_64;
  uint32_t SYND_CHECK_64_DATA0;
  uint32_t SYND_CHECK_64_DATA1;
  uint32_t SYND_CHECK_64_SYND;
  uint32_t SYND_ENC_32_52;
  uint32_t SYND_CHECK_32_52_DATA;
  uint32_t SYND_CHECK_32_52_SYND;
  uint8_t res0[4040];

  uint32_t PERID;
};

#define UTILITY (*(volatile struct UTILITY_tag *) 0x40003000)

struct PORT_tag
{
  uint32_t DATAIN;
  uint32_t DATAINRAW;
  uint32_t DATAOUT;
  uint32_t DATAOUTRAW;
  uint32_t SETOUT;
  uint32_t CLROUT;
  uint32_t TOGOUT;
  uint32_t DATAMASK;
  uint32_t DIR;
  uint32_t PULSEBASE;
  uint32_t DELAY1;
  uint32_t DELAY2;
  uint32_t IRQ_SEN;
  uint32_t IRQ_EDGE;
  uint32_t IRQ_EVT;
  uint32_t IRQ_ENB;
  uint32_t IRQ_RAW;
  uint32_t IRQ_END;
  uint32_t EDGE_STATUS;
  uint8_t res0[4012];

  uint32_t PERID;
};

#define PORTA (*(volatile struct PORT_tag *) 0x50000000)
#define PORTB (*(volatile struct PORT_tag *) 0x50001000)

struct TIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t ACTIVE:1;
      uint64_t AUTO_DISABLE:1;
      uint64_t AUTO_DEACTIVATE:1;
      uint64_t IRQ_ENB:1;
      uint64_t STATUS_SEL:3;
      uint64_t STATUS_INV:1;
      uint64_t REQ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;
  uint32_t RST_VALUE;
  uint32_t CNT_VALUE;union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CASEN0:1;
      uint64_t CASINV0:1;
	  uint64_t CASEN1:1;
      uint64_t CASINV1:1;
      uint64_t DCASOP:1;
      uint64_t reserved:1;
      uint64_t CASTRG0:1;
      uint64_t CASTRG1:1;
      uint64_t CASEN2:1;
      uint64_t CASINV2:1;
	  uint64_t CASTRG2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSD_CTRL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CASSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CASCADE0;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CASSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4)))CASCADE1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CASSEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CASCADE2;
  uint32_t PWMA_VALUE;
  uint32_t PWMB_VALUE;
  uint8_t res0[4008];
  uint32_t PERID;
  uint8_t res1[44];
};

#define TIM0 (*(volatile struct TIM_tag *) 0x40020000)

struct UARTA_tag
{
  uint32_t DATA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENABLE:1;
      uint64_t TXENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAREN:1;
      uint64_t PAREVEN:1;
      uint64_t PARSTK:1;
      uint64_t STOPBITS:1;
      uint64_t WORDSIZE:2;
      uint64_t LOOPBACK:1;
      uint64_t LOOPBACKBLK:1;
      uint64_t AUTOCTS:1;
      uint64_t DEFRTS:1;
      uint64_t AUTORTS:1;
      uint64_t BAUD8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:6;
      uint64_t INT:18;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSCALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAVL:1;
      uint64_t RDNFULL:1;
      uint64_t RXBUSY:1;
      uint64_t RXTO:1;
      uint64_t RXOVR:1;
      uint64_t RXFRM:1;
      uint64_t RXPAR:1;
      uint64_t RXBRK:1;
      uint64_t RXBUSYBRK:1;
      uint64_t RXADDR9:1;
      uint64_t reservedSpace0:5;
      uint64_t RXRTSN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRRDY:1;
      uint64_t WRBUSY:1;
      uint64_t TXBUSY:1;
      uint64_t WRLOST:1;
      uint64_t reservedSpace0:11;
      uint64_t TXCTSN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTS:1;
      uint64_t TXSTS:1;
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t TXBREAK;
  uint32_t ADDR9;
  uint32_t ADDR9MASK;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  uint32_t RXFIFORTSTRG;
  uint32_t STATE;
  uint8_t res0[4020];

  uint32_t PERID;
};

#define UARTA (*(volatile struct UARTA_tag *) 0x40040000)

struct UARTB_tag
{
  uint32_t DATA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXENABLE:1;
      uint64_t TXENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAREN:1;
      uint64_t PAREVEN:1;
      uint64_t PARSTK:1;
      uint64_t STOPBITS:1;
      uint64_t WORDSIZE:2;
      uint64_t LOOPBACK:1;
      uint64_t LOOPBACKBLK:1;
      uint64_t AUTOCTS:1;
      uint64_t DEFRTS:1;
      uint64_t AUTORTS:1;
      uint64_t BAUD8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAC:6;
      uint64_t INT:18;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSCALE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDAVL:1;
      uint64_t RDNFULL:1;
      uint64_t RXBUSY:1;
      uint64_t RXTO:1;
      uint64_t RXOVR:1;
      uint64_t RXFRM:1;
      uint64_t RXPAR:1;
      uint64_t RXBRK:1;
      uint64_t RXBUSYBRK:1;
      uint64_t RXADDR9:1;
      uint64_t reservedSpace0:5;
      uint64_t RXRTSN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRRDY:1;
      uint64_t WRBUSY:1;
      uint64_t TXBUSY:1;
      uint64_t WRLOST:1;
      uint64_t reservedSpace0:11;
      uint64_t TXCTSN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSTS:1;
      uint64_t TXSTS:1;
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t TXBREAK;
  uint32_t ADDR9;
  uint32_t ADDR9MASK;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ_RX:1;
      uint64_t IRQ_RX_STATUS:1;
      uint64_t IRQ_RX_TO:1;
      uint64_t reservedSpace0:1;
      uint64_t IRQ_TX:1;
      uint64_t IRQ_TX_STATUS:1;
      uint64_t IRQ_TX_EMPTY:1;
      uint64_t IRQ_TX_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  uint32_t RXFIFORTSTRG;
  uint32_t STATE;
  uint8_t res0[4020];

  uint32_t PERID;
};

#define UARTB (*(volatile struct UARTB_tag *) 0x40041000)

struct SPIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:4;
      uint64_t reservedSpace0:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCRDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t ENABLE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
      uint64_t SS:3;
      uint64_t BLOCKMODE:1;
      uint64_t BMSTART:1;
      uint64_t BMSTALL:1;
      uint64_t MDLYCAP:1;
      uint64_t MTXPAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  uint32_t DATA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BUSY:1;
      uint64_t RXDATAFIRST:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXTRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint32_t CLKPRESCALE;
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
  } __attribute__((aligned(4))) IRQ_ENB;

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
  } __attribute__((aligned(4))) IRQ_RAW;

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
  } __attribute__((aligned(4))) IRQ_END;

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
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t STATE;
  uint8_t res0[4040];

  uint32_t PERID;
};

#define SPIA (*(volatile struct SPIA_tag *) 0x40050000)

struct SPIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:4;
      uint64_t reservedSpace0:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCRDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t ENABLE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
      uint64_t SS:3;
      uint64_t BLOCKMODE:1;
      uint64_t BMSTART:1;
      uint64_t BMSTALL:1;
      uint64_t MDLYCAP:1;
      uint64_t MTXPAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  uint32_t DATA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BUSY:1;
      uint64_t RXDATAFIRST:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXTRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint32_t CLKPRESCALE;
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
  } __attribute__((aligned(4))) IRQ_ENB;

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
  } __attribute__((aligned(4))) IRQ_RAW;

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
  } __attribute__((aligned(4))) IRQ_END;

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
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t STATE;
  uint8_t res0[4040];

  uint32_t PERID;
};

#define SPIB (*(volatile struct SPIB_tag *) 0x40051000)

struct SPIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIZE:4;
      uint64_t reservedSpace0:2;
      uint64_t SPO:1;
      uint64_t SPH:1;
      uint64_t SCRDV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBM:1;
      uint64_t ENABLE:1;
      uint64_t MS:1;
      uint64_t SOD:1;
      uint64_t SS:3;
      uint64_t BLOCKMODE:1;
      uint64_t BMSTART:1;
      uint64_t BMSTALL:1;
      uint64_t MDLYCAP:1;
      uint64_t MTXPAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  uint32_t DATA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TFE:1;
      uint64_t TNF:1;
      uint64_t RNE:1;
      uint64_t RFF:1;
      uint64_t BUSY:1;
      uint64_t RXDATAFIRST:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXTRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint32_t CLKPRESCALE;
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
  } __attribute__((aligned(4))) IRQ_ENB;

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
  } __attribute__((aligned(4))) IRQ_RAW;

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
  } __attribute__((aligned(4))) IRQ_END;

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
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t STATE;
  uint8_t res0[4040];

  uint32_t PERID;
};

#define SPIC (*(volatile struct SPIC_tag *) 0x40052000)

struct I2CA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLED:1;
      uint64_t ACTIVATED:1;
      uint64_t ACTIVE:1;
      uint64_t TXFEMD:1;
      uint64_t RXFFMD:1;
      uint64_t ALGFILTER:1;
      uint64_t DLGFILTER:1;
      uint64_t reservedSpace0:1;
      uint64_t LOOPBACK:1;
      uint64_t TMCONFIGENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:31;
      uint64_t FASTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSCALE;

  uint32_t WORDS;
  uint32_t ADDRESS;
  uint32_t DATA;
  uint32_t CMD;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t reservedSpace0:1;
      uint64_t RXNEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNFULL:1;
      uint64_t reservedSpace2:1;
      uint64_t TXTRIGGER:1;
      uint64_t reservedSpace3:14;
      uint64_t RAW_SDA:1;
      uint64_t RAW_SCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint32_t STATE;
  uint32_t TXCOUNT;
  uint32_t RXCOUNT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t TMCONFIG;
  uint32_t CLKTOLIMIT;
  uint8_t res0[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLED:1;
      uint64_t ACTIVATED:1;
      uint64_t ACTIVE:1;
      uint64_t TXFEMD:1;
      uint64_t RXFFMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_CTRL;

  uint32_t S0_MAXWORDS;
  uint32_t S0_ADDRESS;
  uint32_t S0_ADDRESSMASK;
  uint32_t S0_DATA;
  uint32_t S0_LASTADDRESS;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t RXNEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace0:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNFULL:1;
      uint64_t reservedSpace1:1;
      uint64_t TXTRIGGER:1;
      uint64_t reservedSpace2:13;
      uint64_t RAW_BUSY:1;
      uint64_t RAW_SDA:1;
      uint64_t RAW_SCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_STATUS;

  uint32_t S0_STATE;
  uint32_t S0_TXCOUNT;
  uint32_t S0_RXCOUNT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_CLR;

  uint32_t S0_RXFIFOIRQTRG;
  uint32_t S0_TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_FIFO_CLR;

  uint32_t S0_ADDRESSB;
  uint32_t S0_ADDRESSMASKB;
  uint8_t res1[3760];

  uint32_t PERID;
};

#define I2CA (*(volatile struct I2CA_tag *) 0x40060000)

struct I2CB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLED:1;
      uint64_t ACTIVATED:1;
      uint64_t ACTIVE:1;
      uint64_t TXFEMD:1;
      uint64_t RXFFMD:1;
      uint64_t ALGFILTER:1;
      uint64_t DLGFILTER:1;
      uint64_t reservedSpace0:1;
      uint64_t LOOPBACK:1;
      uint64_t TMCONFIGENB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALUE:31;
      uint64_t FASTMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSCALE;

  uint32_t WORDS;
  uint32_t ADDRESS;
  uint32_t DATA;
  uint32_t CMD;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t reservedSpace0:1;
      uint64_t RXNEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNFULL:1;
      uint64_t reservedSpace2:1;
      uint64_t TXTRIGGER:1;
      uint64_t reservedSpace3:14;
      uint64_t RAW_SDA:1;
      uint64_t RAW_SCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint32_t STATE;
  uint32_t TXCOUNT;
  uint32_t RXCOUNT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2CIDLE:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t STALLED:1;
      uint64_t ARBLOST:1;
      uint64_t NACKADDR:1;
      uint64_t NACKDATA:1;
      uint64_t CLKLOTO:1;
      uint64_t reservedSpace0:2;
      uint64_t TXOVERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_CLR;

  uint32_t RXFIFOIRQTRG;
  uint32_t TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO_CLR;

  uint32_t TMCONFIG;
  uint32_t CLKTOLIMIT;
  uint8_t res0[180];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLED:1;
      uint64_t ACTIVATED:1;
      uint64_t ACTIVE:1;
      uint64_t TXFEMD:1;
      uint64_t RXFFMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_CTRL;

  uint32_t S0_MAXWORDS;
  uint32_t S0_ADDRESS;
  uint32_t S0_ADDRESSMASK;
  uint32_t S0_DATA;
  uint32_t S0_LASTADDRESS;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t RXNEMPTY:1;
      uint64_t RXFULL:1;
      uint64_t reservedSpace0:1;
      uint64_t RXTRIGGER:1;
      uint64_t TXEMPTY:1;
      uint64_t TXNFULL:1;
      uint64_t reservedSpace1:1;
      uint64_t TXTRIGGER:1;
      uint64_t reservedSpace2:13;
      uint64_t RAW_BUSY:1;
      uint64_t RAW_SDA:1;
      uint64_t RAW_SCL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_STATUS;

  uint32_t S0_STATE;
  uint32_t S0_TXCOUNT;
  uint32_t S0_RXCOUNT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_ENB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_RAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_END;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPLETED:1;
      uint64_t IDLE:1;
      uint64_t WAITING:1;
      uint64_t TXSTALLED:1;
      uint64_t RXSTALLED:1;
      uint64_t ADDRESSMATCH:1;
      uint64_t NACKDATA:1;
      uint64_t RXDATAFIRST:1;
      uint64_t I2C_START:1;
      uint64_t I2C_STOP:1;
      uint64_t TXUNDERFLOW:1;
      uint64_t RXOVERFLOW:1;
      uint64_t TXREADY:1;
      uint64_t RXREADY:1;
      uint64_t TXEMPTY:1;
      uint64_t RXFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_IRQ_CLR;

  uint32_t S0_RXFIFOIRQTRG;
  uint32_t S0_TXFIFOIRQTRG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFIFO:1;
      uint64_t TXFIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S0_FIFO_CLR;

  uint32_t S0_ADDRESSB;
  uint32_t S0_ADDRESSMASKB;
  uint8_t res1[3760];

  uint32_t PERID;
};

#define I2CB (*(volatile struct I2CB_tag *) 0x40061000)

