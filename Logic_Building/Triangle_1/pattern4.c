#include<stdio.h>

void main()
{
	int row = 0;

	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		int num = 1;

		for (int j = 1; j <= i; j++)
		{
			printf("%d  ", num++);
		}

		printf("\n");
	}
}