/*
2. In certain applications, particularly in the financial area, it is often necessary to calculate
the number of elapsed days between two dates. For example, the number of
days between July 2, 2005, and July 16, 2005, is obviously 14. But how many days
are there between August 8, 2004, and February 22, 2005? This calculation requires
a bit more thought.
Luckily, a formula can be used to calculate the number of days between two dates.
This is affected by computing the value of N for each of the two dates and then
taking the difference, where N is calculated as follows:
N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
where
f(year, month) = year - 1 if month <= 2
year otherwise
g(month) = month + 13 if month <= 2
month + 1 otherwise
As an example of applying the formula, to calculate the number of days between
August 8, 2004, and February 22, 2005, you can calculate the values of N1 and N2
by substituting the appropriate values into the preceding formula as shown:
N1 = 1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 3
= (1461 x 2004) / 4 + (153 x 9) / 5 + 3
= 2,927,844 / 4 + 1,377 / 5 + 3
= 731,961 + 275 + 3
= 732,239
N2 = 1461 x f(2005, 2) / 4 + 153 x g(2) / 5 + 21
= (1461 x 2004) / 4 + (153 x 15) / 5 + 21
= 2,927,844 / 4 + 2295 / 5 + 21
= 731,961 + 459 + 21
= 732,441
Number of elapsed days = N2 - N1
= 732,441 – 732,239
= 202
So the number of days between the two dates is shown to be 202.The preceding
formula is applicable for any dates after March 1, 1900 (1 must be added to N for
dates from March 1, 1800, to February 28, 1900, and 2 must be added for dates
between March 1, 1700, and February 28, 1800).
Write a program that permits the user to type in two dates and then calculates the
number of elapsed days between the two dates.Try to structure the program logically
into separate functions. For example, you should have a function that accepts
as an argument a date structure and returns the value of N computed as shown
previously.This function can then be called twice, once for each date, and the difference
taken to determine the number of elapsed days
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define DEBUG	1

struct date
{
	int year;
	int month;
	int day;	
};

//function prototypes
int dateN(struct date );
int f(int, int);
int g(int);

int main(void)
{

	//initialize variables to zero
	struct date date1 = {0};
	struct date date2 = {0};
	int days = 0;
	
	//promt the user to enter a date
	printf("Please enter a date (MM DD YYYY): \nMonth (MM): ");
	scanf ("%d", &date1.month); 
	printf("Day (DD): ");
	scanf("%d", &date1.day);
	printf("Year (YYYY): ");
	scanf("%d", &date1.year);
	
	//promt the user to enter another date
	printf("Please enter another date:\nUse the format: MM DD YYYY\nMonth: ");
	scanf ("%d", &date2.month);
	printf("Day (DD): ");
	scanf("%d", &date2.day);
	printf("Year (YYYY): ");
	scanf("%d", &date2.year);
	
	#ifdef DEBUG
	printf("\n\nThe dates entered were:\nDate 1:\n\nMonth: %i\nDay: %i\nYear: %i\n\n"
			"Date 2:\n\nMonth: %i\nDay: %i\nYear: %i\n\n", date1.month,date1.day,date1.year,date2.month,date2.day,date2.year);
	#endif
	
	days = abs(dateN(date1) - dateN(date2));
	
	printf("The number of elapsed days is: %i\n\n",days);
	
}//end main

int dateN(struct date d)
{
	int result;
	
	result = (1461 * f(d.year,d.month) )/4 + (153 * g(d.month)/5 + d.day);
	
	//add conditions for really old dates
	// if the year is 1800 <= year <= 1900 and month is  
	if(d.year >= 1800 && d.month >= 3 && d.year <= 1900 && d.month <= 2 && d.day > 1 && d.day <= 28)
	{
		result += 1;
	}
	if(d.year >= 1700 && d.month >= 3 && d.year <= 1800 && d.month <= 2 && d.day > 1 && d.day <= 28)
	{
		result += 2;
	}
	
	return result;
}//end dateN

int f(int year,int month)
{
	if (month <= 2)
	{
		return (year - 1);
	}//end if
	else
	{
		return year;	
	}//end else
}//end f

int g(int month)
{
	if(month <= 2)
	{
		return (month + 13);
	}
	else
	{
		return (month +1);
	}
}//end g

/*
Output
Please enter a date (MM DD YYYY):
Month (MM): 04
Day (DD): 24
Year (YYYY): 2011
Please enter another date:
Use the format: MM DD YYYY
Month: 04
Day (DD): 24
Year (YYYY): 2015


The dates entered were:
Date 1:

Month: 4
Day: 24
Year: 2011

Date 2:

Month: 4
Day: 24
Year: 2015

The number of elapsed days is: 1461


--------------------------------
Process exited after 28.87 seconds with return value 0
Press any key to continue . . .

Please enter a date (MM DD YYYY):
Month (MM): 04
Day (DD): 24
Year (YYYY): 2011
Please enter another date:
Use the format: MM DD YYYY
Month: 04
Day (DD): 06
Year (YYYY): 2015


The dates entered were:
Date 1:

Month: 4
Day: 24
Year: 2011

Date 2:

Month: 4
Day: 6
Year: 2015

The number of elapsed days is: 1443


--------------------------------
Process exited after 136.3 seconds with return value 0
Press any key to continue . . .

*/
