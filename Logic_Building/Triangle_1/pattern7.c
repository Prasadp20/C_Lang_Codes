#include<stdio.h>

void main()
{
	int row = 0;

	printf("Enter Rows : ");
	scanf("%d", &row);

	int num = row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%c  ", num + 96);
		}

		--num;
		printf("\n");
	}
}