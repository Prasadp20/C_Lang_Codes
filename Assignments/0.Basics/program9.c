#include <stdio.h>

void main()
{
	//WAP to print sum of 1st 10 odd number
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d", &userInput);

	int sum = 0;
	for(int i = 1; i <= userInput; i++)
	{
		if(i % 2 == 0)
		{
			continue;
		}
		else
		{
			sum = sum + i;
		}
	}
	printf("Sum of odd number is : %d ",sum);
	printf("\n");
}
