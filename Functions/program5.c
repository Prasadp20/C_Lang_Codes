#include <stdio.h>

void funArr(int (*ptr)[4])
{
	printf("%p\n",&ptr);

}

void main()
{
	int arr[] = {10,20,30,40};
//	funArr(arr);
	funArr(&arr);
}
