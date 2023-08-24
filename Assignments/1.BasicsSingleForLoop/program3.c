#include <stdio.h>

void main()
{
	// WAP to find max among 2 numbers.
	
	int number1, number2;

	printf("Enter the first number : ");
	scanf("%d" ,&number1);
	
	printf("Enter the second number : ");
	scanf("%d" ,&number2);

	if(number1 > number2)
	{
		printf("Number %d is the max number\n",number1);
	}
	else
	{
		printf("Number %d is the max number\n",number2);
	}
}

