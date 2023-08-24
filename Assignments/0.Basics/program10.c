#include <stdio.h>

void main()
{
	//WAP to print the products of first 10 numbers 
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d",&userInput);

	printf("Product of number upto %d : ",userInput);
	for(int i = 1; i <= userInput; i++)
	{
		printf("%d\n", i * i);
	}
	
}
