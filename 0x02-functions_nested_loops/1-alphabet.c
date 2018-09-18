#include "holberton.h"

/**
* print_alphabet - Write a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		_putchar (az);
		az++;
	}
	_putchar('\n');
}
