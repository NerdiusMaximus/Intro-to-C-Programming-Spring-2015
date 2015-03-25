// Function to compare two character strings

#include <stdio.h>

int compareStrings(char *string1,char *string2);

int main(void)
{	
	//define and interger to store the result of the comparison
	int result;
	//define two string literals
	char word1[]="good";
	char word2[]="good";
	
	//define a second pair of string literals
	char word3[]="program";
	char word4[]="programming";
	
	//define pointers of type char to each of the string literals
	char *word1_ptr = &word1[0];
	char *word2_ptr = &word2[0];
	char *word3_ptr = &word3[0];
	char *word4_ptr = &word4[0];
	
	////////FIRST SET OF WORDS
	//print out the words
	printf("The first word is %s. The second word is %s\n\n", word1, word2);
	//invoke the function to compare the strings
	result = compareStrings(word1_ptr,word2_ptr);
	if(result)
	{
		printf("The words %s and %s are the same\n\n",word1,word2);
	}
	else{
		printf("The words %s and %s are NOT the same\n\n",word1,word2);
	}
	
	////////SECOND SET OF WORDS
	//print out the words
	printf("The first word is %s. The second word is %s\n\n", word3, word4);
	//invoke the function to compare the strings
	result = compareStrings(word3_ptr,word4_ptr);
	if(result)
	{
		printf("The words %s and %s are the same\n\n",word3,word4);
	}
	else{
		printf("The words %s and %s are NOT the same\n\n",word3,word4);
	}	
	
	return 0;
}//end main

int compareStrings (char *string1, char *string2)
{
	//declare a variable to hold the answer
	int /*index,*/flag;
	printf("Entering the compareStrings Function...\n\n");
	printf("The first word inside function: %s and %s\n\n",string1,string2);
	
	while(string1[0] == string2[0] && string1[0] != '\0' && string2[0] != '\0')
	{
		//print debug text
		printf("Entering the loop...\n\n");
		
		//++index;
		flag = 0;
		string1++;string2++;
		if(string1[0]==string2[0])
		{
			printf("%c\t%c\t\n\n",string1[0],string2[0]);
			flag = 1;//flag is 1 when words are the same
		}//end if
		else
		{
			printf("%c\t%c\t\n\n",string1[0],string2[0]);
			flag = 0;//flag is 0 when the words are not the same
		}//end else 
		
	}//end while
	printf("Exiting loop...\n\n");
	
	return flag;

}//end compareStrings

/*
The first word is good. The second word is good

Entering the compareStrings Function...

The first word inside function: good and good

Entering the loop...

o       o

Entering the loop...

o       o

Entering the loop...

d       d

Entering the loop...



Exiting loop...

The words good and good are the same

The first word is program. The second word is programming

Entering the compareStrings Function...

The first word inside function: program and programming

Entering the loop...

r       r

Entering the loop...

o       o

Entering the loop...

g       g

Entering the loop...

r       r

Entering the loop...

a       a

Entering the loop...

m       m

Entering the loop...

        m

Exiting loop...

The words program and programming are NOT the same


--------------------------------
Process exited after 0.04249 seconds with return value 0
Press any key to continue . . .
*/



