#include<stdio.h>

int sumElement(int arr[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
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

	int ret = sumElement(arr, n);
	printf("Output : %d\n", ret);
}
