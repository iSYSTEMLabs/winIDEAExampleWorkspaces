#ifndef iSYSTEM_INSTRUMENTATION
#define iSYSTEM_INSTRUMENTATION

#define iSYSTEM_RUNNING         1
#define iSYSTEM_READY           2
#define iSYSTEM_CREATE          3
#define iSYSTEM_DELETE          4
#define iSYSTEM_BLOCKED         5
#define iSYSTEM_SUSPENDED       6

#define iSYSTEM_REASON_QUEUERECEIVE 1
#define iSYSTEM_REASON_QUEUESEND    2

extern volatile uint32_t isystem_trace;

#define traceTASK_SWITCHED_OUT()               if(0 != (isystem_trace >> 24))\
  { isystem_trace = (iSYSTEM_BLOCKED << 16) + pxCurrentTCB->pxTaskTag; }\
  else {isystem_trace = (iSYSTEM_READY << 16) + pxCurrentTCB->pxTaskTag;}
 
#define traceTASK_SWITCHED_IN() 				isystem_trace = (iSYSTEM_RUNNING << 16) + pxCurrentTCB->pxTaskTag;
#define traceMOVED_TASK_TO_READY_STATE(pxTCB) 	isystem_trace = (iSYSTEM_READY << 16) + pxTCB->pxTaskTag;
#define traceTASK_CREATE(pxNewTCB) 				isystem_trace = (iSYSTEM_CREATE << 16) + pxNewTCB->pxTaskTag;
#define traceTASK_DELETE(pxTCB) 				isystem_trace = (iSYSTEM_DELETE << 16) + pxTCB->pxTaskTag;
#define traceTASK_DELAY_UNTIL(xTimeToWake) 		isystem_trace = (iSYSTEM_BLOCKED << 16) + pxCurrentTCB->pxTaskTag;
#define traceTASK_DELAY() 						isystem_trace = (iSYSTEM_BLOCKED << 16) + pxCurrentTCB->pxTaskTag;
#define traceTASK_SUSPEND(pxTCB) 				isystem_trace = (iSYSTEM_SUSPENDED << 16) + pxTCB->pxTaskTag;
#define traceTASK_RESUME(pxTCB) 				isystem_trace = (iSYSTEM_READY << 16) + pxTCB->pxTaskTag;
#define traceTASK_RESUME_FROM_ISR(pxTCB) 		isystem_trace = (iSYSTEM_READY << 16) + pxTCB->pxTaskTag;

#define traceBLOCKING_ON_QUEUE_RECEIVE(xQueue) isystem_trace |= iSYSTEM_REASON_QUEUERECEIVE << 24;
#define traceBLOCKING_ON_QUEUE_SEND(xQueue)    isystem_trace |= iSYSTEM_REASON_QUEUESEND << 24;

////
#define __TARGET_FPU_VFP

#endif /* iSYSTEM_INSTRUMENTATION */