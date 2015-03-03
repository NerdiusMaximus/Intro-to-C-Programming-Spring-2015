/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 03/02/2015

These are the program examples for Arrays and Strings

Chapter 7 Excercises 4, 5, and 6
Chapter 10 Excercises 3 and 6

Chapter 7 Excercise 6

Rewrite program 7.3 to generate a fibonacci number without an array.

*/
#include <stdio.h>

int main(void)
{
	int fib = 0;
	int fibprev=1,fib2prev=0;

	printf("Fibonacci Number \t%i\n",0);
	printf("Fibonacci Number \t%i\n",1);

	for (int i=2;i<15;++i)
	{
		fib = fibprev + fib2prev;
		printf("Fibonacci Number \t%i\n",fib);
		fib2prev = fibprev;
		fibprev = fib;
	}//end for

	return 0;
}//end main

/*Output

Fibonacci Number        0
Fibonacci Number        1
Fibonacci Number        1
Fibonacci Number        2
Fibonacci Number        3
Fibonacci Number        5
Fibonacci Number        8
Fibonacci Number        13
Fibonacci Number        21
Fibonacci Number        34
Fibonacci Number        55
Fibonacci Number        89
Fibonacci Number        144
Fibonacci Number        233
Fibonacci Number        377
*/
