#include <stdio.h>

void main()
{
	// WAP to print table of 12
	
	int number;
	printf("Enter the number to print the table  of this number : ");
	scanf("%d",&number);
	
	printf("Table of %d : \n",number);
	for(int i = 1; i <= 10; i++)
	{
		printf("%d\n", number * i);
	}
	printf("\n");

}
