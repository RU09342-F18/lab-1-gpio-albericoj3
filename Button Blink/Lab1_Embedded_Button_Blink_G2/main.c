#include <msp430.h> 


/**
 * Button Blink G2
 * Author: Jordan Alberico
 * Created: 9/13/18
 * Last Edited: 9/13/18
 */
int main(void)
{
        int j;
        WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
        P1SEL = 0; //sets port1 to 0
        P1DIR |= BIT0; //set port 1.0 to output
        P1DIR &= ~BIT3; //set port 1.3 to input
        P1REN |= BIT3; //enable pull up resistor on BIT3

        while(1)
        {
            j = P1IN & BIT3; //when the button is pressed, j is 8
            if(j != 8)
            {
                P1OUT ^= BIT0; //toggles LED
                __delay_cycles(1000000); //delays LED by ~1 sec
            }
            else
                P1OUT &= ~BIT0;
        } //conditional statement provided by Professor Tang's slides.

        return 0;
}
