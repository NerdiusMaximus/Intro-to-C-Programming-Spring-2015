/* intro to C programming
Final Examination

Part 2: 

*/

//PSEUDOCODE FOR FINAL EXAM
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	char buffer[80];
	int cnt = 0;
	char *buffer_ptr[40];
	while(1)
	{
		Printf(“Enter a line “);
		Fgets(&buffer[0],len + 1, stdin);
		cnt++;
		len = strlen(buffer);
		buffer_ptr[cnt] = (char *)malloc(len+1); //add the chars + null
		strcpy(buffer_ptr[cnt], &buffer[0]);
	}//end while
	
	//Psudocode for printing out the buffer
	for( int i=0;i<cnt;++i)
	{
		printf(“%s”,bufferptr[i]);
	}//end for
	
	//move lines by adding to or subtracting from pointers

	//sort algorithms also will move pointers instead of copying data
	

	return 0;
}//end main method

