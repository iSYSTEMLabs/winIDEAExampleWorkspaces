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

struct FTFA_FlashConfig_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_BACKKEY4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_FPROT3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_FPROT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_FPROT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_FPROT0;

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
  } __attribute__((aligned(1))) NV_FSEC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LPBOOT0:1;
      uint64_t RESERVED_0:1;
      uint64_t NMI_DIS:1;
      uint64_t RESET_PIN_CFG:1;
      uint64_t LPBOOT1:1;
      uint64_t FAST_INIT:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) NV_FOPT;

};

#define FTFA_FlashConfig (*(volatile struct FTFA_FlashConfig_tag *) 0x400)

struct FTFA_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t MGSTAT0:1;
      uint64_t RESERVED:3;
      uint64_t FPVIOL:1;
      uint64_t ACCERR:1;
      uint64_t RDCOLERR:1;
      uint64_t CCIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FSTAT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED_0:3;
      uint64_t RESERVED_1:1;
      uint64_t ERSSUSP:1;
      uint64_t ERSAREQ:1;
      uint64_t RDCOLLIE:1;
      uint64_t CCIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCNFG;

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
  } __attribute__((aligned(1))) FSEC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OPT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FOPT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOBB;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOBA;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CCOBn:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FCCOB8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PROT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPROT0;

};

#define FTFA (*(volatile struct FTFA_tag *) 0x40020000)

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
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t RESERVED_0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t RESERVED_0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t RESERVED_0:6;
      uint64_t TOF:1;
      uint64_t RESERVED_1:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t RESERVED_1:1;
      uint64_t GTBEEN:1;
      uint64_t RESERVED_2:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t RESERVED_3:5;
      uint64_t TRGSEL:4;
      uint64_t RESERVED_4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

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
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t RESERVED_0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C0V;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA:1;
      uint64_t RESERVED_0:1;
      uint64_t ELSA:1;
      uint64_t ELSB:1;
      uint64_t MSA:1;
      uint64_t MSB:1;
      uint64_t CHIE:1;
      uint64_t CHF:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VAL:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) C1V;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0F:1;
      uint64_t CH1F:1;
      uint64_t RESERVED_0:6;
      uint64_t TOF:1;
      uint64_t RESERVED_1:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:5;
      uint64_t DOZEEN:1;
      uint64_t DBGMODE:2;
      uint64_t RESERVED_1:1;
      uint64_t GTBEEN:1;
      uint64_t RESERVED_2:6;
      uint64_t CSOT:1;
      uint64_t CSOO:1;
      uint64_t CROT:1;
      uint64_t RESERVED_3:5;
      uint64_t TRGSEL:4;
      uint64_t RESERVED_4:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONF;

};

#define TPM1 (*(volatile struct TPM1_tag *) 0x40039000)

struct ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t RESERVED_0:1;
      uint64_t AIEN:1;
      uint64_t COCO:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCH:5;
      uint64_t RESERVED_0:1;
      uint64_t AIEN:1;
      uint64_t COCO:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC1B;

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
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADLSTS:2;
      uint64_t ADHSC:1;
      uint64_t ADACKEN:1;
      uint64_t MUXSEL:1;
      uint64_t RESERVED_0:3;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CV:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CV2;

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
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVGS:2;
      uint64_t AVGE:1;
      uint64_t ADCO:1;
      uint64_t RESERVED_0:2;
      uint64_t CALF:1;
      uint64_t CAL:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFS:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPD:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLPS:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLPS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP4:10;
      uint64_t RESERVED:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP3:9;
      uint64_t RESERVED:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP2:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP1:7;
      uint64_t RESERVED:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLP0:6;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLP0;

};

#define ADC0 (*(volatile struct ADC0_tag *) 0x4003b000)

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
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:2;
      uint64_t PBYP:1;
      uint64_t PRESCALE:4;
      uint64_t RESERVED:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPARE:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNR;

};

#define LPTMR0 (*(volatile struct LPTMR0_tag *) 0x40040000)

