#include <stdio.h>

void main()
{
	// Reverse number program
	//
	int sum = 0;
	int remender, number;

	printf("Enter any number which you want to reverse it : ");
	scanf("%d",&number);

	while(number != 0)
	{
		remender = number % 10;
		sum = (sum * 10) + remender;
		number = number / 10;
	}

	printf("Your reverse number is : %d\n",sum);
}
