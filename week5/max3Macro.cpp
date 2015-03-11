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

//Chapter 13 Excercise 4

/*
Define a macro M3 that gives the maximum of three values. 
Then write a program to test the macro definition.
*/

#define MAX3(a,b,x)		 ((a) > (b) && (a) > (c))         	\
						 	(a) 							\
				    	 ((b) > (a) && (b) > (c))			\
						 	(b) 							\
						 	(c)									
					

#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 7;
	int c = 22;
	
	printf("The max value of %i, %i, and %i is %i", a,b,c,MAX3(a,b,c) );
}

/* output
The min value of 10 and 7 is 7
--------------------------------
Process exited after 0.03545 seconds with return value 0
Press any key to continue . . .
*/
