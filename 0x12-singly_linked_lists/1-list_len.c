#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}
	return (no);
}
