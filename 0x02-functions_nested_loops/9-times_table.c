 #include "holberton.h"
/**
 * times_table - Write a function that prints the 9 times table, starting with
 * 0.
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z >= 10)
				_putchar(z / 10 + '0');
			else /** z < 10 do this */
				_putchar(' ');
			if (y != 0) /** if y does not equal 0 do this */
			{
				_putchar (' ');
			}
			_putchar(z % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar ('\n');
	}
}
