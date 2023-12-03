#include<stdio.h>

void main()
{
	int row = 0;
	printf("Enter Rows : ");
	scanf("%d", &row);

	int num = 1;

	for(int i = 1; i <= row; i++)
	{
		for(int j = 1; j <= row; j++)
		{
			if(i % 2 != 0){

				printf("%d  ", num++);
			}
		}

		printf("\n");
	}
}
