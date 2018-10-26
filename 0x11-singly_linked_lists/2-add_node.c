#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int _strlen(const char *s);
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
	int len = 0;
	char *s;

	if ((head == NULL) && (str == NULL))
		return (NULL);
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);
	len = _strlen(str);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		free(newhead);
		return (NULL);
	}
	s = strdup(str);
	newhead->str = s;
	newhead->next = *head;
	newhead->len = len;
	*head = newhead;
	return (newhead);
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
