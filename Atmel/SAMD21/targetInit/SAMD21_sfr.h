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

struct AC_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace0:4;
			uint64_t LPMUX:1;
		} __attribute__((packed)) B;
	} AC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t START0:1;
			uint64_t START1:1;
		} __attribute__((packed)) B;
	} AC_CTRLB;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COMPEO0:1;
			uint64_t COMPEO1:1;
			uint64_t reservedSpace0:2;
			uint64_t WINEO0:1;
			uint64_t reservedSpace1:3;
			uint64_t COMPEI0:1;
			uint64_t COMPEI1:1;
		} __attribute__((packed)) B;
	} AC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COMP0:1;
			uint64_t COMP1:1;
			uint64_t reservedSpace0:2;
			uint64_t WIN0:1;
		} __attribute__((packed)) B;
	} AC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COMP0:1;
			uint64_t COMP1:1;
			uint64_t reservedSpace0:2;
			uint64_t WIN0:1;
		} __attribute__((packed)) B;
	} AC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COMP0:1;
			uint64_t COMP1:1;
			uint64_t reservedSpace0:2;
			uint64_t WIN0:1;
		} __attribute__((packed)) B;
	} AC_INTFLAG;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t STATE0:1;
			uint64_t STATE1:1;
			uint64_t reservedSpace0:2;
			uint64_t WSTATE0:2;
		} __attribute__((packed)) B;
	} AC_STATUSA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t READY0:1;
			uint64_t READY1:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} AC_STATUSB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t STATE0:1;
			uint64_t STATE1:1;
			uint64_t reservedSpace0:2;
			uint64_t WSTATE0:2;
		} __attribute__((packed)) B;
	} AC_STATUSC;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t WEN0:1;
			uint64_t WINTSEL0:2;
		} __attribute__((packed)) B;
	} AC_WINCTRL;

	uint8_t res2[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ENABLE:1;
			uint64_t SINGLE:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace0:1;
			uint64_t INTSEL:2;
			uint64_t reservedSpace1:1;
			uint64_t MUXNEG:3;
			uint64_t reservedSpace2:1;
			uint64_t MUXPOS:2;
			uint64_t reservedSpace3:1;
			uint64_t SWAP:1;
			uint64_t OUT:2;
			uint64_t reservedSpace4:1;
			uint64_t HYST:1;
			uint64_t reservedSpace5:4;
			uint64_t FLEN:3;
		} __attribute__((packed)) B;
	} AC_COMPCTRL0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ENABLE:1;
			uint64_t SINGLE:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace0:1;
			uint64_t INTSEL:2;
			uint64_t reservedSpace1:1;
			uint64_t MUXNEG:3;
			uint64_t reservedSpace2:1;
			uint64_t MUXPOS:2;
			uint64_t reservedSpace3:1;
			uint64_t SWAP:1;
			uint64_t OUT:2;
			uint64_t reservedSpace4:1;
			uint64_t HYST:1;
			uint64_t reservedSpace5:4;
			uint64_t FLEN:3;
		} __attribute__((packed)) B;
	} AC_COMPCTRL1;

	uint8_t res3[8];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t VALUE:6;
		} __attribute__((packed)) B;
	} AC_SCALER0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t VALUE:6;
		} __attribute__((packed)) B;
	} AC_SCALER1;

} __attribute__((packed));

#define AC (*(volatile struct AC_tag *) 0x42004400)

struct ADC_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t RUNSTDBY:1;
		} __attribute__((packed)) B;
	} ADC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t REFSEL:4;
			uint64_t reservedSpace0:3;
			uint64_t REFCOMP:1;
		} __attribute__((packed)) B;
	} ADC_REFCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SAMPLENUM:4;
			uint64_t ADJRES:3;
		} __attribute__((packed)) B;
	} ADC_AVGCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SAMPLEN:6;
		} __attribute__((packed)) B;
	} ADC_SAMPCTRL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DIFFMODE:1;
			uint64_t LEFTADJ:1;
			uint64_t FREERUN:1;
			uint64_t CORREN:1;
			uint64_t RESSEL:2;
			uint64_t reservedSpace0:2;
			uint64_t PRESCALER:3;
		} __attribute__((packed)) B;
	} ADC_CTRLB;

	uint8_t res0[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t WINMODE:3;
		} __attribute__((packed)) B;
	} ADC_WINCTRL;

	uint8_t res1[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t FLUSH:1;
			uint64_t START:1;
		} __attribute__((packed)) B;
	} ADC_SWTRIG;

	uint8_t res2[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t MUXPOS:5;
			uint64_t reservedSpace0:3;
			uint64_t MUXNEG:5;
			uint64_t reservedSpace1:3;
			uint64_t INPUTSCAN:4;
			uint64_t INPUTOFFSET:4;
			uint64_t GAIN:4;
		} __attribute__((packed)) B;
	} ADC_INPUTCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t STARTEI:1;
			uint64_t SYNCEI:1;
			uint64_t reservedSpace0:2;
			uint64_t RESRDYEO:1;
			uint64_t WINMONEO:1;
		} __attribute__((packed)) B;
	} ADC_EVCTRL;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RESRDY:1;
			uint64_t OVERRUN:1;
			uint64_t WINMON:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} ADC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RESRDY:1;
			uint64_t OVERRUN:1;
			uint64_t WINMON:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} ADC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RESRDY:1;
			uint64_t OVERRUN:1;
			uint64_t WINMON:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} ADC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} ADC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t RESULT:16;
		} __attribute__((packed)) B;
	} ADC_RESULT;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t WINLT:16;
		} __attribute__((packed)) B;
	} ADC_WINLT;

	uint8_t res4[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t WINUT:16;
		} __attribute__((packed)) B;
	} ADC_WINUT;

	uint8_t res5[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t GAINCORR:12;
		} __attribute__((packed)) B;
	} ADC_GAINCORR;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t OFFSETCORR:12;
		} __attribute__((packed)) B;
	} ADC_OFFSETCORR;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t LINEARITY_CAL:8;
			uint64_t BIAS_CAL:3;
		} __attribute__((packed)) B;
	} ADC_CALIB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} ADC_DBGCTRL;

} __attribute__((packed));

#define ADC (*(volatile struct ADC_tag *) 0x42004000)

struct DAC_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t RUNSTDBY:1;
		} __attribute__((packed)) B;
	} DAC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EOEN:1;
			uint64_t IOEN:1;
			uint64_t LEFTADJ:1;
			uint64_t VPD:1;
			uint64_t BDWP:1;
			uint64_t reservedSpace0:1;
			uint64_t REFSEL:2;
		} __attribute__((packed)) B;
	} DAC_CTRLB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t STARTEI:1;
			uint64_t EMPTYEO:1;
		} __attribute__((packed)) B;
	} DAC_EVCTRL;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t UNDERRUN:1;
			uint64_t EMPTY:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} DAC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t UNDERRUN:1;
			uint64_t EMPTY:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} DAC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t UNDERRUN:1;
			uint64_t EMPTY:1;
			uint64_t SYNCRDY:1;
		} __attribute__((packed)) B;
	} DAC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} DAC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:16;
		} __attribute__((packed)) B;
	} DAC_DATA;

	uint8_t res1[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATABUF:16;
		} __attribute__((packed)) B;
	} DAC_DATABUF;

} __attribute__((packed));

#define DAC (*(volatile struct DAC_tag *) 0x42004800)

struct DMAC_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t DMAENABLE:1;
			uint64_t CRCENABLE:1;
			uint64_t reservedSpace0:5;
			uint64_t LVLEN0:1;
			uint64_t LVLEN1:1;
			uint64_t LVLEN2:1;
			uint64_t LVLEN3:1;
		} __attribute__((packed)) B;
	} DMAC_CTRL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CRCBEATSIZE:2;
			uint64_t CRCPOLY:2;
			uint64_t reservedSpace0:4;
			uint64_t CRCSRC:6;
		} __attribute__((packed)) B;
	} DMAC_CRCCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CRCDATAIN:32;
		} __attribute__((packed)) B;
	} DMAC_CRCDATAIN;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CRCCHKSUM:32;
		} __attribute__((packed)) B;
	} DMAC_CRCCHKSUM;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CRCBUSY:1;
			uint64_t CRCZERO:1;
		} __attribute__((packed)) B;
	} DMAC_CRCSTATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} DMAC_DBGCTRL;

	uint8_t res0[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWTRIG0:1;
			uint64_t SWTRIG1:1;
			uint64_t SWTRIG2:1;
			uint64_t SWTRIG3:1;
			uint64_t SWTRIG4:1;
			uint64_t SWTRIG5:1;
			uint64_t SWTRIG6:1;
			uint64_t SWTRIG7:1;
			uint64_t SWTRIG8:1;
			uint64_t SWTRIG9:1;
			uint64_t SWTRIG10:1;
			uint64_t SWTRIG11:1;
		} __attribute__((packed)) B;
	} DMAC_SWTRIGCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t LVLPRI0:4;
			uint64_t reservedSpace0:3;
			uint64_t RRLVLEN0:1;
			uint64_t LVLPRI1:4;
			uint64_t reservedSpace1:3;
			uint64_t RRLVLEN1:1;
			uint64_t LVLPRI2:4;
			uint64_t reservedSpace2:3;
			uint64_t RRLVLEN2:1;
			uint64_t LVLPRI3:4;
			uint64_t reservedSpace3:3;
			uint64_t RRLVLEN3:1;
		} __attribute__((packed)) B;
	} DMAC_PRICTRL0;

	uint8_t res1[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ID:4;
			uint64_t reservedSpace0:4;
			uint64_t TERR:1;
			uint64_t TCMPL:1;
			uint64_t SUSP:1;
			uint64_t reservedSpace1:2;
			uint64_t FERR:1;
			uint64_t BUSY:1;
			uint64_t PEND:1;
		} __attribute__((packed)) B;
	} DMAC_INTPEND;

	uint8_t res2[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHINT0:1;
			uint64_t CHINT1:1;
			uint64_t CHINT2:1;
			uint64_t CHINT3:1;
			uint64_t CHINT4:1;
			uint64_t CHINT5:1;
			uint64_t CHINT6:1;
			uint64_t CHINT7:1;
			uint64_t CHINT8:1;
			uint64_t CHINT9:1;
			uint64_t CHINT10:1;
			uint64_t CHINT11:1;
		} __attribute__((packed)) B;
	} DMAC_INTSTATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BUSYCH0:1;
			uint64_t BUSYCH1:1;
			uint64_t BUSYCH2:1;
			uint64_t BUSYCH3:1;
			uint64_t BUSYCH4:1;
			uint64_t BUSYCH5:1;
			uint64_t BUSYCH6:1;
			uint64_t BUSYCH7:1;
			uint64_t BUSYCH8:1;
			uint64_t BUSYCH9:1;
			uint64_t BUSYCH10:1;
			uint64_t BUSYCH11:1;
		} __attribute__((packed)) B;
	} DMAC_BUSYCH;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PENDCH0:1;
			uint64_t PENDCH1:1;
			uint64_t PENDCH2:1;
			uint64_t PENDCH3:1;
			uint64_t PENDCH4:1;
			uint64_t PENDCH5:1;
			uint64_t PENDCH6:1;
			uint64_t PENDCH7:1;
			uint64_t PENDCH8:1;
			uint64_t PENDCH9:1;
			uint64_t PENDCH10:1;
			uint64_t PENDCH11:1;
		} __attribute__((packed)) B;
	} DMAC_PENDCH;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t LVLEX0:1;
			uint64_t LVLEX1:1;
			uint64_t LVLEX2:1;
			uint64_t LVLEX3:1;
			uint64_t reservedSpace0:4;
			uint64_t ID:5;
			uint64_t reservedSpace1:2;
			uint64_t ABUSY:1;
			uint64_t BTCNT:16;
		} __attribute__((packed)) B;
	} DMAC_ACTIVE;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BASEADDR:32;
		} __attribute__((packed)) B;
	} DMAC_BASEADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WRBADDR:32;
		} __attribute__((packed)) B;
	} DMAC_WRBADDR;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t ID:4;
		} __attribute__((packed)) B;
	} DMAC_CHID;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} DMAC_CHCTRLA;

	uint8_t res4[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t EVIE:1;
			uint64_t EVOE:1;
			uint64_t LVL:2;
			uint64_t reservedSpace0:1;
			uint64_t TRIGSRC:6;
			uint64_t reservedSpace1:8;
			uint64_t TRIGACT:2;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} DMAC_CHCTRLB;

	uint8_t res5[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TERR:1;
			uint64_t TCMPL:1;
			uint64_t SUSP:1;
		} __attribute__((packed)) B;
	} DMAC_CHINTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TERR:1;
			uint64_t TCMPL:1;
			uint64_t SUSP:1;
		} __attribute__((packed)) B;
	} DMAC_CHINTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TERR:1;
			uint64_t TCMPL:1;
			uint64_t SUSP:1;
		} __attribute__((packed)) B;
	} DMAC_CHINTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PEND:1;
			uint64_t BUSY:1;
			uint64_t FERR:1;
		} __attribute__((packed)) B;
	} DMAC_CHSTATUS;

} __attribute__((packed));

