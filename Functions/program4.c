#include <stdio.h>
void funArr(int *arr)
{
	printf("%p\n",arr);
}

void main()
{
	int arr[] = {10,20,30,40,50};
	funArr(arr);
	funArr(&arr[1]);
}
