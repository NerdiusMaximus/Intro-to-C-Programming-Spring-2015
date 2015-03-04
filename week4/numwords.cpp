/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 03/02/2015

These are the program examples for Arrays and Strings

Chapter 7 Excercises 4, 5, and 6
Chapter 10 Excercises 3 and 6

*/
// Function to determine if a character is alphabetic
#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
return true;
else
return false;
}

/* Function to count the number of words in a string */
int countWords (const char string[])
{
int i, wordCount = 0;
bool lookingForWord = true, alphabetic (const char c);
for ( i = 0; string[i] != '\0'; ++i )
	if ( alphabetic(string[i])||string[i]=='\'')
	{
		if ( lookingForWord )
		{
		++wordCount;
		lookingForWord = false;
		}
	}
else
lookingForWord = true;
return wordCount;
}

//main method
int main (void)
{
const char text1[] = "Well, here goes.";
const char text2[] = "And here we'll go... again.";

int countWords (const char string[]);

printf ("%s - words = %i\n", text1, countWords (text1));
printf ("%s - words = %i\n", text2, countWords (text2));
return 0;
}