#define DMAC (*(volatile struct DMAC_tag *) 0x41004800)

struct DSU_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t reservedSpace0:1;
			uint64_t CRC:1;
			uint64_t MBIST:1;
			uint64_t CE:1;
		} __attribute__((packed)) B;
	} DSU_CTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DONE:1;
			uint64_t CRSTEXT:1;
			uint64_t BERR:1;
			uint64_t FAIL:1;
			uint64_t PERR:1;
		} __attribute__((packed)) B;
	} DSU_STATUSA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PROT:1;
			uint64_t DBGPRES:1;
			uint64_t DCCD0:1;
			uint64_t DCCD1:1;
			uint64_t HPE:1;
		} __attribute__((packed)) B;
	} DSU_STATUSB;

	uint8_t res0[1];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t ADDR:30;
		} __attribute__((packed)) B;
	} DSU_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t LENGTH:30;
		} __attribute__((packed)) B;
	} DSU_LENGTH;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:32;
		} __attribute__((packed)) B;
	} DSU_DATA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:32;
		} __attribute__((packed)) B;
	} DSU_DCC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:32;
		} __attribute__((packed)) B;
	} DSU_DCC1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DEVSEL:8;
			uint64_t REVISION:4;
			uint64_t DIE:4;
			uint64_t SERIES:6;
			uint64_t reservedSpace0:1;
			uint64_t FAMILY:5;
			uint64_t PROCESSOR:4;
		} __attribute__((packed)) B;
	} DSU_DID;

	uint8_t res1[4068];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EPRES:1;
			uint64_t FMT:1;
			uint64_t reservedSpace0:10;
			uint64_t ADDOFF:20;
		} __attribute__((packed)) B;
	} DSU_ENTRY0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EPRES:1;
			uint64_t FMT:1;
			uint64_t reservedSpace0:10;
			uint64_t ADDOFF:20;
		} __attribute__((packed)) B;
	} DSU_ENTRY1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t END:32;
		} __attribute__((packed)) B;
	} DSU_END;

	uint8_t res2[4032];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SMEMP:1;
		} __attribute__((packed)) B;
	} DSU_MEMTYPE;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t JEPCC:4;
			uint64_t FKBC:4;
		} __attribute__((packed)) B;
	} DSU_PID4;

	uint8_t res3[12];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PARTNBL:8;
		} __attribute__((packed)) B;
	} DSU_PID0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PARTNBH:4;
			uint64_t JEPIDCL:4;
		} __attribute__((packed)) B;
	} DSU_PID1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t JEPIDCH:3;
			uint64_t JEPU:1;
			uint64_t REVISION:4;
		} __attribute__((packed)) B;
	} DSU_PID2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CUSMOD:4;
			uint64_t REVAND:4;
		} __attribute__((packed)) B;
	} DSU_PID3;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PREAMBLEB0:8;
		} __attribute__((packed)) B;
	} DSU_CID0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PREAMBLE:4;
			uint64_t CCLASS:4;
		} __attribute__((packed)) B;
	} DSU_CID1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PREAMBLEB2:8;
		} __attribute__((packed)) B;
	} DSU_CID2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PREAMBLEB3:8;
		} __attribute__((packed)) B;
	} DSU_CID3;

} __attribute__((packed));

#define DSU (*(volatile struct DSU_tag *) 0x41002000)

struct EIC_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} EIC_CTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} EIC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t NMISENSE:3;
			uint64_t NMIFILTEN:1;
		} __attribute__((packed)) B;
	} EIC_NMICTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t NMI:1;
		} __attribute__((packed)) B;
	} EIC_NMIFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EXTINTEO0:1;
			uint64_t EXTINTEO1:1;
			uint64_t EXTINTEO2:1;
			uint64_t EXTINTEO3:1;
			uint64_t EXTINTEO4:1;
			uint64_t EXTINTEO5:1;
			uint64_t EXTINTEO6:1;
			uint64_t EXTINTEO7:1;
			uint64_t EXTINTEO8:1;
			uint64_t EXTINTEO9:1;
			uint64_t EXTINTEO10:1;
			uint64_t EXTINTEO11:1;
			uint64_t EXTINTEO12:1;
			uint64_t EXTINTEO13:1;
			uint64_t EXTINTEO14:1;
			uint64_t EXTINTEO15:1;
		} __attribute__((packed)) B;
	} EIC_EVCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EXTINT0:1;
			uint64_t EXTINT1:1;
			uint64_t EXTINT2:1;
			uint64_t EXTINT3:1;
			uint64_t EXTINT4:1;
			uint64_t EXTINT5:1;
			uint64_t EXTINT6:1;
			uint64_t EXTINT7:1;
			uint64_t EXTINT8:1;
			uint64_t EXTINT9:1;
			uint64_t EXTINT10:1;
			uint64_t EXTINT11:1;
			uint64_t EXTINT12:1;
			uint64_t EXTINT13:1;
			uint64_t EXTINT14:1;
			uint64_t EXTINT15:1;
		} __attribute__((packed)) B;
	} EIC_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EXTINT0:1;
			uint64_t EXTINT1:1;
			uint64_t EXTINT2:1;
			uint64_t EXTINT3:1;
			uint64_t EXTINT4:1;
			uint64_t EXTINT5:1;
			uint64_t EXTINT6:1;
			uint64_t EXTINT7:1;
			uint64_t EXTINT8:1;
			uint64_t EXTINT9:1;
			uint64_t EXTINT10:1;
			uint64_t EXTINT11:1;
			uint64_t EXTINT12:1;
			uint64_t EXTINT13:1;
			uint64_t EXTINT14:1;
			uint64_t EXTINT15:1;
		} __attribute__((packed)) B;
	} EIC_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EXTINT0:1;
			uint64_t EXTINT1:1;
			uint64_t EXTINT2:1;
			uint64_t EXTINT3:1;
			uint64_t EXTINT4:1;
			uint64_t EXTINT5:1;
			uint64_t EXTINT6:1;
			uint64_t EXTINT7:1;
			uint64_t EXTINT8:1;
			uint64_t EXTINT9:1;
			uint64_t EXTINT10:1;
			uint64_t EXTINT11:1;
			uint64_t EXTINT12:1;
			uint64_t EXTINT13:1;
			uint64_t EXTINT14:1;
			uint64_t EXTINT15:1;
		} __attribute__((packed)) B;
	} EIC_INTFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAKEUPEN0:1;
			uint64_t WAKEUPEN1:1;
			uint64_t WAKEUPEN2:1;
			uint64_t WAKEUPEN3:1;
			uint64_t WAKEUPEN4:1;
			uint64_t WAKEUPEN5:1;
			uint64_t WAKEUPEN6:1;
			uint64_t WAKEUPEN7:1;
			uint64_t WAKEUPEN8:1;
			uint64_t WAKEUPEN9:1;
			uint64_t WAKEUPEN10:1;
			uint64_t WAKEUPEN11:1;
			uint64_t WAKEUPEN12:1;
			uint64_t WAKEUPEN13:1;
			uint64_t WAKEUPEN14:1;
			uint64_t WAKEUPEN15:1;
		} __attribute__((packed)) B;
	} EIC_WAKEUP;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SENSE0:3;
			uint64_t FILTEN0:1;
			uint64_t SENSE1:3;
			uint64_t FILTEN1:1;
			uint64_t SENSE2:3;
			uint64_t FILTEN2:1;
			uint64_t SENSE3:3;
			uint64_t FILTEN3:1;
			uint64_t SENSE4:3;
			uint64_t FILTEN4:1;
			uint64_t SENSE5:3;
			uint64_t FILTEN5:1;
			uint64_t SENSE6:3;
			uint64_t FILTEN6:1;
			uint64_t SENSE7:3;
			uint64_t FILTEN7:1;
		} __attribute__((packed)) B;
	} EIC_CONFIG0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SENSE0:3;
			uint64_t FILTEN0:1;
			uint64_t SENSE1:3;
			uint64_t FILTEN1:1;
			uint64_t SENSE2:3;
			uint64_t FILTEN2:1;
			uint64_t SENSE3:3;
			uint64_t FILTEN3:1;
			uint64_t SENSE4:3;
			uint64_t FILTEN4:1;
			uint64_t SENSE5:3;
			uint64_t FILTEN5:1;
			uint64_t SENSE6:3;
			uint64_t FILTEN6:1;
			uint64_t SENSE7:3;
			uint64_t FILTEN7:1;
		} __attribute__((packed)) B;
	} EIC_CONFIG1;

} __attribute__((packed));

#define EIC (*(volatile struct EIC_tag *) 0x40001800)

struct EVSYS_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t reservedSpace0:3;
			uint64_t GCLKREQ:1;
		} __attribute__((packed)) B;
	} EVSYS_CTRL;

	uint8_t res0[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHANNEL:4;
			uint64_t reservedSpace0:4;
			uint64_t SWEVT:1;
			uint64_t reservedSpace1:7;
			uint64_t EVGEN:7;
			uint64_t reservedSpace2:1;
			uint64_t PATH:2;
			uint64_t EDGSEL:2;
		} __attribute__((packed)) B;
	} EVSYS_CHANNEL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t USER:5;
			uint64_t reservedSpace0:3;
			uint64_t CHANNEL:5;
		} __attribute__((packed)) B;
	} EVSYS_USER;

	uint8_t res1[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t USRRDY0:1;
			uint64_t USRRDY1:1;
			uint64_t USRRDY2:1;
			uint64_t USRRDY3:1;
			uint64_t USRRDY4:1;
			uint64_t USRRDY5:1;
			uint64_t USRRDY6:1;
			uint64_t USRRDY7:1;
			uint64_t CHBUSY0:1;
			uint64_t CHBUSY1:1;
			uint64_t CHBUSY2:1;
			uint64_t CHBUSY3:1;
			uint64_t CHBUSY4:1;
			uint64_t CHBUSY5:1;
			uint64_t CHBUSY6:1;
			uint64_t CHBUSY7:1;
			uint64_t USRRDY8:1;
			uint64_t USRRDY9:1;
			uint64_t USRRDY10:1;
			uint64_t USRRDY11:1;
			uint64_t reservedSpace0:4;
			uint64_t CHBUSY8:1;
			uint64_t CHBUSY9:1;
			uint64_t CHBUSY10:1;
			uint64_t CHBUSY11:1;
		} __attribute__((packed)) B;
	} EVSYS_CHSTATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVR0:1;
			uint64_t OVR1:1;
			uint64_t OVR2:1;
			uint64_t OVR3:1;
			uint64_t OVR4:1;
			uint64_t OVR5:1;
			uint64_t OVR6:1;
			uint64_t OVR7:1;
			uint64_t EVD0:1;
			uint64_t EVD1:1;
			uint64_t EVD2:1;
			uint64_t EVD3:1;
			uint64_t EVD4:1;
			uint64_t EVD5:1;
			uint64_t EVD6:1;
			uint64_t EVD7:1;
			uint64_t OVR8:1;
			uint64_t OVR9:1;
			uint64_t OVR10:1;
			uint64_t OVR11:1;
			uint64_t reservedSpace0:4;
			uint64_t EVD8:1;
			uint64_t EVD9:1;
			uint64_t EVD10:1;
			uint64_t EVD11:1;
		} __attribute__((packed)) B;
	} EVSYS_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVR0:1;
			uint64_t OVR1:1;
			uint64_t OVR2:1;
			uint64_t OVR3:1;
			uint64_t OVR4:1;
			uint64_t OVR5:1;
			uint64_t OVR6:1;
			uint64_t OVR7:1;
			uint64_t EVD0:1;
			uint64_t EVD1:1;
			uint64_t EVD2:1;
			uint64_t EVD3:1;
			uint64_t EVD4:1;
			uint64_t EVD5:1;
			uint64_t EVD6:1;
			uint64_t EVD7:1;
			uint64_t OVR8:1;
			uint64_t OVR9:1;
			uint64_t OVR10:1;
			uint64_t OVR11:1;
			uint64_t reservedSpace0:4;
			uint64_t EVD8:1;
			uint64_t EVD9:1;
			uint64_t EVD10:1;
			uint64_t EVD11:1;
		} __attribute__((packed)) B;
	} EVSYS_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVR0:1;
			uint64_t OVR1:1;
			uint64_t OVR2:1;
			uint64_t OVR3:1;
			uint64_t OVR4:1;
			uint64_t OVR5:1;
			uint64_t OVR6:1;
			uint64_t OVR7:1;
			uint64_t EVD0:1;
			uint64_t EVD1:1;
			uint64_t EVD2:1;
			uint64_t EVD3:1;
			uint64_t EVD4:1;
			uint64_t EVD5:1;
			uint64_t EVD6:1;
			uint64_t EVD7:1;
			uint64_t OVR8:1;
			uint64_t OVR9:1;
			uint64_t OVR10:1;
			uint64_t OVR11:1;
			uint64_t reservedSpace0:4;
			uint64_t EVD8:1;
			uint64_t EVD9:1;
			uint64_t EVD10:1;
			uint64_t EVD11:1;
		} __attribute__((packed)) B;
	} EVSYS_INTFLAG;

} __attribute__((packed));

