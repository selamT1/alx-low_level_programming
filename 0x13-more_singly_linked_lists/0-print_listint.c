#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: node pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
