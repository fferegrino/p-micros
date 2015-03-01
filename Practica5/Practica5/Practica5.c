/*
 * Practica5.c
 *
 * Created: 28/02/2015 22:54:52
 *  Author: Antonio
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	DDRD = 0xFF;
	
	DDRC = 0b00000000;
	int nums[10] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F };
	uint8_t x = 1;
	int sel = 0;
    while(1)
    {
		for(x = 1,sel = 0; x <= 64; x <<= 1, sel++)
		{
			PORTB = nums[sel];
			PORTD = ~x;
			_delay_ms(100);
		}
    }
}