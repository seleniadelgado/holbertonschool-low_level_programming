#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a linked list_t
 * list.
 * @h: parameter passed through function.
 * Return: how many elements in linked list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
