#include "holberton.h"

/**
 * puts_half - write a function that prints half of a string.
 * @str: parameter used.
 *
 *
 */
void puts_half(char *str)
{
	int idx;
	int len;
	int odd;

	for (len = 0; str[len] != '\0'; len++)
		;
	if ((len % 2) == 0)
	{
		for (idx = len / 2; str[idx] != '\0'; idx++)
		_putchar(str[idx]);
	}
	else
	{
		for (odd = (len - 1) / 2; str[odd] != '\0'; odd++)
			_putchar(str[odd]);
	}
	_putchar ('\n');
}
