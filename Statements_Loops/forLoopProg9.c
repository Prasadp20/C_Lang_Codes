#include <stdio.h>

void main()
{
	int numberOfDays;
	printf("Please enter ther number of days when you submit the assignment : ");
	scanf("%d",&numberOfDays);

	while(numberOfDays != 0)
	{
		printf("%d days remaining...\n",numberOfDays);
		numberOfDays--;
	}
	printf("0 due day\n");

}
