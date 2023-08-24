
	//	4  4  4  4
	//	3  3  3  3
	//	2  2  2  2
	//	1  1  1  1

#include <stdio.h>
void main()
{
	int row;
	printf("Enter how many number of row you want to print : ");
	scanf("%d",&row);

	for(int i = row; i > 0; i--)
	{
		for(int j = 0; j < row; j++)
		{
			printf("%d  ",i);
		}
		printf("\n");
	}

}
