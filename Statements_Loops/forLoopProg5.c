#include <stdio.h>

void main()
{
	int startNumber, endNumber;
	printf("Enter the range upto you want to print the number\n");
	printf("Enter the start of the range : ");
	scanf("%d" ,&startNumber);
	printf("Enter the end of the range : ");
	scanf("%d" ,&endNumber);

	while(startNumber <= endNumber)
	{
		if(startNumber % 4 == 0 && startNumber % 5 == 0)
		{
			printf("%d\n",startNumber);
		}
		startNumber++;
	}
}
