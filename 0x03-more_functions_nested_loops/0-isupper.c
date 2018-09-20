#include "holberton.h"

/**
 * _isupper - Write a function that prints that checks for uppercase character.
 * @c: parameter for function.
 * return is always 0.
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
