#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised to y.
 * @x: parameter used.
 * @y: parameter used.
 * Return: _pow_recurssion.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
