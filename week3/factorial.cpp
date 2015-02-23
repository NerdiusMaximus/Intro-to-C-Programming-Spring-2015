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

/*Chapter 5 Excercise 4 
The factorial of an integer n, written n!, is the product of the 
consecutive integers 1  through n. For example, 5 factorial is calculated as:
5! = 5  x 4 x 3 x 2 x 1 = 120

Write a program to generate and print a table of the first 10 factorials

Factorial Table
n = 1 | n! = 1
n = 2 | n! = 2
n = 3 | n! = 6
...
n = 10| n! =3628800 
*/

#include <stdio.h>

int main(void)
{
	//print out table title
	printf("Factorial Table\n");

	for(int n=1;n<=10;++n)
	{//loop for calculating each column of the table 
		long int nfact = 1;
		for(int m = n;m>1;m--)
		{//Loop for calculating each factorial value in the table
			nfact *= m; // equivalent to nfact = nfact * m
		}//end while
		printf("n = %i\t|\tn! = %u\n",n,nfact);
	}//End for

	return 0;
}//end main

/* Output

Factorial Table
n = 1   |       n! = 1
n = 2   |       n! = 2
n = 3   |       n! = 6
n = 4   |       n! = 24
n = 5   |       n! = 120
n = 6   |       n! = 720
n = 7   |       n! = 5040
n = 8   |       n! = 40320
n = 9   |       n! = 362880
n = 10  |       n! = 3628800
*/
