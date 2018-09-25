#include "holberton.h"

/**
 * _puts - write a function that prints a string, followed by a new line.
 * to stdout.
 * @str: parameter used.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c--;
	}
		_putchar('\n');
}
