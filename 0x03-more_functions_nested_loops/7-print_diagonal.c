#include "holberton.h"

/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 *
 * @n: parameter for function.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
