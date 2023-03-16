#include "lists.h"
/**
 * dlistint_len- count the number of nodes
 * @h: header pointer of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
