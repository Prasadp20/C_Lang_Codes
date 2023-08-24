#include <stdio.h>

void main()
{
	// WAP to print the ASCII values from 1 to 127
	int asciiNumber;

	printf("Enter the number : ");
	scanf("%d", &asciiNumber);
	
	printf("ASCII Values from 1 to %d is : ",asciiNumber);
	for(int i = 1; i <= asciiNumber; i++)
	{
		printf("%c ", i);
	}
	printf("\n");
}
