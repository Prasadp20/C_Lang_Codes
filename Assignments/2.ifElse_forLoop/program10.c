#include <stdio.h>

void main()
{
	// WAP take two characters if this characters are equal then print them as it is
	// but if they are unequal then print their diffrence.
	
	char ch1, ch2;
	printf("Please enter the characters : \n");
	scanf("%c %c",&ch1,&ch2);

	if(ch1 == ch2)
	{
		printf("Both characters are same\n");
	}
	else
	{
		printf("The difference between %c & %c is : %d\n",ch1,ch2,ch2 - ch1);
	}
}
