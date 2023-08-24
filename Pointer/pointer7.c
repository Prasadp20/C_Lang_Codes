#include <stdio.h>

void main()
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';

	char *cptr = &ch1;

	printf("Address in cptr = %p\n", cptr);
	printf("Data in cptr = %c\n", *cptr);
	printf("\n");

	printf("Address in cptr after addition with 1 = %p\n", (cptr + 1));
	printf("Data in cpter after addition with 1 = %c\n", *(cptr + 1));
	printf("\n");

	
	printf("Address in cptr after addition with 2 = %p\n", (cptr + 2));
	printf("Data in cpter after addition with 2 = %c\n", *(cptr + 2));

}
