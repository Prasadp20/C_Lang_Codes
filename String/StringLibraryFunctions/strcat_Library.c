#include <stdio.h>
#include <string.h>

void main()
{
	char str1[20] = "PRASAD";
	char *str2 = "PATHAK";

	puts(str1);
	puts(str2);

	strcat(str1,str2);

	puts(str1);
	puts(str2);
}
