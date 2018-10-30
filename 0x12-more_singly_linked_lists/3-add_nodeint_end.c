#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * lintint_t function adds a new node at the end of a listint_t list.
 * @n: parameter that is added to new end.
 * Return: address of new element or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newbox;
	listint_t *current = *head;

	newbox = malloc(sizeof(listint_t));
	if (newbox == NULL)
		return (NULL);
	newbox->n = n;
	newbox->next = NULL;
	if (*head == NULL)
	{
		*head = newbox;

	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
	current->next = newbox;
	}
	return (newbox);
}
