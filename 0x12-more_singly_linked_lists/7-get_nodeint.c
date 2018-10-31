#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: head of the list.
 * @index: index of the node.
 * Return: temp.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int ct = 0;

	if (temp == NULL)
		return (NULL);
	while (temp != NULL && ct < index)
	{
		temp = temp->next;
		ct++;
	}
	return (temp);
}
