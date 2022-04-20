#ifndef STARTUPM7_H
#define STARTUPM7_H

// External references
extern int main(void);
extern void InterruptRoutine(void);

// Function prototypes
void Reset(void);
void enableFPU(void);
void setVTOR(void);

#endif // STARTUPM7_H
