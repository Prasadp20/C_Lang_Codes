#include<stdio.h>

void main()
{
	int num = 0;
	for(int row = 1; row <= 3; row++)
	{
		for(int col = 1; col <= 4; col++)
		{
			printf("%d ", ++num);
		}
		printf("\n");
	}
}
