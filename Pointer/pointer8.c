#include <stdio.h>
void main()
{
	char ch1 = 'A';
	char ch2 = 'B';
	char *ptr = &ch1;

	printf("%p\n",(ptr + 'A'));

	printf("%c\n",*(ptr + 'A'));

	printf("%c\n", *(ptr + 1));
}
