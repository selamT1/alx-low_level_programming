#include "lists.h"
/**
 * sum_listint - sum the data(n) of a list
 * @head: head pointer
 * Return: sum or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
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
