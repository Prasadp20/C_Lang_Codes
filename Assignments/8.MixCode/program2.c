
	// WAP to count digits in given number 
	
	#include <stdio.h>
	void main()
	{
		int userNumber, mod = 0, count = 0;
		printf("Enter the number : ");
		scanf("%d",&userNumber);

		printf("Digit count of %d is : ",userNumber);
		while(userNumber != 0)
		{
			mod = userNumber % 10;
			userNumber /= 10;
			count++;
		}
		printf("%d\n",count);
	}
