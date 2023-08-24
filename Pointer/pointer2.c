

	#include <stdio.h>
	void main()
	{
		int x = 10;
		int *ptr1 = &x; 
		int *ptr2 = x;

		printf("ptr1 = %p\n", ptr1);
		printf("ptr2 = %p\n", ptr2);

		printf("Data in ptr1 = %d\n", *ptr1);
		printf("Data in ptr2 = %d\n", *ptr2);


	}
