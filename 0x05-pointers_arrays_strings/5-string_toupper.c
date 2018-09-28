#include "holberton.h"

/**
 * *string_toupper - function that capitalizes all words of a string.
 * @s: parameter used.
 * Return: s.
 */
char *string_toupper(char *s)
{
	int g;

	g = 0;
	while (s[g] != '\0')
	{
		if (s[g] >= 97 && s[g] <= 122)
		s[g] = s[g] - 32;
		g++;
	}
	return (s);
}
