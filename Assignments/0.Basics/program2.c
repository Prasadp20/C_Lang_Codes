#include <stdio.h>

void main()
{
	int userInput;
	printf("Enter the number to print the numbers : ");
	scanf("%d",&userInput);

	printf("Your output is : \n");
	
	for(int i = 1; i <= userInput; i++)
	{

		printf("%d\n",i);

	}
	printf("\n");
}
