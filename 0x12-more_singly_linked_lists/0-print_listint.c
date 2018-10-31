#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * Return: the number of nodes.
 * @h: parameter used.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
