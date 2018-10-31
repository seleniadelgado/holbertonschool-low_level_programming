#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: head of list.
 * @idx: index of the list where the new node should be added.
 * @n: elements of new node.
 * Return: address of new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < idx)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	i = 0;
	temp = *head;
	while (i < (idx - 1))
	{
		i++;
		temp = temp->next;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
