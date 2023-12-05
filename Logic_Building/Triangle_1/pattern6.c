#include<stdio.h>

/*

5
4  4
3  3  3
2  2  2  2
1  1  1  1  1

*/
void main()
{
	int row = 0;

	printf("Enter Rows : ");
	scanf("%d", &row);

	int num = row;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d  ", num);
		}
		--num;
		printf("\n");
	}
}