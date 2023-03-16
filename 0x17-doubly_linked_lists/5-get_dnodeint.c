#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index- searches the value over the list
 * @head: head pointer
 * @index: index of the node
 * Return: NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (i < index)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
