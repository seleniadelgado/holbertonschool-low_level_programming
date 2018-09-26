#include "holberton.h"

/**
 * *_strcpy - Write a function that copies the string pointed to by src
 *
 * @dest: parameter used.
 * @src: parameter used.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
