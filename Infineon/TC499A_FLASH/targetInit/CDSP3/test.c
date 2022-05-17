#include "main.h"

struct strA
	{
	int m_iA;
	char m_iB;
	char m_a[4];
	long m_l;
	};

union uniA
	{
	long m_l;
	char m_a[4];
	};

struct bitA 
	{
	int m_b1:3;
	int m_b2:2;
	int m_b3:5;
	int m_b4:4;
	};
 
struct strX
	{
	int m_a;
	struct strX *m_pS;
	union uniA m_u;
	char m_c[2];
	};

enum enumA
	{
	e1=4,
	e2
	};

void Type_Simple()
	{
	char c=0;
	unsigned char uc=0;
	int i=0;
	unsigned ui=0;
	long l=0;
	unsigned long ul=0;
	int iCount=0;
  
	for (iCount=-2;iCount<=2;++iCount)
		{
		c=iCount;
		uc=iCount;
		i=iCount;
		ui=iCount;
		l=iCount;
		ul=iCount;
		}
  

	i=0x1234;
	ui=0x1234;
	l=0x12345679L;
	ul=0x12345679UL;
	
	++iCounter;
  byTestByte++; 
	}
                  
void Type_Arrays()
	{
	char a[2][3][4];
	int i,j,k;

	for (i=0;i<2;++i)
		for (j=0;j<3;++j)
			for (k=0;k<4;++k)
				a[i][j][k]=i+j+k;

	++iCounter;
  wTestWord+=2;
	}			

void Type_Pointers()
	{
	char c;
	char *pC;
	char **ppC;

	c='A';
	pC=&c;
	++c;
	++*pC;

	ppC=&pC;
	++(**ppC);

	++iCounter;
	}

void Type_Bitfields()
	{
	struct bitA bA;

	bA.m_b1=-1;
	bA.m_b2=3;
	bA.m_b3=7;
	bA.m_b4=-3;

	++iCounter;
	}

void Type_Enum()
	{
	enum enumA eA;
  
  int a=e1;
  int b=e2;
  ++a;
  ++b;
  
  eA=100;
  eA=e1;

	++iCounter;
	}                           
                    
int Mult(int x,int y)
	{
	return x*y;
	}

void Type_FunctionPointer()
	{
	int (*pMult)(int,int);
	int a=0;

	pMult=Mult;

	a=Mult(pMult(1,2),pMult(3,4));

	++iCounter;
	}
 
void ResetStrX(struct strX* pS,int iTo)
	{
	pS->m_a=iTo;
	pS->m_pS=0;
	pS->m_u.m_l=(long)iTo;
	pS->m_c[0]=pS->m_c[1]=(char)iTo; 
	}
  
void TestStatic()
	{
	static int staticI=0;
	++staticI;
	}

  
void Address_GlobalVariables()
	{
	++iCounter;
	TestStatic();
	TestStatic();
	} 

	


