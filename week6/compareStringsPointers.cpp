// Function to compare two character strings

//function prototypes


#include <stdio.h>
int main (void)
{
	char word1[] = "good";
	char word2[] = "good";
	char *word1_ptr; 
	word1_ptr = word1;
	char *word2_ptr; 
	word2_ptr = word2;

	int compareStrings (char *word1[], char *word2[]);

	int result;
	
	result = compareStrings (&word1_ptr, &word2_ptr);
	
	if(result == 0)
	{
		printf("The word %s and %s are the same\n\n",word1,word2);
	}
	else 
	{
		printf("The word %s and %s are not the same\n\n",word1,word2);
	}
	
	return 0;
}//end lookup

int compareStrings (char *s1[], char *s2[])
{
	int answer;
	
	printf("The first word is: %s\nThe second word is: %s\n\n",*s1,*s2);
	printf("The pointer address 1 is %p\nThe pointer address 2 is %p\n\n",s1,s2);
			
	while(*s1!='\0' && *s2 !='\0')
	{
		printf("Entering loop...\n");
		printf("%c\t%c\n\n",*s1,*s2);
		
		if (*s1!=*s2)
		{
			answer = -1;
			break;
		}//end if

		else if ( *s1 == *s2 )
		{
			answer = 0; /* s1 == s2 */
			s1++;
			s2++;
		}
	}//end while

	return answer;
}//end compareStrings