#define EVSYS (*(volatile struct EVSYS_tag *) 0x42000400)

struct GCLK_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
		} __attribute__((packed)) B;
	} GCLK_CTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} GCLK_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ID:6;
			uint64_t reservedSpace0:2;
			uint64_t GEN:4;
			uint64_t reservedSpace1:2;
			uint64_t CLKEN:1;
			uint64_t WRTLOCK:1;
		} __attribute__((packed)) B;
	} GCLK_CLKCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ID:4;
			uint64_t reservedSpace0:4;
			uint64_t SRC:5;
			uint64_t reservedSpace1:3;
			uint64_t GENEN:1;
			uint64_t IDC:1;
			uint64_t OOV:1;
			uint64_t OE:1;
			uint64_t DIVSEL:1;
			uint64_t RUNSTDBY:1;
		} __attribute__((packed)) B;
	} GCLK_GENCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ID:4;
			uint64_t reservedSpace0:4;
			uint64_t DIV:16;
		} __attribute__((packed)) B;
	} GCLK_GENDIV;

} __attribute__((packed));

#define GCLK (*(volatile struct GCLK_tag *) 0x40000c00)

struct I2S_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CKEN0:1;
			uint64_t CKEN1:1;
			uint64_t SEREN0:1;
			uint64_t SEREN1:1;
		} __attribute__((packed)) B;
	} I2S_CTRLA;

	uint8_t res0[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SLOTSIZE:2;
			uint64_t NBSLOTS:3;
			uint64_t FSWIDTH:2;
			uint64_t BITDELAY:1;
			uint64_t FSSEL:1;
			uint64_t reservedSpace0:2;
			uint64_t FSINV:1;
			uint64_t SCKSEL:1;
			uint64_t reservedSpace1:3;
			uint64_t MCKSEL:1;
			uint64_t reservedSpace2:1;
			uint64_t MCKEN:1;
			uint64_t MCKDIV:5;
			uint64_t MCKOUTDIV:5;
			uint64_t FSOUTINV:1;
			uint64_t SCKOUTINV:1;
			uint64_t MCKOUTINV:1;
		} __attribute__((packed)) B;
	} I2S_CLKCTRL0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SLOTSIZE:2;
			uint64_t NBSLOTS:3;
			uint64_t FSWIDTH:2;
			uint64_t BITDELAY:1;
			uint64_t FSSEL:1;
			uint64_t reservedSpace0:2;
			uint64_t FSINV:1;
			uint64_t SCKSEL:1;
			uint64_t reservedSpace1:3;
			uint64_t MCKSEL:1;
			uint64_t reservedSpace2:1;
			uint64_t MCKEN:1;
			uint64_t MCKDIV:5;
			uint64_t MCKOUTDIV:5;
			uint64_t FSOUTINV:1;
			uint64_t SCKOUTINV:1;
			uint64_t MCKOUTINV:1;
		} __attribute__((packed)) B;
	} I2S_CLKCTRL1;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t RXRDY0:1;
			uint64_t RXRDY1:1;
			uint64_t reservedSpace0:2;
			uint64_t RXOR0:1;
			uint64_t RXOR1:1;
			uint64_t reservedSpace1:2;
			uint64_t TXRDY0:1;
			uint64_t TXRDY1:1;
			uint64_t reservedSpace2:2;
			uint64_t TXUR0:1;
			uint64_t TXUR1:1;
		} __attribute__((packed)) B;
	} I2S_INTENCLR;

	uint8_t res1[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t RXRDY0:1;
			uint64_t RXRDY1:1;
			uint64_t reservedSpace0:2;
			uint64_t RXOR0:1;
			uint64_t RXOR1:1;
			uint64_t reservedSpace1:2;
			uint64_t TXRDY0:1;
			uint64_t TXRDY1:1;
			uint64_t reservedSpace2:2;
			uint64_t TXUR0:1;
			uint64_t TXUR1:1;
		} __attribute__((packed)) B;
	} I2S_INTENSET;

	uint8_t res2[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t RXRDY0:1;
			uint64_t RXRDY1:1;
			uint64_t reservedSpace0:2;
			uint64_t RXOR0:1;
			uint64_t RXOR1:1;
			uint64_t reservedSpace1:2;
			uint64_t TXRDY0:1;
			uint64_t TXRDY1:1;
			uint64_t reservedSpace2:2;
			uint64_t TXUR0:1;
			uint64_t TXUR1:1;
		} __attribute__((packed)) B;
	} I2S_INTFLAG;

	uint8_t res3[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CKEN0:1;
			uint64_t CKEN1:1;
			uint64_t SEREN0:1;
			uint64_t SEREN1:1;
			uint64_t reservedSpace0:2;
			uint64_t DATA0:1;
			uint64_t DATA1:1;
		} __attribute__((packed)) B;
	} I2S_SYNCBUSY;

	uint8_t res4[6];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SERMODE:2;
			uint64_t TXDEFAULT:2;
			uint64_t TXSAME:1;
			uint64_t CLKSEL:1;
			uint64_t reservedSpace0:1;
			uint64_t SLOTADJ:1;
			uint64_t DATASIZE:3;
			uint64_t reservedSpace1:1;
			uint64_t WORDADJ:1;
			uint64_t EXTEND:2;
			uint64_t BITREV:1;
			uint64_t SLOTDIS0:1;
			uint64_t SLOTDIS1:1;
			uint64_t SLOTDIS2:1;
			uint64_t SLOTDIS3:1;
			uint64_t SLOTDIS4:1;
			uint64_t SLOTDIS5:1;
			uint64_t SLOTDIS6:1;
			uint64_t SLOTDIS7:1;
			uint64_t MONO:1;
			uint64_t DMA:1;
			uint64_t RXLOOP:1;
		} __attribute__((packed)) B;
	} I2S_SERCTRL0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SERMODE:2;
			uint64_t TXDEFAULT:2;
			uint64_t TXSAME:1;
			uint64_t CLKSEL:1;
			uint64_t reservedSpace0:1;
			uint64_t SLOTADJ:1;
			uint64_t DATASIZE:3;
			uint64_t reservedSpace1:1;
			uint64_t WORDADJ:1;
			uint64_t EXTEND:2;
			uint64_t BITREV:1;
			uint64_t SLOTDIS0:1;
			uint64_t SLOTDIS1:1;
			uint64_t SLOTDIS2:1;
			uint64_t SLOTDIS3:1;
			uint64_t SLOTDIS4:1;
			uint64_t SLOTDIS5:1;
			uint64_t SLOTDIS6:1;
			uint64_t SLOTDIS7:1;
			uint64_t MONO:1;
			uint64_t DMA:1;
			uint64_t RXLOOP:1;
		} __attribute__((packed)) B;
	} I2S_SERCTRL1;

	uint8_t res5[8];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:32;
		} __attribute__((packed)) B;
	} I2S_DATA0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:32;
		} __attribute__((packed)) B;
	} I2S_DATA1;

} __attribute__((packed));

#define I2S (*(volatile struct I2S_tag *) 0x42005000)

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

	uint32_t MTB_BASE;
	uint8_t res0[3824];

	uint32_t MTB_ITCTRL;
	uint8_t res1[156];

	uint32_t MTB_CLAIMSET;
	uint32_t MTB_CLAIMCLR;
	uint8_t res2[8];

	uint32_t MTB_LOCKACCESS;
	uint32_t MTB_LOCKSTATUS;
	uint32_t MTB_AUTHSTATUS;
	uint32_t MTB_DEVARCH;
	uint8_t res3[8];

	uint32_t MTB_DEVID;
	uint32_t MTB_DEVTYPE;
	uint32_t MTB_PID4;
	uint32_t MTB_PID5;
	uint32_t MTB_PID6;
	uint32_t MTB_PID7;
	uint32_t MTB_PID0;
	uint32_t MTB_PID1;
	uint32_t MTB_PID2;
	uint32_t MTB_PID3;
	uint32_t MTB_CID0;
	uint32_t MTB_CID1;
	uint32_t MTB_CID2;
	uint32_t MTB_CID3;
} __attribute__((packed));

#define MTB (*(volatile struct MTB_tag *) 0x41006000)

struct NVMCTRL_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t CMD:7;
			uint64_t reservedSpace0:1;
			uint64_t CMDEX:8;
		} __attribute__((packed)) B;
	} NVMCTRL_CTRLA;

	uint8_t res0[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t RWS:4;
			uint64_t reservedSpace1:2;
			uint64_t MANW:1;
			uint64_t SLEEPPRM:2;
			uint64_t reservedSpace2:6;
			uint64_t READMODE:2;
			uint64_t CACHEDIS:1;
		} __attribute__((packed)) B;
	} NVMCTRL_CTRLB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t NVMP:16;
			uint64_t PSZ:3;
		} __attribute__((packed)) B;
	} NVMCTRL_PARAM;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t READY:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} NVMCTRL_INTENCLR;

	uint8_t res1[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t READY:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} NVMCTRL_INTENSET;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t READY:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} NVMCTRL_INTFLAG;

	uint8_t res3[3];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PRM:1;
			uint64_t LOAD:1;
			uint64_t PROGE:1;
			uint64_t LOCKE:1;
			uint64_t NVME:1;
			uint64_t reservedSpace0:3;
			uint64_t SB:1;
		} __attribute__((packed)) B;
	} NVMCTRL_STATUS;

	uint8_t res4[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:22;
		} __attribute__((packed)) B;
	} NVMCTRL_ADDR;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t LOCK:16;
		} __attribute__((packed)) B;
	} NVMCTRL_LOCK;

} __attribute__((packed));

#define NVMCTRL (*(volatile struct NVMCTRL_tag *) 0x41004000)

struct PAC0_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPSET;

} __attribute__((packed));

#define PAC0 (*(volatile struct PAC0_tag *) 0x40000000)

struct PAC1_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPSET;

} __attribute__((packed));

#define PAC1 (*(volatile struct PAC1_tag *) 0x41000000)

struct PAC2_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t WP:31;
		} __attribute__((packed)) B;
	} PAC_WPSET;

} __attribute__((packed));

#define PAC2 (*(volatile struct PAC2_tag *) 0x42000000)

