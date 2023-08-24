
	//  1 2 3
	//  a b c
	//  1 2 3
	//  a b c

#include <stdio.h>

void main()
{
	int numOfRows;
	printf("How many number of rows you want to print : ");
	scanf("%d",&numOfRows);

	for(int i = 1; i <= numOfRows; i++)
	{
		if(i % 2 == 0)
		{
			int k = 97;
			for(int j = 1; j <= numOfRows; j++)
			{	
				printf("%c ",k++);
			}
		}
		else
		{
			int n = 0;
			for(int j = 1; j <= numOfRows; j++)
			{
				printf("%d ",++n);
			}
		}
		printf("\n");
	}
}
