#include<stdio.h>

int valueEqualToIndex(int arr[], int size)
{
	for(int i = 1; i <= size; i++)
	{
		if(i == arr[i - 1]){
		
			return i;
		}
	}
}

void main()
{
	int n = 0;
	printf("Input:\nN = ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter Array Elements : ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int ret = valueEqualToIndex(arr, n);
	printf("Output: %d\n",ret);
}
