#include "holberton.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @x: parameter for function.
 *
 *Return: is y.
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
		y = y * -1;
	_putchar(y + '0');
	return (y);
}
