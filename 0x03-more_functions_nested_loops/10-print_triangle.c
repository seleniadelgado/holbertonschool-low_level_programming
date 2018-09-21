#include "holberton.h"

/**
 * print_triangle - Make a triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int tri;
	int angle;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (tri = 1; tri <= size; tri++)
		{
		for (angle = size - tri; angle <= size; angle--)
			_putchar(' ');
		}
		for (angle = 1; angle <= size; angle++)
			_putchar('#');

	}
}
