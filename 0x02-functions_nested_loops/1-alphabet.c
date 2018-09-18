#include "holberton.h"

/**
 * Print Alphabet - check the code for Holberton School students.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char az;

	az= 'a';
	while (az <= 'z')
	{
		_putchar (az);
		az++;
	}
	_putchar('\n');
}
