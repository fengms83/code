#include <stdlib.h>

struct list;

/*
 * 定义单向链表
 */
struct list
{
	int value;
	struct list *next;
};

/*
 * 定义双向链表
 */
struct bi_list
{
	int value;
	struct list *pre;
	struct list *next;
};
