#pragma once
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

struct list* make_list(int* input, int len);
struct list* make_reverse_list(int* input, int len);

struct bi_list* make_bi_list(int* input, int len);
struct bi_list* make_reverse_bi_list(int* input, int len);