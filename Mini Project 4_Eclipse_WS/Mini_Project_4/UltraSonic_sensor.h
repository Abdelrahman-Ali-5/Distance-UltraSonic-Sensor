 /******************************************************************************
 *
 * Module: UltraSonic_sensor
 *
 * File Name: UltraSonic_sensor.h
 *
 * Description: Header file for the AVR UltraSonic_sensor driver
 *
 * Author: Abdelrahman Ali Mohamed
 *
 *******************************************************************************/

#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_

#include "std_types.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Initialization of the ultrasonic_sensor
 * */
void UltraSonic_init(void);

/*
 * The call back function called by the Icu driver which is used to calculate
 * the high time ( Pulse time ) generated by the ultrasonic sensor
 * */
void Ultrasonic_edgeProcessing(void);

/*
 * function responsible of sending the trigger pulse to the ultrasonic sensor
 * */
void Ultrasonic_Trigger(void);

/*
 * function responsible of sending the trigger pulse by calling the ultrasonic_trigger function
 * start the measurements by the icu from this moment
 * calculate the distance using the timer high period captured by the icu
 * return the distance of the ultrasensor
 * */
uint16 Ultrasonic_readDistance(void);

#endif /* ULTRASONIC_SENSOR_H_ */
