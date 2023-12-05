#include<stdio.h>

void main()
{
	int row = 0;
	int num = 1;

	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % 2 != 0)
			{
				printf("%d  ", num++);
			}
			else
			{
				printf("%c  ", (num++) + 64);
			}			
		}
		printf("\n");
	}
}