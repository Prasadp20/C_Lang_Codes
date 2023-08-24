#include <stdio.h>

void main()
{
	char ch = 'A';
	for(int i = 1; i <= 3; i++)
	{
		for(int j = 3; j >= i; j--)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
	printf("\n");

	int num = 1;
	for(int k = 1; k <= 3; k++)
	{
		for(int m = 3; m >= k; m--)
		{
			printf("%d ", num * num);
			++num;
		}
		printf("\n");
	}
	printf("\n");

	int tag = 1;
	for(int q = 1; q <= 3; q++)
	{
		for(int p = 3; p >= q; p--)
		{
			printf("%d ",++tag);
			++tag;
		}
		printf("\n");
	}

}
