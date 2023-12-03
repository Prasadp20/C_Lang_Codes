#include<stdio.h>

void main()
{
	int rows = 0;
	printf("Enter the rows you want to print : ");
	scanf("%d", &rows);

	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= rows; j++)
		{
			printf(" * ");
		}

		printf("\n");
	}
}
