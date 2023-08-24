#include<stdio.h>

//Find maximum and minimum element in array

	int maxEle(int arr[], int n)
	{
		int max = arr[0];
		for(int i = 0; i < n; i++)
		{
			if(max < arr[i])
			{
				max = arr[i];
			}
		}
		return max;
	}
	int minEle(int *arr, int n)
	{
		int min = *(arr + 0);
		for(int i = 0; i < n; i++)
		{
			if(min > *(arr + i))
			{
				min = *(arr + i);
			}
		}
		return min;
	}

	void main()
	{
		int arr[] = {10,20,30,40,50};
		int size = sizeof(arr) / sizeof(arr[0]);

		int max = maxEle(arr, size);
		int min = minEle(arr, size);

		printf("Maximum element in array is : %d\n", max);
		printf("Minimum element in array is : %d\n", min);
	}
