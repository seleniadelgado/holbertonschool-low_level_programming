#include "sort.h"
/**
 * insertion_sort_list - sorts a dlist of ints in ascending order.
 * @list:  list to be sorted in algo.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i = *list, *y, *swap, *rn, *swap2, *temp;
	int a;

	if ((list == NULL || (*list) == NULL || (*list)->next == NULL))
		return;
	while (i->next != NULL)
	{
		y = i->next;
		swap = i;
		a = 1;
		if (y->n < i->n)
		{
			rn = i;
			swap2 = rn->next;
			while (rn != NULL)
			{
				if (swap2->n < rn->n)
				{
					temp = swap2;
					rn->next = temp->next;
					swap2->prev = rn->prev;
					if (swap->next != NULL)
						swap2->next->prev = rn;
					swap2->next = rn;
					if (rn->prev != NULL)
						rn->prev->next = temp;
					else if (rn->prev == NULL)
						*list = temp;
					rn->prev = temp;
					print_list(*list);
					if (a == 1)
					{
						i = rn;
						a = 5; }
				}
				else
					break;
				rn = swap2->prev; } }
		if (a == 1)
			i = i->next; } }
