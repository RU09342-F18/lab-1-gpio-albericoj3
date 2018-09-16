# IMPORTANT
The folders containing "button blink" are the correct folders for this program. The folders labled "simple blink" are not needed and were added by mistake.

# Button Blink
The purpose of this program is to blink an LED only if the button on the development board is held down. This program uses the LED and button found on the development board. The button is configured as a continuous press. The user will have to hold the button down to blink the LED. The button is normally open, so once the user lets go of the button it will open the circuit and prevent the signa from getting to the board. 

## MSP430G2553
The pins for the MSP430G22553 include:
* Button: 1.3 (input) - includes a pull up resistor configured to the pin
* LED: 1.0 (output)

## MSP4305529LP
The pins for the MSP4305529LP include:
* Button: 2.1 (input) - includes a pull up resistor configured to the pin
* LED: 1.0 (output)

## Implementation
To implement this code, connect the button and LED to the specified pins above. This is only necessary if you are not using the included button and LED found on the development board. 
