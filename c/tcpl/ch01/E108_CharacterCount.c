#include <stdio.h>

#define ARTICLE "sample.txt"

void test_cases()
{
	int num_space = 0;
	int num_tab = 0;
	int num_newline = 0;
	
	char c;
	
	FILE* f = fopen(ARTICLE, "r");
	if(!f)
	{
		assert(-1);
		return -1;
	}
	
	while((c = fgetc(f)) != EOF)
	{
		printf("%c", c);
		
		if (c == ' ')
		{
			num_space++;
		}
		
		if (c == '\t')
		{
			num_tab++;
		}
		
		if (c == '\n')
		{
			num_newline++;
		}
	}
	
	printf("\n");
	
	printf("num_space   = %d\n", num_space);
	printf("num_tab     = %d\n", num_tab);
	printf("num_newline = %d\n", num_newline);
	
	fclose(f);
}

int main()
{
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	test_cases();
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	
	return 0;
}