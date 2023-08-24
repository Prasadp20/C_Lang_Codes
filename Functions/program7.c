#include <stdio.h>

void printArr(int (*ptr)[3], int size)
{
	printf("It done\n");

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			printf("%d  ", *(*(ptr + i)+j);
		}
		printf("\n");
	}
}

void main()
{
	int arr[3][3] = {10,20,30,40,50,60,70,80,90};
	int size = sizeof(arr)/sizeof(arr[0]);

	printArr(arr, size);
}
