#include <stdio.h>

void main()
{
	int ch = 'A';
	for(int i=0;i<=6;i++)
	{
		for(int j=0;j<=6;j++)
		{
			printf("%c ",ch);
			++ch;
		}
		printf("\n");
	}
}
