#include "stm32f10x_i2c.h"
#include "misc.h"
#include "stdio.h"
#include "string.h"
#include "twilcd.h"
#include "delay.h"

#define SLAVE_ADDRESS_LCD 0x4E

char left[8] = { 
	 0x18,
  0x18,
  0x1F,
  0x01,
  0x03,
  0x07,
  0x0F,
  0x1F
 }; 

 char right[8] = {
  0x03,
  0x03,
  0x1F,
  0x10,
  0x18,
  0x1C,
  0x1E,
  0x1F
};
/*******************************************************************/
// I2C
/*******************************************************************/



int main(void){
	
I2C1_init();
lcd_init();
	clearlcd(); 
	
createChar(0,left);
createChar(1,right);
 clearlcd(); 
	setpos(0,0);
		sendbyte(0,1);
	setpos(1,0);
	sendbyte(1,1);
setpos(3,0);
	str_lcd("Ball-Plate");
	setpos(3,1);
	str_lcd(" Project");
	
	  
	
	
	
	
    while(1)
    {
			
			
		
    	
    }
}



