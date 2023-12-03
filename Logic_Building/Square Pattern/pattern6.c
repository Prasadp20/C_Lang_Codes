#include<stdio.h>


void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	for(int i = row; i >= 1; i--)
	{
		for(int j = 1; j <= row; j++)
		{
			printf("%d  ", i);
		}
		printf("\n");
	}
}
