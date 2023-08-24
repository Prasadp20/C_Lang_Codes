#include <stdio.h>

void main()
{
	// Sum of all digits programs 
	
	int sum = 0;
	int remender, number;
	printf("Enter the number : ");
	scanf("%d" ,&number);

	while(number != 0)
	{
		remender = number % 10;
		sum = sum + remender;
		number /= 10;
	}
	printf("Sum of all digits of your entered number is : %d\n",sum);
}
