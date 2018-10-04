#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural sqrt of a number.
 * @n: parameter used.
 * Return: Always 0.
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
/**
 * helper - function to help run through sq root.
 * @n: parameter used.
 * @y: parameter used.
 * Return: helper.
 */

int helper(int n, int y)
{
	if (n == y * y)
	{
		return (y);
	}
	if (n < y * y)
	{
		return (-1);
	}
	return (helper(n, y + 1));
}
