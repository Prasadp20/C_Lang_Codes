
	//WAP take input number from user and print the number in reverse

#include <stdio.h>
void main()
{
	int userNumber, mod, reverseNumber;

	printf("Enter the number : \n");
	printf("Input: ");
	scanf("%d",&userNumber);

	while(userNumber != 0)
	{
		mod = userNumber % 10;
		reverseNumber = (reverseNumber * 10) + mod;
		userNumber /= 10;
	}
	printf("Reverse number of the given number is : %d\n",reverseNumber);

}
