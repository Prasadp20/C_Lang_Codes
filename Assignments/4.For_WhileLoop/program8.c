
	// WAP to take a number from user and print the product of his digits

#include <stdio.h>
void main()
{
	int userNumber, mod, prod = 1;

	printf("Enter the number to find the product of his digits\n");

	printf("Input : ");
	scanf("%d",&userNumber);

	while(userNumber != 0)
	{
		mod = userNumber % 10;
		prod = prod * mod;
		userNumber /= 10;
	}
	printf("product of digits : %d\n",prod);
}
