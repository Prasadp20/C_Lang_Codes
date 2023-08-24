
	// WAP to print all even numbers in reverse order and odd number in the standard way.
	// both separately. within a range

#include <stdio.h>
void main()
{
	int from, to;

	printf("Enter the range : \n");
	printf("From : ");
	scanf("%d",&from);
	printf("To : ");
	scanf("%d",&to);

	for(int i = to; i >= from; i--)
	{
		if(i % 2 == 0)
		{
			printf("%d  ",i);
		}
	}

	printf("\n");

	for(int i = from; i <= to; i++)
	{
		if(i % 2 != 0)
		{
			printf("%d  ",i);
		}
	}
	printf("\n");
}
