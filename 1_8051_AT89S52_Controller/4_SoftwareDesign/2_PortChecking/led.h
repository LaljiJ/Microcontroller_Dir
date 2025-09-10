#include <reg51.h>

/*----- Macros for port ON/OFF-----*/
#define OFF	1
#define ON	0

// All port 0 led are define here
sbit LED0 = P0^0;
sbit LED1 = P0^1;
sbit LED2 = P0^2;
sbit LED3 = P0^3;
sbit LED4 = P0^4;
sbit LED5 = P0^5;
sbit LED6 = P0^6;
sbit LED7 = P0^7;

// All port 1 led are define here
sbit LED8 = P1^0;
sbit LED9 = P1^1;
sbit LED10 = P1^2;
sbit LED11 = P1^3;
sbit LED12 = P1^4;
sbit LED13 = P1^5;
sbit LED14 = P1^6;
sbit LED15 = P1^7;

// All port 2 led are define here
sbit LED16 = P2^0;
sbit LED17 = P2^1;
sbit LED18 = P2^2;
sbit LED19 = P2^3;
sbit LED20 = P2^4;
sbit LED21 = P2^5;
sbit LED22 = P2^6;
sbit LED23 = P2^7;

// All port 3 led are define here
sbit LED24 = P3^0;
sbit LED25 = P3^1;
sbit LED26 = P3^2;
sbit LED27 = P3^3;
sbit LED28 = P3^4;
sbit LED29 = P3^5;
sbit LED30 = P3^6;
sbit LED31 = P3^7;


// Function definations
void blink_port0_leds(void);
void blink_port1_leds(void);
void blink_port2_leds(void);
void blink_port3_leds(void);