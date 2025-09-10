#include "sim800l.h"

// Initialize SIM800
void SIM800_Init() 
{
    SIM800_SendATCommand("AT"); // Handshake
    SIM800_SendATCommand("ATE0"); // Disable echo
    SIM800_SendATCommand("AT+CMGF=1"); // Set SMS to text mode
}


// Send AT command to SIM800
void SIM800_SendATCommand(char *command) 
{
    UART_send_string(command);
    UART_write(0x0D); // Carriage Return
    UART_write(0x0A); // Line Feed
    delay_ms(100); // Small delay for response
}


// Send SMS
void SIM800_SendSMS(char *mobile_number, char *message) {
    char cmd[50];
    sprintf(cmd, "AT+CMGS=\"%s\"", mobile_number);
    SIM800_SendATCommand(cmd);
    UART_send_string(message);
    UART_write(0x1A); // Ctrl+Z to send message
}