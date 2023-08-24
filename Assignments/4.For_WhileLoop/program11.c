#include <stdio.h>

void main()
{
	int userNumber, num1 = 0, num2 = 1, num3;

	printf("Enter the input number : ");
	scanf("%d",&userNumber);

	printf("%d %d ",num1,num2);
	for(int i = 0; i < userNumber; i++)
	{
		num3 = num1 + num2;
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
}
