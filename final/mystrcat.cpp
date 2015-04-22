/* Intro to C/C++ Programming 

Final Examination

Author: Michael T Lowry
Date: 04/19/2015

Part 1: 

Write a program containing a concatente function, 
char* string_cat(char *s1, char* s2),
that appends string2 to string1. 

Requirements: 

1.	Write a program containing a concatenate function, char*  string_cat(char *s1, char * s2),  that appends string2 to string1. (30%)
"	string1 should be declared as char s1[80] and string2 should be declared as char s2[40].
"	The function needs to check that the sum of the lengths of both strings is less than 80 characters before appending s2 to s1.  
"	In the event that the sum of the two strings is greater than 80, the function should return NULL otherwise it returns the &s1[0].  
"	Within the function call the user should print the sum of the total length of the final concatenated string. When appending s2 to s1, make sure to remove the NULL termination character in s1 before proceeding to append s2.
"	The input strings should be collected sequentially from the keyboard using fgets(&s1[0], len1 + 1, stdin)    and fgets(&s2[0], len2 + 1, stdin) where, len1 and len2 are the maximum size of the respective input strings. 
"	The program should query the user for input strings and print the initial strings(s1 and s2) and the final concatenated string.  
"	The queering loop should continue until the user says No(0).  
"	For this problem you can use strlen(char *) function defined in <string.h> but not any other function in that library!!!
"	Run the program several times to demonstrate that it works for all cases.

*/

//includes
#include <string.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>

//Definitions
//#define DEBUG 1

//function prototypes
char* string_cat(char* s1, char*s2);

//main method
int main(void)
{
	//declare variables
	char s1[80];
	char s2[40];
	char buffer;
	
	//enter a true loop
	while(1)
	{
		int length = 0;
		char c;
		//prompt the user to input strings
		fputs("Please enter two strings to concatenate:\nFirst String: ",stdout);
		
		//get user input of string1 to stdin
		fgets(&s1[0],80,stdin);
		printf("The string you entered was: %s\nSecond String: ",s1);
		fgets(&s2[0],40,stdin);
		printf("The second string you entered was: %s",s2);
		
		string_cat(&s1[0],&s2[0]);
		
		length = strlen(s1);
		printf("\nThe length of the concatenated string is %i",length);
		//print the resulting string
		printf("\n\nThe result string is: %s",s1);

		//prompt the user to decide continue or not
		printf("\nEnter new strings? Y/N (0): ");
		fgets(&buffer,2,stdin);
		
		//if the result is '0', 'n', or 'N'
		if(buffer == '0' || buffer == 'n' || buffer == 'N')
		{
			//break the loop
			break;
		}//end if
		printf("\n");
	}//end while
	
	#ifdef DEBUG
	printf("\nProgram complete. Goodbye!\n");
	#endif
	
	//default return
	return 0;
}//end main method

char* string_cat(char* s1, char*s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	
	printf("\ns1_len = %i\ns2_len = %i\n\n",s1_len,s2_len);

	//check condition first strlen(s) >= LEN1 || strlen(t) >= LEN1 || strlen(s) + strlen(t) > LEN1
	if(s1_len >= 79 || s2_len >= 39 || s1_len + s2_len >= 79) //if the sum of the strings is over 80
	{
		printf("The strings are too long. Try again.\n");
		return NULL;
	}//end if
	
	//for each element of string one
	for(int i=0; i<strlen(s2)+1;++i)
	{
		//append each element of string 2 to the end os string 1
		s1[s1_len-1+i] = s2[i];
		
	}//end for
	
	return &s1[0];
}//end string_cat

/* output

*/
