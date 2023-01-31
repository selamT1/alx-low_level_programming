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
	tmp = *head;
	*head = (*head)->next;
	n1 = (*head)->n;
	free(tmp->next);
	free(tmp);
	return(n1);
}
