	
	// WAP to take input number from user and print sum of its digits
	
#include <stdio.h>
void main()
{
	int userNumber, mod, sum = 0;

	printf("Enter the number to check the sum of his digits : \n");

	printf("Input : ");
	scanf("%d",&userNumber);

	while(userNumber != 0)
	{
		mod = userNumber % 10;
		sum = sum + mod;
		userNumber /= 10;
	}

	printf("Sum of digit is : %d\n",sum);
}
