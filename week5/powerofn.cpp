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

//Chapter 8 Excercise 7

/*
Write a function that rasies an integer to a positive integer power. 
Call the function x_to_the_n taking two integer arguments x and n.
Have the function return a long int, which represents the results of calculating x to the nth power
*/
#include <stdio.h>

long int x_to_the_n(int x, int n)
{
	long int power = 1;
	
	for(int i=0; i<=n;++i)
	{
		power = power * x;
		
	}
	
	return power;
}

int main(void)
{
	int x,n;
	long int power;
	
	x = 4;
	n = 3;
	
	power = x_to_the_n(x,n);
	printf("%i to the power of %i is %i\n",x,n,power);
	
	x = 5;
	n = 7;
	
	power = x_to_the_n(x,n);
	printf("%i to the power of %i is %i\n",x,n,power);	
	
	return 0;
}

/*output
4 to the power of 3 is 256
5 to the power of 7 is 390625

--------------------------------
Process exited after 0.0152 seconds with return value 0
Press any key to continue . . .
*/
