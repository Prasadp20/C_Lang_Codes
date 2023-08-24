#include <stdio.h>
void main()
{
	char carr[] = {'A','B','C','D'};

	char *cptr1 = &(carr[2]);
	char *cptr2 = &(carr[3]);

	printf("cpter1 = %c\n", *cptr1);
	printf("cptr2 = %c\n", *cptr2);

	printf("cptr1 + 2 = %c\n", *(cptr1 + 2));
	printf("cptr2 + 1 = %c\n", *(cptr2 + 1));

}
