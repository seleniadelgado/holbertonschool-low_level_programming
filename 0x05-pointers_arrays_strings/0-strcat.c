#include "holberton.h"

/**
 * *_strcat - this is a function that concatenates two strings.
 * @dest: parameter used.
 * @src: parameter used.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int h;
	int w;

	h = 0;
	w = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[h] = src[w];
		h++;
		w++;
	}
	return (dest);
}
