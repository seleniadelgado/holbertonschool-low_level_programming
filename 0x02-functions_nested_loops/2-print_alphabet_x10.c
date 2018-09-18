#include "holberton.h"

/**
* print_alphabet_x10 - Write a function that prints 10 times the alphabet,
* in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int b;
	char az;

	b = 1;
	while (b <= 10)
	{
	az = 'a';
	while (az <= 'z')
	{
		_putchar (az);
		az++;
	}
	b++;
	_putchar('\n');
	}
}
