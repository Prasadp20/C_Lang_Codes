#include <stdio.h>

void main()
{
	// WAP to take number from user and check weather number is divisible by 5 and 11.
	
	int userInput;
	printf("Enter the number to check : ");
	scanf("%d", &userInput);

	if(userInput % 5 == 0 && userInput userInput % 11 == 0)
	{
		printf("%d is divisible by 5 & 11",userInput);
	}
}
