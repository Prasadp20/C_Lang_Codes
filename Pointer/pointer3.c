

	#include <stdio.h>
	void main()
	{
		int x = 10;
		char ch = 'A';

		printf("Address of x is = %p\n",&x);
		printf("Address of ch is = %p\n",&ch);
		
		printf("\n");

		int *ptr1 = &x;
		char *ptr2 = &ch;

		printf("Address in ptr1 = %p\n" , ptr1);
		printf("Address in ptr2 = %p\n" , ptr2);

		printf("\n");

		printf("Data in ptr1 = %d\n" , *ptr1);
		printf("Data in ptr2 = %c\n" , *ptr2);

		printf("\n");

		printf("Address of ptr1 = %p\n" , &ptr1);
		printf("Address of ptr2 = %p\n" , &ptr2);
	}
