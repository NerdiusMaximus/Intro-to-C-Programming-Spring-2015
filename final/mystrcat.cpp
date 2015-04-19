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
//#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>

//Definitions
#define DEBUG 1

//function prototypes
char* string_cat(char* s1, char*s2);

//main method
int main(void)
{
	//declare variables
	char s1[80] = {0};
	char s2[40] = {0};
	char buffer[512] = {1};
	char* buffer_ptr = &buffer[0];
	char s_result[80] = {0};
	
	//enter a true loop
	while(1)
	{
		//prompt the user to input strings
		fputs("\nPlease enter two strings to concatenate:\nString 1:",stdout);
		
		//get user input of string1 to stdin
		buffer_ptr = fgets(&s1[0],strlen(s1)+1,stdin);
		
		//debug print statements
		#ifdef DEBUG
		printf("\nThe string you entered was: \n%s",s1);
		#endif
		
		printf("\nString 2: ");
		buffer_ptr = fgets(&s2[0],strlen(s2)+1,stdin);

		//debug print statements
		#ifdef DEBUG
		printf("\nThe string you entered was: \n%s",s2);
		#endif
		
		//invoke the function
		string_cat(&s1[0],&s2[0]);
		
		#ifdef DEBUG
		printf("\nResulting s_result: %s",s_result);
		#endif
		
		if(s_result == NULL)
		{
			printf("\nStrings too long.\nPlease select different strings.\n\n");
			continue;
		}//end if
		
		//print the resulting string
		printf("\nThe result string is:\n\n%s",s1);
		
		//prompt the user to decide continue or not
		printf("Enter new strings? Y/N (0): ");
		buffer[0] = getchar();
		
		//if the result is '0'
		if(!buffer)
		{
			#ifdef DEBUG
			printf("\nEnding the loop...\n\n");
			#endif
			//break the loop
			break;
		}//end if
		
	}//end while
	
	#ifdef DEBUG
	printf("\nLoop Ended. Program complete. Goodbye!\n");
	#endif
	//default return
	return 0;
}//end main method

char* string_cat(char* s1, char*s2)
{
	int s1_len=strlen(s1);
	int s2_len = strlen(s2);

	//check condition first
	if(s1_len+s2_len > 80) //if the sum of the strings is over 80
	{
		printf("The strings are too long. Please choose shorter strings.");
		return NULL;
	}//end if
	
	//for each element of string one
	for(int i=0; i<strlen(s2);++i)
	{
		//append each element of string 2 to the end os string 1
		s1[s1_len+i]= s2[i];	
	}//end for
	
	return &s2[0];
}//end string_cat
