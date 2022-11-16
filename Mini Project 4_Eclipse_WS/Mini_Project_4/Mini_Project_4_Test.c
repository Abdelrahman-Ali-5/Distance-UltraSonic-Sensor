 /******************************************************************************
 *
 * File Name: Mini_Project_4_Test.c
 *
 * Description: Testing the functionality of the project
 *
 * Author: Abdelrahman Ali Mohamed
 *
 *******************************************************************************/

#include "gpio.h"
#include "lcd.h"
#include "UltraSonic_sensor.h"
#include "common_macros.h"
#include <avr/io.h>



int main(void){
	/* variable to store the value returned by the sensor*/
	uint16 distance = 0 ;
	/* enable global interrupts */
	SET_BIT(SREG,PIN7_ID);
	/* calling the initialize functions of the lcd and the ultrasonic sensor */
	LCD_init();
	UltraSonic_init();
	/* display the message on the lcd */
	LCD_displayString("Distance:     CM");

	while(1){

		distance = Ultrasonic_readDistance() ;
		/* Moving the LCD cursor and continue to print the current distance value */
		LCD_moveCursor(0,10);

		if (distance >= 100) {
			LCD_intgerToString(distance);
		} else {
			LCD_intgerToString(distance);
		/* In case the digital value is two or one digits print space in the next digit place */
			LCD_displayCharacter(' ');
		}

	}


}
