#include "holberton.h"

/**
 * *leet - write a function that encodes a string into 1337.
 * @orig: parameter used.
 * Return: Always 0.
 */
char *leet(char *orig)
{
	char *change = "AaEeOoTtLl";
	char *changed = "4433007711";
	int letter;
	int number;
	int k;

	k = 0;
	while (orig[k] != '\0')
	{
		letter = 0;
		number = 0;
		while (change[letter] != '\0')
		{
			if (change[letter] == orig[k])
			{
				orig[k] = changed[number];
			}
			letter++;
			number++;
		}
		k++;
	}
	return (orig);
}
