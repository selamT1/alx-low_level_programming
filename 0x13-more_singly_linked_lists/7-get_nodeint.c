#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head pointer
 * @index: the index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
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
