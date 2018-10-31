#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: head of the function.
 * Return: sum or 0, if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
