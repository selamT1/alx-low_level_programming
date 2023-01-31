#include "lists.h"
/**
 * listint_len - counts number of elements to return
 * @h: node pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
