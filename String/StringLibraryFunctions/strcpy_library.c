#include <stdio.h>
#include <string.h>

void main()
{
	char *str1 = "Hello C";
	char str2[10];

	puts(str1);
	puts(str2);

	strcpy(str2, str1);

	puts(str1);
	puts(str2);
}
