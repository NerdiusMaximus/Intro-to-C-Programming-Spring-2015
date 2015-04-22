/*
Intro to C/C++ Programming 

Final Examination

Author: Michael T Lowry
Date: 04/19/2015
Part 3:

3.   Write a program Array, that accepts arguments from the command line (argc, *argv[ ])as follows: (20%)
¢	Array  Type   Size  InitValue

o	The above program will create an array on the heap of type (Type: float, int, chars, double, etc) having a size (Size).  
o	After creating the array on the heap, the user should initialize the array with the entry values having initial value of InitValue to InitValue + Size
o	Print out the total number of array elements in a block type format (i.e. 8 values per line)
o	Deallocates the memory from the heap

Demonstrate that the following Use Cases:
	Array float 32 1
	Array char 16 65
	Array double 8 24
	Array int 12 32 15


The program should provide error checking for wrong number of entries.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	void *x_ptr;		// pointer to heap
	char *type;
	int size, val; //initiate array variables
		
	if(argc != 4){
		printf("Usage: array type size initValue\n");
		exit(EXIT_FAILURE);
	}
	
	//assign the command line arguments to variables
	type = argv[1];
	size = atoi(argv[2]);
	val = atoi(argv[3]);
	
	printf("\nType: %s. Size: %i\n\n",type, size);
	
	switch(*type)
	{
		case 'i':
			x_ptr = (int *)malloc(size * sizeof(int));
			printf("i\n");
			//f_string = "%i\t";
			break;
		case 'f':
			x_ptr = (float *)malloc(size * sizeof(float));
			printf("f\n");
			//f_string = "%g\t";
			break;
		case 'd':
			x_ptr = (double *)malloc(size * sizeof(double));
			printf("d\n");
			//f_string = "%d\t";
			break;
		case 'c':
			x_ptr = (char *)malloc(size * sizeof(char));
			printf("c\n");
			//f_string = "%c\t";
			break;
		default:
			printf("Type not supported");
			exit(1);
			break;
	}//end switch
	
	if(x_ptr == 0) {
		printf("Error allocating Heap Memory\n");
		exit(EXIT_FAILURE);
	}//end if
		
	//deallocate the memory
	free(x_ptr);
	
	return 0;
}//end main
