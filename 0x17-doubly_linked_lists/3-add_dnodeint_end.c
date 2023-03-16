#include "lists.h"
/**
 * dlistint_t *add_dnodeint_end- add node at the end of the list
 * @head: head pointer of the double linked list
 * @n: data values of the node
 * Return: NULL if it fails or new node if succeded
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	tmp = (*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->n = n;
		new->prev = tmp;
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
}
