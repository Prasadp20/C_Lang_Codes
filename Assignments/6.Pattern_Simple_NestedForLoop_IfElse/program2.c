
	//	3  2  1
	//	c  b  a
	//	3  2  1
	//	c  b  a

#include <stdio.h>
void main()
{
	int row;
	printf("Enter the number of rows you want to print : \n");
	scanf("%d",&row);

	for(int i = 1; i <= row; i++)
	{
		int ch = 99;
		int num = 3;
		for(int j = row; j > 1; j--)
		{
			if(i % 2 == 0)
			{
				printf("%c  ", ch--);
			}

			else
			{
				printf("%d  ", num--);
			}
		}
		printf("\n");
	}
}
