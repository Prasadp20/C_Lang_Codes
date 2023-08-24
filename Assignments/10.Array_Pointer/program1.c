#include <stdio.h>
void main()
{
	int size, number, count = 0;
	printf("Enter how many number you enter : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the numbers : \n");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Your entered numbers are : \n");
	for(int i = 0; i < size; i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	printf("Enter the number to check in given list : ");
	scanf("%d",&number);

	for(int i = 0; i < size; i++)
	{
		if(arr[i] == number)
		{
			count++;
		}
	}

	if(count >= 1)
	{
		printf("%d is present.\n",number);
	}	
	else
	{
		printf("%d not present.\n",number);
	}

	
}
