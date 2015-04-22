/* Intro to C/C++ Programming 

Final Examination

Author: Michael T Lowry
Date: 04/19/2015

Part 1: 

Write a program containing a concatente function, 
char* string_cat(char *s1, char* s2),
that appends string2 to string1. 

Requirements: 

1.	Write a program containing a concatenate function, 
char*  string_cat(char *s1, char * s2),  that appends string2 to string1. (30%)
"	string1 should be declared as char s1[80] 
and string2 should be declared as char s2[40].
"	The function needs to check that the sum of 
the lengths of both strings is less than 80 characters 
before appending s2 to s1.  
"	In the event that the sum of the two strings 
is greater than 80, the function should return NULL
 otherwise it returns the &s1[0].  
"	Within the function call the user should 
print the sum of the total length of the final 
concatenated string. When appending s2 to s1, 
make sure to remove the NULL termination character 
in s1 before proceeding to append s2.
"	The input strings should be collected sequentially 
from the keyboard using fgets(&s1[0], len1 + 1, stdin)    
and fgets(&s2[0], len2 + 1, stdin) where, len1 and len2 
are the maximum size of the respective input strings. 
"	The program should query the user for input strings 
and print the initial strings(s1 and s2) and the final 
concatenated string.  
"	The queering loop should continue until 
the user says No(0).  
"	For this problem you can use strlen(char *) function 
defined in <string.h> but not any other function in 
that library!!!
"	Run the program several times to demonstrate 
that it works for all cases.

*/

//includes
#include <string.h>
#include <iostream>

//Definitions
#define DEBUG 1

//function prototypes
char* string_cat(char* s1, char*s2);

//main method
int main(void)
{
	//declare variables
	char s1[80];
	char s2[40];
	char buffer;
	int n = 0;
	//enter a true loop
	while(1)
	{
		if (n>0){
			//printf("Type enter to conitune...");
			for(int i = 0;*fgets(s1,80,stdin)!='\n';++i)
			{
				;
			}//end for
		}//end if
		
		int length = 0;
		char c;
		char* c_ptr = &c;
		//prompt the user to input strings
		fputs("Please enter two strings to concatenate:\nFirst String: ",stdout);
		
		//get user input of string1 to stdin
		fgets(&s1[0],80,stdin);
		printf("The string you entered was: %s\nSecond String: ",s1);
		fgets(&s2[0],40,stdin);
		printf("The second string you entered was: %s",s2);
		
		printf("\nCalculating...\n");
		
		c_ptr = string_cat(&s1[0],&s2[0]);
		if(c_ptr != NULL)
		{	
			printf("\nEntering IF statement...\n");	
			length = strlen(s1);
			printf("\nThe length of the concatenated string is %i",length);
			//print the resulting string
			printf("\n\nThe result string is: %s",s1);
	
			//prompt the user to decide continue or not
			printf("\nEnter new strings? Y/N (0): ");
			fgets(&buffer,2,stdin);
		}//end if
		//if the result is '0', 'n', or 'N'
		if(buffer == '0' || buffer == 'n' || buffer == 'N')
		{
			//break the loop
			break;
		}//end if
		printf("\n");
		++n;
	}//end while
	
	#ifdef DEBUG
	printf("\nProgram complete. It ran %i times. Goodbye!\n", n);
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
		printf("The strings are too long. Try again.\nPress enter to continue...");
		s1 = 0;
		s2 = 0;
		return NULL;
	}//end if
	
	//for each element of string one
	for(int i=0; i<strlen(s2)+1;++i)
	{
		//append each element of string 2 to the end os string 1
		s1[s1_len-1+i] = s2[i];
		
	}//end for
	
	//printf("The first char is: %c",s1[0]);
	return s1;
}//end string_cat

/* output
Please enter two strings to concatenate:
First String: This string
The string you entered was: This string

Second String: is bananas. B-a-n-a-n-a-s
The second string you entered was: is bananas. B-a-n-a-n-a-s

Calculating...

s1_len = 13
s2_len = 26


Entering IF statement...

The length of the concatenated string is 38

The result string is: This string is bananas. B-a-n-a-n-a-s

Enter new strings? Y/N (0): y

Please enter two strings to concatenate:
First String: Howdy dude.
The string you entered was: Howdy dude.

Second String: How can I help you today?
The second string you entered was: How can I help you today?

Calculating...

s1_len = 13
s2_len = 26


Entering IF statement...

The length of the concatenated string is 38

The result string is: Howdy dude. How can I help you today?

Enter new strings? Y/N (0): y

Please enter two strings to concatenate:
First String: First string is short.
The string you entered was: First string is short.

Second String: Next string is longer than all hell and cannot be contained
The second string you entered was: Next string is longer than all hell and
Calculating...

s1_len = 24
s2_len = 39

The strings are too long. Try again.
Press enter to continue...

Please enter two strings to concatenate:
First String: and now lets try tamer strings
The string you entered was: and now lets try tamer strings

Second String: that are short
The second string you entered was: that are short

Calculating...

s1_len = 31
s2_len = 15


Entering IF statement...

The length of the concatenated string is 45

The result string is: and now lets try tamer stringsthat are short

Enter new strings? Y/N (0): y

Please enter two strings to concatenate:
First String: C programing can be hard...
The string you entered was: C programing can be hard...

Second String: but it can be fun too
The second string you entered was: but it can be fun too

Calculating...

s1_len = 29
s2_len = 22


Entering IF statement...

The length of the concatenated string is 50

The result string is: C programing can be hard... but it can be fun too

Enter new strings? Y/N (0): 0

Program complete. It ran 4 times. Goodbye!

--------------------------------
Process exited after 73.1 seconds with return value 0
Press any key to continue . . .
*/
