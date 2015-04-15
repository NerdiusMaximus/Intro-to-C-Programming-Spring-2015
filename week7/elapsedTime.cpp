/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Programming Homework

Author: Michael T. Lowry
Date: 04/15/2015

This program calculates the difference between two time values within the same day. 

Write a function called elapsed_time that takes two time structures and 
returns a time structure that represents the elapsed time (in hours, minutes, and seconds) 
between the two times. So the call 

elapsed_time (time1,time2)

where time1 represents 3:45:15 and time2 represents 9:44:03, should return a time structure
that represents 5 hours, 58 minutes, and 48 seconds. Be careful with the times that cross midnight.

^ this code was written and compiled in those times that cross midnight

*/

#include <stdio.h>

struct time{
	
	int hour;
	int minute;
	int second;
	
};

//function prototypes
struct time elapsed_time(struct time,struct time);

int main(void)
{
	//initialize two structs
	struct time time1;
	struct time time2;
	//collect two times
	printf("Please enter a time (hh:mm:ss): \nhh:");
	scanf("%i",&time1.hour);
	
	printf("mm: ");
	scanf("%i,mm",&time1.minute);
	
	printf("ss: ");
	scanf("%i",&time1.second);
	
	printf("Please enter a second time (hh:mm:ss): \nhh:");
	scanf("%i",&time2.hour);
	
	printf("mm: ");
	scanf("%i,mm",&time2.minute);
	
	printf("ss: ");
	scanf("%i",&time2.second);
	
	//call time_elapsed
	struct time t_elapsed = elapsed_time(time1,time2);
	
	//print out the output
	printf("\n\nThe elapsed time is:\n%i:%i:%i",t_elapsed.hour,t_elapsed.minute,t_elapsed.second);
	
	return 0;
}//end main

struct time elapsed_time(struct time t1,struct time t2)
{
	//Usage: time_elapsed(t1,t2)
	//returns a value of t2 - t1
	
	//initialize a struct to hold the difference
	struct time t_diff ={0};
	
	//calculate the differences
	t_diff.hour = t2.hour - t1.hour;
	t_diff.minute = t2.minute - t1.minute;
	t_diff.second = t2.second - t1.second;
	
	//return the resulting structure
	return t_diff;
}

/*
OUTPUT: Run 1

Please enter a time (hh:mm:ss):
hh:10
mm: 30
ss: 00
Please enter a second time (hh:mm:ss):
hh:11
mm: 30
ss: 00


The elapsed time is:
1:0:0
--------------------------------
Process exited after 12.99 seconds with return value 0
Press any key to continue . . .

OUTPUT: Run 2


*/
