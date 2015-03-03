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

Chapter 7 Excercise 4
Write a program that averages an array of 10 floating point numbers

*/

#include <stdio.h>

int main(void)
{
	float numbers[10],temp=0.0;
	int i=0;

	for(i=0;i<10;++i)
	{
		printf("Please enter element %i of 10: \n",i+1);
		scanf("%f",&temp);
		numbers[i] = temp;
		printf("The number you entered is: %f\n",numbers[i]);
	}//end for

	//debugging for loop to print array
	printf("Index\tValue\n");
	i=0;
	for(i=0;i<10;++i)
	{
		printf("%i\t%f\n",i,numbers[i]);
	}//end for
	printf("\n");

	//run a loop that adds the numbers
	i=0;
	temp=0;
	for (i=0;i<10;++i)
	{

		temp += numbers[i];
	}//end for

	//divide by 10
	temp = temp/10.000000000;

	printf("The average of the number array is: %g\n",temp);

	return 0;
}//end main

/* Output
./average
Please enter element 0 of 10:
1
The number you entered is: 1.000000
Please enter element 1 of 10:
2
The number you entered is: 2.000000
Please enter element 2 of 10:
3
The number you entered is: 3.000000
Please enter element 3 of 10:
4
The number you entered is: 4.000000
Please enter element 4 of 10:
5
The number you entered is: 5.000000
Please enter element 5 of 10:
6
The number you entered is: 6.000000
Please enter element 6 of 10:
7
The number you entered is: 7.000000
Please enter element 7 of 10:
8
The number you entered is: 8.000000
Please enter element 8 of 10:
9
The number you entered is: 9.000000
Please enter element 9 of 10:
1
The number you entered is: 1.000000
Index   Value
0       1.000000
1       2.000000
2       3.000000
3       4.000000
4       5.000000
5       6.000000
6       7.000000
7       8.000000
8       9.000000
9       1.000000

The average of the number array is: 4.6
./average
Please enter element 0 of 10:
1
The number you entered is: 1.000000
Please enter element 1 of 10:
2
The number you entered is: 2.000000
Please enter element 2 of 10:
3
The number you entered is: 3.000000
Please enter element 3 of 10:
4
The number you entered is: 4.000000
Please enter element 4 of 10:
5
The number you entered is: 5.000000
Please enter element 5 of 10:
6
The number you entered is: 6.000000
Please enter element 6 of 10:
7
The number you entered is: 7.000000
Please enter element 7 of 10:
8
The number you entered is: 8.000000
Please enter element 8 of 10:
9
The number you entered is: 9.000000
Please enter element 9 of 10:
1
The number you entered is: 1.000000
Index   Value
0       1.000000
1       2.000000
2       3.000000
3       4.000000
4       5.000000
5       6.000000
6       7.000000
7       8.000000
8       9.000000
9       1.000000

The average of the number array is: 4.6

*/
