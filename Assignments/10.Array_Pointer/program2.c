#include <stdio.h>
void main()
{
	int size, count = 0, temp = 0;
	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements are : \n");
	for(int i = 0; i < size; i++)
	{
		printf("%d  ",arr[i]);

		if(arr[i] % 2 == 0)
		{
			count++;
		}
		else
		{
			temp++;
		}
	}
	printf("\nEven elements count is : %d\n",count);
	printf("Odd elements count is : %d\n",temp);


}