struct PM_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t CFDEN:1;
			uint64_t reservedSpace1:1;
			uint64_t BKUPCLK:1;
		} __attribute__((packed)) B;
	} PM_CTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t IDLE:2;
		} __attribute__((packed)) B;
	} PM_SLEEP;

	uint8_t res0[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CPUDIV:3;
		} __attribute__((packed)) B;
	} PM_CPUSEL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t APBADIV:3;
		} __attribute__((packed)) B;
	} PM_APBASEL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t APBBDIV:3;
		} __attribute__((packed)) B;
	} PM_APBBSEL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t APBCDIV:3;
		} __attribute__((packed)) B;
	} PM_APBCSEL;

	uint8_t res1[8];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t HPB0:1;
			uint64_t HPB1:1;
			uint64_t HPB2:1;
			uint64_t DSU_bitfield:1;
			uint64_t NVMCTRL_bitfield:1;
			uint64_t DMAC_bitfield:1;
			uint64_t USB:1;
		} __attribute__((packed)) B;
	} PM_AHBMASK;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PAC0_bitfield:1;
			uint64_t PM_bitfield:1;
			uint64_t SYSCTRL_bitfield:1;
			uint64_t GCLK_bitfield:1;
			uint64_t WDT_bitfield:1;
			uint64_t RTC:1;
			uint64_t EIC_bitfield:1;
		} __attribute__((packed)) B;
	} PM_APBAMASK;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PAC1_bitfield:1;
			uint64_t DSU_bitfield:1;
			uint64_t NVMCTRL_bitfield:1;
			uint64_t PORT:1;
			uint64_t DMAC_bitfield:1;
			uint64_t USB:1;
		} __attribute__((packed)) B;
	} PM_APBBMASK;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PAC2_bitfield:1;
			uint64_t EVSYS_bitfield:1;
			uint64_t SERCOM0:1;
			uint64_t SERCOM1:1;
			uint64_t SERCOM2:1;
			uint64_t SERCOM3:1;
			uint64_t SERCOM4:1;
			uint64_t SERCOM5:1;
			uint64_t TCC0_bitfield:1;
			uint64_t TCC1_bitfield:1;
			uint64_t TCC2_bitfield:1;
			uint64_t TC3:1;
			uint64_t TC4:1;
			uint64_t TC5:1;
			uint64_t TC6:1;
			uint64_t TC7:1;
			uint64_t ADC_bitfield:1;
			uint64_t AC_bitfield:1;
			uint64_t DAC_bitfield:1;
			uint64_t reservedSpace0:1;
			uint64_t I2S_bitfield:1;
			uint64_t reservedSpace1:2;
			uint64_t ATW:1;
		} __attribute__((packed)) B;
	} PM_APBCMASK;

	uint8_t res2[16];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CKRDY:1;
			uint64_t CFD:1;
		} __attribute__((packed)) B;
	} PM_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CKRDY:1;
			uint64_t CFD:1;
		} __attribute__((packed)) B;
	} PM_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CKRDY:1;
			uint64_t CFD:1;
		} __attribute__((packed)) B;
	} PM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t POR:1;
			uint64_t BOD12:1;
			uint64_t BOD33:1;
			uint64_t reservedSpace0:1;
			uint64_t EXT:1;
			uint64_t WDT_bitfield:1;
			uint64_t SYST:1;
		} __attribute__((packed)) B;
	} PM_RCAUSE;

} __attribute__((packed));

#define PM (*(volatile struct PM_tag *) 0x40000400)

struct RTC_RTC_MODE0_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:3;
			uint64_t MATCHCLR:1;
			uint64_t PRESCALER:4;
		} __attribute__((packed)) B;
	} RTC_CTRL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:6;
			uint64_t reservedSpace0:8;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} RTC_READREQ;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PEREO0:1;
			uint64_t PEREO1:1;
			uint64_t PEREO2:1;
			uint64_t PEREO3:1;
			uint64_t PEREO4:1;
			uint64_t PEREO5:1;
			uint64_t PEREO6:1;
			uint64_t PEREO7:1;
			uint64_t CMPEO0:1;
			uint64_t reservedSpace0:6;
			uint64_t OVFEO:1;
		} __attribute__((packed)) B;
	} RTC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTFLAG;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} RTC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} RTC_DBGCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t VALUE:7;
			uint64_t SIGN:1;
		} __attribute__((packed)) B;
	} RTC_FREQCORR;

	uint8_t res1[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} RTC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COMP:32;
		} __attribute__((packed)) B;
	} RTC_COMP0;

} __attribute__((packed));

#define RTC_RTC_MODE0 (*(volatile struct RTC_RTC_MODE0_tag *) 0x40001400)

struct RTC_RTC_MODE1_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:4;
			uint64_t PRESCALER:4;
		} __attribute__((packed)) B;
	} RTC_CTRL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:6;
			uint64_t reservedSpace0:8;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} RTC_READREQ;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PEREO0:1;
			uint64_t PEREO1:1;
			uint64_t PEREO2:1;
			uint64_t PEREO3:1;
			uint64_t PEREO4:1;
			uint64_t PEREO5:1;
			uint64_t PEREO6:1;
			uint64_t PEREO7:1;
			uint64_t CMPEO0:1;
			uint64_t CMPEO1:1;
			uint64_t reservedSpace0:5;
			uint64_t OVFEO:1;
		} __attribute__((packed)) B;
	} RTC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t reservedSpace0:4;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t reservedSpace0:4;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t reservedSpace0:4;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTFLAG;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} RTC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} RTC_DBGCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t VALUE:7;
			uint64_t SIGN:1;
		} __attribute__((packed)) B;
	} RTC_FREQCORR;

	uint8_t res1[3];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} RTC_COUNT;

	uint8_t res2[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PER:16;
		} __attribute__((packed)) B;
	} RTC_PER;

	uint8_t res3[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COMP:16;
		} __attribute__((packed)) B;
	} RTC_COMP0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COMP:16;
		} __attribute__((packed)) B;
	} RTC_COMP1;

} __attribute__((packed));

#define RTC_RTC_MODE1 (*(volatile struct RTC_RTC_MODE1_tag *) 0x40001400)

struct RTC_RTC_MODE2_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:2;
			uint64_t CLKREP:1;
			uint64_t MATCHCLR:1;
			uint64_t PRESCALER:4;
		} __attribute__((packed)) B;
	} RTC_CTRL;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:6;
			uint64_t reservedSpace0:8;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} RTC_READREQ;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PEREO0:1;
			uint64_t PEREO1:1;
			uint64_t PEREO2:1;
			uint64_t PEREO3:1;
			uint64_t PEREO4:1;
			uint64_t PEREO5:1;
			uint64_t PEREO6:1;
			uint64_t PEREO7:1;
			uint64_t ALARMEO0:1;
			uint64_t reservedSpace0:6;
			uint64_t OVFEO:1;
		} __attribute__((packed)) B;
	} RTC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t ALARM0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t ALARM0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t ALARM0:1;
			uint64_t reservedSpace0:5;
			uint64_t SYNCRDY:1;
			uint64_t OVF:1;
		} __attribute__((packed)) B;
	} RTC_INTFLAG;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} RTC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} RTC_DBGCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t VALUE:7;
			uint64_t SIGN:1;
		} __attribute__((packed)) B;
	} RTC_FREQCORR;

	uint8_t res1[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SECOND:6;
			uint64_t MINUTE:6;
			uint64_t HOUR:5;
			uint64_t DAY:5;
			uint64_t MONTH:4;
			uint64_t YEAR:6;
		} __attribute__((packed)) B;
	} RTC_CLOCK;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SECOND:6;
			uint64_t MINUTE:6;
			uint64_t HOUR:5;
			uint64_t DAY:5;
			uint64_t MONTH:4;
			uint64_t YEAR:6;
		} __attribute__((packed)) B;
	} RTC_ALARM0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SEL:3;
		} __attribute__((packed)) B;
	} RTC_MASK0;

} __attribute__((packed));

#define RTC_RTC_MODE2 (*(volatile struct RTC_RTC_MODE2_tag *) 0x40001400)

struct SERCOM0_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM0_SERCOM_I2CM (*(volatile struct SERCOM0_SERCOM_I2CM_tag *) 0x42000800)

struct SERCOM0_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM0_SERCOM_I2CS (*(volatile struct SERCOM0_SERCOM_I2CS_tag *) 0x42000800)

struct SERCOM0_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM0_SERCOM_SPI (*(volatile struct SERCOM0_SERCOM_SPI_tag *) 0x42000800)

struct SERCOM0_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM0_SERCOM_USART (*(volatile struct SERCOM0_SERCOM_USART_tag *) 0x42000800)

struct SERCOM1_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM1_SERCOM_I2CM (*(volatile struct SERCOM1_SERCOM_I2CM_tag *) 0x42000c00)

struct SERCOM1_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM1_SERCOM_I2CS (*(volatile struct SERCOM1_SERCOM_I2CS_tag *) 0x42000c00)

struct SERCOM1_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM1_SERCOM_SPI (*(volatile struct SERCOM1_SERCOM_SPI_tag *) 0x42000c00)

struct SERCOM1_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM1_SERCOM_USART (*(volatile struct SERCOM1_SERCOM_USART_tag *) 0x42000c00)

struct SERCOM2_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM2_SERCOM_I2CM (*(volatile struct SERCOM2_SERCOM_I2CM_tag *) 0x42001000)

struct SERCOM2_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM2_SERCOM_I2CS (*(volatile struct SERCOM2_SERCOM_I2CS_tag *) 0x42001000)

struct SERCOM2_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM2_SERCOM_SPI (*(volatile struct SERCOM2_SERCOM_SPI_tag *) 0x42001000)

struct SERCOM2_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM2_SERCOM_USART (*(volatile struct SERCOM2_SERCOM_USART_tag *) 0x42001000)

struct SERCOM3_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM3_SERCOM_I2CM (*(volatile struct SERCOM3_SERCOM_I2CM_tag *) 0x42001400)

struct SERCOM3_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM3_SERCOM_I2CS (*(volatile struct SERCOM3_SERCOM_I2CS_tag *) 0x42001400)

struct SERCOM3_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM3_SERCOM_SPI (*(volatile struct SERCOM3_SERCOM_SPI_tag *) 0x42001400)

struct SERCOM3_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM3_SERCOM_USART (*(volatile struct SERCOM3_SERCOM_USART_tag *) 0x42001400)

struct SERCOM4_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM4_SERCOM_I2CM (*(volatile struct SERCOM4_SERCOM_I2CM_tag *) 0x42001800)

struct SERCOM4_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM4_SERCOM_I2CS (*(volatile struct SERCOM4_SERCOM_I2CS_tag *) 0x42001800)

struct SERCOM4_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM4_SERCOM_SPI (*(volatile struct SERCOM4_SERCOM_SPI_tag *) 0x42001800)

struct SERCOM4_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM4_SERCOM_USART (*(volatile struct SERCOM4_SERCOM_USART_tag *) 0x42001800)

struct SERCOM5_SERCOM_I2CM_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t MEXTTOEN:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace3:1;
			uint64_t SCLSM:1;
			uint64_t INACTOUT:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t QCEN:1;
			uint64_t reservedSpace1:6;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t BAUD:8;
			uint64_t BAUDLOW:8;
			uint64_t HSBAUD:8;
			uint64_t HSBAUDLOW:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t MB:1;
			uint64_t SB:1;
			uint64_t reservedSpace0:5;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t ARBLOST:1;
			uint64_t RXNACK:1;
			uint64_t reservedSpace0:1;
			uint64_t BUSSTATE:2;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t MEXTTOUT:1;
			uint64_t SEXTTOUT:1;
			uint64_t LENERR:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t SYSOP:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:11;
			uint64_t reservedSpace0:2;
			uint64_t LENEN:1;
			uint64_t HS:1;
			uint64_t TENBITEN:1;
			uint64_t LEN:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM5_SERCOM_I2CM (*(volatile struct SERCOM5_SERCOM_I2CM_tag *) 0x42001c00)

