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
	float div;
	printf("Please enter two integers: \ninteger 1 = ");
	scanf("%i", &a);
	printf("\ninteger 2 =",b);
	scanf("%i", &b);


	if(b==0)
	{
		printf("Only Chuck Norris can divide by 0!\n");

	}//end if
	else
	{
		div =(float)a/(float)b;
		printf("The answer is %.3f\n",div);

	}

	return 0;
}//end main

/*Output

Please enter two integers:
integer 1 = 12

integer 2 =6
The first number is evenly divisible by the second
pi@raspberrypi ~/Programs/week3 $ ./ifdivide
Please enter two integers:
integer 1 = 7

integer 2 =3
The first number is not evenly divisible by the second.

*/
