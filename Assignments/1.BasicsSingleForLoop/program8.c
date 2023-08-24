#include <stdio.h>

void main()
{
	//WAP to check Alphabate is lower case or upper case.
	
	char userInput;
	printf("Enter any alphabate : ");
	scanf("%c" ,&userInput);

	if(userInput >= 'A' && userInput <= 'Z')
	{
		printf("You entered the UPPERCASE character\n");
	}
	else if(userInput >= 'a' && userInput <= 'z')
	{
		printf("You entered the LOWERCASE character\n");
	}
	else
	{
		printf("You entered wrong input\n");
	}
}
