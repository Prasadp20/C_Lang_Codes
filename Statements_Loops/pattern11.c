#include <stdio.h>

void main()
{
	for(int i = 4; i >= 1; i--)
	{
		char ch = 'A';
		for(int j = i; j >= 1; j--)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
