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

//Chapter 13 Excercise 5

/*
Define a macro SHIFT that performs the same function as program 12.3
*/


//// Function to shift an unsigned int left if
//// the count is positive, and right if negative
//#include <stdio.h>

//unsigned int shift (unsigned int value, int n)
//{
//if ( n > 0 ) // left shift
//value <<= n;
//else // right shift
//value >>= -n;
//return value;
//}

#include <stdio.h>

#define SHIFT(w,n)	(n) > 0 ? (w) <<= (n) : (w) >>=(-n)

int main(void)
{
	unsigned int w1 = 0177777u, w2 = 0444u;
	unsigned int shift (unsigned int value, int n);
	
	printf ("%o\t%o\n", SHIFT(w1, 5), w1 << 5);
	printf ("%o\t%o\n", SHIFT(w1, -6), w1 >> 6);
	printf ("%o\t%o\n", SHIFT(w2, 0), w2 >> 0);
	printf ("%o\n", SHIFT(SHIFT(w1, -3), 3));
	
	return 0;	
}

/* output
7777740 7777740
77777   77777
444     444
77770

--------------------------------
Process exited after 0.01659 seconds with return value 0
Press any key to continue . . .
*/
