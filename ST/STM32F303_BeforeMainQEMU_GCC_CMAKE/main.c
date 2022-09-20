extern unsigned long _estack , _etext , _sdata , _edata , _sbss , _ebss ;

void some_call();
void reset();

int g_iInitialized = 7;
int g_iNotInitialized;


void main()
{
  some_call();	
  while(1);
}

__attribute__ ((section( ".vectors" )))
const unsigned long g_aVectors[] =
{
  (unsigned long)&_estack,
  (unsigned long)reset
};

void reset()
{

  unsigned long * pSource = & _etext ;
  unsigned long * pDest = & _sdata ;
  unsigned long * pEnd = & _edata ;
  unsigned long * pBssStart = & _sbss ;
  unsigned long * pBssEnd = & _ebss ;
  
  while ( pDest < pEnd )
  {
    * pDest = * pSource ;
    pDest ++;
    pSource ++;
  }
 
  while ( pBssStart < pBssEnd )
  {
    * pBssStart = 0;
    pBssStart ++;
  }  
  
  main();
  while(1);  
}