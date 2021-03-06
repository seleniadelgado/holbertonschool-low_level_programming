#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer passed into funtion.
 * @index: index starting from 0 of the bit you want to get.
 * Return: the value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
return (((n << index) - 1) & (index >> (n - 1)));
}
