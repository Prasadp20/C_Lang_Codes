#include <stdio.h>

void sub(int a, int b)
{
	printf("Substraction 1 = %d\n", a-b);
	printf("Substraction 2 = %d\n", a-b);
	printf("Substraction 3 = %d\n", a-b);
	printf("\n");
}

void add(int a, int b)
{
	printf("Addition 1 = %d\n", a+b);
	printf("Addition 2 = %d\n", a+b);
	printf("Addition 3 = %d\n", a+b);
	printf("\n");

	//sub(a,b);
}

void main()
{
	void (*ptr)(int,int);

	ptr = add;
	ptr(20,30);

	ptr++;

	ptr(50,50);

	ptr++;

	ptr(100,50);

}
