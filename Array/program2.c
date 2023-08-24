#include <stdio.h>
void main()
{
	int size;

	printf("Enter how many number you wnat to store : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Please enter the number to store : ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Your entered elements : ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	int userChoise;
	printf("\nDo you want to search any element press [1] or [0] : ");
	scanf("%d",&userChoise);

	if(userChoise == 1)
	{
		int search;
		printf("\nEnter the number you want to search : ");
		scanf("%d",&search);
		int temp = search;
		for(int i = 0; i < size; i++)
		{
			if(search == arr[i])
			{
				printf("%d is found",search);
				search = 0;
				break;
			}
		}
		if(search != 0)
		{
			printf("%d is not found",temp);
		}

	}
	else
	{
		printf("Thanks to visit.");
	}
	printf("\n");

}
