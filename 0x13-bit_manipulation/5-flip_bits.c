#include "holberton.h"
/**
 * flip_bits - functio that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number passed through the function.
 * @m: number passed through the function.
 * Return: the integer result of two unsigned integers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	int i;

	c = (m ^ n);
	i = 0;
	while (c)
	{
		if (c & 1)
			i++;
		c = c >> 1;
	}
	return (i);
}
