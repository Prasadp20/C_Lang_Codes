#include<stdio.h>

void main()
{
	int rows;
	int col;
	int num = 0;

	printf("Enter the rows & column : \n");
	printf("Enter Rows : ");
	scanf("%d", &rows);
	printf("Enter Col : ");
	scanf("%d", &col);

	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= col; j++)
		{
			printf("%d  ", ++num);
		}

		printf("\n");
	}
}
