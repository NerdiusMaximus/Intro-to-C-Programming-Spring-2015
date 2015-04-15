/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week Six

Programming Midterm

Author: Michael T. Lowry
Date: 03/19/2015

2.	Write a program that initializes each row of a 8 x 10 matrix, A[8][10], 
with the right shifted value of the previous row (e.g. the first row is initialized to 1,2,3,4,5,6,7,8,9,10 ; 
the second row contains 10,1,2,3,4,5,6,7,8,9 ; the third row contains 9,10,1,2,3,4,5,6,7,8; etc. 

The initialization of the remaining rows of the input matrix row should be controlled by a set of loops
After printing the matrix for the above problem, transpose the matrix 
into a second matrix (10 x 8), B[10][8],  and print out the new transposed matrix.
This program should demonstrate the use of nested for loops.

*/
#include <stdio.h>

int main(void)
{
	//declare the array A and initialize the first row
	int A[8][10] = {{1,2,3,4,5,6,7,8,9,10}};
	//declare array B to store the transposed array
	int B[10][8] = {0};
	
	for(int i=1;i<8;++i)//start from the second row of the array
	{
		A[i][0]=A[i-1][9];//copy the temp value into the first column of the array
		for(int j=1;j<10;++j)//within each row of the array
		{
			A[i][j] = A[i-1][j-1];
							
		}//end for (j)
		
	}//end for (i)
	
	//Print out the Shifted array
	printf("The right column shifted array is:\n\n");
	for(int i=0;i<8;++i)
	{
		for(int j = 0;j<10;++j)
		{
			printf("%i\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	//transpose the array
	for(int i=0;i<10;++i)
	{
		for(int j = 0;j<8;++j)
		{
			//exchange the elements of rows and columns
			B[i][j]=A[j][i];
		}//end for (j)
		
	}//end for (i)
	
	//Print out Array B
	printf("The transposed array is:\n\n");
	for(int i=0;i<10;++i)
	{
		for(int j=0;j<8;++j)
		{
			printf("%i\t",B[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	
	return 0;
}

/*
OUTPUT 

The right column shifted array is:

1       2       3       4       5       6       7       8       9       10

10      1       2       3       4       5       6       7       8       9

9       10      1       2       3       4       5       6       7       8

8       9       10      1       2       3       4       5       6       7

7       8       9       10      1       2       3       4       5       6

6       7       8       9       10      1       2       3       4       5

5       6       7       8       9       10      1       2       3       4

4       5       6       7       8       9       10      1       2       3



The transposed array is:

1       10      9       8       7       6       5       4

2       1       10      9       8       7       6       5

3       2       1       10      9       8       7       6

4       3       2       1       10      9       8       7

5       4       3       2       1       10      9       8

6       5       4       3       2       1       10      9

7       6       5       4       3       2       1       10

8       7       6       5       4       3       2       1

9       8       7       6       5       4       3       2

10      9       8       7       6       5       4       3


--------------------------------
Process exited after 0.0675 seconds with return value 0
Press any key to continue . . .
*/
