/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 02/17/2015

Chapter 3 Excercises 2 - 6
*/

//Chapter 3 Excercise 6
//What output would you expect from the following program?

#include <stdio.h>

int main(void)
{
	int answer,result;
	
	answer = 100;
	result = answer - 10;
	printf("The result is %i\n", result +5);

	return 0;
}//end main

/* Output
The result is 95
*/
