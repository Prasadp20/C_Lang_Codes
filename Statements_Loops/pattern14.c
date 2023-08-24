/*
		*
		* *
		* * *
		* * * * 
 */

#include <stdio.h>

void main()
{
	int rows = 5;
	for(int i = 0; i <= rows; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");

	for(int i = 1; i <= rows; i++)
	{
		for(int j = rows; j >= i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");

	for(int i = 1; i <= 6; i++)
	{
		for(int j = 5; j >= i; j--)
		{
			printf(" ");
		}
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