struct SERCOM5_SERCOM_I2CS_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace1:8;
			uint64_t PINOUT:1;
			uint64_t reservedSpace2:3;
			uint64_t SDAHOLD:2;
			uint64_t reservedSpace3:1;
			uint64_t SEXTTOEN:1;
			uint64_t SPEED:2;
			uint64_t reservedSpace4:1;
			uint64_t SCLSM:1;
			uint64_t reservedSpace5:2;
			uint64_t LOWTOUTEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:8;
			uint64_t SMEN:1;
			uint64_t GCMD:1;
			uint64_t AACKEN:1;
			uint64_t reservedSpace1:3;
			uint64_t AMODE:2;
			uint64_t CMD:2;
			uint64_t ACKACT:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[12];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res1[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PREC:1;
			uint64_t AMATCH:1;
			uint64_t DRDY:1;
			uint64_t reservedSpace0:4;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res3[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t BUSERR:1;
			uint64_t COLL:1;
			uint64_t RXNACK:1;
			uint64_t DIR:1;
			uint64_t SR:1;
			uint64_t reservedSpace0:1;
			uint64_t LOWTOUT:1;
			uint64_t CLKHOLD:1;
			uint64_t reservedSpace1:1;
			uint64_t SEXTTOUT:1;
			uint64_t HS:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res4[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t GENCEN:1;
			uint64_t ADDR:10;
			uint64_t reservedSpace0:4;
			uint64_t TENBITEN:1;
			uint64_t reservedSpace1:1;
			uint64_t ADDRMASK:10;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DATA:8;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res5[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM5_SERCOM_I2CS (*(volatile struct SERCOM5_SERCOM_I2CS_tag *) 0x42001c00)

struct SERCOM5_SERCOM_SPI_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:7;
			uint64_t DOPO:2;
			uint64_t reservedSpace2:2;
			uint64_t DIPO:2;
			uint64_t reservedSpace3:2;
			uint64_t FORM:4;
			uint64_t CPHA:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t PLOADEN:1;
			uint64_t reservedSpace1:2;
			uint64_t SSDE:1;
			uint64_t reservedSpace2:3;
			uint64_t MSSEN:1;
			uint64_t AMODE:2;
			uint64_t reservedSpace3:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BAUD:8;
		} __attribute__((packed)) B;
	} SERCOM_BAUD;

	uint8_t res1[7];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t SSL:1;
			uint64_t reservedSpace0:3;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t BUFOVF:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t ADDR:8;
			uint64_t reservedSpace0:8;
			uint64_t ADDRMASK:8;
		} __attribute__((packed)) B;
	} SERCOM_ADDR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[4];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM5_SERCOM_SPI (*(volatile struct SERCOM5_SERCOM_SPI_tag *) 0x42001c00)

struct SERCOM5_SERCOM_USART_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:3;
			uint64_t reservedSpace0:2;
			uint64_t RUNSTDBY:1;
			uint64_t IBON:1;
			uint64_t reservedSpace1:4;
			uint64_t SAMPR:3;
			uint64_t TXPO:2;
			uint64_t reservedSpace2:2;
			uint64_t RXPO:2;
			uint64_t SAMPA:2;
			uint64_t FORM:4;
			uint64_t CMODE:1;
			uint64_t CPOL:1;
			uint64_t DORD:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CHSIZE:3;
			uint64_t reservedSpace0:3;
			uint64_t SBMODE:1;
			uint64_t reservedSpace1:1;
			uint64_t COLDEN:1;
			uint64_t SFDE:1;
			uint64_t ENC:1;
			uint64_t reservedSpace2:2;
			uint64_t PMODE:1;
			uint64_t reservedSpace3:2;
			uint64_t TXEN:1;
			uint64_t RXEN:1;
		} __attribute__((packed)) B;
	} SERCOM_CTRLB;

	uint8_t res0[4];

	union
	{
		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_0;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_1;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:13;
				uint64_t FP:3;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_2;

		union
		{
			uint16_t R;
			struct
			{
				uint64_t BAUD:16;
			} __attribute__((packed)) B;
		} SERCOM_BAUD_3;

	} SERCOM_BAUD_0_SERCOM_BAUD_1_SERCOM_BAUD_2_SERCOM_BAUD_3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t RXPL:8;
		} __attribute__((packed)) B;
	} SERCOM_RXPL;

	uint8_t res1[5];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENCLR;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTENSET;

	uint8_t res3[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DRE:1;
			uint64_t TXC:1;
			uint64_t RXC:1;
			uint64_t RXS:1;
			uint64_t CTSIC:1;
			uint64_t RXBRK:1;
			uint64_t reservedSpace0:1;
			uint64_t ERROR:1;
		} __attribute__((packed)) B;
	} SERCOM_INTFLAG;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PERR:1;
			uint64_t FERR:1;
			uint64_t BUFOVF:1;
			uint64_t CTS:1;
			uint64_t ISF:1;
			uint64_t COLL:1;
		} __attribute__((packed)) B;
	} SERCOM_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
		} __attribute__((packed)) B;
	} SERCOM_SYNCBUSY;

	uint8_t res5[8];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DATA:9;
		} __attribute__((packed)) B;
	} SERCOM_DATA;

	uint8_t res6[6];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGSTOP:1;
		} __attribute__((packed)) B;
	} SERCOM_DBGCTRL;

} __attribute__((packed));

#define SERCOM5_SERCOM_USART (*(volatile struct SERCOM5_SERCOM_USART_tag *) 0x42001c00)

struct SYSCTRL_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t XOSCRDY:1;
			uint64_t XOSC32KRDY:1;
			uint64_t OSC32KRDY:1;
			uint64_t OSC8MRDY:1;
			uint64_t DFLLRDY:1;
			uint64_t DFLLOOB:1;
			uint64_t DFLLLCKF:1;
			uint64_t DFLLLCKC:1;
			uint64_t DFLLRCS:1;
			uint64_t BOD33RDY:1;
			uint64_t BOD33DET:1;
			uint64_t B33SRDY:1;
			uint64_t reservedSpace0:3;
			uint64_t DPLLLCKR:1;
			uint64_t DPLLLCKF:1;
			uint64_t DPLLLTO:1;
		} __attribute__((packed)) B;
	} SYSCTRL_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t XOSCRDY:1;
			uint64_t XOSC32KRDY:1;
			uint64_t OSC32KRDY:1;
			uint64_t OSC8MRDY:1;
			uint64_t DFLLRDY:1;
			uint64_t DFLLOOB:1;
			uint64_t DFLLLCKF:1;
			uint64_t DFLLLCKC:1;
			uint64_t DFLLRCS:1;
			uint64_t BOD33RDY:1;
			uint64_t BOD33DET:1;
			uint64_t B33SRDY:1;
			uint64_t reservedSpace0:3;
			uint64_t DPLLLCKR:1;
			uint64_t DPLLLCKF:1;
			uint64_t DPLLLTO:1;
		} __attribute__((packed)) B;
	} SYSCTRL_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t XOSCRDY:1;
			uint64_t XOSC32KRDY:1;
			uint64_t OSC32KRDY:1;
			uint64_t OSC8MRDY:1;
			uint64_t DFLLRDY:1;
			uint64_t DFLLOOB:1;
			uint64_t DFLLLCKF:1;
			uint64_t DFLLLCKC:1;
			uint64_t DFLLRCS:1;
			uint64_t BOD33RDY:1;
			uint64_t BOD33DET:1;
			uint64_t B33SRDY:1;
			uint64_t reservedSpace0:3;
			uint64_t DPLLLCKR:1;
			uint64_t DPLLLCKF:1;
			uint64_t DPLLLTO:1;
		} __attribute__((packed)) B;
	} SYSCTRL_INTFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t XOSCRDY:1;
			uint64_t XOSC32KRDY:1;
			uint64_t OSC32KRDY:1;
			uint64_t OSC8MRDY:1;
			uint64_t DFLLRDY:1;
			uint64_t DFLLOOB:1;
			uint64_t DFLLLCKF:1;
			uint64_t DFLLLCKC:1;
			uint64_t DFLLRCS:1;
			uint64_t BOD33RDY:1;
			uint64_t BOD33DET:1;
			uint64_t B33SRDY:1;
			uint64_t reservedSpace0:3;
			uint64_t DPLLLCKR:1;
			uint64_t DPLLLCKF:1;
			uint64_t DPLLLTO:1;
		} __attribute__((packed)) B;
	} SYSCTRL_PCLKSR;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t XTALEN:1;
			uint64_t reservedSpace1:3;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
			uint64_t GAIN:3;
			uint64_t AMPGC:1;
			uint64_t STARTUP:4;
		} __attribute__((packed)) B;
	} SYSCTRL_XOSC;

	uint8_t res0[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t XTALEN:1;
			uint64_t EN32K:1;
			uint64_t EN1K:1;
			uint64_t AAMPEN:1;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
			uint64_t STARTUP:3;
			uint64_t reservedSpace1:1;
			uint64_t WRTLOCK:1;
		} __attribute__((packed)) B;
	} SYSCTRL_XOSC32K;

	uint8_t res1[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t EN32K:1;
			uint64_t EN1K:1;
			uint64_t reservedSpace1:2;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
			uint64_t STARTUP:3;
			uint64_t reservedSpace2:1;
			uint64_t WRTLOCK:1;
			uint64_t reservedSpace3:3;
			uint64_t CALIB:7;
		} __attribute__((packed)) B;
	} SYSCTRL_OSC32K;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CALIB:5;
			uint64_t reservedSpace0:2;
			uint64_t WRTLOCK:1;
		} __attribute__((packed)) B;
	} SYSCTRL_OSCULP32K;

	uint8_t res2[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t reservedSpace1:4;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
			uint64_t PRESC:2;
			uint64_t reservedSpace2:6;
			uint64_t CALIB:12;
			uint64_t reservedSpace3:2;
			uint64_t FRANGE:2;
		} __attribute__((packed)) B;
	} SYSCTRL_OSC8M;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t MODE:1;
			uint64_t STABLE:1;
			uint64_t LLAW:1;
			uint64_t USBCRM:1;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
			uint64_t CCDIS:1;
			uint64_t QLDIS:1;
			uint64_t BPLCKC:1;
			uint64_t WAITLOCK:1;
		} __attribute__((packed)) B;
	} SYSCTRL_DFLLCTRL;

	uint8_t res3[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t FINE:10;
			uint64_t COARSE:6;
			uint64_t DIFF:16;
		} __attribute__((packed)) B;
	} SYSCTRL_DFLLVAL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t MUL:16;
			uint64_t FSTEP:10;
			uint64_t CSTEP:6;
		} __attribute__((packed)) B;
	} SYSCTRL_DFLLMUL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t READREQ:1;
		} __attribute__((packed)) B;
	} SYSCTRL_DFLLSYNC;

	uint8_t res4[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t HYST:1;
			uint64_t ACTION:2;
			uint64_t reservedSpace1:1;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace2:1;
			uint64_t MODE:1;
			uint64_t CEN:1;
			uint64_t reservedSpace3:2;
			uint64_t PSEL:4;
			uint64_t LEVEL:6;
		} __attribute__((packed)) B;
	} SYSCTRL_BOD33;

	uint8_t res5[8];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t TSEN:1;
			uint64_t BGOUTEN:1;
			uint64_t reservedSpace1:13;
			uint64_t CALIB:11;
		} __attribute__((packed)) B;
	} SYSCTRL_VREF;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t reservedSpace1:4;
			uint64_t RUNSTDBY:1;
			uint64_t ONDEMAND:1;
		} __attribute__((packed)) B;
	} SYSCTRL_DPLLCTRLA;

	uint8_t res6[3];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t LDR:12;
			uint64_t reservedSpace0:4;
			uint64_t LDRFRAC:4;
		} __attribute__((packed)) B;
	} SYSCTRL_DPLLRATIO;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t FILTER:2;
			uint64_t LPEN:1;
			uint64_t WUF:1;
			uint64_t REFCLK:2;
			uint64_t reservedSpace0:2;
			uint64_t LTIME:3;
			uint64_t reservedSpace1:1;
			uint64_t LBYPASS:1;
			uint64_t reservedSpace2:3;
			uint64_t DIV:11;
		} __attribute__((packed)) B;
	} SYSCTRL_DPLLCTRLB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t LOCK:1;
			uint64_t CLKRDY:1;
			uint64_t ENABLE:1;
			uint64_t DIV:1;
		} __attribute__((packed)) B;
	} SYSCTRL_DPLLSTATUS;

} __attribute__((packed));

#define SYSCTRL (*(volatile struct SYSCTRL_tag *) 0x40000800)

struct TC3_TC_COUNT8_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COUNT:8;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:8;
		} __attribute__((packed)) B;
	} TC_PER;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC3_TC_COUNT8 (*(volatile struct TC3_TC_COUNT8_tag *) 0x42002c00)

struct TC3_TC_COUNT16_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[6];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC3_TC_COUNT16 (*(volatile struct TC3_TC_COUNT16_tag *) 0x42002c00)

struct TC3_TC_COUNT32_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC3_TC_COUNT32 (*(volatile struct TC3_TC_COUNT32_tag *) 0x42002c00)

struct TC4_TC_COUNT8_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COUNT:8;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:8;
		} __attribute__((packed)) B;
	} TC_PER;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC4_TC_COUNT8 (*(volatile struct TC4_TC_COUNT8_tag *) 0x42003000)

