#include <stdio.h>

void main()
{
	int count = 0;
	int userInput;
	printf("Enter the number to print three digit numbers : ");
	scanf("%d",&userInput);

	
	printf("Your output is : \n");
	int limit = userInput + 99;
	for(int i = 100; i <= limit; i++)
	{	

		printf("%d\n",i);
	}		
	 
}
