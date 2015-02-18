/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 02/17/2015

Chapter 3 Excercises 2 - 6
*/

//Chapter 3 Excercise 5
/*
Correct the syntactic errors in the following program.
 Then type in and run the corrected program to ensure 
you have correctly identified all the mistakes

#include <stdio.h>

int main(Void) <-- keyword void is not the same as variable Void
{
	INT sum; <-- INT is not keyword int, and would be not declared in this scope
	/* COMPUTE RESULT <-- shoudl be a single line comment denoted by "//"
	sum = 25 + 37 - 19 <-- missing a semicolon
	/* DISPLAY RESULTS // <-- should be single line comment
	printf('The answer is %i\n" sum); <-- missing a "," after the format string
	return 0;
}
*/

//Corrected Program
#include <stdio.h>

int main(void)

{
	int sum;
	//COMPUTE RESULT
	sum = 25 + 37 - 19;
	//DISPLAY RESULTS
	printf ("The answer is %i\n", sum);

	return 0;

}//end main

/*
Output:
The answer is 43

*/
