/*	Author: lwang215
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0xFF; PORTB = 0x00;
unsigned char tmpB = 0x00;
    while (1){
if(PORTA0==1&&PORTA1==0){
	PORTB0=1;
}
else{
	PORB0=0;
}	
    }
    return 1;}
