
	// 1  1  1  1
	// 2  2  2  2
	// 3  3  3  3
	// 4  4  4  4

#include <stdio.h>
void main()
{
	int numOfRows;
	printf("How many number of rows you want to print: ");
	scanf("%d",&numOfRows);

	for(int i = 1; i <= numOfRows; i++)
	{
		for(int j = 1; j <= numOfRows; j++)
		{
			printf("%d  ",i);
		}
		printf("\n");
	}
}
