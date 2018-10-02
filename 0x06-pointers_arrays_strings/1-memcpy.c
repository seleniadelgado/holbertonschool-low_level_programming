#include "holberton.h"

/**
 * *_memcpy - Write a function that copies memory area.
 * @src: parameter used as source.
 * @dest: parameter used as destination.
 * @n: parameter used as amount of bites.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b;
	int a;

	a = 0;
	b = 0;
	while (n--)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
