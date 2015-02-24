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

//Chapter 5 Excercise 2

/*
Write a program to generate and display a table of N and N^2 
for integer values of n ranging from 1 to 10, using 
appropriate column headers and output formats

output: 

Table of squares
Value of N | Value of N^2
-------------------------
N = 1	|	N^2 = 1
N = 2	|	N^2 = 4
...
N = 10	|	N^2 = 100
*/

#include <stdio.h>

int main(void)
{
	//Initialize counter N
	int n = 1, n2;
	
	//Print Table Header
	printf("Table of Squares\nValue of N\t|\tValue of N^2\n----------------------\n");
	
	//Execute a loop to calculate the value of n ^2 and display in a table
	for(n=1;n <=10; n++)
	{
		n2 = n*n;
		printf("N = %i\t|\tN^2= %i\n",n,n2);		
	}//end for

return 0;
}//end main

/* Program Output

Table of Squares
Value of N      |       Value of N^2
----------------------
N = 1   |       N^2= 1
N = 2   |       N^2= 4
N = 3   |       N^2= 9
N = 4   |       N^2= 16
N = 5   |       N^2= 25
N = 6   |       N^2= 36
N = 7   |       N^2= 49
N = 8   |       N^2= 64
N = 9   |       N^2= 81
N = 10  |       N^2= 100

*/
