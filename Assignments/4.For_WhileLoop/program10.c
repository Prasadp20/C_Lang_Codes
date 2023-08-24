

	// WAP to take input number from user and print the fibbonaci series up to that number 
#include <stdio.h>
void main()
{
	int inputNumber, num1 = 0, num2 = 1, num3;

	printf("Enter the input number : \n");
	printf("Input : ");
	scanf("%d",&inputNumber);
	
	printf("%d %d ",num1,num2);
	while(num2 < inputNumber)
	{
		num3 = num1 + num2;
		printf("%d ",num3);

		num1 = num2;
		num2 = num3;
	}

	printf("\n");
}
