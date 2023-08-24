#include <stdio.h>
void swap(int **a, int **b, int num1, int num2); 

void main()
{
	int number1, number2;

	printf("Enter the number which you want to swap : \n");
	
	printf("First number = ");
	scanf("%d",&number1);

	printf("Second number = ");
	scanf("%d",&number2);

	int *ptr1 = &number1;
	int *ptr2 = &number2;
	
	printf("\nNumber before swapping - \n");
	printf("Number1 = %d\n",number1);
	printf("Number2 = %d\n",number2);

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("\nNumber after swapping - \n");
	printf("Number1 = %d\n",number1);
	printf("Number2 = %d\n",number2);

}
