#include <stdio.h>

void main()
{
	// int num = 1;
	// char ch = 'A';

	for(int i=1;i<=4;i++)
	{
		int num = 1;
		char ch = 'A';
		for(int j=4;j>=i;j--)
		{
			if(j % 2 == 0)
				printf("%d ",num++);
			else
				printf("%c ",ch++);
		}
		printf("\n");
	}
}
