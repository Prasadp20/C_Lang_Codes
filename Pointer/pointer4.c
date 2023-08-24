

	#include <stdio.h>
	void main()
	{
		int x = 10;
		int y = 20;

		int *ptr1 = &x;
		int *ptr2 = &y;

		printf("Addition of data in ptr1 & ptr2 = %d\n", *ptr1 + *ptr2);
		printf("Addition of addresses stored in ptr1 & ptr2 = %p\n", ptr1 + ptr2);
	}
