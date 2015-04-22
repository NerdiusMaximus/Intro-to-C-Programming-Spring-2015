#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 1024 /* You can enter a line of only 1024 characters*/
#define MAX_NUM_LINES 40 /*Total number of lines accepted is 40*/
#define QUIT '#'
#define MOVE_LINE 5 /*To know where fifth line is inserted in the heap this is defined*/

char buffer[MAX_LINE_LEN];/*This buffer is maintained for the purpose of sorting*/
void displayBuffer(char **, int);

int main(int argc, char *argv[]) 
{
	//declare a character pointer array to store the pointers to each line
	char *line_array[MAX_NUM_LINES];
	int n = 0;
	//prompt the user to enter text
	printf("Enter up to %d lines of text, or %c to quit.\n",MAX_NUM_LINES, QUIT);
	//enter line entry loop
	do 
	{
		printf("> ");
		/*fgets takes each line from the standard input and takes it into the buffer array*/
		fgets(buffer, MAX_LINE_LEN, stdin);
		//replace the first '\n' with a NULL 
		*(strchr(buffer, '\n')) = '\0';
			//if the buffer doesn't contain the quit character
			if (buffer[0] != QUIT) 
			{
				//allocate memory  the size of the buffer + 1 and have lineArray[n] point to that memory on the heap
				line_array[n] = (char*)malloc(strlen(buffer) + 1);
				strcpy(line_array[n++], buffer);
			}//end if
	/*Loop ends only when 40 lines are entered of when you want to quit from the program*/
	} while ((n < MAX_NUM_LINES) && (buffer[0] != QUIT)); 
	
	displayBuffer(line_array, n);
	//If the user entered more than 6 lines
	if (n > MOVE_LINE + 1) 
	{
		char *move1 = line_array[MOVE_LINE-1], *move2 = line_array[MOVE_LINE];
		
		printf("\nmoving lines %d and %d to the end ...\n",MOVE_LINE, MOVE_LINE+1);
		
		memcpy(&line_array[MOVE_LINE-1], &line_array[MOVE_LINE+1],(n - MOVE_LINE) * sizeof(char *));
		
		line_array[n - 2] = move1;
		line_array[n - 1] = move2;
		displayBuffer(line_array, n);
	}
	
	return 0;
}

void displayBuffer(char **a, int len) 
{
	int i;

	for (i = 0; i < len; i++) 
	{
		printf("%s\n", a[i]);
	}
}

