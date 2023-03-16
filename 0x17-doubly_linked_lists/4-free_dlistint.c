#include "lists.h"

/**
 * free_dlistint- frees the list from allocated space
 * @head: head node pointer
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
