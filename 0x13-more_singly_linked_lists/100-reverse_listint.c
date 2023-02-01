#include "lists.h"
/**
 * reverse_listint - reverse the link list
 * @head: pointer to pointer of the head link
 * Return: reversed link head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	prev = (*head);
	(*head) = (*head)->next;
	curr = (*head);
	prev->next = NULL;
	while (*head != NULL)
	{
		(*head) = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = (*head);
	}
	(*head) = prev;
	return (*head);
}

