#include "lists.h"
/**
 * listint_t *add_dnodeint - add node at the beginning of the list
 * @head: head pointer of the double linked list
 * @n: data values of the node
 * Return: NULL if it fails or new node if succeded
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		new->n = n;
		tmp->prev = new;
		new->next = tmp;
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
}