struct SIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:16;
      uint64_t RESERVED_1:8;
      uint64_t TPMSRC:2;
      uint64_t UART0SRC:2;
      uint64_t RESERVED_2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:18;
      uint64_t TPM1CH0SRC:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:3;
      uint64_t TPM0CLKSEL:1;
      uint64_t TPM1CLKSEL:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART0TXSRC:1;
      uint64_t RESERVED_0:1;
      uint64_t UART0RXSRC:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:3;
      uint64_t RESERVED_3:9;
      uint64_t UART0ODE:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT5;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC0TRGSEL:4;
      uint64_t ADC0PRETRGSEL:1;
      uint64_t RESERVED_0:2;
      uint64_t ADC0ALTTRGEN:1;
      uint64_t RESERVED_1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOPT7;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PINID:4;
      uint64_t RESERVED:3;
      uint64_t DIEID:5;
      uint64_t REVID:4;
      uint64_t SRAMSIZE:4;
      uint64_t SERIESID:4;
      uint64_t SUBFAMID:4;
      uint64_t FAMID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDID;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:4;
      uint64_t RESERVED_1:2;
      uint64_t I2C0_bitfield:1;
      uint64_t I2C1_bitfield:1;
      uint64_t RESERVED_2:2;
      uint64_t UART0_bitfield:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:4;
      uint64_t RESERVED_7:1;
      uint64_t CMP:1;
      uint64_t RESERVED_8:2;
      uint64_t SPI0_bitfield:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:5;
      uint64_t RESERVED_11:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCGC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPTMR:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:3;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:2;
      uint64_t PORTA_bitfield:1;
      uint64_t PORTB_bitfield:1;
      uint64_t RESERVED_5:3;
      uint64_t RESERVED_6:5;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCGC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTF:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:13;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:7;
      uint64_t RESERVED_4:1;
      uint64_t TPM0_bitfield:1;
      uint64_t TPM1_bitfield:1;
      uint64_t RESERVED_5:1;
      uint64_t ADC0_bitfield:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCGC6;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:16;
      uint64_t OUTDIV4:3;
      uint64_t RESERVED_1:9;
      uint64_t OUTDIV1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIV1;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASHDIS:1;
      uint64_t FLASHDOZE:1;
      uint64_t RESERVED_0:22;
      uint64_t PFSIZE:4;
      uint64_t RESERVED_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:16;
      uint64_t RESERVED_1:7;
      uint64_t RESERVED_2:1;
      uint64_t MAXADDR0:7;
      uint64_t RESERVED_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCFG2;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDMH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDML;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UIDL;

  uint8_t res7[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COPW:1;
      uint64_t COPCLKS:1; 
      uint64_t COPT:2; 
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COPC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRVCOP:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRVCOP;

};

#define SIM (*(volatile struct SIM_tag *) 0x40048004)

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
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

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
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:1;
      uint64_t PE:1;
      uint64_t SRE:1;
      uint64_t RESERVED_0:1;
      uint64_t PFE:1;
      uint64_t RESERVED_1:1;
      uint64_t DSE:1;
      uint64_t RESERVED_2:1;
      uint64_t MUX:3;
      uint64_t RESERVED_3:5;
      uint64_t IRQC:4;
      uint64_t RESERVED_4:4;
      uint64_t ISF:1;
      uint64_t RESERVED_5:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPWD:16;
      uint64_t GPWE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCHR;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISFR;

};

#define PORTB (*(volatile struct PORTB_tag *) 0x4004a000)

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
  } __attribute__((aligned(1))) C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRCS:1;
      uint64_t LP:1;
      uint64_t EREFS0:1;
      uint64_t HGO0:1;
      uint64_t RANGE0:2;
      uint64_t FCFTRIM:1;
      uint64_t LOCRE0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SCTRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C3;

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
  } __attribute__((aligned(1))) C4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED_0:5;
      uint64_t CME:1;
      uint64_t RESERVED_1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IRCST:1;
      uint64_t OSCINIT0:1;
      uint64_t CLKST:2;
      uint64_t IREFST:1;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S;

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
  } __attribute__((aligned(1))) SC;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATCVH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ATCVH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ATCVL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) ATCVL;

};

