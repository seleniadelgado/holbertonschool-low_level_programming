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
	listint_t *insert = temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}
	temp = *head;
	i = 0;
	while (i < idx)
	{
		i++;
		insert = temp;
		temp = temp->next;
	}
	insert->next = newnode;
	newnode->next = temp;
	return (newnode);
}
