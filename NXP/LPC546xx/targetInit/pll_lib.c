#include "pll_lib.h"

int pllEncodeN(int N)
{
	int x, i;
  int N_max = 0x100;
  
	switch (N) {
	case 0:
		x = 0xFFF;
		break;
  case 1:
		x = 0x302;
		break;
  case 2:
		x = 0x202;
		break;
  default:
		x = 0x080;
		for (i = N; i <= N_max; i++)
			x = (((x ^ (x >> 2) ^ (x >> 3) ^ (x >> 4)) & 1) << 7) | ((x >> 1) & 0x7F);
		break;
	}

	return x;
}

int pllEncodeP(int P)
{
	int x, i;
  int P_max = 0x20;

	switch (P) {
	case 0:
		x = 0xFF;
		break;
  case 1:
		x = 0x62;
		break;
  case 2:
		x = 0x42;
		break;
  default:
		x = 0x10;
		for (i = P; i <= P_max; i++)
			x = (((x ^ (x >> 2)) & 1) << 4) | ((x >> 1) & 0xF);
		break;
	}

	return x;
}

int pllEncodeM(int M)
{
	int i, x;
  int M_max = 0x8000;

	switch (M) {
	case 0:
		x = 0xFFFFF;
		break;
  case 1:
		x = 0x18003;
		break;
  case 2:
		x = 0x10003;
		break;
  default:
		x = 0x04000;
		for (i = M; i <= M_max; i++)
			x = (((x ^ (x >> 1)) & 1) << 14) | ((x >> 1) & 0x3FFF);
		break;
	}

	return x;
}

void pllFindSel(int M, int *pSelP, int *pSelI, int *pSelR)
{
	int P_max = 0x20;
  
  if (M < 60) *pSelP = (M >> 1) + 1;
	else *pSelP = P_max - 1;
	
	if (M > 16384) *pSelI = 1;
	else if (M > 8192) *pSelI = 2;
	else if (M > 2048) *pSelI = 4;
	else if (M >= 501) *pSelI = 8;     
	else if (M >= 60) *pSelI = 4 * (1024 / (M + 9));
	else *pSelI = (M & 0x3C) + 4;
	
	*pSelR = 0;
}