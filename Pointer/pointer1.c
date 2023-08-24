
	#include <stdio.h>
	void main()
	{
		int x = 60;
		printf("Data in x = %d\n", x);
		printf("Address of x = %p\n",&x);

		int *ptr = &x;
	
		printf("Data in pinter ptr is = %d\n",*ptr);
		printf("Address of pointer = %p\n",ptr);
		printf("Address of pointer = %p\n",&ptr);
	}
