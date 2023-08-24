#include <stdio.h>

void main()
{
	int userInput;
	printf("Enter the number to print the Even Number : ");
	scanf("%d",&userInput);
	
	printf("Even number 1 to %d is : ",userInput);
	for(int i = 1; i <= userInput; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
		}
	}
}
