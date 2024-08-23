
#include <avr/io.h>
#include <avr/delay.h>
#define F_CPU 8000000UL
#include "MemoryMap.h"
#include "Utils.h"
void PORTD_CONFIG()
{
	resetbit(DDRD,0);//BORTD pin0 as input
	resetbit(DDRD,1);//BORTD pin1 as input
	resetbit(DDRD,2);//BORTD pin2 as input
	setbit(DDRD,4);//PORTD pin 4 as output
	setbit(DDRD,5);//PORTD pin 5 as output
	setbit(DDRD,6);//PORTD pin 6 as output
	setbit(DDRD,7);//PORTD pin 7 as output
}
void main(void)
{
	volatile int count=5;
	//volatile int reset=4;
	PORTD_CONFIG();
	while(1)
	{
		//task3
		if(readbit(PIND,2)==1)
		{
			setbit(PORTD,4);
			_delay_ms(1000);
			resetbit(PORTD,4);

		}
	}

}



