/*
Intro to C/C++ Programming
Spring 2015
INFO1-9008-01

Week One
Programming Homework

Author: Michael T. Lowry
Date: 02/22/2015

These are the program examples for Looping and decision Tree chapters

Chapter 5 Excercises 2,4,6,11
Chapter 6 Excercises 2, 3, 6
*/

//Chapter 6 example 6

#include <stdio.h>

int main(void)
{
	int number,numDigits=0;
	int digit;
	unsigned int temp;
	printf("Please enter an integer to be converted:\n");
	scanf("%i", &number);

	//Reverse the order of the number's digits
	temp = number;
	printf("number = %i\ttemp = %i\n\n",number,temp);
	//loop to count number of digits
	do{
		temp /= 10;
		numDigits++;
	}while(temp!=0);//end do while

	printf("After the digit count, the numbers are:\nnumber = %i\ttemp = %i\tnumDigits = %i\n\n",number,temp,numDigits);
	//Loop to reverse the digits and accumulate the reversed number in temp
	temp = number;
	printf("Before entering the reverse script, the numbers are:\n\nnumber = %i\ttemp = %i\tnumDigits = %i\n\n",number,temp,numDigits);
	temp = 0;
	for(int i = 0;i<numDigits;++i){
		temp=temp*10;
		digit = number%10;
		if(i==(numDigits-1))
			if(digit == 0)
				break;
			//end if
		//end if
		temp = temp + digit;
		number = number/10;
	}//end for

	//loop for converting the digits into words
	number = temp;
	do{
		numDigits++;
		switch (number%10)
		{
			case 0:
				printf("Zero\t");
				break;
			case 1:
				printf("One\t");
				break;
			case 2:
				printf("Two\t");
				break;
			case 3:
				printf("Three\t");
				break;
			case 4:
				printf("Four\t");
				break;
			case 5:
				printf("Five\t");
				break;
			case 6:
				printf("Six\t");
				break;
			case 7:
				printf("Seven\t");
				break;
			case 8:
				printf("Eight\t");
				break;
			case 9:
				printf("Nine\t");
			default:
				printf("\n");
				break;
		}//end switch
		number = number/10; //shift right
	}//end do
	while(number);


	return 0;
}

/*Output
After the digit count, the numbers are:
number = 12345  temp = 0        numDigits = 5

Before entering the reverse script, the numbers are:

number = 12345  temp = 12345    numDigits = 5

One     Two     Three   Four    Five
*/
