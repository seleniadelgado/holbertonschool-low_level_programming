#include "holberton.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: parameter for function.
 * Return: is zero.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
