
	// WAP to take number input and print the all factor of the number
	 
#include <stdio.h>
void main()
{
	int userInput;
	printf("Enter the number to check it's factors : ");
	scanf("%d",&userInput);

	printf("Factors of %d are : \n",userInput);
	for(int i = 1; i < userInput; i++)
	{
		if(userInput % i == 0)
		{
			printf("%d\n",i);
		}
	}
}
