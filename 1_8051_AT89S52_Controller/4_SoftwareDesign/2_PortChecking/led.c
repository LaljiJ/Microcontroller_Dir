#include <reg51.h>
#include "timer.h"
#include "led.h"



// Port0 all LEDs check
void blink_port0_leds(void)
{
	LED0 = OFF;
	LED1 = OFF;
	LED2 = OFF;
	LED3 = OFF;
	LED4 = OFF;
	LED5 = OFF;
	LED6 = OFF;
	LED7 = OFF;
	
    LED0 = ON;
    delay_ms(1000);
    LED0 = OFF;
    delay_ms(1000);

    LED1 = ON;
    delay_ms(1000);
    LED1 = OFF;
    delay_ms(1000);

    LED2 = ON;
    delay_ms(1000);
    LED2 = OFF;
    delay_ms(1000);

    LED3 = ON;
    delay_ms(1000);
    LED3 = OFF;
    delay_ms(1000);

    LED4 = ON;
    delay_ms(1000);
    LED4 = OFF;
    delay_ms(1000);

    LED5 = ON;
    delay_ms(1000);
    LED5 = OFF;
    delay_ms(1000);

    LED6 = ON;
    delay_ms(1000);
    LED6 = OFF;
    delay_ms(1000);

    LED7 = ON;
    delay_ms(1000);
    LED7 = OFF;
    delay_ms(1000);
}


// Port1 all LEDs check
void blink_port1_leds(void)
{
	LED8 = OFF;
	LED9 = OFF;
	LED10 = OFF;
	LED11 = OFF;
	LED12 = OFF;
	LED13 = OFF;
	LED14 = OFF;
	LED15 = OFF;
	
    LED8 = ON;
    delay_ms(1000);
    LED8 = OFF;
    delay_ms(1000);

    LED9 = ON;
    delay_ms(1000);
    LED9 = OFF;
    delay_ms(1000);

    LED10 = ON;
    delay_ms(1000);
    LED10 = OFF;
    delay_ms(1000);

    LED11 = ON;
    delay_ms(1000);
    LED11 = OFF;
    delay_ms(1000);

    LED12 = ON;
    delay_ms(1000);
    LED12 = OFF;
    delay_ms(1000);

    LED13 = ON;
    delay_ms(1000);
    LED13 = OFF;
    delay_ms(1000);

    LED14 = ON;
    delay_ms(1000);
    LED14 = OFF;
    delay_ms(1000);

    LED15 = ON;
    delay_ms(1000);
    LED15 = OFF;
    delay_ms(1000);
}


// Port2 all LEDs check
void blink_port2_leds(void)
{
	LED16 = OFF;
	LED17 = OFF;
	LED18 = OFF;
	LED19 = OFF;
	LED20 = OFF;
	LED21 = OFF;
	LED22 = OFF;
	LED23 = OFF;
	
    LED16 = ON;
    delay_ms(1000);
    LED16 = OFF;
    delay_ms(1000);

    LED17 = ON;
    delay_ms(1000);
    LED17 = OFF;
    delay_ms(1000);

    LED18 = ON;
    delay_ms(1000);
    LED18 = OFF;
    delay_ms(1000);

    LED19 = ON;
    delay_ms(1000);
    LED19 = OFF;
    delay_ms(1000);

    LED20 = ON;
    delay_ms(1000);
    LED20 = OFF;
    delay_ms(1000);

    LED21 = ON;
    delay_ms(1000);
    LED21 = OFF;
    delay_ms(1000);

    LED22 = ON;
    delay_ms(1000);
    LED22 = OFF;
    delay_ms(1000);

    LED23 = ON;
    delay_ms(1000);
    LED23 = OFF;
    delay_ms(1000);
}


// Port3 all LEDs check
void blink_port3_leds(void)
{
	LED24 = OFF;
	LED25 = OFF;
	LED26 = OFF;
	LED27 = OFF;
	LED28 = OFF;
	LED29 = OFF;
	LED30 = OFF;
	LED31 = OFF;
	
    LED24 = ON;
    delay_ms(1000);
    LED24 = OFF;
    delay_ms(1000);

    LED25 = ON;
    delay_ms(1000);
    LED25 = OFF;
    delay_ms(1000);

    LED26 = ON;
    delay_ms(1000);
    LED26 = OFF;
    delay_ms(1000);

    LED27 = ON;
    delay_ms(1000);
    LED27 = OFF;
    delay_ms(1000);

    LED28 = ON;
    delay_ms(1000);
    LED28 = OFF;
    delay_ms(1000);

    LED29 = ON;
    delay_ms(1000);
    LED29 = OFF;
    delay_ms(1000);

    LED30 = ON;
    delay_ms(1000);
    LED30 = OFF;
    delay_ms(1000);

    LED31 = ON;
    delay_ms(1000);
    LED31 = OFF;
    delay_ms(1000);
}
