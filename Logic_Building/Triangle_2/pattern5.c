#include<stdio.h>

void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		char ch = 'a';

		for (int j = row; j >= i; j--)
		{
			printf("%c  ", ch++);
		}

		printf("\n");
	}
}