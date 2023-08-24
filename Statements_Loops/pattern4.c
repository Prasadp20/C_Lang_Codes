#include <stdio.h>

void main()
{
	int num = 0;
	for(int i = 0; i <= 6; i++)
	{
		for(int j = 0; j <= 6; j++)
		{
			printf("%d ",num);
		}
		++num;
		printf("\n");
	}
}
