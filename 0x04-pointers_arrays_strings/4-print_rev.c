#include "holberton.h"

/**
 * print_rev - print a string in reverse, followed by a new line.
 * @s: parameter used.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	while  (l > 0)
	{
		s--;
		l--;
		_putchar(*s);
	}
	_putchar('\n');
}
