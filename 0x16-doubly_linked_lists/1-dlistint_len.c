#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: parameter passed throught the function.
 * Return: return the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
