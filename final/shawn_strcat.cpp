#include<stdio.h>
#include<string.h>

#define LEN1 80
#define LEN2 40

char* string_cat(char *s, char *t)
{
	//test to make sure the strings are not too long
    if (strlen(s) >= LEN1-1 || strlen(t) >= LEN2-1 || strlen(s) + strlen(t) > LEN1-1)
    {
        printf("Error\n");
        return NULL;
    }
    
    // remember the beginning of s
    char *bs = s;
    
    //while pointer to s is not newline, walk through s to the end
    while (*s != '\n'){
    	//increment the pointer to the end
        s++;}
    //while 
    while (*s++ = *t++)
        ;
    
    return bs;
}
int main()
{
	char s1[LEN1];
	char s2[LEN2];
	char s3[LEN1];
	
	while(1)
	{	
		printf("Enter a first string: ");
	    fgets(s1, LEN1 + 1, stdin);
	    printf("Enter a second string: ");
	    fgets(s2, LEN2 + 1, stdin);
	    puts(string_cat(s1,s2));
	    
	    //prompt the user to continue or not
	    printf("Enter more strings? Y/N(0): ");
	    
		scanf("c",&s3[0]);
	    
	    //if the character is a zero, end the program
		if(s3[0] == '0')
	    {
	    	//end the loop
	    	break;
		}//end if
	    
	}//end while
    return 0;
}//end main
