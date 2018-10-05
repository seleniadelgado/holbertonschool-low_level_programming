#include "holberton.h"

/**
 * is_prime_number - function returns 1 if the input is prime.
 * @n: parameter used.
 * Return: helper function.
 *
 */
int is_prime_number(int n)
{
	return (helper_prime(n, 2));
}
/**
 * helper_prime - function that checks for prime number.
 * @x: parameter used.
 * @y: parameter used.
 * Return: helper function.
 */
int helper_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	else
		return (helper_prime(x, y + 1));
}
