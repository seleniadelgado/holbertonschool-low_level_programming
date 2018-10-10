#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that returns a ptr to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: parameter used.
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int a;
	int b;
	int c;
	char *str2;

	c = 0;
	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	str2 = malloc(sizeof(char) * a + 1);
	if (str2 == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
	{
		str2[c] = str[b];
		c++;
	}
	str2[c] = '\0';
	return (str2);
}
