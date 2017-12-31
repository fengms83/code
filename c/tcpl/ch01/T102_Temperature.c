#include <stdio.h>
#include <assert.h>

int trans(int fahr)
{
	int celsius;
	
	celsius = 5 * (fahr-32) / 9;
	printf("%d\t%d\n", fahr, celsius);
	
	return celsius;
}

void test_cases()
{
	assert(-17 == trans(0));
}
int main()
{
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	test_cases();
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	
	return 0;
}