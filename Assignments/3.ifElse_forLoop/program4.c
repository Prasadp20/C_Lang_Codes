
	// WAP to find sum of the numbers divisible by 5 in the giveb range.
	
#include <stdio.h>
void main()
{
	int sum = 0;
	int from, to;
	printf("Enter the range to check the numbers are divisible by 5 :\n");

	printf("From: ");
	scanf("%d",&from);

	printf("To: ");
	scanf("%d",&to);

	for(int i = from; i <= to; i++)
	{
		sum += i;
	}
	if(sum % 5 == 0)
	{
		printf("Sum of all numbers of given range are divisible by 5\n");
	}
	else
	{
		printf("Sum of all numbers of given range are not divisible by 5\n");
	}

}
