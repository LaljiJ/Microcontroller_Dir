#include <reg51.h>


// Function prototypes
void UART_init(void);
void UART_write(unsigned char);
unsigned char UART_read(void);
void UART_send_string(const char *);  
