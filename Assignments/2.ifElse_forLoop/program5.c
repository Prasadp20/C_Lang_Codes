#include <stdio.h>

void main()
{
	// WAP to get the number from user 1 to 5 and print spelling of this number if number is greater than 5 print number id greater than 5 
	
	int userInput;
	printf("Enter the number : ");
	scanf("%d",&userInput);

	printf("Number = %d\n",userInput);
	switch(userInput)
	{
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("%d is greater than 5\n",userInput);
	}
}
