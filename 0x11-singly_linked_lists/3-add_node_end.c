#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _strlen(const char *s);

/**
 * *add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: parameter for head of structure that is iterated through to the end.
 * @str: string that is duplicated.
 * Return: newend.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *newend;
	char len;

	if ((head == NULL) || (str == NULL))
		return (NULL);
	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);
	len = _strlen(str);
	newend->str = strdup(str);
	newend->len = len;
	newend->next = NULL;
	end = *head;

	if (end == NULL)
	{
		*head = newend;
		return (newend);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = newend;
	return (newend);
}
/**
 * _strlen - write a function that returns the length of a string.
 * @s: string that's passed in function
 * Return: length.
 */
int _strlen(const char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
