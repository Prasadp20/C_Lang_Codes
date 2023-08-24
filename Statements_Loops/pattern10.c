#include <stdio.h>

void main()
{
	for(int i = 1; i <= 4; i++)
	{
		char ch = 'A';
		for(int j = 1; j <= i; j++)
		{
			printf("%c ",ch++);
		}
		printf("\n");
		//ch++;
	}
}
