#include <stdio.h>

void main()
{
	// 6. WAP to print the number reverse 100 - 0
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d", &userInput);

	printf("Reverse numbers %d to 0 : " ,userInput);
	for(int i = userInput; i >= 0; i--)
	{
		printf("%d ",i);
	}
	printf("\n");
}
