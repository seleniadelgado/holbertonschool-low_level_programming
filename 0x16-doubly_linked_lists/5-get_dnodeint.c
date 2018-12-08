#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 * @head: list that is passed in.
 * @index: index of the node starting from zero.
 * Return: Null if index does not exist, else return the nth node of a list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int p = 0;

	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (p == index)
			return (temp);
		p++;
		temp = temp->next;
	}
	return (NULL);
}
