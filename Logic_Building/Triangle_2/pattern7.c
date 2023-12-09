#include<stdio.h>

void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	int num = row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = row; j >= i; j--)
		{
			if (i % 2 != 0)
			{
				printf("%c  ", (num--) + 96);
			}
			else
			{
				printf("%c  ", (num--) + 64);
			}
		}

		printf("\n");
	}
}