#include "utils.h"
#include "list.h"
#include <assert.h>

void test_is_equal(void)
{
	int i = 0;
	int len = 5;

	struct list *p = NULL;
	struct list *q = NULL;

	/* 头节点不存储数据 */
	struct list *head = (struct list *)malloc(sizeof(struct list));
	head->next = NULL;

	for (i = 0; i < len; ++i)
	{
		p = head;
		while(p->next)
			p = p->next;

		q = (struct list *)malloc(sizeof(struct list));
		q->value = i;
		q->next = NULL;

		p->next = q;
	}

	int array1[] = {0,1,2,3,4};
	int len1 = sizeof(array1) / sizeof(array1[0]);

	int array2[] = {0,1,2,3,4,5,6};
	int len2 = sizeof(array2) / sizeof(array2[0]);

	int array3[] = {0,1,2,3,5};
	int len3 = sizeof(array3) / sizeof(array3[0]);

	assert(TRUE  == is_equal(head, array1, len1));
	assert(FALSE == is_equal(head, array2, len2));
	assert(FALSE == is_equal(head, array3, len3));
}

void test_cases()
{
	test_is_equal();
}

int main()
{
	/* 测试比较函数 */
	test_cases();

	printf("All Test Cases Passed!\n");
	return 0;
}