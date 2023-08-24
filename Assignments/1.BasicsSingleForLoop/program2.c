#include <stdio.h>

void main()
{
	// WAP to print the value of below expressions

	    int x = 9;
	    int ans = ++x + x++ + ++x;
	    printf("Answer is : %d\n",ans);
	    printf("Value of 'x' is : %d\n",x);
			    
	    printf("\n");
	    int ans1 = ++x + ++x + ++x + ++x;
	    printf("Answer is : %d\n",ans1);
	    printf("Value of 'x' is : %d\n",x);
					    
	    printf("\n");
	    int ans2 = x++ + x++ + ++x + x++ + ++x;
	    printf("Answer is : %d\n",ans2);
	    printf("Value of 'x' is : %d\n",x);
							    
	    printf("\n");
	    int ans3 = x++ + x++ + x++ + x++;
	    printf("Answer is : %d\n",ans3);
	    printf("Value of 'x' is : %d\n",x);
}
