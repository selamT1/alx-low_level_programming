#include "lists.h"
/**
 * sum_dlistint- the sum of all the data (n) of the double linked list
 * @head: header pointer
 * Return:0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
