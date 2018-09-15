#include <msp430.h> 


/**
 * LED w/ Different Frequencies FR2311
 * Author: Jordan Alberico
 * Created: 9/15/18
 * Last Edited: 9/15/18
 */
int main(void)
{
        int j;
        WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
        P1SEL0 &= ~BIT0; //sets port1.0 to 0
        P1DIR |= BIT0; //sets port1.0 to  output

        P2SEL0 &= ~BIT0; //configure port 2.0 to 0
        P2DIR |= BIT0; //sets port 2.0 to output

        while(1)
        {

            for(j=0; j<12; j++)
            {
                if(j%2 == 0){ //blinks every 2 clock cycles
                    P1OUT ^= BIT0; //turns LED1 on
                }
                __delay_cycles(25000); //delays LED
                if(j%12 == 0){ //blinks every 12 clock cycles
                    P2OUT ^= BIT0; //turns LED2 on
                }
                __delay_cycles(25000);

            }
        }

        return 0;
}
