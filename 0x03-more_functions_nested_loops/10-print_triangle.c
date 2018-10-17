#include "holberton.h"

/**
 * print_triangle - Make a triangle.
 * @size: parameter used for size.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int height;
	int width;

	if (size <= 0)
		_putchar('\n');
	for (width = 0; width <= size; width++)
	{
		for (height = 0; height <= size; height++)
		{
			if (height <= (size - width))
				_putchar(' ');
		else
				_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
