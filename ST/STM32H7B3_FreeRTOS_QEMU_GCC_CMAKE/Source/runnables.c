/*
 * runnables.c
 *
 *  Created on: May 5, 2021
 *      Author: manishk
 */

// #include "main.h"


void getSW_Req_Spec(void);
void createSW_Test_Spec(void);
void runSW_Test_Case(void);
void runSW_RegTest_Case(void);
void createSW_Delivery_Doc(void);


void getSW_Req_Spec(){
	for (int i=0;i < 3000;i++)
	  {
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	  }
}

void createSW_Test_Spec(){
	for (int i=0;i < 3000;i++)
	  {
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	  }
}

void runSW_Test_Case(){

	for (int i=0;i < 3000;i++)
	  {
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	  }
	runSW_RegTest_Case();
}

void createSW_Delivery_Doc(){
	for (int i=0;i < 3000;i++)
	  {
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	  }

}


void runSW_RegTest_Case(){
	for (int i=0;i < 2000;i++)
	  {
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	      __asm("NOP");
	  }

}

