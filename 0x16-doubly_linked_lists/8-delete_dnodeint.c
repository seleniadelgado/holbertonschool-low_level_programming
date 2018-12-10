#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a
 * dlistint_t linked list.
 * @head: list variable.
 * @index: index of node that should be deleted.
 * Return: 1 if success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *deleted;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	while (temp != NULL)
	{
		if (index == 0)
		{
			deleted = temp;
			temp = deleted->next;
			if (temp != NULL)
				temp->prev = NULL;
			*head = temp;
			free(deleted);
			return (1);
		}
		if (i == index)
		{
			if (temp->next != NULL)
			{
				deleted = temp;
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
			}
			if (temp->next == NULL)
			{
				deleted = temp;
				temp->prev->next = NULL;
			}
			free(deleted);
			return (1);
		}
		else if (index < i)
			return (-1);
		temp = temp->next;
		i++;
	}
	return (1);
}
