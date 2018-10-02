#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s: pointer.
 * @n: parameter used for first bytes of memory area.
 * @b: parameter used.
 *Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	while (n--)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
