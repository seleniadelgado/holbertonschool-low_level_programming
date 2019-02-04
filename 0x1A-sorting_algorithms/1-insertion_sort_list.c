#include "sort.h"
/**
 * insertion_sort_list - sorts a dlist of ints in ascending order.
 * list - list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i = *list;
	listint_t *y;
	listint_t *swap;
	listint_t *rn;
	listint_t *swap2;
	listint_t *temp;

	if (list == NULL || (*list)->next == NULL)
		return;
	while (i->next != NULL)
	{
		y = i->next;
		if (y->n < i->n)
		{
			if (i->prev == NULL)
			{
				swap = y;
				y = i->prev;
				i->prev = swap;
				y->prev = NULL;
				i->next = y->next;
				y->next = i;
				*list = y;
				print_list(*list);
				i = i->next;
				continue;
			}
			rn = i;
			swap2 = rn->next;
			while (rn != NULL)
			{
				if (swap2->n > rn->n)
				{
					temp = swap2;
					swap2->prev = rn->prev;
					swap2->next = rn;
					rn->next = swap->next;
					rn->prev = temp;
					print_list(*list);
				}
			rn = swap->prev;
			}
		}
	i = i->next;
	}
}
