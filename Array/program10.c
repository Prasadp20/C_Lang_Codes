// Count Pair in Array

#include<stdio.h>

int countPair(int arr[], int size, int sum)
{
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(sum == arr[i] + arr[j])
			{
				count++;
			}
		}
	}

	return count;
}
void main()
{
	int size = 0;
	int sum = 0;

	printf("Enter Size Of Array : ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter Array Elements : ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Array : ");
	for(int i = 0; i < size; i++)
        {
                printf("%d  ", arr[i]);
        }
	printf("\n");
	
	printf("Enter sum you want to check : ");
	scanf("%d", &sum);

	int ret = countPair(arr, size, sum);

	printf("Pair Count of Sum is : %d\n", ret);
}
