#include <reg51.h>
#include "timer.h"
#include "uart_driver.h"
#include "sim800l.h"

void main() 
{
    UART_init();  // Initialize UART
    delay_ms(50);  // Delay for stability
    SIM800_Init(); // Initialize SIM800 module
    delay_ms(50);

    UART_send_string("UART Initialized\r\n");

    while (1) 
    {
        // Example: Send an SMS
        SIM800_SendSMS("YOUR_MOBILE_NUMBER", "Hello from AT89S52! - Lalji's project");
        delay_ms(5000); // Wait for 5 seconds before sending another SMS
    }
}
