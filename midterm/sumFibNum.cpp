/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 04/01/2015

This program calculates the sume of the first 20 Fibonacci numbers

Utilizing two functions, fibonaci(&array[0], size), and sum(&array[0],size)

*/
//include files

#include <stdio.h>

//#define DEBUG	1

//function prototypes
int sum(int *,int);
void fib(int *, int);

//Begin main method
int main(void)
{
	int size = 20;
	int fibSum = 0;
	
	#ifdef DEBUG
    printf("Starting Main Method...\n\n");
    #endif
    
    int fibArray[20]={0};
    int *fibArray_ptr = &fibArray[0];
    
	fib(fibArray_ptr,size);
	
	#ifdef DEBUG
	printf("\nThe array in the main method reads:\n");
	for(int i=0;i<size;++i)
	{
		printf("%i\t",fibArray[i]);
	}
	printf("\n\n");
	#endif
	
	//calculate the sum
	fibSum = sum(fibArray_ptr, size);

    printf("The sum of the fibonacci array of size %i is %i\n\n",size,fibSum);
    
	return 0;
}

//
int sum(int *fib, int n)
{
	//initialize sum
	int sum = 0;
	
	//for loop to calculate the sum
    for(int i=0; i<n; ++i)
    {
    	//add the currenty value of the array to sum
    	sum += fib[i];
    }//end for
    
    return sum;
}

//Begin method for generating fibonacci numbers
void fib(int *fibArray, int n)
{
 	 //set thew first two elements of the fib array
 	 fibArray[0] = 0;
 	 fibArray[1] = 1;
 	 #ifdef DEBUG
 	 printf("The array reads:\n %i\t%i\t",fibArray[0],fibArray[1]);
 	 #endif
     for(int i=2; i<n; ++i)
    {
     		 fibArray[i] = fibArray[i-1]+ fibArray[i-2];
     		 #ifdef DEBUG
     		 printf("%i\t",fibArray[i]);
     		 #endif
    }//end for
    
    #ifdef DEBUG
    printf("\n\n");
    #endif
}// end fib

/*output
Starting Main Method...

The array reads:
 0      1       1       2       3       5       8       13      21      34
55      89      144     233     377     610     987     1597    2584    4181



The array in the main method reads:
0       1       1       2       3       5       8       13      21      34
55      89      144     233     377     610     987     1597    2584    4181


The sum of the fibonacci array of size 20 is 10945


--------------------------------
Process exited after 0.02949 seconds with return value 0
Press any key to continue . . .
*/
