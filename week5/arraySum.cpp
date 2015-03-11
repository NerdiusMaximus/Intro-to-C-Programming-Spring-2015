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

//Chapter 8 Excercise 11

/*
Write a function called arraySum that takes two arguments: 
an integer array and thnumber of elements in the array. 
Have the function return as a result the sum of the elements in the array.
*/

#include <stdio.h>

long int arraySum(int array[], int n)
{
	long int sum = 0;
	for (int i=0;i<n;++i)
	{
		sum = sum + array[i];
	}
	
	return sum;
}

int main(void)
{
	int n = 10,sum = 0;
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	
	sum = arraySum(array,n);
	
	printf("The array is:\n");
	
	for(int i=0;i<n;++i)
	{
		printf("%i\t",array[i]);
	}
	printf("\n\n");
	
	printf("The sum of the array is %i",sum);
	
	return 0;
}

/* Output
The array is:
0       1       2       3       4       5       6       7       8       9


The sum of the array is 45
--------------------------------
Process exited after 0.06893 seconds with return value 0
Press any key to continue . . .
*/
