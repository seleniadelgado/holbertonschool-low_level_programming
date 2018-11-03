#include "holberton.h"
/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @index: is the index, starting from 0 of the bit.
 * @n: is the number to n.
 * Return: 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
