extern void _start(void);
extern void init_L2RAM(void);

void start()
{
  #define SWT_0_SR (*(volatile unsigned int*) 0xFC050010)  
  #define SWT_0_CR (*(volatile unsigned int*) 0xFC050000)
  #define SWT_1_SR (*(volatile unsigned int*) 0xFC054010)  
  #define SWT_1_CR (*(volatile unsigned int*) 0xFC054000)
  #define SWT_2_SR (*(volatile unsigned int*) 0xFC058010)  
  #define SWT_2_CR (*(volatile unsigned int*) 0xFC058000)
  #define SWT_3_SR (*(volatile unsigned int*) 0xFC05C010)  
  #define SWT_3_CR (*(volatile unsigned int*) 0xFC05C000)
  #define RGM_DES  (*(volatile unsigned int*) 0xFFFA8000)  
  #define RGM_FES  (*(volatile unsigned int*) 0xFFFA8300)
 
  
  RGM_DES = 0xFFFF;
  RGM_FES = 0xFFFF;
     
  SWT_0_SR = 0xC520;
  SWT_0_SR = 0xD928;
  SWT_0_CR = 0xFF00010A;
  
  SWT_1_SR = 0xC520;
  SWT_1_SR = 0xD928;
  SWT_1_CR = 0xFF00010A;
  
  SWT_2_SR = 0xC520;
  SWT_2_SR = 0xD928;
  SWT_2_CR = 0xFF00010A;
  
  SWT_3_SR = 0xC520;
  SWT_3_SR = 0xD928;
  SWT_3_CR = 0xFF00010A;
  
  //RAM init, ask FV why this doesnt work
  /*unsigned int* ramAddr = 0x40000000;  
  while(ramAddr < 0x40001000)
  {                      
     *ramAddr = 0;
     ramAddr++;
  }*/
  
  init_L2RAM();
  
  _start();
}
