#define RTICOMPCTRL       *(unsigned volatile int*) 0xFFFFFC0C
#define RTIFRC0           *(unsigned volatile int*) 0xFFFFFC10
#define RTITBCTRL         *(unsigned volatile int*) 0xFFFFFC04 
#define RTIGCTRL          *(unsigned volatile int*) 0xFFFFFC00 
#define RTICPUC0          *(unsigned volatile int*) 0xFFFFFC18   
#define RTICOMP0          *(unsigned volatile int*) 0xFFFFFC50    
#define RTIUDCP0          *(unsigned volatile int*) 0xFFFFFC54  
#define RTISETINTENA      *(unsigned volatile int*) 0xFFFFFC80 
#define RTICLEARINTENA    *(unsigned volatile int*) 0xFFFFFC84  
#define RTIINTCLEARENABLE *(unsigned volatile int*) 0xFFFFFCAC 
#define RTIINTFLAG        *(unsigned volatile int*) 0xFFFFFC88 
                                                                  
#define REQENASET0        *(unsigned volatile int*) 0xFFFFFE30 
                                                               
#define CLKCNTL           *(unsigned volatile int*) 0xFFFFFFD0
#define GIOGCR0           *(unsigned volatile int*) 0xFFF7BC00
#define GIODIRA           *(unsigned volatile int*) 0xFFF7BC34
#define GIOPDRA           *(unsigned volatile int*) 0xFFF7BC48  
#define GIODSET           *(unsigned volatile int*) 0xFFF7BC40
#define GIODCLR           *(unsigned volatile int*) 0xFFF7BC44


