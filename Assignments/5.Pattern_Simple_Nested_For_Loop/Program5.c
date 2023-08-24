
	//A  B  C  D
	//B  C  D  E
	//C  D  E  F

#include <stdio.h>

void main()
{
	int numOfRows, ch = 65;
	printf("How many number of rows you want to print : ");
	scanf("%d",&numOfRows);

	for(int i = 0; i < numOfRows; i++)
	{
		ch + i;
		for(int j = 0; j < numOfRows; j++)
		{
			printf("%c  ",ch++);
		}
		printf("\n");
	}
}
