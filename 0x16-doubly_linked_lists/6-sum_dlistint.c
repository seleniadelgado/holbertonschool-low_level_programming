#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data of a linked
 * list.
 * @head: list that is passed through the function.
 * Return: 0, if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
