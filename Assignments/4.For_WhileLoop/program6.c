
	// WAP to take a number from user and count its digits

#include <stdio.h>
void main()
{
	int userNum, count = 0;

	printf("Enter the number to count his digits : ");
	scanf("%d",&userNum);

	while(userNum != 0)
	{
		int mod = userNum % 10;
		userNum /= 10;
		count++;
	}
	printf("Number of digits is : %d\n",count);
}
