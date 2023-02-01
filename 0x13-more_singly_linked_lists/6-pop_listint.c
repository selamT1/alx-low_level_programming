#include "lists.h"
/**
 * pop_listint - delete head node of the list
 * @head: head node pointer of pointer
 * Return: 0 if list is empty,else return new head node's data(n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n1;

	if ((*head)->n == '\0')
		return (0);
	n1 = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	(*head) = tmp;
	return (n1);
}
