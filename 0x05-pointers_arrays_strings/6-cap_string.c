#include "holberton.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string..
 * @s: parameter used.
 * Return: s.
 */
char *cap_string(char *s)
{
	int g;

	g = 0;
	if (s[0] <= 122 && s[0] >= 97)
		s[0] = (s[0] - 32);
	while (s[g] != '\0')
	{
	if (s[g] <= 122 && s[g] >= 97)
		{
		if ((s[g - 1] == ',') ||
		(s[g - 1] == ';') ||
		(s[g - 1] == '.') ||
		(s[g - 1] == '!') ||
		(s[g - 1] == '?') ||
		(s[g - 1] == '"') ||
		(s[g - 1] == '(') ||
		(s[g - 1] == ')') ||
		(s[g - 1] == '{') ||
		(s[g - 1] == '}') ||
		(s[g - 1] == ' ') ||
		(s[g - 1] == '\t') ||
		(s[g - 1] == '\n'))
		s[g] = (s[g] - 32);
		}
	g++;
	}
return (s);
}
