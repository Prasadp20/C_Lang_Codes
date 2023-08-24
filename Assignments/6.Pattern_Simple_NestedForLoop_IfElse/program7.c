	
	//	1  2  3  4
	//	25  36  49  64
	//	9  10  11  12
	//	169  196  225  256

#include <stdio.h>
void main()
{
	int row;
	printf("Enter how many number of rows you wnat to print : ");
	scanf("%d",&row);
	
	int num = 1;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < row; j++)
		{
			if(i % 2 == 0)
				printf("%d  ",num++);

			else
				printf("%d  ", (num * num));

		}
		printf("\n");
	}
}
