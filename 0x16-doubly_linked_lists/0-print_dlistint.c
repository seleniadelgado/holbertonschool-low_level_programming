#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t.
 * @h: variable passed through the function to be printed.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
	printf("%i\n", temp->n);
	temp = temp->next;
	i++;
	}
	return (i);
}
