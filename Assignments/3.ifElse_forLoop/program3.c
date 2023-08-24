
	// WAP to print all even numbers in reverse order and odd numbers in the standard way. 
	// Both separately. Within a range
	
#include <stdio.h>
void main()
{
	int from, to;
	printf("Enter the number to print ther number : \n");
	
	printf("From: ");
	scanf("%d",&from);

	printf("To: ");
	scanf("%d",&to);

	printf("Even numbers are : \n");
	for(int even = to; even >= from; even--)
	{
		if(even % 2 == 0)
		{
			printf("%d\n",even);
		}
	}

	printf("Odd numbers are : \n");
	for(int odd = from; odd <= to; odd++)
	{
		if(odd % 2 != 0)
		{
			printf("%d\n",odd);
		}
	}
}
