#include <msp430.h> 
//#define BIT0   0x01
//#define BIT6   0x40


/**
 * LED w/ Different Frequencies G2
 * Author: Jordan Alberico
 * Created: 9/12/18
 * Last Edited: 9/15/18
 */
int main(void)
{
        int j;
        WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
        P1SEL &= ~BIT0; //sets port1.0 to 0
        P1DIR |= BIT0; //sets port1.0 to  output

        P1SEL &= ~BIT6; //configure port 1 for pin 6
        P1DIR |= BIT6; //sets port 1.6 to output

        while(1)
        {

            for(j=0; j<12; j++)
            {
                if(j%2 == 0){ //blinks every 2 clock cycles
                    P1OUT ^= BIT0; //turns LED1 on
                }
                __delay_cycles(25000); //delays LED
                if(j%12 == 0){ //blinks every 12 clock cycles
                    P1OUT ^= BIT6; //turns LED2 on
                }
                __delay_cycles(25000);

            }
        }

        return 0;
}
