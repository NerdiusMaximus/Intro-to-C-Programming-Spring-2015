/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 02/22/2015

These are the program examples for Looping and decision Tree chapters

Chapter 5 Excercises 2,4,6,11
Chapter 6 Excercises 2, 3, 6
*/

//Chapter 6 example 6

#include <stdio.h>

int main(void)
{
	int number,numDigits;
	printf("Please enter an integer to be converted:\n ");
	scanf("%i", &number);

	numDigits = 0;
	do{
		numDigits++;
		switch (number%10)
		{
			case 0:
				printf("Zero\t");
				break;
			case 1:
				printf("One\t");
				break;
			case 2:
				printf("Two\t");
				break;
			case 3:
				printf("Three\t");
				break;
			case 4:
				printf("Four\t");
				break;
			case 5:
				printf("Five\t");
				break;
			case 6:
				printf("Six\t");
				break;
			case 7:
				printf("Seven\t");
				break;
			case 8:
				printf("Eight\t");
				break;
			case 9:
				printf("Nine\t");
			default:
				;
				break;
		}//end switch
		number = number/10; //shift right
	}//end do
	while(number);


	return 0;
}
