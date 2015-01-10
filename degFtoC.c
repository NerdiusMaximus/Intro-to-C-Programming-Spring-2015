

/*
Intro to C/C++ Programming
Spring 2015
INFO1-CE9008-01

Week One
Program Excercise Chatper 3 # 4: degFtoC

Author: Michael T. Lowry
Date: 02/08/2015

Description:
This Program converts a number from degrees Farenheight to degrees Celsius using the following formula:

C = (F - 32) /1.8

*/

#include <stdio.h>

int main(void)
{
	float degF = 0.0000;
	float degC = 0.0000;
	
	printf("What is the temperature in degrees F? \n Temp: ");
	scanf("%g", &degF);
	
	degC  = (degF  - (float) 32) /1.8;

	printf("\nThe Temperature in Degrees C is: %g\n\n", degC);

	return 0;

}
