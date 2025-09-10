#include <reg51.h>
#include <stdio.h>
#include <string.h>
#include "lcd_driver.h"
#include "timer.h"

/*
unsigned char heart[8] = {
  0x00,
  0x0A,
  0x1F,
  0x1F,
  0x0E,
  0x04,
  0x00,
  0x00
};
*/


// Initialize LCD
void lcd_init(void) 
{
    lcd_cmd(LCD_8BIT_MODE); // 2 lines, 5x7 matrix, 8-bit mode
    delay_ms(5);
    lcd_cmd(LCD_DISPLAY_ON_CURSOR_OFF); // Display ON, Cursor OFF
    delay_ms(5);
    lcd_cmd(LCD_CLEAR); // Clear display
    delay_ms(5);
		lcd_cmd(LCD_CURSOR_FIRSTLINE);
		delay_ms(5);
    lcd_cmd(LCD_CURSOR_INCREMENT); // Entry mode set: Increment cursor, no display shift
    delay_ms(5);
}


// Send command to LCD
void lcd_cmd(unsigned char cmd) 
{
    LCD_DATA_PORT = cmd;
    RS = 0; // Command mode
    RW = 0; // Write mode
    EN = 1; // Enable pulse
    delay_ms(1);
    EN = 0;
    delay_ms(1);
}


// Clear the LCD
void lcd_clear(unsigned char cmd)
{
    LCD_DATA_PORT = cmd;
    RS = ON; // Command mode
    RW = ON; // Write mode
    EN = OFF; // Enable pulse
    delay_ms(1);
    EN = ON;
    delay_ms(1);
}

// Send datas to LCD
void lcd_data(unsigned char dat) 
{
    LCD_DATA_PORT = dat;
    RS = OFF; // Data mode
    RW = ON; // Write mode
    EN = OFF; // Enable pulse
    delay_ms(1);
    EN = ON;
    delay_ms(1);
}


// Print string to LCD
void lcd_print_string(char *str) 
{
		lcd_clear(LCD_CLEAR); // Clear the lcd
	
    while (*str) 
		{
        lcd_data(*str++);
    }
}


// Set cursor to beginning of first line
void lcd_set_cursor_firstline(void) 
{
		lcd_clear(LCD_CLEAR);
    lcd_cmd(LCD_CURSOR_FIRSTLINE);
    delay_ms(1);
}


// Set cursor to beginning of second line
void lcd_set_cursor_secondline(void) 
{
		lcd_clear(LCD_CLEAR);
    lcd_cmd(LCD_CURSOR_SECONDLINE);
    delay_ms(1);
}


// Scrolling the string
void scroll_string(const char *str, int delay_time_ms) 
{
    int len = strlen(str),temp;
    char buffer[17];  // 16 chars + null terminator
    buffer[16] = '\0';

    if (len <= 16) 
		{
        // If string fits in LCD width, just print it once
        lcd_print_string((char *)str);
        return;
    }

    // Scroll from start to end - 16 chars window
    for (temp = 0; temp <= len - 16; temp++) 
		{
        strncpy(buffer, &str[temp], 16);
        lcd_print_string(buffer);
        delay_ms(delay_time_ms);
    }
}



/*
//  Store Custom Character in CGRAM: 
void lcd_custom_char(unsigned char location, unsigned char *pattern) 
{
    unsigned char i;
    lcd_cmd(0x40 + (location * 8)); // Address of CGRAM location
    for (i = 0; i < 8; i++) {
        lcd_data(pattern[i]);
    }
}
*/