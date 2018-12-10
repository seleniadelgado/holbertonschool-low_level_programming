#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position.
 * @h: list passed through.
 * @n: node to be inserted.
 * @idx: index where node is added.
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
	newnode->prev = NULL;
	if (idx == 0)
	{
		newnode = addnodeint(h, n);
		return (newnode); }
	while (temp != NULL)
	{
		if (i == idx)
		{
			storage = temp->prev;
			temp->prev = newnode;
			storage->next = newnode;
			newnode->prev = storage;
			newnode->next = temp;
			return (newnode); }
		temp = temp->next;
		i++; }
	i = 0;
	temp = *h;
	while (temp != NULL)
	{
		if (idx == i + 1)
		{
			temp->next = newnode;
			newnode->prev = temp;
			newnode->next = NULL;
			return (newnode); }
		temp = temp->next;
		i++; }
	return (NULL);
}
/**
 * addnodeint - function that adds a new node at the beginning  of a
 * dlistint_t list.
 * @h:  head of list.
 * @n: parameter to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *addnodeint(dlistint_t **h, unsigned int n)
{
	dlistint_t *newhead;
	dlistint_t *temp = *h;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->prev = NULL;
	newhead->next = temp;
	if (temp != NULL)
		temp->prev = newhead;
	*h = newhead;
	return (newhead);
}
