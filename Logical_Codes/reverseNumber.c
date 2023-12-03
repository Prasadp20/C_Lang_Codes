#include<stdio.h>

int reverseNum(int num)
{
	int ret = 0;

	while(num)
	{
		int mod = num % 10;
		ret = (ret * 10) + mod;
		num /= 10;	
	}

	return ret;
}
void main()
{
	int num;
	int retNum = 0;

	printf("Enter the number : ");
	scanf("%d", &num);

	if(num >= 0 && num <= 9){
	
		retNum = num;
	} else{
	
		retNum = reverseNum(num);
	}

	printf("Reverse number of %d is : %d\n", num, retNum);
}
