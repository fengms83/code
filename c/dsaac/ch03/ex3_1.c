#include <stdio.h>
#include <assert.h>
#include "list.h"

extern void test_is_equal(void);

int main()
{
	/* 测试比较函数 */
	test_is_equal();

	printf("All Test Cases Passed!\n");
	return 0;
}

