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
	assert(-6  == trans(20));
	assert(4   == trans(40));
	assert(15  == trans(60));
	assert(26  == trans(80));
	assert(37  == trans(100));
	assert(48  == trans(120));
	assert(60  == trans(140));
	assert(71  == trans(160));
	assert(82  == trans(180));
	assert(93  == trans(200));
	assert(104 == trans(220));
	assert(115 == trans(240));
	assert(126 == trans(260));
	assert(137 == trans(280));
	assert(148 == trans(300));
}

int main()
{
	printf("Testing >>> %-30s ...\n", __FILE__);
	
	test_cases();
	
	printf("Tested >>> %-30s Succeed!\n", __FILE__);
	
	return 0;
}