#include<stdio.h>

void main()
{
	int row = 0;
	int col = 0;
	int num = 0;

	printf("Enter Rows : ");
	scanf("%d", &row);

	printf("Enter column : ");
	scanf("%d", &col);

	for(int i = 1; i <= row; i++)
	{
		for(int j = 1; j <= col; j++)
		{
			printf("%d ", ++num);
		}

		printf("\n");
	}
}
