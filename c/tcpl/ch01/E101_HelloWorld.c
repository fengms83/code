#include <stdio.h>

int main()
{
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	printf("Hello World!\n");
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	return 0;
}