#include<stdio.h>

struct Demo
{
	int x;
	float y;
};

void main()
{
	struct Demo obj = {10, 20.30};

	int arr[] = {10,20,30,40,50};

	printf("%p\n", &arr[0]); // return address of 1st ele of array
	printf("%p\n", arr);	// return address of 1st ele of array
	
	printf("%p\n", &obj.x);	// return address of 1st feild or ele of structure
	printf("%p\n", &obj);	// return address of 1st feild or ele of structure
}
