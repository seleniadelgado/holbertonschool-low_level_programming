#include "holberton.h"
/**
 * print_binary-prints the binary representation of a number.
 * @n: binary number that will be passed into the function.
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	int j = n;

	while (j)
	{
		if ((n & j) == 0)
			_putchar ('0');
		else
			_putchar('1');
	j = j >> 1;
	}
}
