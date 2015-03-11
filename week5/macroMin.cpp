/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week Five
Programming Homework

Author: Michael T. Lowry
Date: 03/10/2015

Chapter 8 Excercises 4, 7, 11
Chapter 13 Excercises 3, 4, 5, 9

*/

//Chapter 13 Excercise 3

/*
Define a macro MIN that gives the minimum of two values. 
Then write a program to test the macro definition.
*/

#define MIN(a,b)	((a)<(b) ? (a) : (b))

#include <stdio.h>

int main(void)
{
	int a = 10;
	int x = 7;
	
	printf("The min value of %i and %i is %i", a,x,MIN(a,x) );
}

/* output
The min value of 10 and 7 is 7
--------------------------------
Process exited after 0.03545 seconds with return value 0
Press any key to continue . . .
*/
