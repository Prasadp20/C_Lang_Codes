
	//WAP to print all the divisors of given number
	
	#include <stdio.h>

	void main()
	{
		int userInput;
		printf("Enter the number to print his divisors : \n");
		scanf("%d",&userInput);

		printf("Divisors of %d are : ", userInput);
		for(int i = 1; i <= userInput; i++)
		{
			if(userInput % i == 0)
			{
				printf("%d  ",i);
			}
		}
		printf("\n");
	}

