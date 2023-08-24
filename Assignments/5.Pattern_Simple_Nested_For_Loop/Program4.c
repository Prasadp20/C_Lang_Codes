
	//A B C
	//D E F
	//G H I

#include <stdio.h>
void main()
{
	int numOfRows, ch = 65;
	printf("How many rows you want to print : ");
	scanf("%d",&numOfRows);

	for(int i = 1; i <= numOfRows; i++)
	{
		for(int j = 1; j <= numOfRows; j++)
		{
			printf("%c  ",ch++);
		}
		printf("\n");
	}
}
