#include <stdio.h>

void main()
{
	// WAP to find input year is Leap Year or not
	
	int year;
	printf("Enter the Year : ");
	scanf("%d",&year);

	if(year % 4 == 0)
	{
		printf("%d is Leap Year.\n",year);
	}
	else
	{
		printf("%d is not a Leap Year.\n",year);
	}
}
