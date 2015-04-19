#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(void)
{
	char data_string[80]={};
	char buff[80];
	
	while(1)
	{
		fgets(data_string,80,stdin);
		
		fputs(data_string,stdout);
	}
	return 0;
}//end main
