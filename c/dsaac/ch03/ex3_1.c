#include <stdio.h>
#include <assert.h>
#include "list.h"
#include "utils.h"

int main()
{
	int input[] = {23,86,90,23,2,87};
	int len = sizeof(input) / sizeof(input[0]);

	struct list* head = make_list(input, len);

	/* 测试比较函数 */
	assert(TRUE == is_equal(head, input, len));

	show_list(head);

	printf("All Test Cases Passed!\n");
	return 0;
}

