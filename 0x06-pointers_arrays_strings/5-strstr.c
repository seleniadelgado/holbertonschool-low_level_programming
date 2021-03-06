#include "holberton.h"
#define NULL ((char *)0)

/**
 * *_strstr - function that locates a substring.
 * @haystack: parameter used.
 * @needle: parameter used.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int h;
	int n;

	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		while (needle[n] == haystack[h + n])
			n++;
		if (needle[n] == '\0')
			return (haystack + h);
	h++;
	}
return (NULL);
}
