#include <stdio.h>
void main()
{
	char ch;
	printf("Please enter Character : ");
	scanf("%c",&ch);
	printf("ch = %c\n",ch);
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("You entered Upper case character\n");
	}
	if(ch >= 'a' && ch <= 'z')
	{
		printf("You entered Lower case character\n");
	}
}
