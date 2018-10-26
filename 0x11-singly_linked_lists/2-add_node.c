#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of a list_t
 * list.
 * @head: parameter for head that is replaced with newhead.
 * @str: string that is duplicated.
 * Return: returns the address of the element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	int len;
	char *number;

	if ((head == NULL) && (str == NULL))
		return (NULL);
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);
	len = strlen(str);
	number = malloc(sizeof(char) * len + 1);
	if (number == NULL)
		return (NULL);
	number = strdup(str);
	newhead->str = number;
	newhead->next = *head;
	newhead->len = len;
	*head = newhead;
	return (newhead);
}
