#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position.
 * @h: list passed through.
 * @idx: index of the list where the new node should be added.
 * @n: node to be inserted.
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *storage, *temp = *h;
	unsigned int i = 0;

	if (temp == NULL && idx > 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		if (temp != NULL)
		{
			newnode->next = temp;
			newnode->prev = NULL;
			*h = newnode;
			return (newnode); }
		else if (temp == NULL)
		{
			newnode->next = NULL;
			newnode->prev = NULL;
			*h = newnode;
			return (newnode); }
	}
	while (temp->next != NULL)
	{
		if (i == idx)
		{
			storage = temp->prev;
			newnode->prev = storage;
			storage->next = newnode;
			newnode->next = temp;
			return (newnode); }
		temp = temp->next;
		i++;
	}
	if (idx == i + 1)
	{
		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = NULL;
		return (newnode); }
	if (idx > (i + 1))
		return (NULL);
	return (NULL); }
