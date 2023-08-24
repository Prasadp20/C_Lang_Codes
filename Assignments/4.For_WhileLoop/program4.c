
	// WAP to take the number from user and check is it prime number or not 
	
#include <stdio.h>
void main()
{
	int userNum;
	int count = 0;

	printf("Enter the number to check the number is prime number or not : ");
	scanf("%d",&userNum);

	for(int i = 2; i < userNum; i++)
	{
		if(userNum % i == 0)
		{
			count++;
		}
	}

	if(count > 0)
	{
		printf("%d is not a prime number!\n",userNum);
	}
	else
	{
		printf("%d is a prime number!\n",userNum);
	}
}
