/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week Six

Programming Midterm

Author: Michael T. Lowry
Date: 03/19/2015

1.	You are given a character array (i.e. char grade[32])  of 
32 grades spanning the values of A - D,F, I.  
You need to compute the histogram for each of the 
six possible grades which will be contained in a histogram array 
(i.e. int hist_grade[6])  containing six values. Using the switch 
statement structure, write a program that will calculate how many 
grades were given for each grade. Use the following values 
for the grade array:

char grade[32] = {
 'A', 'B', 'C', 'D', 'f', 'I', 
 'b', 'C', 'd', 'F', 'I', 'a',
 'C', 'D', 'F', 'I', 'A', 'B',
 'D', 'F', 'I', 'A', 'B', 'c',
 'I' , 'D', 'F', 'F', 'A', 'B',
 'a', 'b'
  };
  
Hint: Use a for loop to walk through the grade array and within the loop have 
the switch statement populate the hist_grade array accordingly.

hist_grade[6]
[1]	[2]	[3]	[4]	[5]	[6]
A	B	C	D	F	I

*/
#include <stdio.h>

int main(void)
{
	char grade[32] = {
 	'A', 'B', 'C', 'D', 'f', 'I', 
 	'b', 'C', 'd', 'F', 'I', 'a',
 	'C', 'D', 'F', 'I', 'A', 'B',
 	'D', 'F', 'I', 'A', 'B', 'c',
 	'I' , 'D', 'F', 'F', 'A', 'B',
 	'a', 'b'};
 	
 	//initialize an array to hold the histogram values
 	int hist_grade[6]={0};
	
	//for every element in the grade array, sort the values
	for(int i=0;i<32;++i)
	{
		
		switch(grade[i])
		{
		
			//A's
			case 'A':
			case 'a':
				//accumulate the count of "A" grades in the first element
				hist_grade[0] += 1;
				break;
			
			//B's
			case 'B':
			case 'b':
				//accumulate the count of "B" grades in the second element
				hist_grade[1] += 1;
				break;
			//C's
			case 'C':
			case 'c':
				//etc
				hist_grade[2] += 1;
				break;
			//D's
			case 'D':
			case 'd':
				hist_grade[3] += 1;
				break;
			//F's
			case 'F':
			case 'f':
				hist_grade[4] += 1;
				break;
			//I's
			case 'I':
			case 'i':
				hist_grade[5] += 1;
				break;
			default:
				;
				break;
		}//end switch
		
	}//end for
	
	//Print a header
	printf("The grade distribution:\n A\tB\tC\tD\tF\tI\n");
	
	//print out the array
	for(int i=0;i<6;++i)
	{
		printf("%i\t",hist_grade[i]);
	}
	
	printf("\n");
	return 0;
}

/*

Output

The grade distribution:
 A      B       C       D       F       I
6       6       4       5       6       5

--------------------------------
Process exited after 0.1513 seconds with return value 0
Press any key to continue . . .

*/
