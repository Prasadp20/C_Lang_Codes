#include<stdio.h>

int stepCount(int num)
{
	int count = 0;

	while(num)
	{
		if(num % 2 == 0){
	
			num /= 2;
		} else{
		
			num -= 1;
		}

		count++;
	}

	return count;
}

void main()
{
	int num;
	int Count = 0;

	printf("Enter the number : ");
	scanf("%d", &num);

	if(num != 0){
		
		Count = stepCount(num);
	} else{
	
		Count = 0;
	}

	printf("Number steps are : %d\n", Count);
}
