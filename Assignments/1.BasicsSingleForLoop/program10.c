#include <stdio.h>

void main()
{
	// WAP to check waether given character is vowel or consonant
	char userInput;
	printf("Enter the character : ");
	scanf("%c" ,&userInput);

	if(userInput == 'a' || userInput == 'e' || userInput == 'i' || userInput == 'o' || userInput == 'u')
	{
		printf("%c is vowel\n",userInput);
	}
	else if(userInput == 'A' || userInput == 'E' || userInput == 'I' || userInput == 'O' || userInput == 'U')
	{
		printf("%c is vowel\n",userInput);
	}
	else
	{
		printf("%c is Consonant\n",userInput);
	}
}
