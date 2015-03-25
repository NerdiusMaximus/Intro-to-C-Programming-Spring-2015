// Function to compare two character strings

#include <stdio.h>

int compareStrings(char *string1,char *string2);

int main(void)
{
	//define two string literals
	char word1[]="good";
	char word2[]="goo";
	
	//define pointers of type char to each of the string literals
	char *word1_ptr = &word1[0];
	char *word2_ptr = &word2[0];
	
	//print out the words
	printf("The first word is %s. The second word is %s\n\n", word1, word2);
	
	//define and interger to store the result of the comparison
	int result;
	
	//invoke the function to compare the strings
	result = compareStrings(word1_ptr,word2_ptr);
	
	if(result){
		printf("The words %s and %s are the same\n\n",word1,word2);
	}
	else{
		printf("The words %s and %s are NOT the same\n\n",word1,word2);
	}
	
	return 0;
}//end main

int compareStrings (char *string1, char *string2)
{
	//declare a variable to hold the answer
	int index,flag;
	printf("Entering the compareStrings Function...\n\n");
	printf("The first word inside function: %s and %s\n\n",string1,string2);
	
	while(string1[index] == string2[index] && string1[index] != '\0' && string2[index] != '\0')
	{
		//print debug text
		printf("Entering the loop...\n\n");
		
		++index;
		flag = 0;
		
		if(string1[index]==string2[index])
		{
			flag = 1;//flag is 1 when words are the same
		}//end if
		else
		{
			flag = 0;//flag is 0 when the words are not the same
		}//end else
		
	}//end while
	printf("Exiting loop...\n\n");
	
	return flag;

}//end compareStrings

/*
Output

The first word is good. The second word is good

Entering the compareStrings Function...

The first word inside function: good and good

Entering the loop...

index: 0        g       g

Entering the loop...

index: 1        o       o

Entering the loop...

index: 2        o       o

Entering the loop...

index: 3        d       d

Exiting loop...

The words good and good are the same


--------------------------------
Process exited after 0.04325 seconds with return value 0
Press any key to continue . . .


The first word is good. The second word is bad

Entering the compareStrings Function...

The first word inside function: good and bad

Entering the loop...

index: 0        g       b

The words good and bad are NOT the same


--------------------------------
Process exited after 0.05382 seconds with return value 0
Press any key to continue . . .
*/



