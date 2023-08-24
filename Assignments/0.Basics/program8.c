#include <stdio.h>

void main()
{
	// WAP to to print the table of any number in reverse 
	
	int userInput;
	printf("Enter the number to print the table in reverse : ");
	scanf("%d" ,&userInput);
	
	printf("Table of %d in reverse : ",userInput);
	for(int i = 10; i >= 1; i--)
	{
		printf("%d\n",userInput * i);
	}
	printf("\n");	
}
