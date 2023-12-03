#include<stdio.h>

void main()
{
	int rows = 0;
	printf("Enter how many rows you want to print : ");
	scanf("%d", &rows);

	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
