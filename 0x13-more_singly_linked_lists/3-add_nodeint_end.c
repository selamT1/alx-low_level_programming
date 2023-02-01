#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of the list
 * @head: header node pointer
 * @n: values assigned to data memember n
 * Return: address of new node or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newPtr;
	listint_t *tmp = *head;

	newPtr = malloc(sizeof(listint_t));
	if (!newPtr)
		return (NULL);
	newPtr->n = n;
	newPtr->next = NULL;
	if (*head == NULL)
	{
		(*head) = newPtr;
		return (newPtr);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newPtr;
	return (newPtr);
}
