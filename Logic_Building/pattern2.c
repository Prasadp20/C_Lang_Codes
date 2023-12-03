#include<stdio.h>

void main()
{
	int num = 0;
	for(int i = 1; i <= 3; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("%d  ", ++num);
		}
		printf("\n");
	}
}
