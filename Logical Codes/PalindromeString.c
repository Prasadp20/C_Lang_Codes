#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(char carr[], int start, int end)
{
	while(start < end)
	{
		if(carr[start] == carr[end]){
		
			start++;
			end--;
		} else{
		
			return false;
		}
	}

	return true;
}

void main()
{
	int size = 0;
	printf("Enter the string length : ");
	scanf("%d", &size);
	char input[size];

	getchar();
    	printf("Enter a string: ");
  	gets(input);

	printf("You entered : %s\n", input);

	bool ret = isPalindrome(input, 0, size - 1);

	if(ret){
	
		printf("String is Palindrome\n");
	} else{
	
		printf("String is not Palindrome\n");
	}
}
