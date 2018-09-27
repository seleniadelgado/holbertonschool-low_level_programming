#include "holberton.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @src: parameter used.
 * @dest: parameter used.
 * @n: parameter used.
 * Return: dest .
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int o;

	h = 0;
	o = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	while ((o < n) && (src[o] != '\0'))
	{
		dest[h + o] = src[o];
		o++;
	}
	dest[h + o] = '\0';
	return (dest);
}
