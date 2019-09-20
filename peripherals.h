/*
 * peripherals.h
 *
 *  Created on: Sep 19, 2019
 *      Author: Hanna Muratovic
 *
 * This header defines the functions to configure the various
 * peripherals required for this project.
 */

#ifndef PERIPHERALS_H_
#define PERIPHERALS_H_

//variables
unsigned char ADCresult[3];                                    // 8-bit ADC conversion result array
unsigned char numADC;

void configure_ADC(void);

void configure_PWM(void);

void configure_LCD(void);

void configure_UART(void);

void configure_LED(void);

#endif /* PERIPHERALS_H_ */
