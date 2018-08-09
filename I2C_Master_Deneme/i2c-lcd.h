#include "stm32f10x_i2c.h"
#include "misc.h"
#include "stdio.h"
#include "string.h"
#include "delay.h"

void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_send_string (char *str);  // send string to the lcd
