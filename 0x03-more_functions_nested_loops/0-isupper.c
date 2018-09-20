#include "holberton.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: parameter for function.
 * Return: is zero.
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
