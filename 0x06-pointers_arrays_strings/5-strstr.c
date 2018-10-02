#include "holberton.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: parameter used.
 * @needle: parameter used.
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
		while (needle[n] != '\0')
		{
			if (needle[n] == haystack[h])
			{
				return (&needle[n]);
			n++;
			}
			h++;
		}
	}
return ('\0');
}
