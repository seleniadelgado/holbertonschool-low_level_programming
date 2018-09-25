#include "holberton.h"

/**
 * _strlen - write a function that returns the length of a string.
 * @s: string that's passed in function.
 * Return: length.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
