/*
 * Practica4.c
 *
 * Created: 28/02/2015 22:27:50
 *  Author: Antonio
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	DDRD = 0xFF;
	DDRC = 0b11111100;
	
	uint8_t d1 = 0;                                /* Define a 8 bit integer variable */
	uint8_t d2 = 0;
	uint8_t status = 0;
	uint8_t dt = d1 + d2 * 10;
	int nums[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
    while(1)
    {
		
		status = PINC & 0b00000011;
		if(status & 0x01)
		{
			d1++;
		}
		if(status & 0x10)
		{
			d2++;
		}
			
		dt = d1 + d2 * 10;
		PORTB =  nums[dt / 10];	// Derecha
		PORTD =  nums[dt % 10];	// Izquierda
		PORTC &= 0;
		_delay_ms(100);
    }
}