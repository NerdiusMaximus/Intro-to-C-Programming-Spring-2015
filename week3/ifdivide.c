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

//Chapter 6 Excercise 2

#include <stdio.h>

int main(void)
{
	int a,b;
	printf("Please enter two integers: \ninteger 1 = ");
	scanf("%i", &a);
	printf("\ninteger 2 =",b);
	scanf("%i", &b);

	if(a%b)
	{
		printf("The first number is not evenly divisible by the second.\n");
	}//end if
	else
	{
		printf("The first number is evenly divisible by the second\n");
	}

	return 0;
}//end main
