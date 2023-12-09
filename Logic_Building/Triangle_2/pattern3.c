#include<stdio.h>

void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	int num = 1;

	for (int i = 1; i <= row; i++)
	{
		for (int j = row; j >= i; j--)
		{
			printf("%d  ", num++);
		}

		printf("\n");
	}
}