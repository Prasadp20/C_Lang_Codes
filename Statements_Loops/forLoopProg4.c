#include <stdio.h>

void main()
{
	 // Print the square of every number which is print by for loop

	int number;
	printf("Please enter the number upto you want to find the Square : ");
	scanf("%d" ,&number);

	for(int i = 0; i <= number; i++)
	{
		printf("%d\n", i * i);
	}
}
