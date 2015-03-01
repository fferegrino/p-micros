/*
 * Practica3.c
 *
 * Created: 28/02/2015 5:47:15
 *  Author: Antonio
 */ 


#include <avr/io.h>
#include <util/delay.h>

#define BIT(X) (1 << (x))

int main(void)
{
	
	DDRB = 0xFF;
	DDRD = 0xFF;
	
	DDRC = 0b00000000;
	
	uint8_t status = 0;                                /* Define a 8 bit integer variable */
	uint8_t prev = 0;
	status = PINC & 0b00111111;
	status += 1;
	prev = 0;
	int nums[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
	uint8_t x = 0;
    while(1)
    {
			for(x = 0; status; x++)
			{
				
				status -= 1;
				PORTB =  nums[x / 10];	// Derecha
				PORTD =  nums[x % 10];	// Izquierda
				_delay_ms(100);
			}
    }
}