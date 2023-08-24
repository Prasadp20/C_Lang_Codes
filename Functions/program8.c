#include <stdio.h>

int sumOfArr(int *ptr, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = *(ptr + i) + sum;
	}
	return sum;

}

void main()
{
	int size;
	printf("Enter the size : \n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}

	int sum = sumOfArr(arr, size);

	printf("Summation of array elements are : %d\n",sum);
}
