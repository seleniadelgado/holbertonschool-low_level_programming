#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars.
 * Return: converted number, or 0 if there is one or more chars in the string
 * that is not 0 and 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0;
	int exp;
	int num;

	if (b == NULL)
		return (0);
	for (num = 0; b[num + 1]; num++)
	{
		if (b[num] != '0' && b[num] != '1')
		return (0);
	}
	for (exp = 1; num >= 0; num--, exp *= 2)
		dec += ((b[num] - '0') * (exp));
	return (dec);
}
