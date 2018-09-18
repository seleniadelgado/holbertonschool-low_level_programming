#include "holberton.h"

/**
 * _abs - display the absolute value of an integer.
 * @x: parameter for function
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	x = x * -1;
	return (x);
}
