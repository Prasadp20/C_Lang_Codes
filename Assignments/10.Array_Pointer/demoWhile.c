#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size : \n");
	scanf("%d", &size);
	
	int arr1[size];
	int arr2[size];
	
	printf("Enter the both array elements : \n");
	int i = 0;
	while(i < size)
	{
		scanf("%d",&arr1[i]);
		i++;

		if(i == size)
		{
			printf("\n");
			int j = 0;
			while(i < size+size)
			{
				scanf("%d", &arr2[j]);
				j++;
				i++;
			}
		}
	}

	printf("Your array elements are : \n");
	int k = 0;
	while(k < size)
	{
		printf("%d  ",arr1[k]);
		k++;

		if(k == size)
		{
			printf("\n");
			int j = 0;
			while(k < size+size)
			{
				printf("%d  ", arr2[j]);
				j++;
				k++;
			}
		}
	}
}