struct TC4_TC_COUNT16_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[6];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC4_TC_COUNT16 (*(volatile struct TC4_TC_COUNT16_tag *) 0x42003000)

struct TC4_TC_COUNT32_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC4_TC_COUNT32 (*(volatile struct TC4_TC_COUNT32_tag *) 0x42003000)

struct TC5_TC_COUNT8_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COUNT:8;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:8;
		} __attribute__((packed)) B;
	} TC_PER;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC5_TC_COUNT8 (*(volatile struct TC5_TC_COUNT8_tag *) 0x42003400)

struct TC5_TC_COUNT16_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[6];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC5_TC_COUNT16 (*(volatile struct TC5_TC_COUNT16_tag *) 0x42003400)

struct TC5_TC_COUNT32_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC5_TC_COUNT32 (*(volatile struct TC5_TC_COUNT32_tag *) 0x42003400)

struct TC6_TC_COUNT8_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COUNT:8;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:8;
		} __attribute__((packed)) B;
	} TC_PER;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC6_TC_COUNT8 (*(volatile struct TC6_TC_COUNT8_tag *) 0x42003800)

struct TC6_TC_COUNT16_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[6];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC6_TC_COUNT16 (*(volatile struct TC6_TC_COUNT16_tag *) 0x42003800)

struct TC6_TC_COUNT32_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC6_TC_COUNT32 (*(volatile struct TC6_TC_COUNT32_tag *) 0x42003800)

struct TC7_TC_COUNT8_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t COUNT:8;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:8;
		} __attribute__((packed)) B;
	} TC_PER;

	uint8_t res3[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CC:8;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC7_TC_COUNT8 (*(volatile struct TC7_TC_COUNT8_tag *) 0x42003c00)

struct TC7_TC_COUNT16_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t COUNT:16;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[6];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t CC:16;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC7_TC_COUNT16 (*(volatile struct TC7_TC_COUNT16_tag *) 0x42003c00)

struct TC7_TC_COUNT32_tag
{
	union
	{
		uint16_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t MODE:2;
			uint64_t reservedSpace0:1;
			uint64_t WAVEGEN:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
		} __attribute__((packed)) B;
	} TC_CTRLA;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t ADDR:5;
			uint64_t reservedSpace0:9;
			uint64_t RCONT:1;
			uint64_t RREQ:1;
		} __attribute__((packed)) B;
	} TC_READREQ;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t reservedSpace0:1;
			uint64_t ONESHOT:1;
			uint64_t reservedSpace1:3;
			uint64_t CMD:2;
		} __attribute__((packed)) B;
	} TC_CTRLBSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t reservedSpace0:2;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
		} __attribute__((packed)) B;
	} TC_CTRLC;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
		} __attribute__((packed)) B;
	} TC_DBGCTRL;

	uint8_t res1[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EVACT:3;
			uint64_t reservedSpace0:1;
			uint64_t TCINV:1;
			uint64_t TCEI:1;
			uint64_t reservedSpace1:2;
			uint64_t OVFEO:1;
			uint64_t reservedSpace2:3;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
		} __attribute__((packed)) B;
	} TC_EVCTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:1;
			uint64_t SYNCRDY:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
		} __attribute__((packed)) B;
	} TC_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:3;
			uint64_t STOP:1;
			uint64_t SLAVE:1;
			uint64_t reservedSpace1:2;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} TC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:32;
		} __attribute__((packed)) B;
	} TC_COUNT;

	uint8_t res2[4];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:32;
		} __attribute__((packed)) B;
	} TC_CC1;

} __attribute__((packed));

#define TC7_TC_COUNT32 (*(volatile struct TC7_TC_COUNT32_tag *) 0x42003c00)

struct TCC0_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t reservedSpace0:3;
			uint64_t RESOLUTION:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
			uint64_t ALOCK:1;
			uint64_t MSYNC:1;
			uint64_t reservedSpace2:8;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
			uint64_t CPTEN2:1;
			uint64_t CPTEN3:1;
		} __attribute__((packed)) B;
	} TCC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBSET;

	uint8_t res0[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
			uint64_t STATUS:1;
			uint64_t COUNT:1;
			uint64_t PATT:1;
			uint64_t WAVE:1;
			uint64_t PER:1;
			uint64_t CC0:1;
			uint64_t CC1:1;
			uint64_t CC2:1;
			uint64_t CC3:1;
			uint64_t reservedSpace0:4;
			uint64_t PATTB:1;
			uint64_t WAVEB:1;
			uint64_t PERB:1;
			uint64_t CCB0:1;
			uint64_t CCB1:1;
			uint64_t CCB2:1;
			uint64_t CCB3:1;
		} __attribute__((packed)) B;
	} TCC_SYNCBUSY;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OTMX:2;
			uint64_t reservedSpace0:6;
			uint64_t DTIEN0:1;
			uint64_t DTIEN1:1;
			uint64_t DTIEN2:1;
			uint64_t DTIEN3:1;
			uint64_t reservedSpace1:4;
			uint64_t DTLS:8;
			uint64_t DTHS:8;
		} __attribute__((packed)) B;
	} TCC_WEXCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t NRE0:1;
			uint64_t NRE1:1;
			uint64_t NRE2:1;
			uint64_t NRE3:1;
			uint64_t NRE4:1;
			uint64_t NRE5:1;
			uint64_t NRE6:1;
			uint64_t NRE7:1;
			uint64_t NRV0:1;
			uint64_t NRV1:1;
			uint64_t NRV2:1;
			uint64_t NRV3:1;
			uint64_t NRV4:1;
			uint64_t NRV5:1;
			uint64_t NRV6:1;
			uint64_t NRV7:1;
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t INVEN2:1;
			uint64_t INVEN3:1;
			uint64_t INVEN4:1;
			uint64_t INVEN5:1;
			uint64_t INVEN6:1;
			uint64_t INVEN7:1;
			uint64_t FILTERVAL0:4;
			uint64_t FILTERVAL1:4;
		} __attribute__((packed)) B;
	} TCC_DRVCTRL;

	uint8_t res1[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
			uint64_t reservedSpace0:1;
			uint64_t FDDBD:1;
		} __attribute__((packed)) B;
	} TCC_DBGCTRL;

	uint8_t res2[1];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EVACT0:3;
			uint64_t EVACT1:3;
			uint64_t CNTSEL:2;
			uint64_t OVFEO:1;
			uint64_t TRGEO:1;
			uint64_t CNTEO:1;
			uint64_t reservedSpace0:1;
			uint64_t TCINV0:1;
			uint64_t TCINV1:1;
			uint64_t TCEI0:1;
			uint64_t TCEI1:1;
			uint64_t MCEI0:1;
			uint64_t MCEI1:1;
			uint64_t MCEI2:1;
			uint64_t MCEI3:1;
			uint64_t reservedSpace1:4;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
			uint64_t MCEO2:1;
			uint64_t MCEO3:1;
		} __attribute__((packed)) B;
	} TCC_EVCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t STOP:1;
			uint64_t IDX:1;
			uint64_t reservedSpace0:1;
			uint64_t DFS:1;
			uint64_t reservedSpace1:1;
			uint64_t PATTBV:1;
			uint64_t WAVEBV:1;
			uint64_t PERBV:1;
			uint64_t FAULTAIN:1;
			uint64_t FAULTBIN:1;
			uint64_t FAULT0IN:1;
			uint64_t FAULT1IN:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t CCBV0:1;
			uint64_t CCBV1:1;
			uint64_t CCBV2:1;
			uint64_t CCBV3:1;
			uint64_t reservedSpace2:4;
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t CMP2:1;
			uint64_t CMP3:1;
		} __attribute__((packed)) B;
	} TCC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:24;
		} __attribute__((packed)) B;
	} TCC_COUNT;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGE0:1;
			uint64_t PGE1:1;
			uint64_t PGE2:1;
			uint64_t PGE3:1;
			uint64_t PGE4:1;
			uint64_t PGE5:1;
			uint64_t PGE6:1;
			uint64_t PGE7:1;
			uint64_t PGV0:1;
			uint64_t PGV1:1;
			uint64_t PGV2:1;
			uint64_t PGV3:1;
			uint64_t PGV4:1;
			uint64_t PGV5:1;
			uint64_t PGV6:1;
			uint64_t PGV7:1;
		} __attribute__((packed)) B;
	} TCC_PATT;

	uint8_t res3[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGEN:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMP:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPEREN:1;
			uint64_t CICCEN0:1;
			uint64_t CICCEN1:1;
			uint64_t CICCEN2:1;
			uint64_t CICCEN3:1;
			uint64_t reservedSpace2:4;
			uint64_t POL0:1;
			uint64_t POL1:1;
			uint64_t POL2:1;
			uint64_t POL3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAP0:1;
			uint64_t SWAP1:1;
			uint64_t SWAP2:1;
			uint64_t SWAP3:1;
		} __attribute__((packed)) B;
	} TCC_WAVE;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PER:24;
		} __attribute__((packed)) B;
	} TCC_PER;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC3;

	uint8_t res4[16];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGEB0:1;
			uint64_t PGEB1:1;
			uint64_t PGEB2:1;
			uint64_t PGEB3:1;
			uint64_t PGEB4:1;
			uint64_t PGEB5:1;
			uint64_t PGEB6:1;
			uint64_t PGEB7:1;
			uint64_t PGVB0:1;
			uint64_t PGVB1:1;
			uint64_t PGVB2:1;
			uint64_t PGVB3:1;
			uint64_t PGVB4:1;
			uint64_t PGVB5:1;
			uint64_t PGVB6:1;
			uint64_t PGVB7:1;
		} __attribute__((packed)) B;
	} TCC_PATTB;

	uint8_t res5[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGENB:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMPB:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPERENB:1;
			uint64_t CICCENB0:1;
			uint64_t CICCENB1:1;
			uint64_t CICCENB2:1;
			uint64_t CICCENB3:1;
			uint64_t reservedSpace2:4;
			uint64_t POLB0:1;
			uint64_t POLB1:1;
			uint64_t POLB2:1;
			uint64_t POLB3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAPB0:1;
			uint64_t SWAPB1:1;
			uint64_t SWAPB2:1;
			uint64_t SWAPB3:1;
		} __attribute__((packed)) B;
	} TCC_WAVEB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PERB:24;
		} __attribute__((packed)) B;
	} TCC_PERB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB3;

} __attribute__((packed));

#define TCC0 (*(volatile struct TCC0_tag *) 0x42002000)

