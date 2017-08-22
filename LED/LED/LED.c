/*

LED.c
Created: 3/18/2016 3:12:07 PM
Author : Etiq Technologies
Description:This project demonstrate the blinking of LEDs connected to PORTC pins.


 */ 


#define F_CPU 16000000UL


#include <avr/io.h>
#include <util/delay.h>



/*************************************  MAIN function**************************** */


void main(void)
{ 

MCUCSR=(1<<JTD);
MCUCSR=(1<<JTD);
	DDRC=0xFF;        //configures the PORT'S as output port
	DDRD=0XFF;
    DDRA=0xFF;
	DDRB=0xFF;
    while (1) 
    {
	PORTA=0xFF;      //PORT's loaded with 0xff for 250 ms and 0x00 for next 250ms
	PORTB=0xFF;
	PORTC=0xFF;
	PORTD=0xFF;
	_delay_ms(250);
	PORTA=0x00;
	PORTB=0x00;
	PORTC=0x00;
	PORTD=0x00;
	_delay_ms(250);
	}		
}
	
