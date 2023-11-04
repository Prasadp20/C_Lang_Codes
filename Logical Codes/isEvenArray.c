#include<stdio.h>
#include<stdbool.h>

bool isEvenArray(int arr[], int len)
{
	int count = 0;
	for(int i = 0; i < len; i++)
	{
		if(arr[i] % 2 == 0){
		
			count++;

			if(count == 2){
			
				return true;
			}
		}
	}

	return false;
}

void main()
{
	int len = 0;

	printf("Enter the length of a array : ");
	scanf("%d", &len);

	int arr[len];

	printf("Enter the array elements : ");
	for(int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}

	bool ret = isEvenArray(arr, len);

	if(ret){
	
		printf("Even Array\n");
	} else{
	
		printf("Odd Array\n");
	}
}
