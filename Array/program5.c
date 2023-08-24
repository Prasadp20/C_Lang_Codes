#include<stdio.h>

// Write the program to reverse the array
	
	void reverseArray(int arr[], int n)
	{
		int start = 0, end = n - 1;

		while(start < end)
		{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;

			start++;
			end--;
		}

		printf("\nArray after reverse : \n");
		for(int i = 0; i < n; i++)
		{
			printf("%d  ", arr[i]);
		}

		printf("\n");
	}
	void main()
	{
		int size;
		printf("Enter how many number of elements you enetred : \n");
		scanf("%d", &size);
		int arr[size];

		printf("Enter the array elements : \n");
		for(int i = 0; i < size; i++)
		{
			scanf("%d", &arr[i]);
		}

		if(size >= 2)
		{
			printf("Array before reverse : \n");
			for(int i = 0; i < size; i++)
			{
				printf("%d  ", arr[i]);
			}
			reverseArray(arr, size);
		}
		else
		{
			printf("Enter the array elements more than 2\n");
		}
	}
