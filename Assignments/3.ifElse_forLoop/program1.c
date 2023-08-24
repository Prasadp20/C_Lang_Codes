
	// WAP to see give number is a multiple of 3

#include <stdio.h>
void main()
{
	int userInput;
	printf("Enter the number to check : ");
	scanf("%d",&userInput);

	if(userInput % 3 == 0)
	{
		printf("%d is multiple of 3.\n",userInput);
	}
	else
	{
		printf("%d is not a multiple of 3.\n",userInput);
	}
}
