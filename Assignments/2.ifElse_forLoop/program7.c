#include <stdio.h>

void main()
{
	// WAP to check weather the given input is Pythagorean triplet or not
	// c*c = a*a + b*b
	int num1,num2,num3;
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	printf("Enter third number : ");
	scanf("%d",&num3);

	num1 *= num1;
	num2 *= num2;
	num3 *= num3;

	if((num1 + num2) == num3)
	{
		
		printf("%d + %d = %d\n",num1,num2,num3);
		printf("These three number are paythagorean triplet\n");
	}
	else
	{
		printf("These three number are not a paythagorean triplet\n");

	}
}
