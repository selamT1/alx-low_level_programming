#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - insert a node at specified point
 * @h: header node pointer of pointer
 * @idx: value of index where new node inserted
 * @n: integer node value
 * Return: address of new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->prev = (*h);
		new->next = NULL;
		(*h) = new;
		return (new);
	}
	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
