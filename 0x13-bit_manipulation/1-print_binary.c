#include "holberton.h"
/**
 * print_binary-prints the binary representation of a number.
 * @n: binary number that will be passed into the function.
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);
	putchar ((n & 1) + '0');
}
