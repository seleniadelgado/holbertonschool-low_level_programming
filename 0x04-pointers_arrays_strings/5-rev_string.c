#include "holberton.h"

/**
 * rev_string - write a function that reverses a string.
 * @s: parameter used.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l;
	int temp;
	int x;
	int y;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	x = 0;
	y = l - 1;
	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}
