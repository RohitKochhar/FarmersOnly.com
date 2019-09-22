//includes
#include <msp430fr4133.h>
#include "ADC.h"
#include "UART.h"
#include "functions.h"
#include "LCD.h"
#include "button.h"
#include "PWM.h"

//variables
static uint16_t resMoist;
static uint16_t resTemp;

int main(void)
{
    __enable_interrupt();
    // Stop watchdog timer
	WDTCTL = WDTPW | WDTHOLD;

    // Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    // Configure peripherals
	configure_ADC();
	configure_LCD();
	configure_UART();
	configure_button();
	configure_PWM();

	// Main function loop
    while(1)
    {

        display_LCD(retNumZone(), resMoist, resTemp);
        __no_operation();                                       // Only for debugger

    }
}


