#include "holberton.h"

/**
 * Print Alphabet - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b;
	char az;

	b = 0;
	while (b <= 10)
	{
	az = 'a';
	while (az <= 'z')
		{
			_putchar (az);
		}
	az++;
	}
	_putchar('\n');
}