#define MCG (*(volatile struct MCG_tag *) 0x40064000)

struct OSC0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SC16P:1;
      uint64_t SC8P:1;
      uint64_t SC4P:1;
      uint64_t SC2P:1;
      uint64_t RESERVED_0:1;
      uint64_t EREFSTEN:1;
      uint64_t RESERVED_1:1;
      uint64_t ERCLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR;

};

#define OSC0 (*(volatile struct OSC0_tag *) 0x40065000)

struct I2C0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t AD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ICR:6;
      uint64_t MULT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t WUEN:1;
      uint64_t RSTA:1;
      uint64_t TXAK:1;
      uint64_t TX:1;
      uint64_t MST:1;
      uint64_t IICIE:1;
      uint64_t IICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C1;

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
  } __attribute__((aligned(1))) S;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D;

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
  } __attribute__((aligned(1))) C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLT:5;
      uint64_t STOPIE:1;
      uint64_t STOPF:1;
      uint64_t SHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t RAD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RA;

};

#define I2C0 (*(volatile struct I2C0_tag *) 0x40066000)

struct I2C1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t AD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) A1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t ICR:6;
      uint64_t MULT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) F;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t WUEN:1;
      uint64_t RSTA:1;
      uint64_t TXAK:1;
      uint64_t TX:1;
      uint64_t MST:1;
      uint64_t IICIE:1;
      uint64_t IICEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C1;

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
  } __attribute__((aligned(1))) S;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D;

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
  } __attribute__((aligned(1))) C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FLT:5;
      uint64_t STOPIE:1;
      uint64_t STOPF:1;
      uint64_t SHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FLT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:1;
      uint64_t RAD:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RA;

};

#define I2C1 (*(volatile struct I2C1_tag *) 0x40067000)

struct UART0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SBR:5;
      uint64_t SBNS:1;
      uint64_t RXEDGIE:1;
      uint64_t LBKDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BDH;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SBR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BDL;

  union
  {
    uint8_t R;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SBK:1;
      uint64_t RWU:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t ILIE:1;
      uint64_t RIE:1;
      uint64_t TCIE:1;
      uint64_t TIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PF:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t OR:1;
      uint64_t IDLE:1;
      uint64_t RDRF:1;
      uint64_t TC:1;
      uint64_t TDRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RAF:1;
      uint64_t LBKDE:1;
      uint64_t BRK13:1;
      uint64_t RWUID:1;
      uint64_t RXINV:1;
      uint64_t MSBF:1;
      uint64_t RXEDGIF:1;
      uint64_t LBKDIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PEIE:1;
      uint64_t FEIE:1;
      uint64_t NEIE:1;
      uint64_t ORIE:1;
      uint64_t TXINV:1;
      uint64_t TXDIR:1;
      uint64_t R9T8:1;
      uint64_t R8T9:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C3;

  union
  {
    uint8_t R;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MA1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MA2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t OSR:5;
      uint64_t M10:1;
      uint64_t MAEN2:1;
      uint64_t MAEN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESYNCDIS:1;
      uint64_t BOTHEDGE:1;
      uint64_t RESERVED_0:3;
      uint64_t RDMAE:1;
      uint64_t RESERVED_1:1;
      uint64_t TDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C5;

};

#define UART0 (*(volatile struct UART0_tag *) 0x4006a000)

struct CMP0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t HYSTCTR:2;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t FILTER_CNT:3;
      uint64_t RESERVED_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CR0;

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
  } __attribute__((aligned(1))) CR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FILT_PER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FPR;

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
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VOSEL:6;
      uint64_t VRSEL:1;
      uint64_t DACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DACCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t MSEL:3;
      uint64_t PSEL:3;
      uint64_t RESERVED:1;
      uint64_t PSTM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) MUXCR;

};

#define CMP0 (*(volatile struct CMP0_tag *) 0x40073000)

