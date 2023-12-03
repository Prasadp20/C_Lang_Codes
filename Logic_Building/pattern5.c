#include<stdio.h>

void main()
{
	int rows = 0;

	printf("Enter the rows : ");
	scanf("%d", &rows);

	for(int i = 1; i <= rows; i++)
	{
		int num = 0;
		for(int j = 1; j <= i; j++)
		{
			printf("%d  ", ++num);
		}
		printf("\n");
	}
}
