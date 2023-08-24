#include<stdio.h>

//Sort an array of 0s, 1s and 2s | Dutch National Flag problem

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void dnfSort(int arr[], int n)
{
	int low = 0;
	int mid = 0;
	int high = n - 1;

	while(mid <= high)
	{
		if(arr[mid] == 0)
		{
			swap(arr, low, mid);
			mid++;
			low++;
		}
		else if(arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(arr, mid, high);
			high--;
		}
	}
}
void main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	dnfSort(arr, size);
	
	printf("Array after sort : \n");
	for(int i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");

}
