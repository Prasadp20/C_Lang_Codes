#include<stdio.h>
// Sorting of array - Selection Sorting Tech.

void swapArray(int *arr1, int *arr2)
{
	int temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}
void sortArray(int arr[], int n)
{
	int minIndex;
	for(int i = 0; i < n - 1; i++)
	{
		minIndex = i;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swapArray(&arr[minIndex], &arr[i]);
	}
}

void main()
{
	int size;
	printf("Enter the size of the array : \n");
	scanf("%d", &size);
	int arr[size];

	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Array before sorting : \n");
	for(int i = 0; i < size; i++)
		printf("%d  ", arr[i]);
	
	printf("\n");

	sortArray(arr, size);
	printf("Array after sorting : \n");
	for(int i = 0; i < size; i++)
		printf("%d  ",arr[i]);
	
	printf("\n");
}

