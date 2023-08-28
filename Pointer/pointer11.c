#include<stdio.h>

// Call By Reference
void fun(int* a)
{
	*a = *a + 10;
	printf("Value of X in function = %d\n", *a);
}

 // Call by Value
void gun(int b)
{
	b = b + 10;
	printf("Value of Y in function = %d\n", b);
}

void main()
{
	int x = 10;
	int y = 20;

	fun(&x);
	printf("Value of X in main = %d\n", x);

	printf("\n");
	gun(y);
	printf("Value of Y in main = %d\n", y);
}
