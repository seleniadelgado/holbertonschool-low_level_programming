#include "holberton.h"

/**
 * print_most_numbers - Write a function that prints the numbers from 0-9,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
		}
		c++;
	}
_putchar('\n');
}
