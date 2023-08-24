#include <stdio.h>
int mystrlen(char *str)
{
	int count = 0;
	while(*str != 0)
	{
		count++;
		str++;
	}
	return count;
}

char* mystrrev(char str[], int length)
{
	int start = 0;
        int end = length - 1;
	char temp;

	//for (start; start < length / 2; start++)
	while (start < length / 2)
	{	
		temp  = str[start];
		str[start] = str[end - start];
		str[end - start]   = temp;
		start++;
	}
	return str;
}
void main()
{
	char str[] = {'P','R','A','S','A','D','\0'};
	printf("str = ");
	puts(str);

	int length = mystrlen(str);

	printf("%d\n",length);
	char *str1 = mystrrev(str, length);

	puts(str1);
}

