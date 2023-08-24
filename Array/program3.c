#include<stdio.h>

int findPeak(int arr[], int n)
{
	if(n == 1)
		return 0;
	if(arr[0] >= arr[1])
		return 0;
	if(arr[n-1] >= arr[n-2])
		return n - 1;

	for(int i = 0; i < n - 1; i++)
	{
		if(arr[i] >= arr[i+1] && arr[i] >= arr[i-1])
		{
			return i;
		}
	}
}

void main()
{
	int arr[] = {1, 3, 20, 4, 1, 0};
	int size = sizeof(arr)/sizeof(arr[0]);

	int peakIndex = findPeak(arr, size);

	printf("Index of peak number in array is : %d\n", peakIndex);

}
