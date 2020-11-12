/**
  
*/

#ifndef INITBOARD_H
#define INITBOARD_H
/**
    Section: Includes
*/
#include <stdint.h>
#include <xc.h>
/**
    Section: Macros
*/

#define ONE_SECOND  16000000

void __delay32(int32_t);

//macros definitions
/**
    Section: Function Prototypes
*/
void OSCILLATOR_Initialize(void);


#endif
