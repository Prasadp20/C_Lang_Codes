#include<stdio.h>

void main()
{
	char str1[] = {'P','R','A','S','A','D','\0'};
	char *str2 = "RASHMI";

	printf("%s\n",str1);

	printf("%c\n",str1[0]);
	printf("%c\n",str1[1]);
	printf("%c\n",str1[2]);
	printf("%c\n",str1[3]);
	printf("%c\n",str1[4]);
	printf("%c\n",str1[5]);
	printf("%c\n",str1[6]);

	printf("%s\n",str2);
	
	printf("%c\n",str2[0]);
	printf("%c\n",str2[1]);
	printf("%c\n",str2[2]);
	printf("%c\n",str2[3]);
	printf("%c\n",str2[4]);
	printf("%c\n",str2[5]);
}
