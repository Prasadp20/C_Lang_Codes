#include <stdio.h>

void main()
{
	int number = 1;
	for(int i = 0; i <= 3; i++)
	{
		for(int j = 1; j <= 3; j++)
		{
			printf("%d ", number);
			//++number;
		}
		number++;
		printf("\n");
	}
}
