
	//	=  =  =  =
	//	$  $  $  $
	//	=  =  =  =
	//	$  $  $  $

#include <stdio.h>
void main()
{
	int row;
	printf("Enter how many number of row you want to print : ");
	scanf("%d",&row);

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < row; j++)
		{
			if(i % 2 == 0)
				printf("=  ");

			else
				printf("$  ");
		}
		printf("\n");
	}
}
