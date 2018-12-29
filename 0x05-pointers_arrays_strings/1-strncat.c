#include "holberton.h"
/**
 * _strncat - a function that concatenates two strings, adding up to n bytes
 * from src to dest.
 * @src: source string where we will copy n amount of bytes.
 * @dest: destination pointer where we will add the string to.
 * @n: up to how many bytes from src that we are going to copy.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int h = 0;
	int o = 0;

	while (dest[h] != '\0')
	{
		h++;
	}
	while ((o < n) && (src[o] != '\0'))
	{
		dest[h + o] = src[o];
		o++;
	}
	return (dest);
}
