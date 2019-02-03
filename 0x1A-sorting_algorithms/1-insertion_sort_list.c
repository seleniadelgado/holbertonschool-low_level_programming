#include "sort.h"
/**
 * insertion_sort_list - sorts a dlist of ints in ascending order.
 * list - list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **temp = **list;
	int i = 0;

	if (list == NULL)
		return;
	while (*temp != NULL)
	{
		if (temp > temp->next)
		{
			temp->next = temp;
			temp = temp->next;
		}
	temp = temp->next
	}


}
