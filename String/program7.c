#include<stdio.h>
#include <string.h>

char* mystrcpy(char *dest, char *src, int num)
{
	while(num != 0 && *src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
		num--;
	}

	*dest = '\0';
	return dest;
}
void main()
{
	char *str = "Rahul Piche";
	char name[15];

	int numOfChar = 5;

	if(strlen(str) != 0)
	{
		mystrcpy(name, str, numOfChar);
	}

	puts(name);
}
