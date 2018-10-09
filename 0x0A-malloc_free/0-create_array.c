#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  *create_array - function that creates an array of chars.
 * @size: the size of memory to print.
 * @c: parameter used.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size <= 0)
		return (NULL);
	else if (size > 0)
	{
		s = malloc(size * sizeof(char));
		if (s == NULL)
			return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
