#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: parameter that needs freeing.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		*head = tmp;
	}
	head = NULL;
}
