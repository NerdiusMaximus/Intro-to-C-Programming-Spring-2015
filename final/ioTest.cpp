#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(void)
{
	while(stdin!=EOF)
	{
		fgets(data_string,80,stdin);
		
		fputs(data_string,stdout);
	}
	return 0;
}
