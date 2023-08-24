#include <stdio.h>

void main()
{
	// WAP to check weather number is positive or negative
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d",&userInput);

	if(userInput > 0)
	{
		printf("%d is Positive number\n",userInput);
	}
	else if(userInput < 0)
	{
		printf("%d is Negative number\n",userInput);
	}
	else
	{
		printf("You entered wrong input\n");
	}
}
