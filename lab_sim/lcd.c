/***********************************************************************************************
 *
 * Combined LCD Drivers for PIC24.
 *
 ***********************************************************************************************
 * FileName:  console.c      
 *
 * * REVISION HISTORY for console.c and lcd.c:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author        	Date      			Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Serge Hould		16 Nov. 2017		Add comments. Make local functions static.		v2.0.0
 * SH				20 Nov 2019			Merge pmp_lcd and COMM2 libraries				v3.0.0
 * SH               22 Nov. 2019        Change name to console.c. Add Uart1.			v3.1.0
 * SH               6 Decembre 2019     Remove void UART2_Initialize(void), 			v3.1.1
 *                                      sets both UARTs default BAUD rate at 115200
 * SH               9 March 2020     	Except for fprinf2(), LCDInit(), made all LCD functions static	v3.1.2
 * SH               11 Nov 2020         Separation of Uart and LCD lib
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include "include/lcd.h"
#include <string.h>
//#include <xc.h>


/******* LCD lib *****************/

 void LCDInit(void){
      initUart1();  
 }
void LCDPut(char A){
    UART1_Write(A);
}
 void LCDL1Home(void){
     LCDPut('\n');
 }
 void LCDPos(unsigned char row){
        int i;
        if (row > 40) row -=40;
        else if(row > 20) row -=20;
        for(i=0; i<row; i++){
        LCDPut(' ');
        }
}
