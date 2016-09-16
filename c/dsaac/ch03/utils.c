#include <stdio.h>
#include <assert.h>
#include "list.h"

typedef int BOOL;
#define TRUE  1
#define FALSE 0

BOOL is_equal(struct list* head, int* array, int len)
{
	int i = 0;

	while((i < len) && (head->next))
	{
		head = head->next;
		
		if (array[i] != head->value)
			return FALSE;

		i++;
	}

	if ((i < len-1) || (head->next != NULL))
		return FALSE;

	return TRUE;
}

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

	assert(TRUE  == is_equal(head, array1, len1));
	assert(FALSE == is_equal(head, array2, len2));
}
