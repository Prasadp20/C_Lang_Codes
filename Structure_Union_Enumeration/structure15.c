#include<stdio.h>

struct demo1
{
	float x;
	float y;
	float z;
};
struct demo2
{
	float R;
	float G;
	float B;
};

struct demo
{
	struct demo1 obj1;
	struct demo2 obj2;
};

void fun(struct demo *sptr)
{
	printf("In fun function - \n");
	printf("%ld\n", sizeof(struct demo));
}

void main()
{
	struct demo obj;

	printf("In Main function - \n");
	printf("%ld\n", sizeof(struct demo));
	
	fun(&obj);
}


