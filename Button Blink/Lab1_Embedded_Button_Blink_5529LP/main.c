#include <msp430.h> 


/**
 * Button Blink 5529LP
 * Author: Jordan Alberico
 * Created: 9/15/18
 * Last Edited: 9/15/18
 */
int main(void)
{
        int j;
        WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
        P1SEL = 0; //sets port1 to 0
        P1DIR |= BIT0; //set port 1.0 to output
        P2DIR &= ~BIT1; //set port 2.1 to input
        P2REN |= BIT1; //enable pull up resistor on Port 2, BIT1

        while(1)
        {
            j = P2IN & BIT1; //when the button is pressed, j is 8
            if(j != 2)
            {
                P1OUT ^= BIT0; //toggles LED
                __delay_cycles(1000000); //delays LED by ~1 sec
            }
            else
                P1OUT &= ~BIT0;
        } //conditional statement provided by Professor Tang's slides.

        return 0;
}
