#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t.
 * @head: begginning of list that needs to be freed.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
