#include <stdio.h>
// Find the number of occurence of element in array

void main()
{
	int size, num, count = 0;
	printf("Enter the size of the array : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to check its occurences in array : \n");
	scanf("%d",&num);

	for(int i = 0; i < size; i++)
	{
		if(arr[i] == num)
		{
			++count;
		}
	}

	printf("%d occurs %d times\n",num,count);
}
