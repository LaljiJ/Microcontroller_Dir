#include <reg51.h>


// LCD registers select pin, read/write pin and enable Pin definitions
sbit RS = P1^2;
sbit RW = P1^3;
sbit EN = P1^4;


// LCD address for initialize
#define LCD_8BIT_MODE 							0x38
#define LCD_DISPLAY_ON_CURSOR_OFF 	0x0C
#define LCD_CLEAR 									0x01
#define LCD_CURSOR_INCREMENT 				0x06

#define LCD_CURSOR_FIRSTLINE				0x80
#define LCD_CURSOR_SECONDLINE				0xC0


// LCD pin ON/OFF command
#define ON 			0
#define OFF 		1


// LCD dataselect pins connected with port2
#define LCD_DATA_PORT P0


// Blobal variable
extern unsigned char heart[8];


// Functions definations
void lcd_init(void);
void lcd_cmd(unsigned char);
void lcd_data(unsigned char);
void lcd_print_string(char *); 
void lcd_clear(unsigned char); // Send the clear display command
void lcd_set_cursor_firstline(void);
void lcd_set_cursor_secondline(void);
void scroll_string(const char *, int);


// void lcd_custom_char(unsigned char, unsigned char *);