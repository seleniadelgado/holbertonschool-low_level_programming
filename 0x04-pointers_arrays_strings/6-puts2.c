#include "holberton.h"

/**
 * puts2 - write a function  that prints ne char out of 2 of a string.
 * followed by a new line.
 * @str: parameter used.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
		{
		_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
