#include<stdio.h>

/*

Rows = 3
	3
	6  9
	12  15 18

Rows = 4
	4
	8  12  
	16  20  24
	28  32  36  40

*/

void main()
{
	int row = 0;
	int num = 1;

	printf("Enter Rows : ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d  ", row * (num++));
		}

		printf("\n");
	}
}