#include "holberton.h"

/**
 * Print Alphabet - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		_putchar (az);
		az = az + 10;
	}
	_putchar('\n');
}
