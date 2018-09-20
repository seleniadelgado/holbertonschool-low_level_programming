#include "holberton.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: parameter for function.
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
