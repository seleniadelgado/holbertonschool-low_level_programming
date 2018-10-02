#include "holberton.h"

/**
 * _strspn - a function that gets the strength of a prefix substring.
 * @s: initial segment.
 * @accept: parameter used.
 *
 * Return: Count.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
		{
			break;
		}
			a++;
	}
	return (a);
}
