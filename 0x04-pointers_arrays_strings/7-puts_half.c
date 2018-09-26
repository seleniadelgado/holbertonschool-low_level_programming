#include "holberton.h"

/**
 * puts_half - write a function that prints half of a string.
 * @str: parameter used.
 *
 *
 */
void puts_half(char *str)
{
	int nc;
	int in;

	nc = 0;
	while (str[nc] != '\0')
	{
		nc++;
		if (nc % 2 == 0)
		{
			in = nc / 2;
		}
		else
		{
			(in = (nc / 2) + 1);
		}
	}
	while (str[in] != '\0')
	{
		_putchar (str[in]);
		in++;
	}
	_putchar('\n');
}
