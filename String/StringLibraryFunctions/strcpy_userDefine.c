#include <stdio.h>

char* mystrcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';

}

void main()
{
	char *str1 = "PRASAD";
	char str2[20];

	printf("size of 1st string : %ld\n",sizeof(str[]));

	puts(str1);
	puts(str2);

	mystrcpy(str2, str1);

	puts(str1);
	puts(str2);
}
