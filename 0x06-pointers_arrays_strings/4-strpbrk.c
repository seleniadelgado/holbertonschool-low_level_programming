#include "holberton.h"
#define NULL ((char *)0)

/**
 * *_strpbrk - function that searches a string for any of a set of bytes..
 * @s: parameter used.
 * @accept: parameter used.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
return ('\0');
}