struct SPI0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LSBFE:1;
      uint64_t SSOE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t SPTIE:1;
      uint64_t SPE:1;
      uint64_t SPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPC0:1;
      uint64_t SPISWAI:1;
      uint64_t RESERVED_0:1;
      uint64_t BIDIROE:1;
      uint64_t MODFEN:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t SPMIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) C2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SPR:4;
      uint64_t SPPR:3;
      uint64_t RESERVED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) BR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED:4;
      uint64_t MODF:1;
      uint64_t SPTEF:1;
      uint64_t SPMF:1;
      uint64_t SPRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) S;

  uint8_t res0[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Bits:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) D;

  uint8_t res1[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t Bits:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) M;

};

#define SPI0 (*(volatile struct SPI0_tag *) 0x40076000)

struct PMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t LVDV:2;
      uint64_t RESERVED:2;
      uint64_t LVDRE:1;
      uint64_t LVDIE:1;
      uint64_t LVDACK:1;
      uint64_t LVDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVDSC1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t LVWV:2;
      uint64_t RESERVED:3;
      uint64_t LVWIE:1;
      uint64_t LVWACK:1;
      uint64_t LVWF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) LVDSC2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t BGBE:1;
      uint64_t RESERVED_0:1;
      uint64_t REGONS:1;
      uint64_t ACKISO:1;
      uint64_t BGEN:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) REGSC;

};

#define PMC (*(volatile struct PMC_tag *) 0x4007d000)

struct SMC_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t AVLLS:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t AVLP:1;
      uint64_t RESERVED_4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMPROT;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t STOPM:3;
      uint64_t STOPA:1;
      uint64_t RESERVED_0:1;
      uint64_t RUNM:2;
      uint64_t RESERVED_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t VLLSM:3;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t PORPO:1;
      uint64_t PSTOPO:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) STOPCTRL;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t PMSTAT:7;
      uint64_t RESERVED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PMSTAT;

};

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
      uint64_t RESERVED:2;
      uint64_t WDOG:1;
      uint64_t PIN:1;
      uint64_t POR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SRS0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t LOCKUP:1;
      uint64_t SW:1;
      uint64_t MDM_AP:1;
      uint64_t RESERVED_1:1;
      uint64_t SACKERR:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SRS1;

  uint8_t res0[2];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTFLTSRW:2;
      uint64_t RSTFLTSS:1;
      uint64_t RESERVED:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RPFC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RSTFLTSEL:5;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) RPFW;

};

#define RCM (*(volatile struct RCM_tag *) 0x4007f000)

struct PTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOA_PDDR;

};

#define PTA (*(volatile struct PTA_tag *) 0x400ff000)

struct PTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOB_PDDR;

};

#define PTB (*(volatile struct PTB_tag *) 0x400ff040)

struct SystemControl_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
      uint64_t RESERVED_27:1;
      uint64_t RESERVED_28:1;
      uint64_t RESERVED_29:1;
      uint64_t RESERVED_30:1;
      uint64_t RESERVED_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_ACTLR;

  uint8_t res0[3316];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:4;
      uint64_t PARTNO:12;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t VARIANT:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:6;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t VECTPENDING:6;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t ISRPENDING:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t TBLOFF:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:3;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t ENDIANNESS:1;
      uint64_t VECTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t RESERVED_1:1;
      uint64_t SEVONPEND:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
      uint64_t RESERVED_27:1;
      uint64_t RESERVED_28:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t STKALIGN:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
      uint64_t RESERVED_27:1;
      uint64_t RESERVED_28:1;
      uint64_t RESERVED_29:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_CCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t SVCALLPENDED:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
      uint64_t RESERVED_27:1;
      uint64_t RESERVED_28:1;
      uint64_t RESERVED_29:1;
      uint64_t RESERVED_30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_SHCSR;

  uint8_t res2[8];

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
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCB_DFSR;

};

