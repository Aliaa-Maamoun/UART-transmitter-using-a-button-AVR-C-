#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void UART_init(unsigned int ubrr) {
	UBRR0H = (unsigned char)(ubrr >> 8);
	UBRR0L = (unsigned char)ubrr;
	UCSR0B = (1 << TXEN0);  // Enable transmitter
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);  // 8 data bits, 1 stop bit
}

void UART_transmit(unsigned char data) {
	while (!(UCSR0A & (1 << UDRE0)));  // Wait until buffer is empty
	UDR0 = data;
}

void UART_sendString(const char *str) {
	while (*str) {
		UART_transmit(*str++);
	}
}

int main(void) {
	DDRD &= ~(1 << PD0);     // Set PD0 as input
	PORTD |= (1 << PD0);     // Enable pull-up resistor on PD0

	UART_init(103);  // 9600 baud for 16MHz clock

	while (1) {
		if (!(PIND & (1 << PD0))) {  // If switch is pressed (SW = 0)
			UART_sendString("Hello\r\n");
			} else {                     // If switch is not pressed (SW = 1)
			UART_sendString("Bye\r\n");
		}
		_delay_ms(500);  // Delay to avoid spamming
	}
}



