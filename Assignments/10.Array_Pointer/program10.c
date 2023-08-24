#include <stdio.h>
void main()
{
	int size,sum = 0; 
	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements of array : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Sum of odd index elements is : \n");
	for(int i = 0; i < size; i++)
	{
		if(i % 2 != 0)
		{
			sum = sum + arr[i];
		}
	}
	printf("%d\n",sum);
}
