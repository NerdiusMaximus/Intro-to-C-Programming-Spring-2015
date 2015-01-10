/*
Intro to C/C++ Programming
Spring 2015
INFO1-CE9008-01

Week One
Programming Excercise: Solve a polynomial
poly.c

Author: Michael T. Lowry
Date: February 10th 2015


This program exaluates a polynomial for a specified value. The pooynomial equation is:
3 * x^4 - 5 * x^2 + 6

the value for x = 2.55

*/

#include <stdio.h>

int main(void)
{
	float x = 2.55, ans;

	ans = 3.0 *x*x*x - 5.0*x*x + 6.0;
	
	printf("The solution for the polynomial y = 3x^3 -5x^2 + 6 for the value of x = %g is %g\n\n", x, ans);


}
