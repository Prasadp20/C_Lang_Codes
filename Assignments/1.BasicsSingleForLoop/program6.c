#include <stdio.h>

void main()
{
	// WAP to check if number is even or odd.
	
	int userInput;
	printf("Enter the number to check weather number is Even or Odd : ");
	scanf("%d", &userInput);

	if(userInput % 2 == 0)
	{
		printf("%d is an Even number\n",userInput);
	}
	else
	{
		printf("%d is an Odd number\n",userInput);
	}
}
