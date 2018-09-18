# Off Board Blink
The purpose of this code is to blink two different LEDs at different frequencies on a breadboard. The red LED blinks every 2 clock cycles and the green LED blinks every 12 clock cycles. The program will start once it has been uploaded to the microprocessor. The microprocessor has been removed and placed onto the breadboard. The pinout below is how the processor was wired.

                     
` DVCC          Pin1 |                | Pin20 DVSS
 
1.0 (Red LED)  Pin2 |                | Pin19

               Pin3 |                | Pin18
               
               Pin4 |                | Pin17
               
               Pin5 |                | Pin16 RST (RC circuit used to resist noise)
               
               Pin6 |                | Pin15
               
               Pin7 |                | Pin14 1.6 (Green LED)
               
               Pin8 |                | Pin13
               
               Pin9 |                | Pin12
               
              Pin10 |                | Pin11`
              
              

## MSP430G2553
The pins for the MSP430G22553 include:
* Red LED: 1.0
* Green LED: 1.6


## Implementation
To implement the code, upload it to the processor. Remove the processor from the board then connect the proper components to it on a breadboard.