#define SystemControl (*(volatile struct SystemControl_tag *) 0xe000e008)

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
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:1;
      uint64_t RESERVED_9:1;
      uint64_t RESERVED_10:1;
      uint64_t RESERVED_11:1;
      uint64_t RESERVED_12:1;
      uint64_t COUNTFLAG:1;
      uint64_t RESERVED_13:1;
      uint64_t RESERVED_14:1;
      uint64_t RESERVED_15:1;
      uint64_t RESERVED_16:1;
      uint64_t RESERVED_17:1;
      uint64_t RESERVED_18:1;
      uint64_t RESERVED_19:1;
      uint64_t RESERVED_20:1;
      uint64_t RESERVED_21:1;
      uint64_t RESERVED_22:1;
      uint64_t RESERVED_23:1;
      uint64_t RESERVED_24:1;
      uint64_t RESERVED_25:1;
      uint64_t RESERVED_26:1;
      uint64_t RESERVED_27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CALIB;

};

#define SysTick (*(volatile struct SysTick_tag *) 0xe000e010)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISER;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICER;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ISPR;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVIC_ICPR;

  uint8_t res3[380];

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
  } __attribute__((aligned(4))) NVIC_IPR0;

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
  } __attribute__((aligned(4))) NVIC_IPR1;

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
  } __attribute__((aligned(4))) NVIC_IPR2;

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
  } __attribute__((aligned(4))) NVIC_IPR3;

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
  } __attribute__((aligned(4))) NVIC_IPR4;

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
  } __attribute__((aligned(4))) NVIC_IPR5;

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
  } __attribute__((aligned(4))) NVIC_IPR6;

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
  } __attribute__((aligned(4))) NVIC_IPR7;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct MTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:2;
      uint64_t WRAP:1;
      uint64_t POINTER:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POSITION;

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
      uint64_t RESERVED:21;
      uint64_t EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOSTOP:1;
      uint64_t AUTOHALT:1;
      uint64_t RESERVED:1;
      uint64_t WATERMARK:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASEADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BASE;

  uint8_t res0[3824];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODECTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODECTRL;

  uint8_t res1[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAGSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAGSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAGCLEAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAGCLEAR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKACCESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKACCESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCKSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCKSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIT0:1;
      uint64_t BIT1:1;
      uint64_t BIT2:1;
      uint64_t BIT3:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AUTHSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICEARCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICEARCH;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICECFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICETYPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICETYPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID3;

};

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
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t RESERVED_0:4;
      uint64_t DATAVMATCH:1;
      uint64_t RESERVED_1:1;
      uint64_t DATAVSIZE:2;
      uint64_t DATAVADDR0:4;
      uint64_t RESERVED_2:4;
      uint64_t RESERVED_3:4;
      uint64_t MATCHED:1;
      uint64_t RESERVED_4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCT0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK:5;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FUNCTION:4;
      uint64_t RESERVED_0:20;
      uint64_t MATCHED:1;
      uint64_t RESERVED_1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCT1;

  uint8_t res2[452];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACOMP0:1;
      uint64_t ACOMP1:1;
      uint64_t RESERVED:26;
      uint64_t NUMCOMP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTRL;

  uint8_t res3[3524];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICECFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICECFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVICETYPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVICETYPID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID3;

};

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
  } __attribute__((aligned(4))) ENTRY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENTRY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENTRY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENTRY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENTRY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MARK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TABLEMARK;

  uint8_t res0[4028];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSACCESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSACCESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPHID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMPID3;

};

#define ROM (*(volatile struct ROM_tag *) 0xf0002000)

struct MCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t ASC:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLASC;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AMC:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLAMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:9;
      uint64_t ARB:1;
      uint64_t CFCC:1;
      uint64_t DFCDA:1;
      uint64_t DFCIC:1;
      uint64_t DFCC:1;
      uint64_t EFDS:1;
      uint64_t DFCS:1;
      uint64_t ESFC:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLACR;

  uint8_t res0[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOREQ:1;
      uint64_t CPOACK:1;
      uint64_t CPOWOI:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPO;

};

#define MCM (*(volatile struct MCM_tag *) 0xf0003008)

struct FPTA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOA_PDDR;

};

#define FPTA (*(volatile struct FPTA_tag *) 0xf80ff000)

struct FPTB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PDOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTSO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PSOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTCO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PCOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FGPIOB_PDDR;

};

#define FPTB (*(volatile struct FPTB_tag *) 0xf80ff040)

