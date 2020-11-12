#ifndef __LCD_H_
#define __LCD_H_


#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "uart.h"
#include "p24Fxxxx.h"

 void LCDPos(unsigned char row);
 void LCDL1Home(void);
 void LCDPut(char A);
 void LCDInit(void);

#endif