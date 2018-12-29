#include "holberton.h"

/**
 * _strcmp - write a function that compares two strings.
 * @s1: parameter used.
 * @s2: parameter used.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && s2[b] != '\0')
	{
		{
			if (s1[a] != s2[b])
				return (s1[a] - s2[b]);
		}
		a++;
		b++;
	}
	return (0);
}
