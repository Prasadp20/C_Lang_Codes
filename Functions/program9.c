#include<stdio.h>
void fun(int (*ptr)[3])
{
	printf("%d\n", *(*(ptr + 1)+1));
}

int main(void)
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	fun(arr);

}
