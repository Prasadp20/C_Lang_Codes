#include<stdio.h>
#include<stdbool.h>

bool isSorted(int arr[], int len)
{
	for(int i = 0; i < len; i++)
	{
		if(arr[i] > arr[i + 1]){
		
			return false;
		}
	}

	return true;
}

void main()
{
	int len = 0;
	printf("Enter Length of Array : ");
	scanf("%d", &len);

	int arr[len];

	printf("Enter Array Elements : ");
	for(int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

	bool ret = isSorted(arr, len);

	if(ret){
	
		printf("Array is sorted\n");
	} else{
	
		printf("Array is not sorted\n");
	}
}
