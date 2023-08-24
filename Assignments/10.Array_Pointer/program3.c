#include <stdio.h>
void main()
{
	int size;
	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];
	int arr[size];

	printf("Enter the first array elements : \n");
	int i = 0;
	while(i < size)
	{
		scanf("%d", &arr1[i]);
		i++;

		if(i == size)
		{
			printf("Enter the second array elements : \n");
			int j = 0;
			while(i < size + size)
			{
				scanf("%d", &arr2[j]);
				j++;
				i++;
			}
		}
	}

	for(int i = 0; i < size; i++)
	{
		arr[i] = arr1[i] + arr2[i];
	}

	printf("After adding two diffreent arrays output is : \n");
      	for(int i = 0; i < size; i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");

}
