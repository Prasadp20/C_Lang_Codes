
	//	4  3  2  1
	//	5  4  3  2
	//	6  5  4  3
	//	7  6  5  4

#include <stdio.h>
void main()
{
	int row;
	printf("Enter the number of rows you want to print : ");
	scanf("%d",&row);
	
	for(int i = 0; i < row; i++)
	{
		int num = 4 + i;
		for(int j = 0; j < row; j++)
		{
			printf("%d  ",num--);
		}
		printf("\n");
	}
}
