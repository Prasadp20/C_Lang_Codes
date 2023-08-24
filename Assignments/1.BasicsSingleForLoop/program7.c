#include <stdio.h>

void main()
{
	// WAP to cheeck weather number is greater than or less than 10.
	
	int userInput;
	printf("Enter the number to check number is greater than or less than 10 : ");
	scanf("%d", &userInput);

	if(userInput > 10)
	{
		printf("%d is greater than 10\n",userInput);
	}
	else if(userInput == 10)
	{
		printf("%d is an equal to 10\n",userInput);
	}
	else
	{
		printf("%d is less than 10\n",userInput);
	}
}
