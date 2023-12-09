#include<stdio.h>

void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		int num = i;
		for (int j = row; j >= i; j--)
		{
			printf("%d  ", num++);
		}

		printf("\n");
	}
}