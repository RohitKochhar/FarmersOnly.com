//includes
#include <msp430.h>
#include "ADC.h"
#include "UART.h"
#include "functions.h"

//variables


int main(void)
{
    // Stop watchdog timer
	WDTCTL = WDTPW | WDTHOLD;

    // Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    //configure ADCs
	configure_ADC();

	//main function loop
    while(1)
    {
        numADC = 2;

        ADCCTL0 |= ADCENC;                                      // Enable ADC
        TA1CTL |= TACLR;                                        // Clear TAR to start the ADC sample-and-conversion
        __bis_SR_register(LPM0_bits | GIE);                     // Enter LPM0 w/ interrupts
        __no_operation();                                       // Only for debugger

    }
}


