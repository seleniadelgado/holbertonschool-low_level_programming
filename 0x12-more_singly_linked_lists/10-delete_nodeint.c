#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a listint_t linked list.
 * @head: first node of list.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *holder;
	unsigned int i = 0;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < index)
		return (-1);
	i = 0;
	temp = *head;
	while (i  < index - 1)
	{
		i++;
		temp = temp->next;
	}
	holder = temp->next;
	temp->next = holder->next;
	free(holder);
return (1);
}
