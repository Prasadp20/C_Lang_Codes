#include <stdio.h>

void main()
{
	// Take number from user and multiply his remender by 5
	int number, remender;
	printf("Enter the number you want : ");
	scanf("%d",&number);

	printf("Remender of your number after multiply by 5 : ");
	while(number != 0)
	{
		remender = number % 10;
		printf("%d ",remender * 5);
		number /= 10;
	}

}
