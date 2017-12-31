#include <stdio.h>

int main()
{
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	/* E102_AddEscapeC.c:6: warning: unknown escape sequence: '\c' */
	printf("Hello World!\c\n");
	return 0;
}