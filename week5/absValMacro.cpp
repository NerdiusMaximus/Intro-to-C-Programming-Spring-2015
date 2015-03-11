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

//Chapter 13 Excercise 9

/*
Define a macro ABSOLUTE_VALUE that computes the absolute value
Ensure that an expression like 
ABSOLUTE_VALUE(x + delta) 
is handled properly
*/


#include <stdio.h>

#define ABSOLUTE_VALUE(a)	(a) > 0 ? (a) : -1*(a)

int main(void)
{
	int x = 12;
	int delta = -17; 
	
	printf("The absolute value of %i is %i\n",x,ABSOLUTE_VALUE(x));
	printf("The absolute value of (%i + %i) is %i\n\n",x,delta,(ABSOLUTE_VALUE(x+delta)));
	
	return 0;	
}

/*Output
The absolute value of 12 is 12
The absolute value of (12 + -17) is 5


--------------------------------
Process exited after 0.01667 seconds with return value 0
Press any key to continue . . .
*/
