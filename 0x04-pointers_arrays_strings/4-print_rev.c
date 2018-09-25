#include "holberton.h"

/**
 * print_rev - print a string in reverse, followed by a new line.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l = 0;
	int c;

	while (*s != '\0')
        {
                l++;
                s++;
        }

	c = 0;
	while (s[c] >= '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
