#include "utils.h"

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
