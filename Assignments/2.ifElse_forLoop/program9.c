#include <stdio.h>

void main()
{
	// WAP to print the count of divisors of the entered num.
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d",&userInput);
	
	printf("Divisors of %d are : \n",userInput);
	for(int i = 1; i < userInput; i++)
	{
		if(userInput % i == 0)
		{
			printf("%d\n", i);
		}
	}
}
