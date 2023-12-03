// Find Diffrence between Maximum Even Number & Minimum Odd Number

#include<stdio.h>

int oddEvenDiff(int arr[], int size)
{
	int max = arr[0];
	int min = arr[0];
		
	for(int i = 1; i < size; i++)
	{
		if(arr[i] % 2 == 0)
		{
			if(arr[i] > max)
				max = arr[i];
		}

		if(arr[i] % 2 != 0)
		{
			if(arr[i] < min)
				min = arr[i];
		}
	}
	
	int diff = max - (min);
	printf("Maximum number : %d\n", max);
	printf("Minimum number : %d\n", min);
	printf("Diffrence between this two number is : %d\n", diff);
}

void main()
{
	int size = 0;
	int arr[] = {2,-15,7,85,-27,-3};
	size = sizeof(arr) / sizeof(arr[0]);

	oddEvenDiff(arr, size);
}
