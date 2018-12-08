#include "lists.h"
/**
 * dlistint_t - function that adds a new node at the end of a list.
 * @head: list.
 * @n: new node to be added.
 * return: 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode -> next = NULL;
	if (temp == NULL)
	{
		*head = newnode;
		newnode -> prev = NULL;
		return (newnode);
	}
	while(temp -> next != NULL)
		temp = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
