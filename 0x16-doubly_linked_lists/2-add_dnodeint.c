#include "lists.h"
/**
 * *add_dnodeint - function that adds a new node at the beginning  of a
 * dlistint_t list.
 * @head:  head of list.
 * @n: parameter to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead;
	dlistint_t *temp = temp = *head;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->prev = NULL;
	newhead->next = temp;
	if (temp != NULL)
		temp->prev = newhead;
	*head = newhead;
	return (newhead);
}
