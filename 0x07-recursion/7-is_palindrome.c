#include "holberton.h"

/**
 * is_palindrome - that returns 1 if a string is a palindrome and 0 not.
 * @s: parameter used.
 * Return: 0.
 */
int is_palindrome(char *s)
{
	int y;

	y = (_strlen_recursion(s) - 1);
	return (palindrome_helper(s, 0, y));
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: parameter used.
 * Return: s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (*s);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome_helper - function that finds a palindrome.
 * @s: parameter used.
 * @x: parameter used.
 * @y: parameter used.
 * Return: 0
 */
int palindrome_helper(char *s, int x, int y)
{
	if (x >= y)
		return (1);
	if (s[x] == s[y])
		return (palindrome_helper(s, x + 1, y - 1));
	else
		return (0);
}
