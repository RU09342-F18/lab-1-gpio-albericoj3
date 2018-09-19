#include <msp432.h>


/**
 * Button Blink MSP432P401R
 * Author: Jordan Alberico
 * Created: 9/12/18
 * Last Edited: 9/12/18
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1SEL0 &= ~BIT0; //configure Port 1 for pin 0
	P1DIR |= BIT0; //sets port 1.0 to 0

	while(1)
	{
	    P1OUT ^= BIT0; //toggles LED
	    __delay_cycles(1000000); //delays LED by ~1 sec
	}
	
	return 0;
}
