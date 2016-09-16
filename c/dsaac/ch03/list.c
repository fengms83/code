#include "list.h"

struct list* make_list(int *input, int len)
{
	int i = 0;

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
		q->value = input[i];
		q->next = NULL;

		p->next = q;
	}

	return head;
}

struct list* make_reverse_list(int* input, int len)
{
	return NULL;
}

struct bi_list* make_bi_list(int *input, int len)
{
	return NULL;
}

struct bi_list* make_reverse_bi_list(int *input, int len)
{
	return NULL;
}