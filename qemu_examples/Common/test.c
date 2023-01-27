#include "main.h"
#include "test.h"

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
  enforcer = 0;
  
	for (iCount=-2;iCount<=2;++iCount)
		{
		c=(char)iCount;
		uc=(unsigned char)iCount;
		i=(int)iCount;
		ui=(unsigned int)iCount;
		l=(long)iCount;
		ul=(unsigned long)iCount;
    enforcer = c+uc+i+ui+l+ul;
		}
  

	i=0x1234;
	ui=0x1234;
	l=0x12345679L;
	ul=0x12345679UL;
	enforcer += i+ui+l+ul;
	++iCounter;
	byTestByte++; 
	}
  
void Type_Float()
  {
    float a = 1.3;
    float b = 2.9;
    for (int i=0; i<10; i++)
      b = a*b;
    floatEnforcer = b;
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

void Type_Struct()
	{
	struct strA sA;
	union uniA uA;
	int i;

	for (i=0;i<4;++i)
		{
		sA.m_iA=i;
		sA.m_iB=i;
		sA.m_a[i]=i;
		sA.m_l=(long)i;
		}


	uA.m_l=0x12345678L;
	uA.m_a[0]=0x11;
	uA.m_a[1]=0x22;
	uA.m_a[2]=0x33;
	uA.m_a[3]=0x44;

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
 
void Type_Mixed()
	{
	struct strX sX1;
	struct strX sX2;
  
	ResetStrX(&sX1,1);
	ResetStrX(&sX2,2); 
	sX1.m_pS=&sX2;
   
	++iCounter;
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

void Address_TestScopes()
	{
	int i=0,j=0;
	union uniA X;
	
	X.m_l=0x77;

	for (i=0;i<2;++i)
		{
		char c=4;
		X.m_l++;
		for (j=0;j<2;++j)
			{
			int X;
			++c;
			X=c;
			if (c==1)
				++X;
			else
				X+=2;
			}
		}

	++X.m_l;
	++iCounter;
	}

int Func1(int i)
	{
	int x=0;

	for (;x<10;++x)
		++i;

	return i;
	}

long Func2(int i,char c, long l)
	{
	int x=0;
	long y=0;

	for (;x<10;++x)
		y+=x+i+c+l;

	return y;
	}

void Func3(long *pY)
	{
	*pY=0;
	}

float Func4(float f,char *pC,long l)
	{
	float fRet=(float)0.0;
	int i;
  
	for (i=0;i<5;++i)
		{
		*(pC+i)=0xA+i;
		fRet+=f+(float)*(pC+i)+(float)l; 
		}
	
  return fRet;
	}

void Address_DifferentFunctionParameters()
{
  int x;
  long y;
  long *pY;
  
  x=Func1(5);
  y=Func2(1,2,3);
  
  pY=&y;
  Func3(pY);
  
  ++iCounter;
}
       

void InterruptRoutine()
	{
	iInterruptCounter++;
	}

void CPU_Pointers()
	{
	++iCounter;
	}                

int Factorial(int i) 
	{
	if (i==1)
		return i;
	return Factorial(i-1)*i;
	}

void CPU_Recursion()
	{
	int x=0;
	++x;
	x=Factorial(5);
	++x;
	++iCounter;
	}
	


