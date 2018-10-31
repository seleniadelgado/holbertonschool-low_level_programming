#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @n: parameter used for filling in newhead.
 * @head: head that was removed.
 * Return: new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	if (head == NULL)
		return (NULL);
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
