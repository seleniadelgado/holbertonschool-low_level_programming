#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *storage;

	while (temp != NULL)
	{
		storage = temp->next;
		free(temp);
		temp = storage;
	}


}
