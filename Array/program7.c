	#include<stdio.h>
	void swap(int* arr1, int* arr2)
	{
		int temp = *arr1;
		*arr1 = *arr2;
		*arr2 = temp;
	}
	void sortArray(int arr[], int n)
	{
		int minIdx;
		for(int i = 0; i < n - 1; i++)
		{
			minIdx = i;
			for(int j = i + 1; j < n; j++)
			{
				if(arr[j] < arr[minIdx])
				{
					minIdx = j;
				}
			}	
			swap(&arr[minIdx], &arr[i]);
		}
	}

	void main()
	{
		int size, Kth;
		printf("Enter the size of the array : \n");
		scanf("%d", &size);

		int arr[size];
		printf("Enter the array elements : \n");
		for(int i = 0; i < size; i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Enter the number to find 'Kth' smallest element in array : \n");
		scanf("%d", &Kth);
	
		sortArray(arr, size);
	
		printf("Array after sorting : \n");
		for(int i = 0; i < size; i++)
		{
			printf("%d  ", arr[i]);
		}
		printf("\n");

		for(int i = 0; i < size; i++)
		{
			if(i == Kth)
			{
				Kth = arr[i];
			}
		}
		printf("K'th smallest element is %d", Kth);
		printf("\n");
	}
