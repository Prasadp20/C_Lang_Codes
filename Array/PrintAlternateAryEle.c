#include<stdio.h>

int alterElePrint(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d  ", arr[i + 1]);
	}
}

void main()
{
	int n = 0;
	printf("Input:\nN = ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter Array Ele : ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	alterElePrint(arr, n);
}
