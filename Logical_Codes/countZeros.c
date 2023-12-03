#include<stdio.h>

int countZeros(int number)
{
	int count = 0;
	while(number)
	{
		int mod = number % 10;

		if(mod == 0){
		
			count++;
		}

		number /= 10;
	}

	return count;
}

void main()
{
	int count = 0;
	int number;

	printf("Enter the Number : ");
	scanf("%d", &number);

	if(number != 0){
	
		count = countZeros(number);
	} else{

		count = 1;
	}

	printf("Number of zero's in %d are : %d\n", number, count);
}
