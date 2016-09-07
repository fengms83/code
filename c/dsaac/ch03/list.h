#include <stdlib.h>

struct list;

/*
 * 定义单向链表
 */
typedef struct
{
	int value;
	struct list *next;
}List;

/*
 * 定义双向链表
 */
typedef struct
{
	int value;
	struct list *pre;
	struct list *next;
}BiList;
