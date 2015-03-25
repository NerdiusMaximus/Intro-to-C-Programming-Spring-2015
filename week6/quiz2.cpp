/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week Six

Programming Quiz 2

Author: Michael T. Lowry
Date: 03/18/2015

Quiz 2 prompt:

You are given a character string  containing 
the following prose: 
"To be or not to be - that is the question: 
Whether 'tis nobler in the mind to suffer 
the slings and arrows of outrageous fortune, 
or to take arms against a sea of troubles and,
 by opposing, end them. To die, to sleep"

Write a program that contains the following functions:
1.	Calculates the length of the string 
( int  stringLength( char string[ ]) 
2.	Calculates the number of times 
that a white space appears ( int numSpace( char string[])

*/
#include <stdio.h>

//function prototypes
int stringLength( char *);
int numSpace(char *);

int main(void)
{
	//character string from Shakespeare
	char prose[] = {"To be or not to be - "\
	"that is the question: Whether 'tis "\
	"nobler in the mind to suffer the slings "\
	"and arrows of outrageous fortune, "\
	"or to take arms against a sea of "\
	"troubles and, by opposing, end them. "\
	"To die, to sleep"};
	//define a pointer variable of type char to point to prose
	char *prose_ptr = &prose[0];
	
	//create variables to store the results of the functions
	int len = 0;
	int spaces = 0;
	
	//print back the prose
	printf("%s\n\n",prose);
	
	//calculate the length of the string
	len = stringLength(prose_ptr);
	
	printf("string length is %i characters\n\n",len);
	
	//count the spaces in the string
	spaces = numSpace(prose_ptr);
	
	printf("The number of spaces in the string is %i\n\n",spaces);
		
	return 0;
}//end main

int stringLength(char *string)
{//function to calculate the chars in a string
	int count = 0; 
	
	while((string[count])!='\0')	
	{//start a while loop that counts elements
		++count;
	}//end while
	
	return count;
}//end stringLength

int numSpace(char *string)
{
	//count is the array index
	int count = 0;
	//spaceCount accumulates the number of spaces
	int spaceCount = 0;
	
	while((string[count])!='\0')	
	{//start a while loop that counts elements
	
		//if a space is read
		if(string[count]==' ')
		{
			//increment the space counter
			++spaceCount;
		}
		++count;
	}//end while
	
	return spaceCount;
}//end numSpace
	
/*
To be or not to be - that is the question: Whether 'tis nobler in the mind to su
ffer the slings and arrows of outrageous fortune, or to take arms against a sea
of troubles and, by opposing, end them. To die, to sleep

string length is 216 characters

The number of spaces in the string is 43


--------------------------------
Process exited after 0.06597 seconds with return value 0
Press any key to continue . . .
*/

