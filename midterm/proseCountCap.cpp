/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Programming Midterm
Part 4

Author: Michael T. Lowry
Date: 04/01/2015

This program counts the number of words in a prose and capitolizes the first letter of each word in the phrase

*/
#include <stdio.h>
#include <stdbool.h>

#define DEBUG 1

//function prototypes
void Cap(char *);
int count(char *);
int alphabeticInt(char *);

int main(void)
{
	//declaring the original string
	char prose[]= {"To be, or not to be, that is the question- \
whether 'tis nobler in the mind to suffer \
the slings and arrows of outrageous fortune, \
or to take arms against a sea of troubles, \
and by opposing end them? to die, to sleep- \
no more; and by a sleep, to say we end \
the heart-ache, and the thousand natural shocks \
that flesh is heir to? 'tis a consummation \
devoutly to be wished. to die, to sleep, \
to sleep, perchance to dream; aye, there's the rub, \
for in that sleep of death, what dreams may come, \
when we have shuffled off this mortal coil, \
must give us pause."};
	
	#ifdef DEBUG
	//print the original string
	printf("The initial string is \n\n%s",prose);
	#endif
	
	Cap(prose);
	
	printf("\n\nThe modified capitalized string is:\n\n%s",prose);
	
	//count the number of words
	int numOfWords = count(prose);
	
	printf("\n\nThe number of words is %i\n\n",numOfWords);
	
	return 0;
}

void Cap(char *prose)
{
	//intitialize an index
	int i=0;
	int lookingForWord = 1;
	
	while(prose[i]!='\0')
	{
		//if the looking for word flag is 0 and it's alphabetic
		if(alphabeticInt(&prose[i]) && lookingForWord)
		{
			//reset looking for word flag
			lookingForWord = 0;
			//if lowercase
			if((prose[i] >= 'a' && prose[i] <= 'z'))
			{
				//subtract 32
				prose[i] -= 32;
			}//end if
				
		}//end if
		if(lookingForWord && prose[i]=='\'')
		{
			lookingForWord = 1;
		}
		//else if the prose contains a space or non alpha char
		if(!alphabeticInt(&prose[i]) && prose[i] != '\'')
		{
			//turn on looking for word flag
			lookingForWord = 1;
			
		}//end else if
		
		//increment counter
		++i;	
	}//end while
	
}//end cap

int count(char *prose)
{
	int i, wordCount = 0;
	bool lookingForWord = true;
	for ( i = 0; prose[i] != '\0'; ++i )
		if ( alphabeticInt(&prose[i])||prose[i]=='\'')
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

int alphabeticInt(char *c)
{
if ( (*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z') || *c == '\'')
return 1;
else
return 0;
}

/*
Output

The initial string is

To be, or not to be, that is the question- whether 'tis nobler in the mind to su
ffer the slings and arrows of outrageous fortune, or to take arms against a sea
of troubles, and by opposing end them? to die, to sleep- no more; and by a sleep
, to say we end the heart-ache, and the thousand natural shocks that flesh is he
ir to? 'tis a consummation devoutly to be wished. to die, to sleep, to sleep, pe
rchance to dream; aye, there's the rub, for in that sleep of death, what dreams
may come, when we have shuffled off this mortal coil, must give us pause.

The modified capitalized string is:

To Be, Or Not To Be, That Is The Question- Whether 'tis Nobler In The Mind To Su
ffer The Slings And Arrows Of Outrageous Fortune, Or To Take Arms Against A Sea
Of Troubles, And By Opposing End Them? To Die, To Sleep- No More; And By A Sleep
, To Say We End The Heart-Ache, And The Thousand Natural Shocks That Flesh Is He
ir To? 'tis A Consummation Devoutly To Be Wished. To Die, To Sleep, To Sleep, Pe
rchance To Dream; Aye, There's The Rub, For In That Sleep Of Death, What Dreams
May Come, When We Have Shuffled Off This Mortal Coil, Must Give Us Pause.

The number of words is 108


--------------------------------
Process exited after 0.02754 seconds with return value 0
Press any key to continue . . .

*/

