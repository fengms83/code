#include <assert.h>
#include "list.h"

#define TRUE  1
#define FALSE 0

int is_equal(List* head, int* array, int len)
{
	int i = 0;

	while((i < len) && (head->next))
	{
		head = head->next;

		if (array[i] != head->value)
			return FALSE;

	}

	return 0;
}

void test_is_equal(void)
{
	int i = 0;
	int len = 5;

	List *head = (List *)malloc(sizeof(List));
	head->next = NULL;

	for (i = 0; i < len; ++i)
	{
		p = head;
		while(p->next)
			p = p->next;

		q = (List *)malloc(sizeof(List));
		q->value = i;
		q->next = NULL;

		p->next = q;
	}

	assert(TRUE  == is_equal(head, {1,2,3,4,5},   5));
	assert(FALSE == is_equal(head, {1,2,3,4,5,6}, 6));
}