struct TCC1_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t reservedSpace0:3;
			uint64_t RESOLUTION:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
			uint64_t ALOCK:1;
			uint64_t MSYNC:1;
			uint64_t reservedSpace2:8;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
			uint64_t CPTEN2:1;
			uint64_t CPTEN3:1;
		} __attribute__((packed)) B;
	} TCC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBSET;

	uint8_t res0[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
			uint64_t STATUS:1;
			uint64_t COUNT:1;
			uint64_t PATT:1;
			uint64_t WAVE:1;
			uint64_t PER:1;
			uint64_t CC0:1;
			uint64_t CC1:1;
			uint64_t CC2:1;
			uint64_t CC3:1;
			uint64_t reservedSpace0:4;
			uint64_t PATTB:1;
			uint64_t WAVEB:1;
			uint64_t PERB:1;
			uint64_t CCB0:1;
			uint64_t CCB1:1;
			uint64_t CCB2:1;
			uint64_t CCB3:1;
		} __attribute__((packed)) B;
	} TCC_SYNCBUSY;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OTMX:2;
			uint64_t reservedSpace0:6;
			uint64_t DTIEN0:1;
			uint64_t DTIEN1:1;
			uint64_t DTIEN2:1;
			uint64_t DTIEN3:1;
			uint64_t reservedSpace1:4;
			uint64_t DTLS:8;
			uint64_t DTHS:8;
		} __attribute__((packed)) B;
	} TCC_WEXCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t NRE0:1;
			uint64_t NRE1:1;
			uint64_t NRE2:1;
			uint64_t NRE3:1;
			uint64_t NRE4:1;
			uint64_t NRE5:1;
			uint64_t NRE6:1;
			uint64_t NRE7:1;
			uint64_t NRV0:1;
			uint64_t NRV1:1;
			uint64_t NRV2:1;
			uint64_t NRV3:1;
			uint64_t NRV4:1;
			uint64_t NRV5:1;
			uint64_t NRV6:1;
			uint64_t NRV7:1;
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t INVEN2:1;
			uint64_t INVEN3:1;
			uint64_t INVEN4:1;
			uint64_t INVEN5:1;
			uint64_t INVEN6:1;
			uint64_t INVEN7:1;
			uint64_t FILTERVAL0:4;
			uint64_t FILTERVAL1:4;
		} __attribute__((packed)) B;
	} TCC_DRVCTRL;

	uint8_t res1[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
			uint64_t reservedSpace0:1;
			uint64_t FDDBD:1;
		} __attribute__((packed)) B;
	} TCC_DBGCTRL;

	uint8_t res2[1];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EVACT0:3;
			uint64_t EVACT1:3;
			uint64_t CNTSEL:2;
			uint64_t OVFEO:1;
			uint64_t TRGEO:1;
			uint64_t CNTEO:1;
			uint64_t reservedSpace0:1;
			uint64_t TCINV0:1;
			uint64_t TCINV1:1;
			uint64_t TCEI0:1;
			uint64_t TCEI1:1;
			uint64_t MCEI0:1;
			uint64_t MCEI1:1;
			uint64_t MCEI2:1;
			uint64_t MCEI3:1;
			uint64_t reservedSpace1:4;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
			uint64_t MCEO2:1;
			uint64_t MCEO3:1;
		} __attribute__((packed)) B;
	} TCC_EVCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t STOP:1;
			uint64_t IDX:1;
			uint64_t reservedSpace0:1;
			uint64_t DFS:1;
			uint64_t reservedSpace1:1;
			uint64_t PATTBV:1;
			uint64_t WAVEBV:1;
			uint64_t PERBV:1;
			uint64_t FAULTAIN:1;
			uint64_t FAULTBIN:1;
			uint64_t FAULT0IN:1;
			uint64_t FAULT1IN:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t CCBV0:1;
			uint64_t CCBV1:1;
			uint64_t CCBV2:1;
			uint64_t CCBV3:1;
			uint64_t reservedSpace2:4;
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t CMP2:1;
			uint64_t CMP3:1;
		} __attribute__((packed)) B;
	} TCC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:24;
		} __attribute__((packed)) B;
	} TCC_COUNT;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGE0:1;
			uint64_t PGE1:1;
			uint64_t PGE2:1;
			uint64_t PGE3:1;
			uint64_t PGE4:1;
			uint64_t PGE5:1;
			uint64_t PGE6:1;
			uint64_t PGE7:1;
			uint64_t PGV0:1;
			uint64_t PGV1:1;
			uint64_t PGV2:1;
			uint64_t PGV3:1;
			uint64_t PGV4:1;
			uint64_t PGV5:1;
			uint64_t PGV6:1;
			uint64_t PGV7:1;
		} __attribute__((packed)) B;
	} TCC_PATT;

	uint8_t res3[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGEN:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMP:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPEREN:1;
			uint64_t CICCEN0:1;
			uint64_t CICCEN1:1;
			uint64_t CICCEN2:1;
			uint64_t CICCEN3:1;
			uint64_t reservedSpace2:4;
			uint64_t POL0:1;
			uint64_t POL1:1;
			uint64_t POL2:1;
			uint64_t POL3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAP0:1;
			uint64_t SWAP1:1;
			uint64_t SWAP2:1;
			uint64_t SWAP3:1;
		} __attribute__((packed)) B;
	} TCC_WAVE;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PER:24;
		} __attribute__((packed)) B;
	} TCC_PER;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC3;

	uint8_t res4[16];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGEB0:1;
			uint64_t PGEB1:1;
			uint64_t PGEB2:1;
			uint64_t PGEB3:1;
			uint64_t PGEB4:1;
			uint64_t PGEB5:1;
			uint64_t PGEB6:1;
			uint64_t PGEB7:1;
			uint64_t PGVB0:1;
			uint64_t PGVB1:1;
			uint64_t PGVB2:1;
			uint64_t PGVB3:1;
			uint64_t PGVB4:1;
			uint64_t PGVB5:1;
			uint64_t PGVB6:1;
			uint64_t PGVB7:1;
		} __attribute__((packed)) B;
	} TCC_PATTB;

	uint8_t res5[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGENB:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMPB:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPERENB:1;
			uint64_t CICCENB0:1;
			uint64_t CICCENB1:1;
			uint64_t CICCENB2:1;
			uint64_t CICCENB3:1;
			uint64_t reservedSpace2:4;
			uint64_t POLB0:1;
			uint64_t POLB1:1;
			uint64_t POLB2:1;
			uint64_t POLB3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAPB0:1;
			uint64_t SWAPB1:1;
			uint64_t SWAPB2:1;
			uint64_t SWAPB3:1;
		} __attribute__((packed)) B;
	} TCC_WAVEB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PERB:24;
		} __attribute__((packed)) B;
	} TCC_PERB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB3;

} __attribute__((packed));

#define TCC1 (*(volatile struct TCC1_tag *) 0x42002400)

struct TCC2_tag
{
	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t reservedSpace0:3;
			uint64_t RESOLUTION:2;
			uint64_t reservedSpace1:1;
			uint64_t PRESCALER:3;
			uint64_t RUNSTDBY:1;
			uint64_t PRESCSYNC:2;
			uint64_t ALOCK:1;
			uint64_t MSYNC:1;
			uint64_t reservedSpace2:8;
			uint64_t CPTEN0:1;
			uint64_t CPTEN1:1;
			uint64_t CPTEN2:1;
			uint64_t CPTEN3:1;
		} __attribute__((packed)) B;
	} TCC_CTRLA;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DIR:1;
			uint64_t LUPD:1;
			uint64_t ONESHOT:1;
			uint64_t IDXCMD:2;
			uint64_t CMD:3;
		} __attribute__((packed)) B;
	} TCC_CTRLBSET;

	uint8_t res0[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t CTRLB:1;
			uint64_t STATUS:1;
			uint64_t COUNT:1;
			uint64_t PATT:1;
			uint64_t WAVE:1;
			uint64_t PER:1;
			uint64_t CC0:1;
			uint64_t CC1:1;
			uint64_t CC2:1;
			uint64_t CC3:1;
			uint64_t reservedSpace0:4;
			uint64_t PATTB:1;
			uint64_t WAVEB:1;
			uint64_t PERB:1;
			uint64_t CCB0:1;
			uint64_t CCB1:1;
			uint64_t CCB2:1;
			uint64_t CCB3:1;
		} __attribute__((packed)) B;
	} TCC_SYNCBUSY;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLA;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t SRC:2;
			uint64_t reservedSpace0:1;
			uint64_t KEEP:1;
			uint64_t QUAL:1;
			uint64_t BLANK:2;
			uint64_t RESTART:1;
			uint64_t HALT:2;
			uint64_t CHSEL:2;
			uint64_t CAPTURE:3;
			uint64_t reservedSpace1:1;
			uint64_t BLANKVAL:8;
			uint64_t FILTERVAL:4;
		} __attribute__((packed)) B;
	} TCC_FCTRLB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OTMX:2;
			uint64_t reservedSpace0:6;
			uint64_t DTIEN0:1;
			uint64_t DTIEN1:1;
			uint64_t DTIEN2:1;
			uint64_t DTIEN3:1;
			uint64_t reservedSpace1:4;
			uint64_t DTLS:8;
			uint64_t DTHS:8;
		} __attribute__((packed)) B;
	} TCC_WEXCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t NRE0:1;
			uint64_t NRE1:1;
			uint64_t NRE2:1;
			uint64_t NRE3:1;
			uint64_t NRE4:1;
			uint64_t NRE5:1;
			uint64_t NRE6:1;
			uint64_t NRE7:1;
			uint64_t NRV0:1;
			uint64_t NRV1:1;
			uint64_t NRV2:1;
			uint64_t NRV3:1;
			uint64_t NRV4:1;
			uint64_t NRV5:1;
			uint64_t NRV6:1;
			uint64_t NRV7:1;
			uint64_t INVEN0:1;
			uint64_t INVEN1:1;
			uint64_t INVEN2:1;
			uint64_t INVEN3:1;
			uint64_t INVEN4:1;
			uint64_t INVEN5:1;
			uint64_t INVEN6:1;
			uint64_t INVEN7:1;
			uint64_t FILTERVAL0:4;
			uint64_t FILTERVAL1:4;
		} __attribute__((packed)) B;
	} TCC_DRVCTRL;

	uint8_t res1[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DBGRUN:1;
			uint64_t reservedSpace0:1;
			uint64_t FDDBD:1;
		} __attribute__((packed)) B;
	} TCC_DBGCTRL;

	uint8_t res2[1];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t EVACT0:3;
			uint64_t EVACT1:3;
			uint64_t CNTSEL:2;
			uint64_t OVFEO:1;
			uint64_t TRGEO:1;
			uint64_t CNTEO:1;
			uint64_t reservedSpace0:1;
			uint64_t TCINV0:1;
			uint64_t TCINV1:1;
			uint64_t TCEI0:1;
			uint64_t TCEI1:1;
			uint64_t MCEI0:1;
			uint64_t MCEI1:1;
			uint64_t MCEI2:1;
			uint64_t MCEI3:1;
			uint64_t reservedSpace1:4;
			uint64_t MCEO0:1;
			uint64_t MCEO1:1;
			uint64_t MCEO2:1;
			uint64_t MCEO3:1;
		} __attribute__((packed)) B;
	} TCC_EVCTRL;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENCLR;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTENSET;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t OVF:1;
			uint64_t TRG:1;
			uint64_t CNT:1;
			uint64_t ERR:1;
			uint64_t reservedSpace0:7;
			uint64_t DFS:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t MC0:1;
			uint64_t MC1:1;
			uint64_t MC2:1;
			uint64_t MC3:1;
		} __attribute__((packed)) B;
	} TCC_INTFLAG;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t STOP:1;
			uint64_t IDX:1;
			uint64_t reservedSpace0:1;
			uint64_t DFS:1;
			uint64_t reservedSpace1:1;
			uint64_t PATTBV:1;
			uint64_t WAVEBV:1;
			uint64_t PERBV:1;
			uint64_t FAULTAIN:1;
			uint64_t FAULTBIN:1;
			uint64_t FAULT0IN:1;
			uint64_t FAULT1IN:1;
			uint64_t FAULTA:1;
			uint64_t FAULTB:1;
			uint64_t FAULT0:1;
			uint64_t FAULT1:1;
			uint64_t CCBV0:1;
			uint64_t CCBV1:1;
			uint64_t CCBV2:1;
			uint64_t CCBV3:1;
			uint64_t reservedSpace2:4;
			uint64_t CMP0:1;
			uint64_t CMP1:1;
			uint64_t CMP2:1;
			uint64_t CMP3:1;
		} __attribute__((packed)) B;
	} TCC_STATUS;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t COUNT:24;
		} __attribute__((packed)) B;
	} TCC_COUNT;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGE0:1;
			uint64_t PGE1:1;
			uint64_t PGE2:1;
			uint64_t PGE3:1;
			uint64_t PGE4:1;
			uint64_t PGE5:1;
			uint64_t PGE6:1;
			uint64_t PGE7:1;
			uint64_t PGV0:1;
			uint64_t PGV1:1;
			uint64_t PGV2:1;
			uint64_t PGV3:1;
			uint64_t PGV4:1;
			uint64_t PGV5:1;
			uint64_t PGV6:1;
			uint64_t PGV7:1;
		} __attribute__((packed)) B;
	} TCC_PATT;

	uint8_t res3[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGEN:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMP:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPEREN:1;
			uint64_t CICCEN0:1;
			uint64_t CICCEN1:1;
			uint64_t CICCEN2:1;
			uint64_t CICCEN3:1;
			uint64_t reservedSpace2:4;
			uint64_t POL0:1;
			uint64_t POL1:1;
			uint64_t POL2:1;
			uint64_t POL3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAP0:1;
			uint64_t SWAP1:1;
			uint64_t SWAP2:1;
			uint64_t SWAP3:1;
		} __attribute__((packed)) B;
	} TCC_WAVE;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PER:24;
		} __attribute__((packed)) B;
	} TCC_PER;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CC:24;
		} __attribute__((packed)) B;
	} TCC_CC3;

	uint8_t res4[16];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t PGEB0:1;
			uint64_t PGEB1:1;
			uint64_t PGEB2:1;
			uint64_t PGEB3:1;
			uint64_t PGEB4:1;
			uint64_t PGEB5:1;
			uint64_t PGEB6:1;
			uint64_t PGEB7:1;
			uint64_t PGVB0:1;
			uint64_t PGVB1:1;
			uint64_t PGVB2:1;
			uint64_t PGVB3:1;
			uint64_t PGVB4:1;
			uint64_t PGVB5:1;
			uint64_t PGVB6:1;
			uint64_t PGVB7:1;
		} __attribute__((packed)) B;
	} TCC_PATTB;

	uint8_t res5[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t WAVEGENB:3;
			uint64_t reservedSpace0:1;
			uint64_t RAMPB:2;
			uint64_t reservedSpace1:1;
			uint64_t CIPERENB:1;
			uint64_t CICCENB0:1;
			uint64_t CICCENB1:1;
			uint64_t CICCENB2:1;
			uint64_t CICCENB3:1;
			uint64_t reservedSpace2:4;
			uint64_t POLB0:1;
			uint64_t POLB1:1;
			uint64_t POLB2:1;
			uint64_t POLB3:1;
			uint64_t reservedSpace3:4;
			uint64_t SWAPB0:1;
			uint64_t SWAPB1:1;
			uint64_t SWAPB2:1;
			uint64_t SWAPB3:1;
		} __attribute__((packed)) B;
	} TCC_WAVEB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t PERB:24;
		} __attribute__((packed)) B;
	} TCC_PERB;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB0;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB1;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB2;

	union
	{
		uint32_t R;
		struct
		{
			uint64_t CCB:24;
		} __attribute__((packed)) B;
	} TCC_CCB3;

} __attribute__((packed));

