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
	unsigned int count = 0;
	int i, flag = 1;

	while (*s != '\0' && flag == 1)
	{
		flag = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				flag = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}
