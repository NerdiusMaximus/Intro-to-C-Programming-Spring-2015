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

//Chapter 5 excercise 6

/*
A minus sign placed in front of a field width specfication causes the field to be left justified. 
Substitute the following printf statement for the corresponding statement inf program 5.2, run the program 
and compare the outpufs rpduced by both programs

printf("%-2i          %i\n",n, triangularnumber);
*/


/*Program 5.2
Program to calculate the 200th triangular number
*/

#include <stdio.h>

int main(void)
{
	int n, triangularnumber;
	
	triangularnumber = 0;
	
	for( n = 1; n<= 200; n = n++)
	{
		triangularnumber = triangularnumber + n;
	}//end for
	printf("The 200th triangular number is %i\n",triangularnumber);
	printf("%-2i          %i\n",n,triangularnumber);

	return 0;
}//end main

/*Output
The 200th triangular number is 20100
201          20100
*/
