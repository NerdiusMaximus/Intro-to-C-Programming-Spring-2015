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

//Chapter 8 Excercise 4

/*
Modify program 8.8 so that the value of guess is printed each time through the while loop. 
Notice how quickly the value of guess converges to the square root. What conclusions can 
you reach about the number of iterations through the loop, the number whose square root
is being calculated, and the final value of the initial guess?
*/

// Function to calculate the absolute value of a number
#include <stdio.h>

float absoluteValue(float x)
{
	if (x < 0)
		x = -x;
	return (x);
}
// Function to compute the square root of a number

float squareRoot(float x)
{
	const float epsilon = .00001;
	float guess = 1.0;
	while (absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
		printf("Guess = %f\n", guess);
	return guess;
}

int main(void)
{
	printf("squareRoot (2.0) = %f\n", squareRoot(2.0));
	printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
	printf("squareRoot (17.5) = %f\n", squareRoot(17.5));
	return 0;
}

//squareRoot(2.0) = 1.414216
//squareRoot(144.0) = 12.000000
//squareRoot(17.5) = 4.183300

/* Output
Guess = 1.414216
squareRoot (2.0) = 1.414216
Guess = 12.000000
squareRoot (144.0) = 12.000000
Guess = 4.183300
squareRoot (17.5) = 4.183300

--------------------------------
Process exited after 0.0393 seconds with return value 0
Press any key to continue . . .

Things to be learned from this output: 
Only one iteration through the loop was taken
the value of the initial guess is within the error for the convergence of the algoriothm

*/