#define TCC2 (*(volatile struct TCC2_tag *) 0x42002800)

struct USB_USB_DEVICE_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace0:4;
			uint64_t MODE:1;
		} __attribute__((packed)) B;
	} USB_CTRLA;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} USB_SYNCBUSY;

	uint8_t res1[5];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t DETACH:1;
			uint64_t UPRSM:1;
			uint64_t SPDCONF:2;
			uint64_t NREPLY:1;
			uint64_t TSTJ:1;
			uint64_t TSTK:1;
			uint64_t TSTPCKT:1;
			uint64_t OPMODE2:1;
			uint64_t GNAK:1;
			uint64_t LPMHDSK:2;
		} __attribute__((packed)) B;
	} USB_CTRLB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DADD:7;
			uint64_t ADDEN:1;
		} __attribute__((packed)) B;
	} USB_DADD;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t SPEED:2;
			uint64_t reservedSpace1:2;
			uint64_t LINESTATE:2;
		} __attribute__((packed)) B;
	} USB_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t FSMSTATE:6;
		} __attribute__((packed)) B;
	} USB_FSMSTATUS;

	uint8_t res3[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t MFNUM:3;
			uint64_t FNUM:11;
			uint64_t reservedSpace0:1;
			uint64_t FNCERR:1;
		} __attribute__((packed)) B;
	} USB_FNUM;

	uint8_t res4[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t SUSPEND:1;
			uint64_t MSOF:1;
			uint64_t SOF:1;
			uint64_t EORST:1;
			uint64_t WAKEUP:1;
			uint64_t EORSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t LPMNYET:1;
			uint64_t LPMSUSP:1;
		} __attribute__((packed)) B;
	} USB_INTENCLR;

	uint8_t res5[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t SUSPEND:1;
			uint64_t MSOF:1;
			uint64_t SOF:1;
			uint64_t EORST:1;
			uint64_t WAKEUP:1;
			uint64_t EORSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t LPMNYET:1;
			uint64_t LPMSUSP:1;
		} __attribute__((packed)) B;
	} USB_INTENSET;

	uint8_t res6[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t SUSPEND:1;
			uint64_t MSOF:1;
			uint64_t SOF:1;
			uint64_t EORST:1;
			uint64_t WAKEUP:1;
			uint64_t EORSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t LPMNYET:1;
			uint64_t LPMSUSP:1;
		} __attribute__((packed)) B;
	} USB_INTFLAG;

	uint8_t res7[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EPINT0:1;
			uint64_t EPINT1:1;
			uint64_t EPINT2:1;
			uint64_t EPINT3:1;
			uint64_t EPINT4:1;
			uint64_t EPINT5:1;
			uint64_t EPINT6:1;
			uint64_t EPINT7:1;
		} __attribute__((packed)) B;
	} USB_EPINTSMRY;

	uint8_t res8[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DESCADD:32;
		} __attribute__((packed)) B;
	} USB_DESCADD;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t TRANSP:5;
			uint64_t reservedSpace0:1;
			uint64_t TRANSN:5;
			uint64_t reservedSpace1:1;
			uint64_t TRIM:3;
		} __attribute__((packed)) B;
	} USB_PADCAL;

	uint8_t res9[214];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG0;

	uint8_t res10[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET0;

	uint8_t res11[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG1;

	uint8_t res12[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET1;

	uint8_t res13[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG2;

	uint8_t res14[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET2;

	uint8_t res15[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG3;

	uint8_t res16[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET3;

	uint8_t res17[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG4;

	uint8_t res18[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET4;

	uint8_t res19[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG5;

	uint8_t res20[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET5;

	uint8_t res21[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG6;

	uint8_t res22[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET6;

	uint8_t res23[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EPTYPE0:3;
			uint64_t reservedSpace0:1;
			uint64_t EPTYPE1:3;
			uint64_t NYETDIS:1;
		} __attribute__((packed)) B;
	} USB_EPCFG7;

	uint8_t res24[3];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSCLR7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUSSET7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGLOUT:1;
			uint64_t DTGLIN:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace0:1;
			uint64_t STALLRQ0:1;
			uint64_t STALLRQ1:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_EPSTATUS7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTFLAG7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENCLR7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL0:1;
			uint64_t TRFAIL1:1;
			uint64_t RXSTP:1;
			uint64_t STALL0:1;
			uint64_t STALL1:1;
		} __attribute__((packed)) B;
	} USB_EPINTENSET7;

} __attribute__((packed));

#define USB_USB_DEVICE (*(volatile struct USB_USB_DEVICE_tag *) 0x41005000)

struct USB_USB_HOST_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
			uint64_t RUNSTDBY:1;
			uint64_t reservedSpace0:4;
			uint64_t MODE:1;
		} __attribute__((packed)) B;
	} USB_CTRLA;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t SWRST:1;
			uint64_t ENABLE:1;
		} __attribute__((packed)) B;
	} USB_SYNCBUSY;

	uint8_t res1[5];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t RESUME:1;
			uint64_t SPDCONF:2;
			uint64_t reservedSpace1:1;
			uint64_t TSTJ:1;
			uint64_t TSTK:1;
			uint64_t reservedSpace2:1;
			uint64_t SOFE:1;
			uint64_t BUSRESET:1;
			uint64_t VBUSOK:1;
			uint64_t L1RESUME:1;
		} __attribute__((packed)) B;
	} USB_CTRLB;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t FLENC:4;
			uint64_t reservedSpace0:3;
			uint64_t FLENCE:1;
		} __attribute__((packed)) B;
	} USB_HSOFC;

	uint8_t res2[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t SPEED:2;
			uint64_t reservedSpace1:2;
			uint64_t LINESTATE:2;
		} __attribute__((packed)) B;
	} USB_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t FSMSTATE:6;
		} __attribute__((packed)) B;
	} USB_FSMSTATUS;

	uint8_t res3[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t MFNUM:3;
			uint64_t FNUM:11;
		} __attribute__((packed)) B;
	} USB_FNUM;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t FLENHIGH:8;
		} __attribute__((packed)) B;
	} USB_FLENHIGH;

	uint8_t res4[1];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t HSOF:1;
			uint64_t RST:1;
			uint64_t WAKEUP:1;
			uint64_t DNRSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t DCONN:1;
			uint64_t DDISC:1;
		} __attribute__((packed)) B;
	} USB_INTENCLR;

	uint8_t res5[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t HSOF:1;
			uint64_t RST:1;
			uint64_t WAKEUP:1;
			uint64_t DNRSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t DCONN:1;
			uint64_t DDISC:1;
		} __attribute__((packed)) B;
	} USB_INTENSET;

	uint8_t res6[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t reservedSpace0:2;
			uint64_t HSOF:1;
			uint64_t RST:1;
			uint64_t WAKEUP:1;
			uint64_t DNRSM:1;
			uint64_t UPRSM:1;
			uint64_t RAMACER:1;
			uint64_t DCONN:1;
			uint64_t DDISC:1;
		} __attribute__((packed)) B;
	} USB_INTFLAG;

	uint8_t res7[2];

	union
	{
		uint16_t R;
		struct
		{
			uint64_t EPINT0:1;
			uint64_t EPINT1:1;
			uint64_t EPINT2:1;
			uint64_t EPINT3:1;
			uint64_t EPINT4:1;
			uint64_t EPINT5:1;
			uint64_t EPINT6:1;
			uint64_t EPINT7:1;
		} __attribute__((packed)) B;
	} USB_PINTSMRY;

	uint8_t res8[2];

	union
	{
		uint32_t R;
		struct
		{
			uint64_t DESCADD:32;
		} __attribute__((packed)) B;
	} USB_DESCADD;

	union
	{
		uint16_t R;
		struct
		{
			uint64_t TRANSP:5;
			uint64_t reservedSpace0:1;
			uint64_t TRANSN:5;
			uint64_t reservedSpace1:1;
			uint64_t TRIM:3;
		} __attribute__((packed)) B;
	} USB_PADCAL;

	uint8_t res9[214];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG0;

	uint8_t res10[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR0;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET0;

	uint8_t res11[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG1;

	uint8_t res12[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR1;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET1;

	uint8_t res13[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG2;

	uint8_t res14[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR2;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET2;

	uint8_t res15[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG3;

	uint8_t res16[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR3;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET3;

	uint8_t res17[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG4;

	uint8_t res18[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR4;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET4;

	uint8_t res19[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG5;

	uint8_t res20[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR5;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET5;

	uint8_t res21[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG6;

	uint8_t res22[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR6;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET6;

	uint8_t res23[22];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PTOKEN:2;
			uint64_t BK:1;
			uint64_t PTYPE:3;
		} __attribute__((packed)) B;
	} USB_PCFG7;

	uint8_t res24[2];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t BITINTERVAL:8;
		} __attribute__((packed)) B;
	} USB_BINTERVAL7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSCLR7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUSSET7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t DTGL:1;
			uint64_t reservedSpace0:1;
			uint64_t CURBK:1;
			uint64_t reservedSpace1:1;
			uint64_t PFREEZE:1;
			uint64_t reservedSpace2:1;
			uint64_t BK0RDY:1;
			uint64_t BK1RDY:1;
		} __attribute__((packed)) B;
	} USB_PSTATUS7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTFLAG7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENCLR7;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t TRCPT0:1;
			uint64_t TRCPT1:1;
			uint64_t TRFAIL:1;
			uint64_t PERR:1;
			uint64_t TXSTP:1;
			uint64_t STALL:1;
		} __attribute__((packed)) B;
	} USB_PINTENSET7;

} __attribute__((packed));

#define USB_USB_HOST (*(volatile struct USB_USB_HOST_tag *) 0x41005000)

struct WDT_tag
{
	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:1;
			uint64_t ENABLE:1;
			uint64_t WEN:1;
			uint64_t reservedSpace1:4;
			uint64_t ALWAYSON:1;
		} __attribute__((packed)) B;
	} WDT_CTRL;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t PER:4;
			uint64_t WINDOW:4;
		} __attribute__((packed)) B;
	} WDT_CONFIG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EWOFFSET:4;
		} __attribute__((packed)) B;
	} WDT_EWCTRL;

	uint8_t res0[1];

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EW:1;
		} __attribute__((packed)) B;
	} WDT_INTENCLR;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EW:1;
		} __attribute__((packed)) B;
	} WDT_INTENSET;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t EW:1;
		} __attribute__((packed)) B;
	} WDT_INTFLAG;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t reservedSpace0:7;
			uint64_t SYNCBUSY:1;
		} __attribute__((packed)) B;
	} WDT_STATUS;

	union
	{
		uint8_t R;
		struct
		{
			uint64_t CLEAR:8;
		} __attribute__((packed)) B;
	} WDT_CLEAR;

} __attribute__((packed));

#define WDT (*(volatile struct WDT_tag *) 0x40001000)

