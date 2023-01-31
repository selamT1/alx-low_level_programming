#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of the list
 * @head:node head pointer
 * @n: data element
 * Return: address of new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newPtr;

	newPtr = malloc(sizeof(listint_t));
	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;
	newPtr->next = *head;
	*head = newPtr;
	return (newPtr);
}
