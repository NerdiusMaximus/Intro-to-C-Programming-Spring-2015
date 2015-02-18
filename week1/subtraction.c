/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 02/17/2015

Chapter 3 Excercises 2 - 6

Chapter 3 Example 4:
Write a program that subtracts 15 from 87 and prints the answer
*/

#include <stdio.h>

int main(void)
{
	int a=15,b=87,c;
	
	c=b-a;
	printf("%i minus %i = %i\n", b,a,c);

	return 0;
}//end main

/*
output:

87 minus 15 is 72

*/
	
	