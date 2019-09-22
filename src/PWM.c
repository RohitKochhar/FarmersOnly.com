/*
 * PWM.c
 *
 *  Created on: Sep 21, 2019
 *      Author: Hanna Muratovic
 */

#include <msp430fr4133.h>
#include "PWM.h"

void configure_PWM(void) {

    P1DIR |= BIT7; //P1.7 Output
    P1SEL0 |= BIT7; //P1.7 Select

    TA0CCR0 = 512-1;
    TA0CCR1 = 200;
    TA0CTL = TASSEL_2 | MC_1;
    TA0CCTL1 = OUTMOD_7;
}


