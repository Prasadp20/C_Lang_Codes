#include <stdio.h>
void main()
{
	int userInput;
	printf("Enter the number to print the number of alphabets : ");
	scanf("%d", &userInput);
	
	printf("Your output is : \n");
	int limit = 65 + userInput - 1;
	for(int i = 65; i <= limit; i++)
	{
		printf("%c ",i);
	}
	printf("\n");
}
