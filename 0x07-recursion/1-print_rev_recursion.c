#include "holberton.h"

/**
 * _print_rev_recursion - function to print a reversed string.
 * @s: parameter used.
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
