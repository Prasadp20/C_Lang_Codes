#include <stdio.h>
#include <stdlib.h>

int fun(int num1, int num2)
{
	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int));

	*ptr1 = num1;
	*ptr2 = num2;

	return *ptr1 + *ptr2;
}
void main()
{
	int num1,num2;
	printf("Enter the first number : \n");
	scanf("%d", &num1);
	printf("Enter the second number : \n");
	scanf("%d", &num2);

	int number = fun(num1, num2);
	printf("Addition of %d and %d is = %d\n", num1, num2, number);
}
