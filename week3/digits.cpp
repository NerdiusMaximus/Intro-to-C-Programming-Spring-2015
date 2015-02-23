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

//Chapter 5 Excercise 11

/*
Write a program that calculates the sume of the digits of an integer
*/

#include <stdio.h>

int main()
{
	unsigned int number, numDigits;
	while(1)
	{
		printf("Enter a positive decimal based number >0\n");
		scanf("%u",&number);
		printf("input number = %u %#X", number, number);
		if(number<0)
			break;
		numDigits = 0;
		do{
			numDigits++;
			number = number/10; //shift right
		}
		while(number);
		printf(" numDigits = %d\n", numDigits);
	
	}//end while, end infinite loop
	return 0;
}//end main
