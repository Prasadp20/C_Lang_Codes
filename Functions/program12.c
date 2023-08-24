#include <stdio.h>
void main()
{
	int arr1[] = {10,20,30};
	int arr2[] = {40,50,60};
	int arr3[] = {70,80,90};

	int (*ptr[])[3] = {&arr1, &arr2, &arr3};

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{

			printf("%d  ", *(**(ptr + i) + j));

		}

		printf("\n");
	}

}
