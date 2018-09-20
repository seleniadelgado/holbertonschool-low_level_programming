#include "holberton.h"
/**
 * times_table - Write a function that prints the 9 times table, starting with
 * 0.
 * Return: Always 0.
 */
void times_table(void)
{
	int col;
	int row;
	int z;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			z = col * row;
			if (z < 10)
			{
				if (row != 0)
				{
					_putchar (' ');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(z % 10 + '0');
				}
			}
			else if (z >= 10)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}
