#include<stdio.h>

// Passing structure to the function -
struct Demo
{
	int x;
	int y;
};

void fun(struct Demo obj)
{
	printf("In fun() method\n");
	printf("Value of X => %d\n", obj.x);
	printf("Value of Y => %d\n", obj.y);
	printf("\n");
}

void gun(struct Demo *sptr)
{
	printf("In gun() method\n");
	printf("Value of X => %d\n", (*sptr).x);
	printf("Value of Y => %d\n", (*sptr).y);
	printf("\n");
}

void main()
{
	struct Demo obj = {10, 15.20};

	fun(obj);	// Passing normal structure object to the function
	gun(&obj);	// Passing address of structure object to the function
}

