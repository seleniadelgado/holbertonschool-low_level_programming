#include "holberton.h"

/**
 * *_strncpy - Write a function that copies a string.
 * @n: parameter used.
 * @dest: parameter used.
 * @src: parameter used.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int st;

	st = 0;
	while ((st < n) && (src[st] != '\0'))
	{
		dest[st] = src[st];
		st++;
	}
	while (st < n)
	{
		dest[st] = '\0';
		st++;
	}
	return (dest);
}
