#include<stdio.h>

/*

	1
	2  4
	3  6  9
	4  8  12  16

*/

void main()
{
	int row = 0;

	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d  ", i * j);
		}

		printf("\n");
	}
}