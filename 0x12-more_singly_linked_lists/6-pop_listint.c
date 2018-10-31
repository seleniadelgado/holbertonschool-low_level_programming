#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n).
 * @head: parameter for head of function.
 * Return: 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *after_temp;
	int old_value;

	if (temp == NULL)
		return (0);
	if (temp != NULL)
	{
		old_value = temp->n;
		after_temp = temp->next;
		free(temp);
		*head = after_temp;
	}
	return (old_value);
}
